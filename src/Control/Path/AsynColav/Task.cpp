//***************************************************************************
// Copyright 2007-2024 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Faculdade de Engenharia da             *
// Universidade do Porto. For licensing terms, conditions, and further      *
// information contact lsts@fe.up.pt.                                       *
//                                                                          *
// Modified European Union Public Licence - EUPL v.1.1 Usage                *
// Alternatively, this file may be used under the terms of the Modified     *
// EUPL, Version 1.1 only (the "Licence"), appearing in the file LICENCE.md *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// https://github.com/LSTS/dune/blob/master/LICENCE.md and                  *
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: Hoang Anh Tran                                                   *
//***************************************************************************

// ISO C++ 98 headers.
#include <chrono>
#include <cmath>
#include <iomanip>
// #include <vector>
#include <Eigen/Dense>
#include <gen/gen.h>
#include <gen/gen2.h>
// DUNE headers.
#include <DUNE/DUNE.hpp>
// #include <casadi/casadi.hpp>
using DUNE_NAMESPACES;

// using namespace DUNE::Coordinates;
// using namespace DUNE::Math;
// using namespace DUNE::IMC;
// using namespace DUNE::Time;
#define COS15 0.965925826289068
#define casadi_int long long int
#define BETA 5e-4
using namespace Eigen;
namespace Control
{
  namespace Path
  {
    namespace AsynColav2ships
    {
      struct Arguments
      {
        double corridor;
        double entry_angle;
        double lookahead;
        double int_gain;
        double int_init;
        bool out_vec;
        bool out_los;
        int mmsi;
        double D_CLOSE;
        double y_ca0;
      };

      struct Task: public DUNE::Control::PathController
      {
        //! ILOS m_integrator
        double m_integrator;
        //! Time of last path controller step
        Delta m_last_step;
        //! Loiter controller gain.
        double m_gain;
        //! Test variable
        double test;
        //! Outgoing desired heading message.
        IMC::DesiredHeading m_heading;
        //! Task arguments.
        Arguments m_args;
        //! Desired speed message.
        double m_des_speed = 1e4;
        //! Desired speed units.
        uint8_t m_des_speed_units;
        //! Combine negotiation msg.
        struct Combine_Msg
        {
          double lat;
          double lon;
          int mmsi;
          MatrixXd path;
          int IsStaboard;
          double time;
          double wp_start_lat;
          double wp_start_lon;
          double wp_end_lat;
          double wp_end_lon;
          // Constructor to initialize with "null" values
          Combine_Msg():
            lat(0.0),
            lon(0.0),
            mmsi(0),
            path(MatrixXd()),
            IsStaboard(0),
            time(0.0),
            wp_start_lat(0.0),
            wp_start_lon(0.0),
            wp_end_lat(0.0),
            wp_end_lon(0.0)
          { }
        };
        std::vector<Combine_Msg> cmb_msg;
        //! List of id of ship within range
        int id_list[100];
        //! number of recognized ships
        int num_ships = 0;
        //! Next waypoint position and bearing angle in inertial frame ownship_wp=[x y chi]
        double ownship_wp[3];
        //! Next waypoint position in WGS84 ownship_wp_wgs84 = [lat lon]
        double ownship_wp_wgs84[2];
        //! Waypoint flag to check if a new waypoint is assigned
        double ref_wp = 1000;
        //! Count variable for COLAV
        int cnt = 0;
        // GPS data asv_state = [lat lon sog]
        double asv_state[3];
        //! Time from last COLAV run
        double admm_time_now = 0;
        //! Prediction horizon
        static const int N = 20;
        //! Number of ship in scenario
        static const int M_ship = 2;
        //!
        Eigen::Matrix<double, N + 1, 3> asv_pr_state_p;
        //! Time period of COLAV
        double dT = 5.0;
        //! COLAV flag
        bool colav = false;
        //! aggregate state of all ships
        Eigen::MatrixXd admm_state;
        //! Lagrangian variable
        Eigen::MatrixXd lambda_i = Eigen::MatrixXd::Zero(N + 1, 3 * M_ship);
        //! Cross-track bias
        double y_ca = 1e8;
        //! Speed adjustment
        double u_ca = 1.0;
        //! Desired speed message
        IMC::DesiredSpeed des_speed;
        //! Priority status of own ship compare to others
        Eigen::MatrixXd alpha_mpc;
        //! STANDON weight
        static constexpr double STANDON = 0.12;
        //! GIVEWAY weight
        static constexpr double GIVEWAY = 1e6;
        // Output of ADMM
        Eigen::MatrixXd x_pre_p;
        // ADMM iteration count
        int ADMM_cnt = 0;
        // ADMM done flag
        bool ADMM_done = false;
        // Maximum ADMM iteration
        const int max_iter = 2;
        Task(const std::string& name, Tasks::Context& ctx):
          DUNE::Control::PathController(name, ctx)
        {
          param("MMSI", m_args.mmsi).description("Vessel MMSI");
          param("Corridor -- Width", m_args.corridor)
            .minimumValue("1.0")
            .maximumValue("50.0")
            .defaultValue("5.0")
            .units(Units::Meter)
            .description("Width of corridor for attack entry angle");
          param("Cross-track -- Bias", m_args.y_ca0)
            .units(Units::Meter)
            .minimumValue("-60.0")
            .maximumValue("60.0")
            .defaultValue("0.0")
            .description("Cross-track bias value.");
          param("COLAV Distance", m_args.D_CLOSE)
            .units(Units::Meter)
            .minimumValue("10.0")
            .maximumValue("2000.0")
            .defaultValue("150.0")
            .description("Distance where COLAV are applied [m].");
          param("Corridor -- Entry Angle", m_args.entry_angle)
            .minimumValue("2")
            .maximumValue("45")
            .defaultValue("15")
            .units(Units::Degree)
            .description("Attack angle when lateral track error equals corridor width");

          param("Corridor -- Out Vector Field", m_args.out_vec)
            .defaultValue("false")
            .description("Out of corridor guidance law: vector field");

          param("Corridor -- Out LOS", m_args.out_los)
            .defaultValue("false")
            .description("Out of corridor guidance law: LOS");

          param("ILOS Lookahead Distance", m_args.lookahead)
            .minimumValue("1.0")
            .maximumValue("50.0")
            .defaultValue("10.0")
            .units(Units::Meter)
            .description("Integral Line-of-Sight look ahead distance");

          param("ILOS Integrator Gain", m_args.int_gain)
            .minimumValue("0")
            .maximumValue("4")
            .defaultValue("0")
            .description("Integral Line-of-Sight integral gain");

          param("ILOS Integrator Initial Value", m_args.int_init)
            .minimumValue("0")
            .maximumValue("10")
            .defaultValue("0")
            .description("M_Integrator inital value");

          // Everything is ok so set task entity state at normal with 'Active' message.
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);

          bind<IMC::NegotiationData>(this);
          bind<IMC::GpsFix>(this);
          bind<IMC::DesiredSpeed>(this);
        }

        void
        onUpdateParameters(void)
        {
          // Initialize ILOS m_integrator
          m_integrator = m_args.int_init;
          PathController::onUpdateParameters();

          if (paramChanged(m_args.entry_angle))
            m_args.entry_angle = Angles::radians(m_args.entry_angle);

          m_gain = std::tan(m_args.entry_angle) / m_args.corridor;
        }

        void
        onEntityReservation(void)
        {
          PathController::onEntityReservation();
        }

        void
        onPathActivation(void)
        {
          // Activate heading cotroller.
          enableControlLoops(IMC::CL_YAW);
        }

        void
        reset(void)
        {
          m_integrator = 0.0;
        }
        void
        consume(const IMC::GpsFix* msg)
        {
          asv_state[0] = msg->lat;
          asv_state[1] = msg->lon;
          asv_state[2] = msg->sog;
        }

        void
        consume(const IMC::DesiredSpeed* msg)
        {
          // if (!isActive())
          //   return;
          // Initiate m_des_speed
          if (m_des_speed > 10)
          {
            m_des_speed = msg->value;
            m_des_speed_units = msg->speed_units;
          }

          // std::cout << "DESIRED SPEED SET TO: " << msg->value << std::endl;
        }

        void
        consume(const IMC::NegotiationData* msg)
        {
          // spew("MMSI=%d, Time= %.2f", msg->mmsi, msg->time_stamp);
          if (!idExists(id_list, num_ships, msg->mmsi))
          {
            if (cmb_msg.size() != M_ship)
              cmb_msg.resize(M_ship);
            id_list[num_ships] = msg->mmsi;
            Combine_Msg new_msg;
            // cmb_msg.push_back(new_msg);
            cmb_msg[num_ships].mmsi = msg->mmsi;
            num_ships += 1;
          }
          for (int i = 0; i < M_ship; i++)
          {

            if (cmb_msg[i].mmsi == msg->mmsi)
            {
              cmb_msg[i].lat = msg->lat;
              cmb_msg[i].lon = msg->lon;
              cmb_msg[i].time = msg->time_stamp;
              cmb_msg[i].IsStaboard = msg->is_starboard;
              cmb_msg[i].wp_start_lat = msg->wp_start_lat;
              cmb_msg[i].wp_start_lon = msg->wp_start_lon;
              cmb_msg[i].wp_end_lat = msg->wp_end_lat;
              cmb_msg[i].wp_end_lon = msg->wp_end_lon;
              // spew("start_lat: %f, start_lon:
              // %f",cmb_msg[i].wp_start_lat,cmb_msg[i].wp_start_lon);
              IMC::MessageList<IMC::AdmmPath>::const_iterator itr = msg->pr_pos.begin();
              int n_package = msg->pr_pos.size();
              int n_sample = (*itr)->path_list.size();
              cmb_msg[i].path.resize(n_sample, 3 * n_package);
              // spew("n_sample=%d,n_package=%d", n_sample, n_package);
              int j = 0;
              for (; itr != msg->pr_pos.end(); itr++)
              {
                int k = 0;
                IMC::MessageList<IMC::AdmmPos>::const_iterator itr2 = (*itr)->path_list.begin();
                for (; itr2 != (*itr)->path_list.end(); itr2++)
                {
                  n2p((*itr2)->lat, (*itr2)->lon, (*itr2)->course, &cmb_msg[i].path(k, 3 * j),
                      &cmb_msg[i].path(k, 3 * j + 1), &cmb_msg[i].path(k, 3 * j + 2));

                  k += 1;
                }
                j += 1;
              }
            }
            // spew("done consume");
          }
          double lat, lon, course;
          p2n(cmb_msg[0].path(0, 0), cmb_msg[0].path(0, 1), cmb_msg[0].path(0, 2), &lat, &lon,
              &course);
          // spew("lat: %.9f, lon: %.9f, course: %f", lat, lon, course);
        }
        inline bool
        idExists(const int* arr, size_t size, int id)
        {
          for (size_t i = 0; i < size; ++i)
          {
            if (arr[i] == id)
            {
              return true;
            }
          }
          return false;
        }
        // Update the coordinate frame
        inline void
        update_wp(const TrackingState& ts)
        {
          spew("update local frame");
          WGS84::displacement(ts.start_lat, ts.start_lon, 0, ts.end_lat, ts.end_lon, 0,
                              &ownship_wp[0], &ownship_wp[1]);
          ownship_wp[2] = std::atan2(ownship_wp[1], ownship_wp[0]);
          ownship_wp_wgs84[0] = ts.start_lat;
          ownship_wp_wgs84[1] = ts.start_lon;
          spew("x=%f,y=%f", ownship_wp[0], ownship_wp[1]);
        }
        // Transform the lat lon position to path coordinate frame
        inline void
        n2p(const double lat, const double lon, const double course, double* x_p, double* y_p,
            double* psi_p)
        {
          double x_n, y_n;
          WGS84::displacement(ownship_wp_wgs84[0], ownship_wp_wgs84[1], 0, lat, lon, 0, &x_n, &y_n);
          // spew("%f %f", x_n, y_n);
          double r11, r12, r21, r22;
          r11 = cos(ownship_wp[2]);
          r12 = sin(ownship_wp[2]);
          r21 = -sin(ownship_wp[2]);
          r22 = cos(ownship_wp[2]);
          *x_p = x_n * r11 + y_n * r12;
          *y_p = x_n * r21 + y_n * r22;
          double temp = Angles::normalizeRadian(course - ownship_wp[2]);
          // Ensure the angle is between 0 and 2pi
          //  if(temp<0)
          //   temp = temp +2*M_PI;
          *psi_p = temp;
        }

        // Transform position in path coordinate frame to lat lon
        inline void
        p2n(const double x_p, const double y_p, const double psi_p, double* lat, double* lon,
            double* course)
        {
          double x_n, y_n;
          double r11, r12, r21, r22;
          r11 = cos(ownship_wp[2]);
          r12 = -sin(ownship_wp[2]);
          r21 = sin(ownship_wp[2]);
          r22 = cos(ownship_wp[2]);
          x_n = x_p * r11 + y_p * r12;
          y_n = x_p * r21 + y_p * r22;
          *course = Angles::normalizeRadian(psi_p + ownship_wp[2]);
          *lat = ownship_wp_wgs84[0];
          *lon = ownship_wp_wgs84[1];
          WGS84::displace(x_n, y_n, lat, lon);
        }
        inline int
        IsStarboard(const double lat, const double lon, const double course)
        {
          double x_p, y_p, psi_p;
          n2p(lat, lon, course, &x_p, &y_p, &psi_p);
          if (y_p > 0)
            return 1;
          else
            return 0;
        }
        Vector3d
        mpc_model2(Vector3d x, double u, double U_dca, double Tsp)
        {
          int N_predict = 25;
          double Ts = Tsp / N_predict;
          VectorXd p_x = VectorXd::Zero(N_predict + 1);
          VectorXd p_y = VectorXd::Zero(N_predict + 1);
          VectorXd chi_model = VectorXd::Zero(N_predict + 1);
          p_x[0] = x[0];
          p_y[0] = x[1];
          chi_model[0] = x[2];
          for (int i = 1; i <= N_predict; ++i)
          {
            double chi_d = (M_PI / 6) * tanh((u - p_y[i - 1]) / 15);
            chi_model[i] = 0.9858 * chi_model[i - 1] + 0.0142 * chi_d;
            p_y[i] = p_y[i - 1] + U_dca * sin(chi_model[i - 1]) * Ts;
            p_x[i] = p_x[i - 1] + U_dca * cos(chi_model[i - 1]) * Ts;
          }

          Vector3d x_predict;
          x_predict << p_x[N_predict], p_y[N_predict], chi_model[N_predict];
          return x_predict;
        }
        inline void
        inland_predict(const double cur_state[4])
        {
          double u_d = cur_state[3];
          // double r1, r2;
          // r1 = cos(cur_state[2]);
          // r2 = sin(cur_state[2]);
          asv_pr_state_p(0, 0) = cur_state[0];
          asv_pr_state_p(0, 1) = cur_state[1];
          asv_pr_state_p(0, 2) = cur_state[2];

          for (int i = 0; i < N; i++)
          {
            // spew("fine");
            Vector3d in = asv_pr_state_p.block<1, 3>(i, 0).transpose();
            asv_pr_state_p.block<1, 3>(i + 1, 0) = mpc_model2(in, y_ca, u_d, 5.0).transpose();
            // spew("asv_pr_state_p(%i, :)=[%g;%g;%g]",i,asv_pr_state_p(i, 0),asv_pr_state_p(i,
            // 0),asv_pr_state_p(i, 0)); asv_pr_state_p(i + 1, 0) = asv_pr_state_p(i, 0) + dT * u_d
            // * cos(asv_pr_state_p(i, 2)); asv_pr_state_p(i + 1, 1) = asv_pr_state_p(i, 1) + dT *
            // u_d * sin(asv_pr_state_p(i, 2)); asv_pr_state_p(i + 1, 2) =//asv_pr_state_p(i, 2);
            //   0.7284 * asv_pr_state_p(i, 2)
            //   + 0.2716 * (M_PI / 6) * tanh((y_ca - asv_pr_state_p(i, 1)) / 15.0);
          }
        }

        bool
        check_colav()
        {
          if (num_ships < 2)
            return false;

          for (int i = 0; i < M_ship; i++)
          {
            if ((cmb_msg[i].mmsi != m_args.mmsi) && (cmb_msg[i].mmsi != 0))
            {
              double bearing, range;
              WGS84::getNEBearingAndRange(asv_state[0], asv_state[1], cmb_msg[i].lat,
                                          cmb_msg[i].lon, &bearing, &range);
              if (range < m_args.D_CLOSE)
              {
                return true;
              }
            }
          }
          return false;
        }
        // The comm protocol for ADMM
        void
        protocol(const Eigen::MatrixXd& ship_state, const Eigen::VectorXi& IsStarboard,
                 const Eigen::MatrixXd& wp_list)
        {
          alpha_mpc.resize(2, M_ship);
          alpha_mpc = Eigen::MatrixXd::Zero(2, M_ship);
          alpha_mpc(0, 0) = 1;
          Eigen::VectorXd p_point = Eigen::VectorXd::Zero(M_ship);
          // Eigen::MatrixXd w_list = Eigen::MatrixXd::Zero( M_ship,2);
          // OS properties

          Eigen::Vector2d v_os;
          v_os(0) = (ship_state(1, 0) - ship_state(0, 0)) / dT;
          v_os(1) = (ship_state(1, 1) - ship_state(0, 1)) / dT;
          // Current position of the OS
          Eigen::Vector3d p_os;
          p_os(0) = ship_state(0, 0);
          p_os(1) = ship_state(0, 1);
          p_os(2) = ship_state(0, 2);
          // Define wp_list in inertial coordinate
          Eigen::MatrixXd wp_list_n = Eigen::MatrixXd::Zero(wp_list.rows(), wp_list.cols());
          for (int i = 0; i < wp_list.cols(); i++)
          {
            WGS84::displacement(wp_list(0, 0), wp_list(1, 0), 0, wp_list(0, i), wp_list(1, i), 0,
                                &wp_list_n(0, i), &wp_list_n(1, i));
            WGS84::displacement(wp_list(0, 0), wp_list(1, 0), 0, wp_list(2, i), wp_list(3, i), 0,
                                &wp_list_n(2, i), &wp_list_n(3, i));
          }
          // Vector of the OS WP
          Eigen::Vector2d os_wp_vec;
          os_wp_vec(0) = wp_list_n(2, 0);
          os_wp_vec(1) = wp_list_n(3, 0);
          // Check if OS has the right of way
          if (ship_state(0, 1) > 0)
            p_point(0) = 1;

          Eigen::Vector3d p_ts;
          Eigen::Vector2d ts_wp_vec;
          for (int i = 1; i < M_ship; i++)
          {
            ts_wp_vec(0) = wp_list_n(2, i) - wp_list_n(0, i);
            ts_wp_vec(1) = wp_list_n(3, i) - wp_list_n(1, i);
            p_ts(0) = ship_state(0, 3 * i);
            p_ts(1) = ship_state(0, 3 * i + 1);
            p_ts(2) = ship_state(0, 3 * i + 2);
            double dotProduct = os_wp_vec.dot(ts_wp_vec);
            double cosTheta = dotProduct / (os_wp_vec.norm() * ts_wp_vec.norm());
            // double Theta = std::acos(cosTheta);
            // If the TS is on the starboard side then p_point =1
            if (IsStarboard(i) == 1)
              p_point(i) = 1;
            //
            if ((std::abs(p_ts(1, 0)) < 10) && (cosTheta < -COS15))
              alpha_mpc(1, i) = 1;  // headon = 1, overtake = 2, cross =3
            else if ((std::abs(p_ts(1, 0)) < 10) && (cosTheta > COS15))
              alpha_mpc(1, i) = 2;  // headon = 1, overtake = 2, cross =3
            else
            {
              alpha_mpc(1, i) = 3;  // headon = 1, overtake = 2, cross =3
              if ((p_ts(1) < p_os(1)) && (p_point(i) < 1))
              // if ((p_ts(1) < p_os(1)))
                p_point(i) -= 0.5;
            }
            if (p_point(i) < p_point(0))
              alpha_mpc(0, i) = STANDON;
            else
              alpha_mpc(0, i) = GIVEWAY;
          };
        }
        inline double
        computeK(double l1, double l2, double ts_y, double factor)
        {
          return l1 / (std::pow(ts_y + m_args.int_gain * (m_integrator + factor), 2) + l2);
        }

        // Asynchronous parallel ADMM for inland autonomous ships
        void
        Inland_Colav(const IMC::EstimatedState& state, const TrackingState& ts)
        {
          auto start = std::chrono::high_resolution_clock::now();
          colav = check_colav();
          spew("ok here");
          spew("number of ship = %d", num_ships);
          double asv_state_p[4] = { 0, 0, 0, 0 };
          asv_state_p[3] = asv_state[2];
          // spew("lat: %f, lon: %f", asv_state[0], asv_state[1]);
          n2p(asv_state[0], asv_state[1], state.psi, &asv_state_p[0], &asv_state_p[1],
              &asv_state_p[2]);
          inland_predict(asv_state_p);
          // Predict position of own ship, assume that side slip =0.
          // When colav algorithm is not yet trigger, then the admm_state of ship X will be directly
          // copied from their publish data.
          if (ADMM_cnt == 0)
          {

            // spew("x= %f,y=%f",asv_pr_state_p[0][0],asv_pr_state_p[0][1]);
            if (num_ships > 1)  // if we received a msg from a neighboring ship
            {
              // admm_state.resize(N + 1, 3 * M_ship);
              admm_state = Eigen::MatrixXd::Zero(N + 1, 3 * M_ship);
              int os_p = m_args.mmsi - 1;
              admm_state.block<N + 1, 3>(0, 3 * os_p) = asv_pr_state_p;
              // for (int i = 0; i < N + 1; i++)
              // {
              //   admm_state(i, 3 * os_p) = asv_pr_state_p(i, 0);
              //   admm_state(i, 3 * os_p + 1) = asv_pr_state_p(i, 1);
              //   admm_state(i, 3 * os_p + 2) = asv_pr_state_p(i, 2);
              // }
              for (int i = 0; i < M_ship; i++)
              {

                if ((cmb_msg[i].mmsi != m_args.mmsi) && (cmb_msg[i].mmsi != 0))
                {
                  int ts_p = cmb_msg[i].mmsi - 1;
                  // The first time msg only containt pos of that NS
                  if (cmb_msg[i].path.cols() == 3)
                  {
                    admm_state.block<N + 1, 3>(0, 3 * ts_p) = cmb_msg[i].path;
                  }
                  else
                  {
                    admm_state.block<N + 1, 3>(0, 3 * ts_p) =
                      cmb_msg[i].path.block<N + 1, 3>(0, 3 * ts_p);
                  }
                  // If the data is 1 sample behind, we
                  // shift all the data 1 step forward
                  if (Clock::getSinceEpoch() - cmb_msg[i].time >= dT
                      && Clock::getSinceEpoch() - cmb_msg[i].time < 2 * dT)
                  {
                    admm_state.block<N, 3>(0, 3 * ts_p) = admm_state.block<N, 3>(1, 3 * ts_p);
                    admm_state(N, 3 * ts_p) =
                      2 * admm_state(N, 3 * ts_p) - admm_state(N - 1, 3 * ts_p);
                    admm_state(N, 3 * ts_p + 1) =
                      2 * admm_state(N, 3 * ts_p + 1) - admm_state(N - 1, 3 * ts_p) + 1;
                  }
                }
              }
            }
            else
            {
              admm_state.resize(N + 1, 3);
              admm_state = asv_pr_state_p;
            }
            for (int j = 0; j < N + 1; j++)
            {
              for (int k = 0; k < M_ship; k++)
              {
                // spew("temp(%i,%i)=%f",j,3*k+2,temp(j,3*k+2));
                admm_state(j, 3 * k + 2) = fmod(admm_state(j, 3 * k + 2), 2.0 * M_PI);
                if (admm_state(j, 3 * k + 2) < -0.9 * M_PI)
                  admm_state(j, 3 * k + 2) = admm_state(j, 3 * k + 2) + 2.0 * M_PI;
              }
            }
            // clear the buffer msg and ready for next cycle msg
            // if (colav == false)
            // {
            //   num_ships = 0;
            //   cmb_msg.clear();
            //   std::fill(id_list, id_list + 100, 0);
            // }
          }
          else
          {
            admm_state = MatrixXd::Zero(N + 1, 3 * num_ships);

            for (int i = 0; i < num_ships; i++)
            {
              double time_diff = Clock::getSinceEpoch() - cmb_msg[i].time;
              // spew("i=%i, ship = %i, time diff = %f, time recieved=
              // %f",i,cmb_msg[i].mmsi,time_diff,cmb_msg[i].time);
              MatrixXd temp = cmb_msg[i].path;
              for (int j = 0; j < N + 1; j++)
              {
                for (int k = 0; k < num_ships; k++)
                {
                  // spew("temp(%i,%i)=%f",j,3*k+2,temp(j,3*k+2));
                  temp(j, 3 * k + 2) = fmod(temp(j, 3 * k + 2), 2.0 * M_PI);
                  if (temp(j, 3 * k + 2) < -0.85 * M_PI)
                    temp(j, 3 * k + 2) = temp(j, 3 * k + 2) + 2.0 * M_PI;
                }
              }
              //     spew("***************************Temp
              //     state*************************************************");
              // for (int j = 0; j < N + 1; j++)
              // {
              //   spew("ship %i admm_state(%i,:) = [%.3f; %.3f; %.3f; %.3f;%.3f;%.3f]",
              //   cmb_msg[i].mmsi,j, temp(j, 0),
              //        temp(j, 1), temp(j, 2), temp(j, 3), temp(j, 4),
              //        temp(j, 5));
              // }

              // spew("****************************************************************************");
              if (time_diff < dT)
              {
                admm_state = admm_state + (1.0 / num_ships) * temp;
                // spew("admm_state(1,:) = [%g; %g; %g;
                // %g;%g;%g]",admm_state(0,0),admm_state(0,1),admm_state(0,2),admm_state(0,3),admm_state(0,4),admm_state(0,5));
              }
              // else if (time_diff >= dT
              //          && time_diff< 2 * dT)
              else
              {
                // MatrixXd temp = cmb_msg[i].path;
                // spew("cols = %ld",cmb_msg[i].path.cols());
                // spew("before shift temp(1,:) = [%g; %g; %g;
                // %g;%g;%g]",temp(1,0),temp(1,1),temp(1,2),temp(1,3),temp(1,4),temp(1,5));
                // spew("ship %i after shift temp(0,:) = [%g; %g; %g;
                // %g;%g;%g]",i,temp(0,0),temp(0,1),temp(0,2),temp(0,3),temp(0,4),temp(0,5));
                // spew("ship %i after shift temp(1,:) = [%g; %g; %g;
                // %g;%g;%g]",i,temp(1,0),temp(1,1),temp(1,2),temp(1,3),temp(1,4),temp(1,5));
                temp.block(0, 0, N, 3 * num_ships) = temp.block(1, 0, N, 3 * num_ships);
                temp.block(N, 0, 1, 3 * num_ships) = 2.0 * temp.block(N - 1, 0, 1, 3 * num_ships)
                                                     - temp.block(N - 2, 0, 1, 3 * num_ships);
                // spew("ship %i after shift temp(0,:) = [%g; %g; %g;
                // %g;%g;%g]",i,temp(0,0),temp(0,1),temp(0,2),temp(0,3),temp(0,4),temp(0,5));
                // spew("ship %i after shift temp(1,:) = [%g; %g; %g;
                // %g;%g;%g]",i,temp(1,0),temp(1,1),temp(1,2),temp(1,3),temp(1,4),temp(1,5));
                admm_state = admm_state + (1.0 / num_ships) * temp;
              }
            }
          }
          //******************************************** */
          spew("****************************************************************************");
          for (int i = 0; i < N + 1; i++)
          {
            spew("admm_state(%i,:) = [%.2f; %.2f; %.2f; %.2f;%.2f;%.2f; %.2f;%.2f;%.2f]", i,
                 admm_state(i, 0), admm_state(i, 1), admm_state(i, 2), admm_state(i, 3),
                 admm_state(i, 4), admm_state(i, 5), admm_state(i, 6), admm_state(i, 7),
                 admm_state(i, 8));
          }

          spew("****************************************************************************");
          if (colav == true)
          {
            spew("COLAV activate");
            spew("ADMM count = %i", ADMM_cnt);
            spew("admm_state(1,:) = [%g; %g; %g; %g;%g;%g]", admm_state(0, 0), admm_state(0, 1),
                 admm_state(0, 2), admm_state(0, 3), admm_state(0, 4), admm_state(0, 5));
            spew("number of ship %i", num_ships);
            Eigen::VectorXi Starboard_list = Eigen::VectorXi::Zero(num_ships);
            Eigen::MatrixXd WP_list = Eigen::MatrixXd::Zero(4, num_ships);
            for (int i = 0; i < num_ships; i++)
            {
              int pos = cmb_msg[i].mmsi - 1;
              Starboard_list(pos) = cmb_msg[i].IsStaboard;
              WP_list(0, pos) = cmb_msg[i].wp_start_lat;
              WP_list(1, pos) = cmb_msg[i].wp_start_lon;
              WP_list(2, pos) = cmb_msg[i].wp_end_lat;
              WP_list(3, pos) = cmb_msg[i].wp_end_lon;
            }
            // Swap position of own ship and ship 1:
            if (m_args.mmsi != 1)
            {
              int os_p = m_args.mmsi - 1;
              //
              int tmp_sb = Starboard_list(os_p);
              Starboard_list(os_p) = Starboard_list(0);
              Starboard_list(0) = tmp_sb;
              //
              Eigen::MatrixXd temp_wp = WP_list.block(0, 0, 4, 1);
              WP_list.block(0, 0, 4, 1) = WP_list.block(0, os_p, 4, 1);
              WP_list.block(0, os_p, 4, 1) = temp_wp;
              //
              Eigen::MatrixXd temp = admm_state.block(0, 0, N + 1, 3);
              admm_state.block(0, 0, N + 1, 3) = admm_state.block(0, 3 * os_p, N + 1, 3);
              admm_state.block(0, 3 * os_p, N + 1, 3) = temp;
              //
              Eigen::MatrixXd temp2 = x_pre_p.block(0, 0, N + 1, 3);
              x_pre_p.block(0, 0, N + 1, 3) = x_pre_p.block(0, 3 * os_p, N + 1, 3);
              x_pre_p.block(0, 3 * os_p, N + 1, 3) = temp2;
            }

            // Evaluate traffic situation
            protocol(admm_state, Starboard_list, WP_list);
            // Init casadi variables
            casadi_int sz_arg = 13, sz_res = 3, sz_iw = 0, sz_w = 0;
            if (M_ship == 2)
              MPC2_work(&sz_arg, &sz_res, &sz_iw, &sz_w);
            if (M_ship == 3)
              MPC3_work(&sz_arg, &sz_res, &sz_iw, &sz_w);
            const double** arg = new const double*[sz_arg];
            double** res = new double*[sz_res];
            casadi_int* iw = new casadi_int[sz_iw];
            double* w = new double[sz_w];

            /* Function input and output */
            Eigen::MatrixXd p = admm_state.block(0, 0, 1, 3 * M_ship);
            double u0 = y_ca;
            Eigen::MatrixXd alpha_admm = alpha_mpc.block(0, 0, 1, M_ship);

            // alpha_admm << 1,1e6;
            double* chi_ref = new double[M_ship];
            for (int i = 0; i < M_ship; i++)
            {
              double wp1_p[3], wp2_p[3];
              n2p(WP_list(0, i), WP_list(1, i), 0, &wp1_p[0], &wp1_p[1], &wp1_p[3]);
              n2p(WP_list(2, i), WP_list(3, i), 0, &wp2_p[0], &wp2_p[1], &wp2_p[3]);
              chi_ref[i] = std::atan2(wp2_p[1] - wp1_p[1], wp2_p[0] - wp1_p[0]);
              if (chi_ref[i] < -0.85 * M_PI)
                chi_ref[i] += 2 * M_PI;
            }
            Eigen::MatrixXi K_ca = Eigen::MatrixXi::Zero(M_ship, 2);
            Eigen::MatrixXd d_safe = Eigen::MatrixXd::Zero(M_ship, 2);
            for (int i = 1; i < M_ship; i++)
            {
              switch ((int)alpha_mpc(1, i))  // headon = 1, overtake = 2, cross =3
              {
                case 1:
                  K_ca(i, 0) = 25;
                  K_ca(i, 1) = 5;
                  d_safe(i, 0) = 5.0;
                  d_safe(i, 1) = 1.0;
                  spew("head on");
                  break;
                case 2:
                  K_ca(i, 0) = 0;
                  K_ca(i, 1) = 5;
                  d_safe(i, 0) = 5.0;
                  d_safe(i, 1) = 0.5;
                  spew("overtaking");
                  break;
                case 3:
                  K_ca(i, 0) = 30;
                  K_ca(i, 1) = 4;
                  d_safe(i, 0) = 5;
                  d_safe(i, 1) = 1.2;
                  spew("cross");
                  break;
              }
            }
            // K_ca << 0, 0, 25, 5;
            // // K_ca << 0, 0, 25, 0;
            // Eigen::Matrix<double, 2, 2> d_safe;
            // d_safe << 0, 0, 5.0, 0.5;
            // d_safe << 0, 0, 5.0, 1.0;
            double ky = 1e-2;
            double ky2= 2e-1;
            double ku = 1e-2;
            double min_U=0.4;
            double beta = BETA;
            // Update dual variable
            if (ADMM_cnt == 0)
              x_pre_p = admm_state;
            lambda_i = lambda_i - 1e-4 * BETA * (x_pre_p - admm_state);
            /**************************************************** */
            // if (m_args.mmsi == 2)
            // {
            // Eigen::Matrix<double, 1, 6> p;
            // p << 0, -2, 0, 150, -2, M_PI;
            // p(0,5)=M_PI;
            // admm_state.resize(N + 1, 6);
            // admm_state = Eigen::MatrixXd::Zero(N + 1, 6);
            // admm_state.block(0, 0, 1, 6) = p;
            // for (int i = 1; i < N + 1; i++)
            // {
            //   admm_state(i, 0) = admm_state(i - 1, 0) + 5 * std::cos(admm_state(i - 1, 2));
            //   admm_state(i, 1) = admm_state(i - 1, 1) + 5 * std::sin(admm_state(i - 1, 2));
            //   admm_state(i, 2) = admm_state(i - 1, 2);
            //   admm_state(i, 3) = admm_state(i - 1, 3) + 5 * std::cos(admm_state(i - 1, 5));
            //   admm_state(i, 4) = admm_state(i - 1, 4) + 5 * std::sin(admm_state(i - 1, 5));
            //   admm_state(i, 5) = admm_state(i - 1, 5);
            // }
            // double u0 = y_ca;
            // Eigen::Matrix<double, 2, 1> alpha_admm;
            // alpha_admm << 1, 1e6;
            // chi_ref = { 0, M_PI };
            // Eigen::Matrix<int, 2, 2> K_ca;
            // K_ca << 0, 0, 25, 5;
            // Eigen::Matrix<double, 2, 2> d_safe;
            // d_safe << 0, 0, 5, 0.8;
            // }
            spew("p = [%g; %g; %g; %g;%g;%g]", p(0, 0), p(0, 1), p(0, 2), p(0, 3), p(0, 4),
                 p(0, 5));
            spew("admm_state(1,:) = [%g; %g; %g; %g;%g;%g]", admm_state(1, 0), admm_state(1, 1),
                 admm_state(1, 2), admm_state(1, 3), admm_state(1, 4), admm_state(1, 5));

            // spew("lat: %f, lon: %f", asv_state[0], asv_state[1]);
            spew("state =[%g; %g; %g; %g]", asv_state_p[0], asv_state_p[1], asv_state_p[2],
                 asv_state_p[3]);
            /********Mapping the matrix to vector form*************/
            double* p_casadi = new double[p.size()];
            double* lambda_i_casadi = new double[lambda_i.size()];
            double* admm_state_casadi = new double[admm_state.size()];
            double* alpha_admm_casadi = new double[M_ship];
            double* K_ca_casadi = new double[K_ca.size()];
            double* d_safe_casadi = new double[d_safe.size()];
            // Map the matrix to a 1D array of doubles
            Eigen::Map<Eigen::Array<double, Eigen::Dynamic, 1>>(p_casadi, p.size()) =
              p.cast<double>().reshaped();
            Eigen::Map<Eigen::Array<double, Eigen::Dynamic, 1>>(lambda_i_casadi, lambda_i.size()) =
              lambda_i.cast<double>().reshaped();
            Eigen::Map<Eigen::Array<double, Eigen::Dynamic, 1>>(
              admm_state_casadi, admm_state.size()) = admm_state.cast<double>().reshaped();
            Eigen::Map<Eigen::Array<double, Eigen::Dynamic, 1>>(
              alpha_admm_casadi, alpha_admm.size()) = alpha_admm.cast<double>().reshaped();
            Eigen::Map<Eigen::Array<double, Eigen::Dynamic, 1>>(K_ca_casadi, K_ca.size()) =
              K_ca.cast<double>().reshaped();
            Eigen::Map<Eigen::Array<double, Eigen::Dynamic, 1>>(d_safe_casadi, d_safe.size()) =
              d_safe.cast<double>().reshaped();

            double res0[2];
            double* res1 = new double[admm_state.size()];
            double res2[20];
            spew("alpha=[%g; %g,%g]", alpha_admm_casadi[0], alpha_admm_casadi[1],alpha_admm_casadi[2]);
            spew("chi_ref=[%g; %g; %g]", chi_ref[0], chi_ref[1],chi_ref[2]);
            // Allocate memory (thread-safe)
            if (M_ship == 2)
              MPC2_incref();
            if (M_ship == 3)
              MPC3_incref();
            /* Evaluate the function */
            arg[0] = p_casadi;
            arg[1] = &u0;
            arg[2] = admm_state_casadi;
            arg[3] = lambda_i_casadi;
            arg[4] = alpha_admm_casadi;
            arg[5] = chi_ref;
            arg[6] = K_ca_casadi;
            arg[7] = d_safe_casadi;
            arg[8] = &ky;
            arg[9] = &ky2;
            arg[10] = &ku;
            arg[11] =&min_U;
            arg[12] =&beta;
            ////////
            res[0] = res0;
            res[1] = res1;
            res[2] = res2;
            if (M_ship == 2)
            {
              int mem = MPC2_checkout();
              MPC2(arg, res, iw, w, mem);
            }
            if (M_ship == 3)
            {
              int mem = MPC3_checkout();
              MPC3(arg, res, iw, w, mem);
            }
            x_pre_p = Eigen::Map<Eigen::Matrix<double, N + 1, 3 * M_ship>>(res1);
            // Update state and dual variable
            for (int i = 1; i < N + 1; i++)
            {
              for (int j = 0; j < M_ship; j++)
              {
                lambda_i.block(i, 3 * j, 1, 3) =
                  lambda_i.block(i, 3 * j, 1, 3)
                  + BETA * (x_pre_p.block(i, 3 * j, 1, 3) - admm_state.block(i, 3 * j, 1, 3));
                x_pre_p.block(i, 3 * j, 1, 3) =
                  x_pre_p.block(i, 3 * j, 1, 3) + (1 / BETA) * lambda_i.block(i, 3 * j, 1, 3);
              }
            }
            spew("u(0,0)=%g; u(1,0)=%g", res0[0], res0[1]);
            spew("xxxxxxxxxxxxxxxxxxxxxxxxSolution "
                 "STATExxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx");
            for (int i = 0; i < N; i++)
            {
              spew("u_ns(%i,:) = [%.3f]", i, res2[i]);
            }
            spew("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx");
            y_ca = res0[0];
            u_ca = res0[1];
            if(M_ship==2)
              MPC2_decref();
            if(M_ship==3)
              MPC3_decref();
            // spew("%f", test);
            // Free the memory when done
            delete[] p_casadi;
            delete[] admm_state_casadi;
            delete[] chi_ref;
            delete[] alpha_admm_casadi;
            delete[] K_ca_casadi;
            delete[] d_safe_casadi;
            delete[] res1;
            //
            delete[] arg;
            delete[] res;
            delete[] iw;
            delete[] w;
            /*********************************************************************** */
            /*********************************************************************** */
            // casadi_int sz_arg = 8, sz_res = 2, sz_iw = 0, sz_w = 0;
            // MPC2_work(&sz_arg, &sz_res, &sz_iw, &sz_w);
            // const double** arg = new const double*[sz_arg];
            // double** res = new double*[sz_res];
            // casadi_int* iw = new casadi_int[sz_iw];
            // double* w = new double[sz_w];

            //  /* Function input and output */
            // Eigen::Matrix<double,6,1> p;
            // p<< 0, 0, 0, 150, 0, M_PI;
            // admm_state.resize(N+1,6);
            // admm_state = Eigen::MatrixXd::Zero(N+1,6);
            // admm_state.block(0,0,1,6)=p;
            // for(int i=1;i<N+1;i++)
            // {
            //   admm_state(i,0)=admm_state(i-1,0) +5*std::cos(admm_state(i-1,2));
            //   admm_state(i,1)=admm_state(i-1,1) +5*std::sin(admm_state(i-1,2));
            //   admm_state(i,2)=admm_state(i-1,2);
            //   admm_state(i,3)=admm_state(i-1,3) +5*std::cos(admm_state(i-1,5));
            //   admm_state(i,4)=admm_state(i-1,4) +5*std::sin(admm_state(i-1,5));
            //   admm_state(i,5)=admm_state(i-1,5);
            // }
            // double u0 = y_ca;
            // Eigen::Matrix<double,2,1> alpha_admm;
            // alpha_admm << 1,1e6;
            // double chi_ref[2] = {0,M_PI};
            // Eigen::Matrix<int, 2, 2> K_ca;
            // K_ca << 0, 0,
            //         25, 5;
            // Eigen::Matrix<double, 2, 2> d_safe;
            // d_safe << 0, 0,
            //           5, 0.8;
            // /********Mapping the matrix to vector form*************/
            // double* p_casadi = new double[p.size()];
            // double* lambda_i_casadi = new double[lambda_i.size()];
            // double* admm_state_casadi = new double[admm_state.size()];
            // double* alpha_admm_casadi = new double[M_ship];
            // double* K_ca_casadi = new double[K_ca.size()];
            // double* d_safe_casadi = new double[d_safe.size()];
            // // Map the matrix to a 1D array of doubles
            // Eigen::Map<Eigen::Array<double, Eigen::Dynamic, 1>>(p_casadi, p.size()) =
            //   p.cast<double>().reshaped();
            // Eigen::Map<Eigen::Array<double, Eigen::Dynamic, 1>>(lambda_i_casadi, lambda_i.size())
            // =
            //   lambda_i.cast<double>().reshaped();
            // Eigen::Map<Eigen::Array<double, Eigen::Dynamic, 1>>(
            //   admm_state_casadi, admm_state.size()) = admm_state.cast<double>().reshaped();
            // Eigen::Map<Eigen::Array<double, Eigen::Dynamic, 1>>(
            //   alpha_admm_casadi, alpha_admm.size()) = alpha_admm.cast<double>().reshaped();
            // Eigen::Map<Eigen::Array<double, Eigen::Dynamic, 1>>(K_ca_casadi, K_ca.size()) =
            //   K_ca.cast<double>().reshaped();
            // Eigen::Map<Eigen::Array<double, Eigen::Dynamic, 1>>(d_safe_casadi, d_safe.size()) =
            //   d_safe.cast<double>().reshaped();

            // double res0[2];
            // double* res1 = new double[admm_state.size()];

            // // double res1;
            // // Allocate memory (thread-safe)
            // MPC2_incref();
            // /* Evaluate the function */
            // arg[0] = p_casadi;
            // arg[1] = &u0;
            // arg[2] = admm_state_casadi;
            // arg[3] = lambda_i_casadi;
            // arg[4] = alpha_admm_casadi;
            // arg[5] = chi_ref;
            // arg[6] = K_ca_casadi;
            // arg[7] = d_safe_casadi;
            // res[0] = res0;
            // res[1] = res1;

            // // res[1] = &res1;
            // int mem = MPC2_checkout();
            // auto start = std::chrono::high_resolution_clock::now();
            // MPC2(arg, res, iw, w, mem);
            // auto end = std::chrono::high_resolution_clock::now();
            // std::chrono::duration<double> elapsed = end - start;
            // spew("Total time in ipopt= %f",elapsed.count());
            // // Eigen::Map<Eigen::MatrixXd>(res1, admm_state.rows(), admm_state.cols()) =
            // admm_state; x_pre_p = Eigen::Map<Eigen::Matrix<double, N+1, 3*M_ship>>(res1);
            // spew("u(0,0)=%g; u(1,0)=%g; x(20,0)=%g; x(20,1)=%g", res0[0], res0[1],x_pre_p(20, 0),
            // x_pre_p(20, 1)); MPC2_decref();
            // // spew("Fine here");
            // // MPC2_free_mem(mem);
            // // spew("%f", test);
            // // Free the memory when done
            // delete[] p_casadi;
            // delete[] admm_state_casadi;
            // delete[] alpha_admm_casadi;
            // delete[] K_ca_casadi;
            // delete[] d_safe_casadi;
            // //
            // delete[] arg;
            // delete[] res;
            // delete[] iw;
            // delete[] w;
            /************************************************************************** */
            /************************************************************************** */
            if (ADMM_cnt >= max_iter)
            {
              ADMM_cnt = 0;
              ADMM_done = true;
              lambda_i = Eigen::MatrixXd::Zero(N + 1, 3 * M_ship);
              inland_predict(asv_state_p);
              x_pre_p.block<N + 1, 3>(0, 0) = asv_pr_state_p;
            }
            else
              ADMM_cnt += 1;
            // Swap back position of own ship and ship 1:
            if (m_args.mmsi != 1)
            {
              int os_p = m_args.mmsi - 1;
              Eigen::MatrixXd temp = admm_state.block(0, 0, N + 1, 3);
              admm_state.block(0, 0, N + 1, 3) = admm_state.block(0, 3 * os_p, N + 1, 3);
              admm_state.block(0, 3 * os_p, N + 1, 3) = temp;
              //
              Eigen::MatrixXd temp2 = x_pre_p.block(0, 0, N + 1, 3);
              x_pre_p.block(0, 0, N + 1, 3) = x_pre_p.block(0, 3 * os_p, N + 1, 3);
              x_pre_p.block(0, 3 * os_p, N + 1, 3) = temp2;
            }
          }
          if (colav == false)
          {
            u_ca = 1.0;
          }
          //******************************************** */
          if (m_des_speed < 10)
          {
            des_speed.value = m_des_speed * u_ca;
            spew("desired speed = %g", des_speed.value);
            dispatch(des_speed);
          }
          // Send data to others
          IMC::NegotiationData ngt_data;
          ngt_data.mmsi = m_args.mmsi;
          ngt_data.time_stamp = ((uint32_t)Clock::getSinceEpoch());
          spew("time send = %f", ngt_data.time_stamp);
          ngt_data.lat = asv_state[0];
          ngt_data.lon = asv_state[1];
          ngt_data.wp_start_lat = ts.start_lat;
          ngt_data.wp_start_lon = ts.start_lon;
          ngt_data.wp_end_lat = ts.end_lat;
          ngt_data.wp_end_lon = ts.end_lon;
          ngt_data.is_starboard = IsStarboard(asv_state[0], asv_state[1], state.psi);
          IMC::MessageList<IMC::AdmmPath>* path_list = &ngt_data.pr_pos;
          if (colav == false)
            x_pre_p = admm_state;

          int n_ship = (int)(x_pre_p.cols() / 3);
          // spew("n_ships=%ld",x_pre_p.cols());
          // spew("number of package=%d",num_ships);
          for (int i = 0; i < n_ship; i++)
          {
            IMC::AdmmPath* path = new IMC::AdmmPath;

            path->mmsi = i + 1;
            IMC::MessageList<IMC::AdmmPos>* pos_list = &(path->path_list);
            for (int j = 0; j < N + 1; j++)
            {
              IMC::AdmmPos* pos = new IMC::AdmmPos;
              // pos->lat = asv_state[0];
              // pos->lon = asv_state[1];
              // pos->course = state.psi;
              double lat, lon, course;
              p2n(x_pre_p(j, 3 * i), x_pre_p(j, 3 * i + 1), x_pre_p(j, 3 * i + 2), &lat, &lon,
                  &course);
              pos->lat = lat;
              pos->lon = lon;
              pos->course = course;
              pos_list->push_back(*pos);
              // if(j==0&&i==0)
              // {
              //   spew("lat= %f,lon =%f",lat,lon);
              // }
            }
            path_list->push_back(*path);
          }
          dispatch(ngt_data);

          spew("*******************************SENDED "
               "STATE*********************************************");
          for (int i = 0; i < N + 1; i++)
          {
            spew("x_pre_p(%i,:) = [%.3f; %.3f; %.3f; %.3f;%.3f;%.3f]", i, x_pre_p(i, 0),
                 x_pre_p(i, 1), x_pre_p(i, 2), x_pre_p(i, 3), x_pre_p(i, 4), x_pre_p(i, 5));
          }
          spew("****************************************************************************");
          auto end = std::chrono::high_resolution_clock::now();
          std::chrono::duration<double> elapsed = end - start;
          spew("Total time in ipopt= %f", elapsed.count());
        }

        //! Execute a path control step
        //! From base class PathController
        void
        step(const IMC::EstimatedState& state, const TrackingState& ts)
        {
          // Note:
          // cross-track position (lateral error) = ts.track_pos.y
          // and along-track position = ts.track_pos.x
          double ref;
          double k1;
          double k2;
          double k3;
          double k4;
          double loc_1 = m_args.lookahead * ts.track_pos.y;
          double loc_2 = std::pow(m_args.lookahead, 2);
          double timestep = m_last_step.getDelta();
          double kcorr = ts.track_pos.y / m_args.corridor;
          double akcorr = std::fabs(kcorr);
          if (ref_wp != ts.start_lat)
          {
            ref_wp = ts.start_lat;
            admm_time_now = Clock::get();
            update_wp(ts);
          }
          if (y_ca > 100)
          {
            y_ca = m_args.y_ca0;
            spew("set y_ca = %f", y_ca);
          }

          if (akcorr > 1)
          {
            // Outside corridor, m_integrator OFF
            m_integrator = 0.0;
          }
          else
          {
            // Inside corridor, m_integrator ON
            // RK4 integration
            k1 = computeK(loc_1, loc_2, ts.track_pos.y, 0.0);
            k2 = computeK(loc_1, loc_2, ts.track_pos.y, k1 / 2);
            k3 = computeK(loc_1, loc_2, ts.track_pos.y, k2 / 2);
            k4 = computeK(loc_1, loc_2, ts.track_pos.y, k3);

            m_integrator += timestep * (k1 + 2 * k2 + 2 * k3 + k4) / 6;
          }
          // ADMM
          const double admm_now = Clock::get();
          if (admm_now >= admm_time_now + dT)
          {
            admm_time_now = admm_now;
            spew("Time now: %f", Clock::get());

            Inland_Colav(state, ts);
          }
          // else if ((ADMM_cnt != 0) && (admm_now >= admm_time_now + 1.5 * ADMM_cnt))
          // {
          //   spew("Time now: %f", Clock::get());

          //   Inland_Colav(state, ts);
          // }

          // ILOS guidance
          if (ts.track_pos.x > ts.track_length)
          {
            // Past the track goal: this should never happen but ...
            ref = getBearing(state, ts.end);
          }
          else if (akcorr > 1 && m_args.out_vec && !m_args.out_los)
          {
            // Outside corridor, m_integrator OFF, vector field guidance
            ref = ts.track_bearing - std::atan(m_gain * ts.track_pos.y);
          }
          else if (akcorr > 1 && !m_args.out_vec && m_args.out_los)
          {
            // Outside corridor, m_integrator OFF, LOS guidance
            ref =
              ts.track_bearing - (M_PI / 6) * std::tanh((ts.track_pos.y - y_ca) / m_args.lookahead);
          }
          else
          {
            // Inside corridor, m_integrator ON, ILOS guidance
            ref =
              ts.track_bearing - (M_PI / 6) * std::tanh((ts.track_pos.y - y_ca) / m_args.lookahead);
          }

          // Init casadi variables
          // Init casadi variables
          // casadi_int sz_arg = 8, sz_res = 3, sz_iw = 0, sz_w = 0;
          // f_work(&sz_arg, &sz_res, &sz_iw, &sz_w);
          // const double** arg = new const double*[sz_arg];
          // double** res = new double*[sz_res];
          // casadi_int* iw = new casadi_int[sz_iw];
          // double* w = new double[sz_w];
          // Eigen::Matrix<double, 2, 2> Input;
          // Input(0, 0) = 1;
          // Input(0, 1) = 2;
          // Input(1, 0) = 3;
          // Input(1, 1) = 4;
          // double b[4];
          // Eigen::Map<Eigen::Array<double, Eigen::Dynamic, 1>>(b, Input.size()) =
          // Input.cast<double>().reshaped(); double res0[3]; Eigen::Matrix<double, 2, 2> a;
          // // double res1;
          // // Allocate memory (thread-safe)
          // f_incref();
          // /* Evaluate the function */
          // arg[0] = b;
          // res[0] = res0;

          // // res[1] = &res1;
          // int mem = f_checkout();
          // f(arg, res, iw, w, mem);
          // a = Eigen::Map<Eigen::Matrix<double, 2, 2>>(res0);
          // spew("%g; %g;%g;%g", a(0, 0), a(0, 1), a(1, 0), a(1, 1));

          // Dispatch heading reference
          m_heading.value = Angles::normalizeRadian(ref);
          // if (cnt < 100)
          // {
          //   m_heading.value = 0.0;
          //   cnt++;
          // }
          // else
          // {
          //   m_heading.value = M_PI/15;
          // }

          dispatch(m_heading);
        }

        //! Execute a loiter control step
        //! From base class PathController & VectorField guidance law
        void
        loiter(const IMC::EstimatedState& state, const TrackingState& ts)
        {
          double ref =
            DUNE::Math::c_half_pi + std::atan(2 * m_gain * (ts.range - ts.loiter.radius));

          if (!ts.loiter.clockwise)
            ref = -ref;

          ref += DUNE::Math::c_pi + ts.los_angle;

          if (ts.cc)
            ref += state.psi - ts.course;  // course control

          // Dispatch heading reference
          m_heading.value = Angles::normalizeRadian(ref);
          dispatch(m_heading);
        }
      };
    }
  }
}

DUNE_TASK
