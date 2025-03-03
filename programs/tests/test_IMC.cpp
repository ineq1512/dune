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
// Author: Ricardo Martins                                                  *
//***************************************************************************
// Automatically generated.                                                 *
//***************************************************************************
// IMC XML MD5: 395f9636b10cd48a03f80934b6df2924                            *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

using DUNE_NAMESPACES;

#include "Test.hpp"

int
main(void)
{
  Test test("IMC Serialization/Deserialization");

  {
    IMC::EntityState msg;
    msg.setTimeStamp(0.393758359274615);
    msg.setSource(26665U);
    msg.setSourceEntity(107U);
    msg.setDestination(52387U);
    msg.setDestinationEntity(120U);
    msg.state = 206U;
    msg.flags = 115U;
    msg.description.assign("OOAXETWBUQMSDADAYWTXGZUSQVIPENFSUCHYDFZFCTPGTBKFOSRRETYKVPEJHLYFLHJJDSHOWOQIBFTSCBNMQLAAPPINGVRUPBDZYBTSWZYMDIEVHFYRXQGLFLPDKNXCVNTUKOAENNC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityState msg;
    msg.setTimeStamp(0.9216559298940878);
    msg.setSource(15736U);
    msg.setSourceEntity(141U);
    msg.setDestination(52501U);
    msg.setDestinationEntity(119U);
    msg.state = 221U;
    msg.flags = 31U;
    msg.description.assign("RKRTYDPWHYSWCDBEYGOAIVWFAUHRYWOOGMLXJVBOESLSMXZXNOXYXNNBNPRBEYUILRIVJIUJJEFMHQGKHWESSANTIXABTZQCXABKQQZZEGKIDOAZWVQYVCJECLTYL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityState msg;
    msg.setTimeStamp(0.7699211630079232);
    msg.setSource(1607U);
    msg.setSourceEntity(241U);
    msg.setDestination(2981U);
    msg.setDestinationEntity(238U);
    msg.state = 73U;
    msg.flags = 150U;
    msg.description.assign("PZFOCAOFHWGCKSJNWOMYXGAUD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityState msg;
    msg.setTimeStamp(0.3600569044324675);
    msg.setSource(1917U);
    msg.setSourceEntity(26U);
    msg.setDestination(30629U);
    msg.setDestinationEntity(228U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityState msg;
    msg.setTimeStamp(0.3133202385514141);
    msg.setSource(6906U);
    msg.setSourceEntity(34U);
    msg.setDestination(30265U);
    msg.setDestinationEntity(99U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityState msg;
    msg.setTimeStamp(0.587413771560843);
    msg.setSource(28587U);
    msg.setSourceEntity(166U);
    msg.setDestination(6433U);
    msg.setDestinationEntity(194U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityInfo msg;
    msg.setTimeStamp(0.8480153702344646);
    msg.setSource(23000U);
    msg.setSourceEntity(13U);
    msg.setDestination(49960U);
    msg.setDestinationEntity(42U);
    msg.id = 76U;
    msg.label.assign("RDXFDTDVSXJNYSATPWPJEANFICHKJKBVVOTXCMMZEXOATWLQGBEHBXCSYBWJSFBDGGMJNBQXUYWJWKURBFMOSDYMMVRPSNQWHZHKMFLWRNBSCLTNZEINXQNKEDHWHVIQPBSSKUTZULQJFLNGIOACQLFYIPIWZZZWPVEHRDKIJCLPREEANRPSLXDOGTTFUGKZMVKBQL");
    msg.component.assign("BZGYCQMWARDRPYZXGTGIMWLKLNGPXSGFEVEXNQOWEVZOBIBWILZYQWLKZBMWEOXSXPDULJACQOKJNOO");
    msg.act_time = 54211U;
    msg.deact_time = 25193U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityInfo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityInfo msg;
    msg.setTimeStamp(0.8334984161607214);
    msg.setSource(2088U);
    msg.setSourceEntity(30U);
    msg.setDestination(46841U);
    msg.setDestinationEntity(176U);
    msg.id = 42U;
    msg.label.assign("CSWRQNFMCDMUPOWXMEFUGCXNHAUSITKQNWLUBDODTUKUAUVBPIQUGRWHGDVCRVROOTXZVFNHCQAYUJBCZWZDKSNILYGJNNJIMXDORPZVKPQYGXESVHRAHYAASZJMLQFCOPJPNMBRKWTEEUHPWJJKYQBDDVFEGFJXFHSKCTFEXILIFIMXENBVAYLMGYGRMGLHEWOYQIMLZPLDST");
    msg.component.assign("AHRKFKZJXCEGXHFUHPDFTNDZXNUWTNPMIRCHIVCZYWAVMGTQIGLHUEKMTUKWJOVEWGMLRJSOECMPWTBERLRSGUWIIVUZQQPJYOKQVOZJDFSBUUEXQNWFMUSGDZYOKKQPVYCKXFJQYVAAPNUXYB");
    msg.act_time = 10212U;
    msg.deact_time = 60626U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityInfo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityInfo msg;
    msg.setTimeStamp(0.22640670442456645);
    msg.setSource(42027U);
    msg.setSourceEntity(58U);
    msg.setDestination(975U);
    msg.setDestinationEntity(242U);
    msg.id = 199U;
    msg.label.assign("SIHWQUKYMWPAJBSMNLXMISPDOCHNRVXGQWGLZZXHQCEPLGFLOBBSTMJQNZFRUXOVHZA");
    msg.component.assign("UTLPNYJYBQEMAEFQCGEBDQKVJIKSDTXBOHTGJKGBAWJPGMVGOFQJWGCGNJFOGZLYENYXTLUEWCZRIKVGCAMYEUHFOHOFLKNVENDKHSBCAONHVKMRCSQMYYDPDRLSLX");
    msg.act_time = 8812U;
    msg.deact_time = 31372U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityInfo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityInfo msg;
    msg.setTimeStamp(0.2562190207771454);
    msg.setSource(16555U);
    msg.setSourceEntity(66U);
    msg.setDestination(44724U);
    msg.setDestinationEntity(105U);
    msg.id = 80U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityInfo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityInfo msg;
    msg.setTimeStamp(0.5187952738854289);
    msg.setSource(32687U);
    msg.setSourceEntity(216U);
    msg.setDestination(3296U);
    msg.setDestinationEntity(138U);
    msg.id = 107U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityInfo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityInfo msg;
    msg.setTimeStamp(0.9525546528670833);
    msg.setSource(65403U);
    msg.setSourceEntity(110U);
    msg.setDestination(53220U);
    msg.setDestinationEntity(81U);
    msg.id = 93U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityInfo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityList msg;
    msg.setTimeStamp(0.785754345261572);
    msg.setSource(36663U);
    msg.setSourceEntity(56U);
    msg.setDestination(27866U);
    msg.setDestinationEntity(141U);
    msg.op = 69U;
    msg.list.assign("PKYMQJJGIZUVWUYGRTIXVISWJLUKPADIFWNKLNDVPGAZQGIXRTQLJQV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityList #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityList msg;
    msg.setTimeStamp(0.15680849087107618);
    msg.setSource(35375U);
    msg.setSourceEntity(98U);
    msg.setDestination(40505U);
    msg.setDestinationEntity(244U);
    msg.op = 132U;
    msg.list.assign("MRJHGVPMUNRBXVRUJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityList #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityList msg;
    msg.setTimeStamp(0.4852326119582313);
    msg.setSource(57617U);
    msg.setSourceEntity(41U);
    msg.setDestination(2150U);
    msg.setDestinationEntity(194U);
    msg.op = 40U;
    msg.list.assign("UWTQBDLXMSBJWTWMMKVYHGYPAOIZBWPVCVYFREDICTCQUAHZPYRVPKXBFCFIXHPNMQCUZMGXUEVVAZWNAIXZLUYVOBTLLLNKJZPDAAGMJRBOFTUQMYHGQEFQHZWJANGWEKSTSIKLHDXHRZUTJNQISGAFGBOYGFEWITFEIJLFWDVKOJQUXELSEOMZJXOTOFS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityList #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CpuUsage msg;
    msg.setTimeStamp(0.106694525265699);
    msg.setSource(26231U);
    msg.setSourceEntity(47U);
    msg.setDestination(30529U);
    msg.setDestinationEntity(52U);
    msg.value = 239U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CpuUsage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CpuUsage msg;
    msg.setTimeStamp(0.747720890167265);
    msg.setSource(12128U);
    msg.setSourceEntity(252U);
    msg.setDestination(62696U);
    msg.setDestinationEntity(203U);
    msg.value = 59U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CpuUsage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CpuUsage msg;
    msg.setTimeStamp(0.5819341403892796);
    msg.setSource(18266U);
    msg.setSourceEntity(88U);
    msg.setDestination(62964U);
    msg.setDestinationEntity(230U);
    msg.value = 213U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CpuUsage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransportBindings msg;
    msg.setTimeStamp(0.24029358442374393);
    msg.setSource(39720U);
    msg.setSourceEntity(148U);
    msg.setDestination(60677U);
    msg.setDestinationEntity(148U);
    msg.consumer.assign("XAFDCMRBBWQMJF");
    msg.message_id = 36165U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransportBindings #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransportBindings msg;
    msg.setTimeStamp(0.9557454764814931);
    msg.setSource(30285U);
    msg.setSourceEntity(5U);
    msg.setDestination(42528U);
    msg.setDestinationEntity(62U);
    msg.consumer.assign("KLWWMZYQMTOKKDGAHBKMZJNCRRZUVNGTREHFYSDJITBYFEAKRZIEVZEBYDUFFYRDBYQKRJWBOWOXGFHEAKXQSPBGWWJMCRSD");
    msg.message_id = 3804U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransportBindings #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransportBindings msg;
    msg.setTimeStamp(0.7433610660380032);
    msg.setSource(54896U);
    msg.setSourceEntity(93U);
    msg.setDestination(7208U);
    msg.setDestinationEntity(87U);
    msg.consumer.assign("ARALRVTWEADIYNHLRCQFVZVVJNKOJGMXKHJIMLVGNEWHMOKYMYBCDQBOIQLWLNAYQXXIVBUAHUFUVHECTTIVSD");
    msg.message_id = 50096U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransportBindings #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RestartSystem msg;
    msg.setTimeStamp(0.47072237414663576);
    msg.setSource(7627U);
    msg.setSourceEntity(19U);
    msg.setDestination(44095U);
    msg.setDestinationEntity(13U);
    msg.type = 218U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RestartSystem #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RestartSystem msg;
    msg.setTimeStamp(0.8422689087171362);
    msg.setSource(45275U);
    msg.setSourceEntity(58U);
    msg.setDestination(17056U);
    msg.setDestinationEntity(224U);
    msg.type = 40U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RestartSystem #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RestartSystem msg;
    msg.setTimeStamp(0.820361449783505);
    msg.setSource(46700U);
    msg.setSourceEntity(150U);
    msg.setDestination(58631U);
    msg.setDestinationEntity(153U);
    msg.type = 132U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RestartSystem #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationControl msg;
    msg.setTimeStamp(0.5394716080538531);
    msg.setSource(47043U);
    msg.setSourceEntity(1U);
    msg.setDestination(56837U);
    msg.setDestinationEntity(183U);
    msg.op = 134U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationControl msg;
    msg.setTimeStamp(0.18763124189558178);
    msg.setSource(46792U);
    msg.setSourceEntity(69U);
    msg.setDestination(19736U);
    msg.setDestinationEntity(156U);
    msg.op = 12U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationControl msg;
    msg.setTimeStamp(0.4323173066990148);
    msg.setSource(62419U);
    msg.setSourceEntity(85U);
    msg.setDestination(58829U);
    msg.setDestinationEntity(243U);
    msg.op = 111U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationState msg;
    msg.setTimeStamp(0.6876514273139797);
    msg.setSource(50956U);
    msg.setSourceEntity(117U);
    msg.setDestination(62232U);
    msg.setDestinationEntity(212U);
    msg.total_steps = 141U;
    msg.step_number = 222U;
    msg.step.assign("LGKEUUWIRZVPCBSAANVDIXOZQYDWIJMFNSLGWXQDTRYZTZRCLAWYJTHFLHUWNYEGWELHGDAXSIMPIMAJXBTDYYTPURLVMOAJLNSHDNIPGRCXUZJKDCSBHHNESWQNTWLQKKPEBUJJBWNAHVZXGFLKLIFKGJSTSMAQMYMMQVEVIQFOFJXBCYADEGRVFXRNDBVHTMOVOISPYXOZKJGHUFEUOOCPDIKEKSBARGFHTRPPOBZYUVCTZXQBCZWMCCOFQQ");
    msg.flags = 235U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationState msg;
    msg.setTimeStamp(0.396821784364505);
    msg.setSource(43115U);
    msg.setSourceEntity(199U);
    msg.setDestination(64095U);
    msg.setDestinationEntity(126U);
    msg.total_steps = 51U;
    msg.step_number = 56U;
    msg.step.assign("ZSNDQZKSRIWBNAKRVRBZDAMLRDETXTGZWQXFPAFTEMWMIVJKWXWHXYGWBDBEMDECUHAFQDDQOSMYSBLQI");
    msg.flags = 244U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationState msg;
    msg.setTimeStamp(0.9352512644631215);
    msg.setSource(7165U);
    msg.setSourceEntity(239U);
    msg.setDestination(890U);
    msg.setDestinationEntity(164U);
    msg.total_steps = 167U;
    msg.step_number = 114U;
    msg.step.assign("HIHMRBYHHMFBLUVVMCRQEPIGPDMKOURTKGJPZZ");
    msg.flags = 207U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityActivationState msg;
    msg.setTimeStamp(0.05247863003314357);
    msg.setSource(23867U);
    msg.setSourceEntity(254U);
    msg.setDestination(36392U);
    msg.setDestinationEntity(198U);
    msg.state = 229U;
    msg.error.assign("ZUIYMDILVKXWWUHHRLKDCDTPCYHSCAQAZDHDKMGJNLGPO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityActivationState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityActivationState msg;
    msg.setTimeStamp(0.7046875560416537);
    msg.setSource(14765U);
    msg.setSourceEntity(97U);
    msg.setDestination(10171U);
    msg.setDestinationEntity(11U);
    msg.state = 140U;
    msg.error.assign("AQLZXHEOGDFLSBCVAXAUFJPYZJHUEJWWMLRCVDWPUFMZTDVRIBRLWMHXBECQBZVGSFQKMJHWQJIPCDOMPYTVBVQCVVSVOQUURQGGNXSYEEWZKZOUKNYZBHTKOISLOTZNNUPSANYFLFCZIBNHDHFSYYGTXLGDECPAXKIYBGSTJMKNLNXTJRWRAEVSOXTIKTDCGBMUIMORPE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityActivationState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityActivationState msg;
    msg.setTimeStamp(0.7407945354725286);
    msg.setSource(50175U);
    msg.setSourceEntity(191U);
    msg.setDestination(5847U);
    msg.setDestinationEntity(155U);
    msg.state = 47U;
    msg.error.assign("VYVUNZUOUCZNAXCXQPIOHKJWBDLQJBNQOUSMTJWXWKGIEBURETERKIRYEGJYMWHBFSCSWAOCYTVLFNVCDLS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityActivationState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityActivationState msg;
    msg.setTimeStamp(0.2593683932941737);
    msg.setSource(36964U);
    msg.setSourceEntity(115U);
    msg.setDestination(7673U);
    msg.setDestinationEntity(204U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityActivationState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityActivationState msg;
    msg.setTimeStamp(0.5020766042946213);
    msg.setSource(19782U);
    msg.setSourceEntity(93U);
    msg.setDestination(24171U);
    msg.setDestinationEntity(26U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityActivationState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityActivationState msg;
    msg.setTimeStamp(0.5996966383413681);
    msg.setSource(9244U);
    msg.setSourceEntity(142U);
    msg.setDestination(9523U);
    msg.setDestinationEntity(157U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityActivationState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleOperationalLimits msg;
    msg.setTimeStamp(0.26030695599620157);
    msg.setSource(19475U);
    msg.setSourceEntity(81U);
    msg.setDestination(13720U);
    msg.setDestinationEntity(71U);
    msg.op = 57U;
    msg.speed_min = 0.3855995728971362;
    msg.speed_max = 0.7313112345168794;
    msg.long_accel = 0.991572007044787;
    msg.alt_max_msl = 0.7208102649938711;
    msg.dive_fraction_max = 0.6851325964362445;
    msg.climb_fraction_max = 0.4704501296010859;
    msg.bank_max = 0.8270839977618559;
    msg.p_max = 0.6072904249695984;
    msg.pitch_min = 0.9020917329435875;
    msg.pitch_max = 0.49156209962656894;
    msg.q_max = 0.6154286292340312;
    msg.g_min = 0.16386078321840836;
    msg.g_max = 0.9686253093892093;
    msg.g_lat_max = 0.6714082429301635;
    msg.rpm_min = 0.06013507499215254;
    msg.rpm_max = 0.4319493087417643;
    msg.rpm_rate_max = 0.6744875308085345;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleOperationalLimits #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleOperationalLimits msg;
    msg.setTimeStamp(0.35788740668529095);
    msg.setSource(48431U);
    msg.setSourceEntity(227U);
    msg.setDestination(35402U);
    msg.setDestinationEntity(110U);
    msg.op = 41U;
    msg.speed_min = 0.4708109055186489;
    msg.speed_max = 0.9506363532477164;
    msg.long_accel = 0.38722478039560226;
    msg.alt_max_msl = 0.6262708085842628;
    msg.dive_fraction_max = 0.8485689830750385;
    msg.climb_fraction_max = 0.07142826231089161;
    msg.bank_max = 0.5188585480625231;
    msg.p_max = 0.7600034359428253;
    msg.pitch_min = 0.4531471476177311;
    msg.pitch_max = 0.4817065951897843;
    msg.q_max = 0.6621868884205057;
    msg.g_min = 0.8755708243870786;
    msg.g_max = 0.06962723469887844;
    msg.g_lat_max = 0.45361712593213854;
    msg.rpm_min = 0.8459653725947155;
    msg.rpm_max = 0.47166790362111766;
    msg.rpm_rate_max = 0.8350858968127418;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleOperationalLimits #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleOperationalLimits msg;
    msg.setTimeStamp(0.33663833347042116);
    msg.setSource(41118U);
    msg.setSourceEntity(39U);
    msg.setDestination(29977U);
    msg.setDestinationEntity(209U);
    msg.op = 103U;
    msg.speed_min = 0.10850901900373067;
    msg.speed_max = 0.14002618725509974;
    msg.long_accel = 0.9318949635822718;
    msg.alt_max_msl = 0.04357220100010506;
    msg.dive_fraction_max = 0.0095874329170893;
    msg.climb_fraction_max = 0.5194639745163344;
    msg.bank_max = 0.30732630464851396;
    msg.p_max = 0.20018070628485818;
    msg.pitch_min = 0.37059380932838637;
    msg.pitch_max = 0.5419372815258308;
    msg.q_max = 0.6255340033072856;
    msg.g_min = 0.5895570587862107;
    msg.g_max = 0.1030875660947167;
    msg.g_lat_max = 0.1655420555013315;
    msg.rpm_min = 0.4059915412376488;
    msg.rpm_max = 0.9050832908981938;
    msg.rpm_rate_max = 0.23242129580671023;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleOperationalLimits #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MsgList msg;
    msg.setTimeStamp(0.8618253115959658);
    msg.setSource(31357U);
    msg.setSourceEntity(104U);
    msg.setDestination(8552U);
    msg.setDestinationEntity(93U);
    IMC::StorageUsage tmp_msg_0;
    tmp_msg_0.available = 1956309552U;
    tmp_msg_0.value = 34U;
    msg.msgs.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MsgList #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MsgList msg;
    msg.setTimeStamp(0.6689616705026727);
    msg.setSource(59984U);
    msg.setSourceEntity(111U);
    msg.setDestination(37161U);
    msg.setDestinationEntity(191U);
    IMC::AnnounceService tmp_msg_0;
    tmp_msg_0.service.assign("HLSKONJZAJUWDZGSNOHLULQEGQ");
    tmp_msg_0.service_type = 187U;
    msg.msgs.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MsgList #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MsgList msg;
    msg.setTimeStamp(0.03825674796774514);
    msg.setSource(26747U);
    msg.setSourceEntity(97U);
    msg.setDestination(30591U);
    msg.setDestinationEntity(196U);
    IMC::EstimatedStreamVelocity tmp_msg_0;
    tmp_msg_0.x = 0.07856932118794169;
    tmp_msg_0.y = 0.2482868296021048;
    tmp_msg_0.z = 0.02585443210891125;
    msg.msgs.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MsgList #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimulatedState msg;
    msg.setTimeStamp(0.9981717991210192);
    msg.setSource(21472U);
    msg.setSourceEntity(74U);
    msg.setDestination(12961U);
    msg.setDestinationEntity(78U);
    msg.lat = 0.4221902307338389;
    msg.lon = 0.08787207403198782;
    msg.height = 0.42783920192112046;
    msg.x = 0.24334563406317622;
    msg.y = 0.6924356213732756;
    msg.z = 0.28659786032329704;
    msg.phi = 0.02761971118737505;
    msg.theta = 0.7936534263723809;
    msg.psi = 0.9818615336835611;
    msg.u = 0.6038005230174169;
    msg.v = 0.4884688816698137;
    msg.w = 0.8659569962671217;
    msg.p = 0.5102314088002462;
    msg.q = 0.7325881473732859;
    msg.r = 0.006509705749297101;
    msg.svx = 0.8275336718735967;
    msg.svy = 0.4089834559683244;
    msg.svz = 0.006946569853433671;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimulatedState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimulatedState msg;
    msg.setTimeStamp(0.9371738807666598);
    msg.setSource(55202U);
    msg.setSourceEntity(148U);
    msg.setDestination(45159U);
    msg.setDestinationEntity(3U);
    msg.lat = 0.9682172663000904;
    msg.lon = 0.1490260591380287;
    msg.height = 0.48483100480794716;
    msg.x = 0.8916252971294717;
    msg.y = 0.8150799681527217;
    msg.z = 0.4162238644266374;
    msg.phi = 0.34314395254322616;
    msg.theta = 0.26098674213983486;
    msg.psi = 0.30129066506427826;
    msg.u = 0.937226145043985;
    msg.v = 0.02890858167707877;
    msg.w = 0.4632105806388763;
    msg.p = 0.490376331176797;
    msg.q = 0.28704800016355125;
    msg.r = 0.7390832376237202;
    msg.svx = 0.7052901975723538;
    msg.svy = 0.129587715628105;
    msg.svz = 0.9949009062039281;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimulatedState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimulatedState msg;
    msg.setTimeStamp(0.1441776106220729);
    msg.setSource(12194U);
    msg.setSourceEntity(41U);
    msg.setDestination(14845U);
    msg.setDestinationEntity(68U);
    msg.lat = 0.3958309488441668;
    msg.lon = 0.7575645388301654;
    msg.height = 0.21144865948549607;
    msg.x = 0.5599980265236792;
    msg.y = 0.19824783443750993;
    msg.z = 0.6280404942678316;
    msg.phi = 0.2873239368361996;
    msg.theta = 0.2008575167615435;
    msg.psi = 0.48454101844848374;
    msg.u = 0.07987538445892028;
    msg.v = 0.11560570225717937;
    msg.w = 0.6098193208141148;
    msg.p = 0.19186707948297255;
    msg.q = 0.9113808051225695;
    msg.r = 0.3436109414323587;
    msg.svx = 0.600621514023806;
    msg.svy = 0.6152123366381624;
    msg.svz = 0.5715363861258188;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimulatedState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeakSimulation msg;
    msg.setTimeStamp(0.046729280755892);
    msg.setSource(9903U);
    msg.setSourceEntity(13U);
    msg.setDestination(43256U);
    msg.setDestinationEntity(143U);
    msg.op = 121U;
    msg.entities.assign("SXKZLVTAXKFOHQDESLHKZGGQTUPJUZBMVOYYIQSJUWKJFVSLINIVKAZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeakSimulation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeakSimulation msg;
    msg.setTimeStamp(0.6304049856839841);
    msg.setSource(50552U);
    msg.setSourceEntity(246U);
    msg.setDestination(26716U);
    msg.setDestinationEntity(0U);
    msg.op = 181U;
    msg.entities.assign("OKNGEPJQFHLRCYZTWNRCFHMAZEKOPOLNWMGGEKBCXGQBVJVBYESJARHQUFVBHXOCIRUTRLTZFLNXVOYXSVSSADNQYKHWFYARDDGZUPUISJHDJSZOXJZPPXWQDZWROEQPTHVMLYJYLBYOSMSQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeakSimulation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeakSimulation msg;
    msg.setTimeStamp(0.5939933108071196);
    msg.setSource(43781U);
    msg.setSourceEntity(194U);
    msg.setDestination(12971U);
    msg.setDestinationEntity(31U);
    msg.op = 67U;
    msg.entities.assign("HOTEXDZJHNCIWASQBKPTXTOGYRZASDAATJNMMCGUYBLIXNFECKFMGAUMZLXRFFDTWPFIVERGKXYISHUWZAUQSIXCZUIPVJEPMQCWZTPWISQQMGHSUBDMEBCRNFFNOMOJOGBKKDPKXJLMLWTGPBYVILHCVWXIFRYASLPLEREADWYYORKVDNSFCVXLJZJXRYKOKMNDNZVYDCJTQBLZNIQWOVUHPZEQHAHBBULVG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeakSimulation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UASimulation msg;
    msg.setTimeStamp(0.13350997439310608);
    msg.setSource(9927U);
    msg.setSourceEntity(42U);
    msg.setDestination(42431U);
    msg.setDestinationEntity(178U);
    msg.type = 28U;
    msg.speed = 61008U;
    const signed char tmp_msg_0[] = {49, 53, 9, -75, 44, 99, -114, -102, 86, -10, 89, -106, 108, 87, 81, -111, 125, 24, -66, -3, 92, -107, 26, -86, -95, -119, -6, 79, 96, -26, -126, 58, -126, 9, 24, 88, -3, 93, -77, 35, -26, 12, -23, 28, 52, -52, 13, 100, 68, 24, -61, 106, 35, 69, -83, 47, -96, 70, -24, -95, 26, 4, 32, -75, -83, -80, -114, -1, -118, -75, 109, -96, -67, -127, 120, -73, -105, 102, 100, 78, 112, 37, 21, 44, 4, -17, -91, -70, 74, 119, -6, -18, -6, -49, 2, -74, 69, -17, -124, -28, 72, 83, 72, -54, -24, -16, 116, 17, -32, 119, 29, 2, -93, 55, 31, 22, 87, 12, -127, 113, 120, 120, 107, 69, 58, 14, 64, 59, -102, -21, 98, -55, 11, -38, 103, -9, -68, -117, -96, -61, -108, 90, -35, -21, -46, 74, -118, 89, -68, -47, 72, 97, -108, 89, 108, -36, 10, -63, -97, -83, -117, -62, -9, -77, 63, 14, -98, -114, 56, -126, -38, -61, -92, 107, -119, 93, 66, -27, -113, 73, -4, -109, 27, 91, 59, -76, 22, 111, 48, -98, -118, -65, 114, 124, -128, -19, 116, -69, 117, 48, 45, 81, -124, -122, 71, -8, 91, 31, -84, -89, -64, -59, -114, 40, 88, 16, 94, -5, 42, -6, -49, -28, 57, 104, -35, -43, 112, 45, 105, 117};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UASimulation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UASimulation msg;
    msg.setTimeStamp(0.37380839044210323);
    msg.setSource(20753U);
    msg.setSourceEntity(5U);
    msg.setDestination(1003U);
    msg.setDestinationEntity(244U);
    msg.type = 36U;
    msg.speed = 45544U;
    const signed char tmp_msg_0[] = {-76, -119, 116, 72, -119, -110, 94, -41, 68, -61, -35, 51, -70, -68, 70, -88, 116, 111, 17, 49, -57, -115, 78, -116, 50, 3, 0, -82, 43, -75, -59, -60, 121, -74, 3, -28, 68, -69, -117, -125, 5, -96, 13, 102, -103, -64, -10, 36, 86, -104, 92, -97, 42, 30, 0, -29, 44, -111};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UASimulation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UASimulation msg;
    msg.setTimeStamp(0.746325137989426);
    msg.setSource(28682U);
    msg.setSourceEntity(167U);
    msg.setDestination(45156U);
    msg.setDestinationEntity(146U);
    msg.type = 81U;
    msg.speed = 44984U;
    const signed char tmp_msg_0[] = {-51, -81, 12, -56, -44, -115, -105, 17, 40, -61, -7, 88, 30, -103, -5, 33, 39, 14, 10, 98, 57, 82, 33, -126, 90, 97, 20, -74, 85, -105, -45, -64, -22, 25, -42, -58, -92, -3, 9, 123, 37, -45, 31, -108, 24, -80, 113, 90, -21, -107, 54, 12, -120, 51, 42, -36, -65, -39, 126, -64, -99, 3, -94, -72, 91, -42, -69, -86, -90, -53, 102, -44, -36, -2, 30, 25, -77, -5, -25, -15, -16, 74, 27, 12, -106, -84, 69, -14, 98, -126, 69, -117, -48, 104, -18, -45, -126, -37, 57, -92, -70, -87, -18, -3, -79, 20, 77, 85, 73, -18, 113, -6, -34, 105, 95, -39, -117, -31, -111, 0, -115, -48, -39, -70, 99, 105, 4, 30, -50, -37, -104, -120, -1, -7, -73, -51, 6, 49, 102, -113, 31};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UASimulation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DynamicsSimParam msg;
    msg.setTimeStamp(0.5496338722142784);
    msg.setSource(53793U);
    msg.setSourceEntity(193U);
    msg.setDestination(52557U);
    msg.setDestinationEntity(23U);
    msg.op = 28U;
    msg.tas2acc_pgain = 0.7230926855804717;
    msg.bank2p_pgain = 0.9911598780227802;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DynamicsSimParam #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DynamicsSimParam msg;
    msg.setTimeStamp(0.3439939619260033);
    msg.setSource(11567U);
    msg.setSourceEntity(67U);
    msg.setDestination(39020U);
    msg.setDestinationEntity(72U);
    msg.op = 253U;
    msg.tas2acc_pgain = 0.7056834585543972;
    msg.bank2p_pgain = 0.553261647050104;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DynamicsSimParam #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DynamicsSimParam msg;
    msg.setTimeStamp(0.623307304401635);
    msg.setSource(52163U);
    msg.setSourceEntity(21U);
    msg.setDestination(10519U);
    msg.setDestinationEntity(251U);
    msg.op = 217U;
    msg.tas2acc_pgain = 0.574444295104061;
    msg.bank2p_pgain = 0.885116704668368;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DynamicsSimParam #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StorageUsage msg;
    msg.setTimeStamp(0.7898245800064895);
    msg.setSource(43770U);
    msg.setSourceEntity(196U);
    msg.setDestination(33039U);
    msg.setDestinationEntity(203U);
    msg.available = 67465343U;
    msg.value = 137U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StorageUsage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StorageUsage msg;
    msg.setTimeStamp(0.9752612639507866);
    msg.setSource(7147U);
    msg.setSourceEntity(251U);
    msg.setDestination(47762U);
    msg.setDestinationEntity(99U);
    msg.available = 3855649917U;
    msg.value = 16U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StorageUsage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StorageUsage msg;
    msg.setTimeStamp(0.7302406107726785);
    msg.setSource(10459U);
    msg.setSourceEntity(163U);
    msg.setDestination(12242U);
    msg.setDestinationEntity(32U);
    msg.available = 1310328757U;
    msg.value = 173U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StorageUsage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CacheControl msg;
    msg.setTimeStamp(0.5044453456658899);
    msg.setSource(65253U);
    msg.setSourceEntity(109U);
    msg.setDestination(46168U);
    msg.setDestinationEntity(84U);
    msg.op = 214U;
    msg.snapshot.assign("RNIINVQCMRWWAOUODSSCJSRMNFPNKSLTCTVHMETFRAMRXWGZCAHNOAHHNBIODQOTPWGCYOBEIPLLTSDPB");
    IMC::HistoricCTD tmp_msg_0;
    tmp_msg_0.conductivity = 0.011391456226488739;
    tmp_msg_0.temperature = 0.19113790482335036;
    tmp_msg_0.depth = 0.691795288883668;
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CacheControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CacheControl msg;
    msg.setTimeStamp(0.052150989655896374);
    msg.setSource(53291U);
    msg.setSourceEntity(86U);
    msg.setDestination(19040U);
    msg.setDestinationEntity(122U);
    msg.op = 218U;
    msg.snapshot.assign("OTUUWOGXFYUNRDGXRYSIYCUDZFIKYNFSGIMHKTWYTNZECKSHEVERKJDLAJKHQZXQODIPQZCOYFAECMLPSNGPKJJDLTTBKPEMZXCQVIMEQHCVHHGSQJPXQUUXIOAZCXMPIARWJMTBTRAZKLDCTAFSOQMUZ");
    IMC::Heartbeat tmp_msg_0;
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CacheControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CacheControl msg;
    msg.setTimeStamp(0.9869720255923379);
    msg.setSource(21092U);
    msg.setSourceEntity(42U);
    msg.setDestination(54797U);
    msg.setDestinationEntity(42U);
    msg.op = 177U;
    msg.snapshot.assign("OVLNGXSNAUBHCRNBRMVCIWZMKDITLRJTRHQWECIHXVLMBOZMXVHSTVOPRZJRNGTASETVFDKFALZGAVSTAADHHAWJQVIVWCLUQBXDPSJSFYNLWZWUHUNJPMEKSYOYUYDTZGBBYDGGDMXMUZWMHUCBFFMZQJNLUJQIEQJOPMAETFFBQIVLXZRSYTPKDWFSEITIRYCQSBNZNXKOKXLPGYKWPGHPJIUROXEDKCAFEAPBGGQOCCOEYOFJYKRNIKD");
    IMC::Dislodge tmp_msg_0;
    tmp_msg_0.timeout = 32092U;
    tmp_msg_0.rpm = 0.34336973736645615;
    tmp_msg_0.direction = 112U;
    tmp_msg_0.custom.assign("AHYMQYRSRHEQDRAOQBWMTKSBJALGTXGXFINTXNSVBOQUQMNGLVVLYKEMGYGBUTTQJBEFZAMZFDSJLBHKFYXRDZKOSERCXHDVNXTRCGFGTCFLIDUAIDSDZNPUU");
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CacheControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LoggingControl msg;
    msg.setTimeStamp(0.6916929836418904);
    msg.setSource(64849U);
    msg.setSourceEntity(57U);
    msg.setDestination(7443U);
    msg.setDestinationEntity(186U);
    msg.op = 184U;
    msg.name.assign("DQMVBGRNCIMOWLTFHIISISMKWZXFVRTTTRXWHBNKTHQLBZPCKYMQISHJQUBFVUXPGKOWHRJGALPYNAURTNWTSFQJYCYBLCBXOXZLHTSVPZMKXYVNQDEKGENORMMN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LoggingControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LoggingControl msg;
    msg.setTimeStamp(0.9643286349727007);
    msg.setSource(12397U);
    msg.setSourceEntity(241U);
    msg.setDestination(9892U);
    msg.setDestinationEntity(190U);
    msg.op = 176U;
    msg.name.assign("JNWHZANISJMOWFKVHDXFJPREIUIBYGCTAMGICDZLWTBXMEIBGYJCHHEBDQNSKQJGEVOPBTTUZVYYDRFV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LoggingControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LoggingControl msg;
    msg.setTimeStamp(0.06547844718377749);
    msg.setSource(51920U);
    msg.setSourceEntity(181U);
    msg.setDestination(3119U);
    msg.setDestinationEntity(65U);
    msg.op = 242U;
    msg.name.assign("DMSGWNRJPBNIJYOYPUZBBFGKTPGCHCIOXLGWUWHPTBLXWMCOGVANXHTRVFEJRMPANPFMGAHOKWMBUZVAMASQJDZHQINVKVNUXTDNUBHYEPQZOZXTGRWDBAVQJQGFEARXWSFMBNLHFLCLWSRPTSIASIBIQRIRUDCELZFTAQYTLWKMSVUSKVFYHJLMELVZJGKDPKEYDPDYXTEUZIREMCXXJJWCHKJKOICBAFDGOEDVZNIQUYYO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LoggingControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookEntry msg;
    msg.setTimeStamp(0.6684457946642819);
    msg.setSource(29120U);
    msg.setSourceEntity(90U);
    msg.setDestination(38036U);
    msg.setDestinationEntity(63U);
    msg.type = 227U;
    msg.htime = 0.5424466043683382;
    msg.context.assign("MYAYAKALGMTWHVMNJEXGJXTJVZXIWYSEICTLEOESWFXOQNPQABUPQFOPBPGYQALHQYOOSFFUZZRNPNIKF");
    msg.text.assign("EDBJZQGGCJJUKPBZZLUAHIDQBNXPUIXEVUVCWDGNNYSKOMLHDAREMBEPDLZDRLJQWVNFDJHSLTCKEAWPKKKRZFTYEYKOFXAZTTJWFIPILVYWBSCWYFNXGFZAUUNVLCSZRNGOJRHNBLYOQCAIUYUJZQGVYOKTAAGMTEROESCPEMMXSPOOWCHAVMMQYX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookEntry #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookEntry msg;
    msg.setTimeStamp(0.8502755822811765);
    msg.setSource(55642U);
    msg.setSourceEntity(130U);
    msg.setDestination(46568U);
    msg.setDestinationEntity(189U);
    msg.type = 31U;
    msg.htime = 0.027947444316219983;
    msg.context.assign("RLQZFHWPGAFARNRHN");
    msg.text.assign("PSDIDSALQBVJMBERDNRROPINBDPYDVGIRHHFVAORLJBENWQLOCNXYLJTKDJDPMKIAQFJUHRWOFCLMXFTHRWQZFWPUCMKSCKWQEWZKCUWVXZYJIALMZHMCBJEW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookEntry #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookEntry msg;
    msg.setTimeStamp(0.9910545034434354);
    msg.setSource(19766U);
    msg.setSourceEntity(21U);
    msg.setDestination(33189U);
    msg.setDestinationEntity(221U);
    msg.type = 97U;
    msg.htime = 0.47235216848495887;
    msg.context.assign("VYAASZKZPYZQIXZRSHIHLCYKTWZLIOEBVVMBGVYTXWKRURRDGAJOFIRCQUETXRESFFGQGDTCLDDTHAAIDVTNVJVNOWJVWYAMCWBEJKYLQXNHXWRIFQWZRYPPSPFLEPMMMCLZKQLPULHVOHIFJIQFXZSBZNWXJXIGUQCATDHREBUMPEFKGDOKSCDMGYNUULJYUGBBJKNMKBNFHIWOXHZASFOVKJOUNMAPOTENJSEYMRBPHDXWCQSDTEBPSLGCCO");
    msg.text.assign("BVYNFYPQEZXKIORSKOTWUXUCYXHWJSRGCGLDTEKJLTI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookEntry #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookControl msg;
    msg.setTimeStamp(0.3737973904756179);
    msg.setSource(49390U);
    msg.setSourceEntity(58U);
    msg.setDestination(64787U);
    msg.setDestinationEntity(190U);
    msg.command = 211U;
    msg.htime = 0.5992082536010809;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookControl msg;
    msg.setTimeStamp(0.4009530694002068);
    msg.setSource(59507U);
    msg.setSourceEntity(49U);
    msg.setDestination(30738U);
    msg.setDestinationEntity(171U);
    msg.command = 152U;
    msg.htime = 0.10342065566271097;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookControl msg;
    msg.setTimeStamp(0.9922740904845513);
    msg.setSource(54631U);
    msg.setSourceEntity(242U);
    msg.setDestination(19283U);
    msg.setDestinationEntity(53U);
    msg.command = 74U;
    msg.htime = 0.9413520535012896;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 145U;
    tmp_msg_0.htime = 0.23286884595643365;
    tmp_msg_0.context.assign("JFWJVSNHKWEOYKIADVDEJMWJORZNLZTIUYKJGLOVVINOLWGUSGNGUW");
    tmp_msg_0.text.assign("IUWOUFTDTPHSPKGEPGVUBYOVXDGFHV");
    msg.msg.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReplayControl msg;
    msg.setTimeStamp(0.7312043531335409);
    msg.setSource(4557U);
    msg.setSourceEntity(168U);
    msg.setDestination(26861U);
    msg.setDestinationEntity(16U);
    msg.op = 171U;
    msg.file.assign("EKUWSICHCRPCJGBWMABXUABNEJLWYMSVYXFKPGIYSOJODZQRLHPMOPNTWPFGJDAXFEXQQVAMKHMHFFKSKUWJODVIEURWDIQFXLRZXLXHAEAURJIVLA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReplayControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReplayControl msg;
    msg.setTimeStamp(0.6421498472875449);
    msg.setSource(1082U);
    msg.setSourceEntity(63U);
    msg.setDestination(16643U);
    msg.setDestinationEntity(144U);
    msg.op = 16U;
    msg.file.assign("SRCPZEXHIMWKZBVOKVECLYUJPEEBGNCJDYSUBXQYWRQDBATIHGEAUMDRBMKCWLGLIAZFOVVVJFCBSUPEQGNAFXLURZKJGYHYWQXNIDORXLKZMPSUJFEAOFFXMNXZSCATPDRASHXUPHETMMXOQBRDPRCDWTGLKJPINWNUOLTKOLB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReplayControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReplayControl msg;
    msg.setTimeStamp(0.5131032467677564);
    msg.setSource(16814U);
    msg.setSourceEntity(156U);
    msg.setDestination(42475U);
    msg.setDestinationEntity(2U);
    msg.op = 31U;
    msg.file.assign("ODCGUCUQYKMBJXRBVBTBQSVFEJTZNRIBHYHVBFZXKEPOHUHPJZHAOZGBECNJNZOUWTPONNBXWNCJSWCIYCZUYGVDAUPSLNELFEGLFEETMXJRFIALCSPAYUTRGFDHSSJLMLEWPMYDRWXCBZULYOCDNGVDOKZMAFVPMGXXVIFRLBPKHITPOVZDJONIKYGAXKPWMVNYWQKTQXUHQMQJM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReplayControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ClockControl msg;
    msg.setTimeStamp(0.35779729793323);
    msg.setSource(41424U);
    msg.setSourceEntity(29U);
    msg.setDestination(24393U);
    msg.setDestinationEntity(164U);
    msg.op = 64U;
    msg.clock = 0.6510688569890496;
    msg.tz = -4;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ClockControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ClockControl msg;
    msg.setTimeStamp(0.9390151468559219);
    msg.setSource(3596U);
    msg.setSourceEntity(137U);
    msg.setDestination(2544U);
    msg.setDestinationEntity(14U);
    msg.op = 186U;
    msg.clock = 0.9192010813406674;
    msg.tz = 65;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ClockControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ClockControl msg;
    msg.setTimeStamp(0.9289609095015322);
    msg.setSource(32503U);
    msg.setSourceEntity(133U);
    msg.setDestination(49903U);
    msg.setDestinationEntity(206U);
    msg.op = 128U;
    msg.clock = 0.8175686138184501;
    msg.tz = -20;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ClockControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricCTD msg;
    msg.setTimeStamp(0.5995854306252311);
    msg.setSource(29672U);
    msg.setSourceEntity(162U);
    msg.setDestination(38242U);
    msg.setDestinationEntity(225U);
    msg.conductivity = 0.25984651418719507;
    msg.temperature = 0.3538248676703859;
    msg.depth = 0.12238165671533019;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricCTD #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricCTD msg;
    msg.setTimeStamp(0.5386862156211915);
    msg.setSource(48451U);
    msg.setSourceEntity(183U);
    msg.setDestination(63672U);
    msg.setDestinationEntity(188U);
    msg.conductivity = 0.12535366104566614;
    msg.temperature = 0.2969368362964725;
    msg.depth = 0.016672421381089708;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricCTD #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricCTD msg;
    msg.setTimeStamp(0.6508415148729542);
    msg.setSource(9586U);
    msg.setSourceEntity(174U);
    msg.setDestination(52916U);
    msg.setDestinationEntity(88U);
    msg.conductivity = 0.4524249358033203;
    msg.temperature = 0.7486093847680109;
    msg.depth = 0.6252133243893429;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricCTD #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricTelemetry msg;
    msg.setTimeStamp(0.20355858858939602);
    msg.setSource(20727U);
    msg.setSourceEntity(242U);
    msg.setDestination(20835U);
    msg.setDestinationEntity(229U);
    msg.altitude = 0.2618081230887822;
    msg.roll = 11541U;
    msg.pitch = 55559U;
    msg.yaw = 12240U;
    msg.speed = -23901;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricTelemetry #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricTelemetry msg;
    msg.setTimeStamp(0.8387567510932861);
    msg.setSource(32873U);
    msg.setSourceEntity(247U);
    msg.setDestination(27761U);
    msg.setDestinationEntity(114U);
    msg.altitude = 0.34405841054859765;
    msg.roll = 49740U;
    msg.pitch = 5389U;
    msg.yaw = 54034U;
    msg.speed = 24385;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricTelemetry #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricTelemetry msg;
    msg.setTimeStamp(0.5946728807106341);
    msg.setSource(63086U);
    msg.setSourceEntity(13U);
    msg.setDestination(38186U);
    msg.setDestinationEntity(154U);
    msg.altitude = 0.6364100990341243;
    msg.roll = 40423U;
    msg.pitch = 65028U;
    msg.yaw = 57573U;
    msg.speed = 1308;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricTelemetry #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSonarData msg;
    msg.setTimeStamp(0.22940714210957525);
    msg.setSource(22482U);
    msg.setSourceEntity(67U);
    msg.setDestination(5187U);
    msg.setDestinationEntity(28U);
    msg.altitude = 0.3823298830394526;
    msg.width = 0.21222063251901668;
    msg.length = 0.19395499162479657;
    msg.bearing = 0.05272491360357345;
    msg.pxl = 19582;
    msg.encoding = 1U;
    const signed char tmp_msg_0[] = {26, -47, -102, -49, -47, -89, 50, -75, -4, -126, 59, 122, -118, -118, 110, 98, 38, 84, -43, 26, -34, -97, -123, 19, 12, 62, -116, 86, 46, 50, 51, -61, 51, -7, -118, -119, -17, -114, -2, -82, -10, 6, 72, -126, 106, -119, -62, -108, -71, -98, 126, -1, -120, 85, 113, -58, 105, 38, -108, 96, -57, -13, -57, -56, -107, 100, -122, -62, 25, -10, -117, -85, -43, -100, 79, 103, -20, 95, 51, 5, -36, 79, 121, -21, -78, -18, -99, 43, 11, 1, -63, 81, 17, 40, 101, 47, -5, -34, 99, 108, -36, -102, 71, 116, -37, -26, -20, -91, 57, -53, -83, 73, 1, 120, 66, 120, 81, -21, -75, -60, 106, 33, 46, 34, 88, 64, -11, -114, -47, -89, 43, -24, 23, 14, -128, 97, -32, 97, -87, -70, -70, -83, 121, 8, -121};
    msg.sonar_data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSonarData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSonarData msg;
    msg.setTimeStamp(0.5260885201618719);
    msg.setSource(6184U);
    msg.setSourceEntity(44U);
    msg.setDestination(18953U);
    msg.setDestinationEntity(12U);
    msg.altitude = 0.9359009927551472;
    msg.width = 0.28687212871231227;
    msg.length = 0.3560112807334661;
    msg.bearing = 0.29698740756197384;
    msg.pxl = -19358;
    msg.encoding = 163U;
    const signed char tmp_msg_0[] = {37, -73, -103, 121, -111, 7, -47, -66, 54, 119, 45, 14, 90, -13, -113, 117, 106, 4, -42, -91, -72, -90, 29, 37, -34, 65, -38, -15, 14, 44, -85, -76, 104, -51, 45, -128, 80, 62, 58, -20, -71, -79, -21, -13, -41, 90, 119, 111, -47, 43, -75, -97, -37, 114, -73, 46, -123, 97, 49, -85, 68, 89, -78, 20, -82, -9, -21, -33, -55, -113, -63, -118, -21, -110, 73, 81, 100, -80, 41, 46, -2, -55, 96, -112, -109, -99, 104, 124, 118, 25, 71, -128, 68, 56, 105, -59, -7, -56, 85, 49, -62, -29, -5, 115, 125, 66, 2, 16, -62, 70, 24, -115, 61, 100, -111, -115, 86, 107, 43, 119, 48, 72, -25, 107, 67, 83, 50, -117, 125, -98, -76, 90, 116, 80, -106, -14, 49, -108, 4, 25, -27, -31, 90, -14, -125, -33, -123, 32, 87, 80, -22, -84, -64, -60, -71, 37, -36, 90, 84, 121, 15, -38, 122, 46, -96, -72, -58, -40, -3, -84, 125, -58, 82, -6, -107, -3, 65, -109, 53, 117, -37, 126, 14, 37, -7, -36, 70, -61, -45, -114, -49, -9, 125, -9, -120, 97, 53, 64, 50, 87, 54, 99, 125, -67, 45, 96, -20, 98, 47, 73, 15, -108, -28, 44, -83, -79, 10, 6, -89, 32, 63, -73, 108, 83, -19, 40, -51, -44, -85, -41, 69, -81, -19, -50, 115, 101, -19, -107, -15, 32, 123, -21, 45, -94, -120, -83, -64, -44, -120, 16, -40, 44, -29, -35};
    msg.sonar_data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSonarData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSonarData msg;
    msg.setTimeStamp(0.7715859338145032);
    msg.setSource(60475U);
    msg.setSourceEntity(247U);
    msg.setDestination(38673U);
    msg.setDestinationEntity(39U);
    msg.altitude = 0.09333502611994615;
    msg.width = 0.4672757326054975;
    msg.length = 0.08962091988763887;
    msg.bearing = 0.5860694667588868;
    msg.pxl = 18578;
    msg.encoding = 26U;
    const signed char tmp_msg_0[] = {-4, -57, 34, -119, 112, -41, 97, 15, 43, 113, -18};
    msg.sonar_data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSonarData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricEvent msg;
    msg.setTimeStamp(0.20376238749405917);
    msg.setSource(37884U);
    msg.setSourceEntity(88U);
    msg.setDestination(54607U);
    msg.setDestinationEntity(72U);
    msg.text.assign("HPSXYDRBNSLUAWHVXFFAJQOPGMDDSDWYEZSFKSBXVKDGEEQIUMCIOUXWIWLTLAPQUAMTLOTRGWNPVDWRTXTSKJYRVEBOPCRQEECGHEKKSNPAMFUJFICMAZJQKCQDUZYHZCCMIFYZVQJQHUNTYZPGPAOWBYLOZFBRGTYNKWFSXXKLZJDTMOAFZGVQHSRUEDTVIY");
    msg.type = 87U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricEvent #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricEvent msg;
    msg.setTimeStamp(0.2867628016424454);
    msg.setSource(2905U);
    msg.setSourceEntity(193U);
    msg.setDestination(14109U);
    msg.setDestinationEntity(210U);
    msg.text.assign("OYNMBZYZIFNZMYUAEAAGNQDWLOXYMZXEXGHKXPQBFSHXRRDCLWTWEHVWOLMNAFTSHQIYWSCIZGICQTPPKRYPOJWJOTYXEBPDVRCUOZYRVFMFMXWLK");
    msg.type = 174U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricEvent #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricEvent msg;
    msg.setTimeStamp(0.07154676587107489);
    msg.setSource(48141U);
    msg.setSourceEntity(50U);
    msg.setDestination(5764U);
    msg.setDestinationEntity(147U);
    msg.text.assign("WWKPRBPLIRZFSQEVMSYMOTBZKSUDXJD");
    msg.type = 104U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricEvent #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VerticalProfile msg;
    msg.setTimeStamp(0.9430637692582516);
    msg.setSource(13372U);
    msg.setSourceEntity(77U);
    msg.setDestination(20490U);
    msg.setDestinationEntity(126U);
    msg.parameter = 207U;
    msg.numsamples = 151U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 40856U;
    tmp_msg_0.avg = 0.18432254407205506;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.031727851719572375;
    msg.lon = 0.25532699285104066;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VerticalProfile #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VerticalProfile msg;
    msg.setTimeStamp(0.15000835550003822);
    msg.setSource(45552U);
    msg.setSourceEntity(122U);
    msg.setDestination(64313U);
    msg.setDestinationEntity(249U);
    msg.parameter = 214U;
    msg.numsamples = 71U;
    msg.lat = 0.6189219481609869;
    msg.lon = 0.21299702258334008;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VerticalProfile #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VerticalProfile msg;
    msg.setTimeStamp(0.41362579354345874);
    msg.setSource(44632U);
    msg.setSourceEntity(74U);
    msg.setDestination(58521U);
    msg.setDestinationEntity(74U);
    msg.parameter = 136U;
    msg.numsamples = 24U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 6263U;
    tmp_msg_0.avg = 0.865034592029189;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.5414752736304779;
    msg.lon = 0.8429644037823444;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VerticalProfile #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ProfileSample msg;
    msg.setTimeStamp(0.909987670983866);
    msg.setSource(36834U);
    msg.setSourceEntity(175U);
    msg.setDestination(62793U);
    msg.setDestinationEntity(22U);
    msg.depth = 62068U;
    msg.avg = 0.9251587800823772;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ProfileSample #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ProfileSample msg;
    msg.setTimeStamp(0.7557453420252807);
    msg.setSource(6095U);
    msg.setSourceEntity(226U);
    msg.setDestination(56078U);
    msg.setDestinationEntity(89U);
    msg.depth = 21665U;
    msg.avg = 0.6196538099504317;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ProfileSample #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ProfileSample msg;
    msg.setTimeStamp(0.5144271603751591);
    msg.setSource(42491U);
    msg.setSourceEntity(251U);
    msg.setDestination(37991U);
    msg.setDestinationEntity(87U);
    msg.depth = 8859U;
    msg.avg = 0.18722353957484683;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ProfileSample #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Heartbeat msg;
    msg.setTimeStamp(0.0635164878113249);
    msg.setSource(53114U);
    msg.setSourceEntity(15U);
    msg.setDestination(37613U);
    msg.setDestinationEntity(82U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Heartbeat #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Heartbeat msg;
    msg.setTimeStamp(0.47635902807731956);
    msg.setSource(47976U);
    msg.setSourceEntity(121U);
    msg.setDestination(41141U);
    msg.setDestinationEntity(138U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Heartbeat #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Heartbeat msg;
    msg.setTimeStamp(0.008103550238725221);
    msg.setSource(34525U);
    msg.setSourceEntity(75U);
    msg.setDestination(59955U);
    msg.setDestinationEntity(21U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Heartbeat #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Announce msg;
    msg.setTimeStamp(0.9592926848696735);
    msg.setSource(4392U);
    msg.setSourceEntity(146U);
    msg.setDestination(39028U);
    msg.setDestinationEntity(230U);
    msg.sys_name.assign("RHYAVYSZBCXGLWFPUVUGDBINPLYYENITSQHDYLGVWAXUWHTJORVUWYFDQNGCOKHIBEQMBRXUNWYTPSIUTBLJEMJGAPFGDWDZFVHZSMVZUTKONGXRGTHLMJAADXOVJBOWEZIRJKOENIPHCOJJWTCMPGNKMIGKRVJFORZCDEF");
    msg.sys_type = 63U;
    msg.owner = 31772U;
    msg.lat = 0.9814256576312876;
    msg.lon = 0.2647726839285207;
    msg.height = 0.6920696851756728;
    msg.services.assign("RKJOKJWUTWHNRNAMBIHQHETAJJWPSYLKWXXMBRIIGNXHKMUZKGRDSFPFVGRVOUOQKLGHDQWSKFAQRCABGAMOBZNOJZZZNELLXMAGOODYYAYJYFESSSEIIFKXLLFTOTCGCPWRDIEIBBUDVUYSH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Announce #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Announce msg;
    msg.setTimeStamp(0.38891832504666);
    msg.setSource(57464U);
    msg.setSourceEntity(223U);
    msg.setDestination(26425U);
    msg.setDestinationEntity(6U);
    msg.sys_name.assign("IZKBPTVDJYALSPZFRZBSZXCIHEOCOUKWVPDHQMJBEEERRJIVKGBQXDTTSHJKTIHYGWVXUQJF");
    msg.sys_type = 147U;
    msg.owner = 28348U;
    msg.lat = 0.4669320632195577;
    msg.lon = 0.8109546272696123;
    msg.height = 0.7155422605290613;
    msg.services.assign("AXXIFDNLUZTEGNXOEFZCGEMHXYJQBDIYTBELWZQBDKMAOCBRKLLJZKCJTPUIMQSMVMEHVZZPDEMEKUMASRRJJDHWRZHPNLFZOIQWPTBSPCAXQGREJAJKJNRUUPHVMHYFVQSCBNKHBQXSITOAWDVUONKAEGQYP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Announce #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Announce msg;
    msg.setTimeStamp(0.5270476614746007);
    msg.setSource(38119U);
    msg.setSourceEntity(99U);
    msg.setDestination(49972U);
    msg.setDestinationEntity(89U);
    msg.sys_name.assign("LQXEWRMHVUHNJOSNANZLAIUACLUVREMPXGHOQLZZCHNQGYCHWIDMZJDVTYSRXAZFJBBIIPBRELWMSHEOMSJUHTRCVYYNFSJDYKHPAYEGWXBXEDSNPVMLOQODCWSZBZKDZQFDHLWNIOPQTUFUBEGXIRFOAKODLTIBMKRAAKZWGBDJLVNFJECNUGVQRW");
    msg.sys_type = 162U;
    msg.owner = 16291U;
    msg.lat = 0.5829109547729205;
    msg.lon = 0.9645172837727537;
    msg.height = 0.8937953069880219;
    msg.services.assign("DNOICOBAMKYUUNIMDOXUQPBBMVIVRUVMSSXWOKDCVBUHFQDLBBKKZEIHETNTQOHFXRWYLVGZCRGMTSTFENXNNUFPEBHASZIXVJEVPTNGTHKBYWQYAIYOMSYCWITNJGDGQDSDBXSXUGKCJZWRLZNQJSLVJPPGQJKAGSIMZEWFAGMBMNWFWTDEROYCJIDIEULHZCRHAHKOVECFYLKWYTPCARVQLYTEKADAAJWPQSHJOMPQXFXPRUPFZGZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Announce #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AnnounceService msg;
    msg.setTimeStamp(0.380532459932738);
    msg.setSource(17611U);
    msg.setSourceEntity(88U);
    msg.setDestination(51551U);
    msg.setDestinationEntity(5U);
    msg.service.assign("XSJJZQLIDHKIWTVOBMP");
    msg.service_type = 208U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AnnounceService #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AnnounceService msg;
    msg.setTimeStamp(0.6044377465890731);
    msg.setSource(7391U);
    msg.setSourceEntity(136U);
    msg.setDestination(62383U);
    msg.setDestinationEntity(42U);
    msg.service.assign("FGGFXFLXRFKPRMAZBHAEYRKXEZMZHBRPKOKMCMSBCDGBPBLATNADJVUIVNYWULMHOQULPGBNNLJYFDTWOMSKCGYGITOVTQDAKXVVEOYERWFQZWHEUZSLXFMSAJQRWPHYDVUTOWFQIPNGARTRUQMSCYOKFWVSNSTQISTIBWWRXUYIPACZQJZVHABABMCKSLUDUPETLCGDNYXZHZRDVNLZNCEIEXDVMJQO");
    msg.service_type = 39U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AnnounceService #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AnnounceService msg;
    msg.setTimeStamp(0.7789013359173456);
    msg.setSource(5259U);
    msg.setSourceEntity(19U);
    msg.setDestination(12464U);
    msg.setDestinationEntity(94U);
    msg.service.assign("EQLXCVJRZTPGBKTFHWRNIRHDBNDVJXEGFMOLZFPYUEREUZQNXVWQDJP");
    msg.service_type = 71U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AnnounceService #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RSSI msg;
    msg.setTimeStamp(0.7264186501389092);
    msg.setSource(34980U);
    msg.setSourceEntity(183U);
    msg.setDestination(6429U);
    msg.setDestinationEntity(150U);
    msg.value = 0.12101671145975468;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RSSI #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RSSI msg;
    msg.setTimeStamp(0.08185347483570837);
    msg.setSource(31928U);
    msg.setSourceEntity(41U);
    msg.setDestination(4718U);
    msg.setDestinationEntity(235U);
    msg.value = 0.2258554815555781;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RSSI #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RSSI msg;
    msg.setTimeStamp(0.18772134559642828);
    msg.setSource(55734U);
    msg.setSourceEntity(181U);
    msg.setDestination(37987U);
    msg.setDestinationEntity(239U);
    msg.value = 0.1050981242926875;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RSSI #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VSWR msg;
    msg.setTimeStamp(0.799850229525118);
    msg.setSource(31707U);
    msg.setSourceEntity(54U);
    msg.setDestination(26929U);
    msg.setDestinationEntity(89U);
    msg.value = 0.09426078002784843;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VSWR #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VSWR msg;
    msg.setTimeStamp(0.45025592813050475);
    msg.setSource(721U);
    msg.setSourceEntity(26U);
    msg.setDestination(33611U);
    msg.setDestinationEntity(108U);
    msg.value = 0.8453138637131682;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VSWR #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VSWR msg;
    msg.setTimeStamp(0.629119336712024);
    msg.setSource(8468U);
    msg.setSourceEntity(221U);
    msg.setDestination(33752U);
    msg.setDestinationEntity(47U);
    msg.value = 0.8993214949470574;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VSWR #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLevel msg;
    msg.setTimeStamp(0.47056413060708335);
    msg.setSource(48998U);
    msg.setSourceEntity(176U);
    msg.setDestination(34338U);
    msg.setDestinationEntity(54U);
    msg.value = 0.22260290078692513;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLevel #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLevel msg;
    msg.setTimeStamp(0.12250981891376655);
    msg.setSource(55381U);
    msg.setSourceEntity(132U);
    msg.setDestination(20449U);
    msg.setDestinationEntity(35U);
    msg.value = 0.6734029044296144;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLevel #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLevel msg;
    msg.setTimeStamp(0.11095671586440525);
    msg.setSource(47471U);
    msg.setSourceEntity(51U);
    msg.setDestination(9652U);
    msg.setDestinationEntity(11U);
    msg.value = 0.8021670943998426;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLevel #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sms msg;
    msg.setTimeStamp(0.17907080394856267);
    msg.setSource(52758U);
    msg.setSourceEntity(141U);
    msg.setDestination(348U);
    msg.setDestinationEntity(117U);
    msg.number.assign("OKRWVQBCLLJFKSCJAKKGBQX");
    msg.timeout = 55365U;
    msg.contents.assign("XTKJXIZEVZVHRXHYSYPWURFXCEVUAOMBEUFJYQEGDQCIANPWUWQIMOSLIHHHNRRINIHGLKTTVCMFZOWFSBBSJOUFJKHLBBOIZOZCDDY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sms #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sms msg;
    msg.setTimeStamp(0.021953322663364583);
    msg.setSource(58151U);
    msg.setSourceEntity(148U);
    msg.setDestination(12253U);
    msg.setDestinationEntity(120U);
    msg.number.assign("AWUWLVDUHELYNRNFXIKBZFYXUMHRCMOTDZZZCGRFSDHJSRSRRZLSYOEODTXPGCTAHTELAXHYWKUKBMGTBDUVTQ");
    msg.timeout = 64750U;
    msg.contents.assign("KTBYJJULHDOONSTMKKPAGVKGFUZYIXRGCTMBFPIQTMMNWFEVCMYSBGIKGRSVZQCVOYUAAUPKWOSHVIUUSDKXAHWOQBLRZSMHJWYHQDQXUIRTNHXLIZUALQXUBEPFLSJCJJPOBSEWFMWTBTDDDDACITRDDYSEYEMTHOBZAHANMBORIENZHXUSCXQWWLVLAFIPRHOZCNPGNFDYLEYJPEI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sms #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sms msg;
    msg.setTimeStamp(0.16904384235428604);
    msg.setSource(16188U);
    msg.setSourceEntity(63U);
    msg.setDestination(45998U);
    msg.setDestinationEntity(170U);
    msg.number.assign("ZBZUEGSENHNNEXXCVZQQOYAYFGBYPLVAEVOYODLHNULUGBKQQHCNJHASASFPMZUFLKLMHABWBMGXWGXSRVJPPATZQXSKKNXWRWWPGFNTWOPFTBXGIUJLDTIFQRWMAGHJCVOUIDCWFJYDKELUYSOJNROQ");
    msg.timeout = 19636U;
    msg.contents.assign("ANKZRYSMAMRXSEMEKFCUDWBOWEWEBVNJNWRXSTKHPNLIKOVAHITNVGQYPHPCYRFULMABKRBWPYCNETDGXW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sms #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsTx msg;
    msg.setTimeStamp(0.5197902752536082);
    msg.setSource(57636U);
    msg.setSourceEntity(203U);
    msg.setDestination(12717U);
    msg.setDestinationEntity(41U);
    msg.seq = 1394439374U;
    msg.destination.assign("XCRPQLPAJCBWWVXXIFEHZMRJGGMOGNJYFWOTIMJETDXWNAOCMQGAFCHHSQIYALUCYVCPOQIMUYZGVAFKHNLCFHYRWKHZETSBRXYOZTQUWLPPDAFOBZCK");
    msg.timeout = 56979U;
    const signed char tmp_msg_0[] = {-18, 65, -118, 75, -105, -26, -68, -17, 51, -70, 110, -50, 30, -111, -29, -27, -28, -111, -127, -76, 84, 36, 69, 44, 101, -88, 75};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsTx #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsTx msg;
    msg.setTimeStamp(0.9682696264058698);
    msg.setSource(37137U);
    msg.setSourceEntity(101U);
    msg.setDestination(33817U);
    msg.setDestinationEntity(99U);
    msg.seq = 2951894365U;
    msg.destination.assign("FVFJSKMLKZEUTBJBRVNHIKLETPSYDSDZOHYHGRNAAWVUXRDNIEPORGCAASGKQDGVXPUKDSNOLJYPFAZEEGSPXMWAGUJTJNKKTRSJLAGEQDRFWIEXNCFBPQIONILYGLXHFPFFHMFIBSJQNOOVVEWRXVBIOCDRZXAYQCZHYBMLTVWMQWQCWTUIULXZVWTQB");
    msg.timeout = 12385U;
    const signed char tmp_msg_0[] = {73, 80, 38, -42, 107, -67, 40, 104, 95, 43, 75, -107, 107, 114, 47, -90, -123, -61, -121, -4, 54, -109, 56, 63, -122, 43, -85, -64, 7, -10, -1, -1, -102, -52, -8, 57, 98, -30, 63, -39, 4, 43, -83, 86, -127, -1, -55, -121, -85, 39, -2, -92, -52, 77, 114, -95, -110, 59, 104, -89, -37, -24, -90, -75, -48, 97, -101, -54, -89, -15, 72, -67, -78, 79};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsTx #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsTx msg;
    msg.setTimeStamp(0.19139005264670628);
    msg.setSource(12598U);
    msg.setSourceEntity(212U);
    msg.setDestination(9639U);
    msg.setDestinationEntity(103U);
    msg.seq = 454292729U;
    msg.destination.assign("KLAVOPSUVPRMTCDCSWMZYOAKRTJCDXPCPGVUBNXKNLOWCMJLEZFFYYMQOGKZDARMXWYGZLLTUIOEHSSRUHYMHOMZXODWFWNJVRMSEJEBWKATAVMHJCUBOGAQBLEYNRUGRGWXEEZJNSQPQKSONU");
    msg.timeout = 50333U;
    const signed char tmp_msg_0[] = {111, -65, -84, -105, -15, -69, 5, -45, -75, 104, 27, 14, 126, 107, -80, -81, -1, 59, -11, -108, 82, 14, -37, -96, -43, 89, -41, -44, 97, 124, -32, 41, -72, 40, 51, -63, 52, -41, 119, 61, -5, -80, -107, 108, 0, -88, -43, -47, -26, 119, 78, -15, 33, 34, -73, -9, 84, -56, -68, -118, 7, -84, -64, 49, 81, -127, -18, 58, -108, -42, 79, 39, -55, -40, -28, -102, -43, 83, -59, -91, 123, -45, 66, 56, -77, -80, 49, -57, 109, 6, 41, -41, -3, -99, -9, 55, -43, 112, 30, 124, 91, -124, -98, -41, 101, 43, -87, 85, -53, -10, -88, -98, 120, 15, 66, -43, -123, -79, -86, -74, -81, 105, 66, -8, 42, 57, -128, 42, -82, 89, -100, 100, 27, -24, 7, 95, -71, -96, -113, 13, 3, -74, -107, -28, 77, -125, -17, 42, -117, -111, -48, 69, 97, -122, 109, -74, -43, 104, 120, -54, 37, -60, -119, 107, 3, 78, 79, 51, -124, -117, 79, 84, -36, -52, -57, 61, -34, -67, -92, 1, -111, 107, -72, 44, 77, -9, -67, 51, 112, 63, -75, 76, -10, -20, -56, -16, 73, -70, 8, -46, 92, -82, -15, 122, -71, 46, 11, 66, 78, 123, 40, -100, -84, 119, -101, 26, -54, 67, -25, -111, -110};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsTx #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRx msg;
    msg.setTimeStamp(0.5867736301878288);
    msg.setSource(58517U);
    msg.setSourceEntity(102U);
    msg.setDestination(5751U);
    msg.setDestinationEntity(216U);
    msg.source.assign("NXGXEDFYXESTHCLVUPEBYKXTQWPXVSKXJVSEDDACSNFUFGUUJRCMFLIQYIRYNYSHQJTAZESP");
    const signed char tmp_msg_0[] = {-87, 75, -40, 44, -45, 124, -46, -98, 52, -119, -123, 0, -42, -92, 121, 65, -91, -74, -121, 15, 117, 92, 13, 12, -64, -116, -74, 55, 32, -14, -66, -100, -6, -86, 20, -45, -95, -42, -66, 75, -76, 116, 112, -64, 94, 125, 48, -27, -30, 22, -117, 60, -18, 82, 102, 53, 31, -125, 31, 41, -34, -22, 22, -14, -72, 48, 86, 91, -77, 65, 27, -20, 79, -101, -110, -68, -10, 78, -120, 46, 17, -109, -98, 70, -77, 21, 37, 41, -33, 96, 30, 107, -84, -87, -94, 71, 99, 35, -6, -35, 66, -41, -1, -55, -106, 54, -101, 57, -23, -12, -120, 72, 78, -94, -74, 12, 76, 24, -76, 100, 16, -51, 118, 49, -85, 75, -97, 126, 19, -79, -8, -60, 75, 103, 125, -93, -112, 9, 112, 10, -99, 1, -13, -68, 33, -19, -92, -35, 86, -39, -50, -39, -117, -101, 92, -35, 110, -69, 10, -127, -92, -96, 119, -127, -106, -8, 63, 29, -64, 78, -76, -57, 85, -34, -90};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRx #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRx msg;
    msg.setTimeStamp(0.9367546646546641);
    msg.setSource(34731U);
    msg.setSourceEntity(1U);
    msg.setDestination(9191U);
    msg.setDestinationEntity(108U);
    msg.source.assign("GCYGJCNIMXUVOBYUDTWPBOSYQCJWXDQJRJPMMQVWXFHDSUGSQNBKUPMEZKICJFBLYAXPFAFBRVUMZLBWUSXMOEQPTDERNSWYIRIMTVNTQXBFTEHHNUSACKAOTBNCIFWDPVRCYVGZTRRJYWKIUAZOFAOGIKBPYVGHGJLZUHMVZHECXPRO");
    const signed char tmp_msg_0[] = {20, -123, -63, -10, 55, -18, 59, 55, -7, 93, -10, -12, -72, -59};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRx #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRx msg;
    msg.setTimeStamp(0.1694502646128937);
    msg.setSource(57772U);
    msg.setSourceEntity(111U);
    msg.setDestination(55688U);
    msg.setDestinationEntity(234U);
    msg.source.assign("VSWRKZRVQYFCNMLUDCOHYQPSKWPSBICLXCXUDHXHPTARDKLEJJDAUKAZGQMUWJRGYNRIMDYZDFBYFNVEYOJXXXGDPIGPUSMGKVEQKSISNNUAGRVKRTJODLQFMXXEMPVQOQQLFQGSOWUHJJCFDTGLHVEATAWZCUOW");
    const signed char tmp_msg_0[] = {-79, -109, 2, 63, -118, -31, 62, -3, -99, 108, -117, 96, -83, 83, 7, 45, -9, -119, -33, 77, -98, -19, 29, 109, 94, 33, -34, 122, 23, 33, 15, 77, -104, -91, 91, 53, -21, 33, -45, 23, 31, 61, 0, 124, 18, 108, 107, -22, -1, 73, 32, -53, 57, -10, 98, 52, -45, -51, 102, 78, -48, -17, 69, 104, -12, -45, -69, 59, 29, 2, -20, -52, -3, -24, 79, 64, -25, -31, 80, -29, 124, -48, 62, -115, 90, -10, -59, -106, -12, 24, 52, -97, 67, 85, 61, 25, -71, 1, -31, -7, -48, -46, 123, -50, -29, 79, -40, 30, -57, -81, -65, 21, -26, 78, -46, -71, 1, -28, 50, -20, -97};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRx #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsState msg;
    msg.setTimeStamp(0.7219803155124074);
    msg.setSource(1490U);
    msg.setSourceEntity(134U);
    msg.setDestination(58807U);
    msg.setDestinationEntity(80U);
    msg.seq = 3227805446U;
    msg.state = 160U;
    msg.error.assign("ECLZRJGIQIXIGAOJPQOXNUULZHXBGNCGFQAVVZEPRMHQLCDMVWXNRMZJBPHFGACTCXENSLWMNJEMILCLKHHTHVHZOHTCFCLWERBMBWDFGJLCASYTVTA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsState msg;
    msg.setTimeStamp(0.8746622416224457);
    msg.setSource(60390U);
    msg.setSourceEntity(241U);
    msg.setDestination(28520U);
    msg.setDestinationEntity(101U);
    msg.seq = 3462619534U;
    msg.state = 117U;
    msg.error.assign("IJCGNSBLFWDRNCSZWDTMCJOQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsState msg;
    msg.setTimeStamp(0.34997427563879613);
    msg.setSource(38671U);
    msg.setSourceEntity(181U);
    msg.setDestination(29623U);
    msg.setDestinationEntity(8U);
    msg.seq = 2708617253U;
    msg.state = 106U;
    msg.error.assign("YOYPSKFHFGGNSYCUWEPAXSMNBOOQKDHPRIWKUFTOTVYGWHLUROQXBDSPEYXJCDCHCRGENAKFLIFTFDOLLSSKJAWQRKYZTHZNRTIVBNDUQVLKXHGTMQBXVTVXXAYUWMIMWZMFRBRQWJOUMZHDWVZAFDBULMNNAKOPMWVCQCZXPJYAILQILSECZNBJWPZRVAEHE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TextMessage msg;
    msg.setTimeStamp(0.18304397525001115);
    msg.setSource(6745U);
    msg.setSourceEntity(70U);
    msg.setDestination(18171U);
    msg.setDestinationEntity(38U);
    msg.origin.assign("JDLLANSNGMKOUVKYXEWODZVPMTAUGERZZJCIHOOYFIEHQQWHAPWQAOMBSPFINWZWEDHQPJVJIKBMMHTVQECLKUFAXOWGDQJLQVXAJKSAIFZPBJXSUSRHQNDILIYIVPF");
    msg.text.assign("HMRAPTPTHHFREZFBTONKTVAZVZWSBDMFPEMMZHUINIBKXCXOUWYNNZESWSNGSVRJYAKJYQVTRMGFFFIEQUXLTGBZFUS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TextMessage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TextMessage msg;
    msg.setTimeStamp(0.9470801833694779);
    msg.setSource(6005U);
    msg.setSourceEntity(51U);
    msg.setDestination(54928U);
    msg.setDestinationEntity(9U);
    msg.origin.assign("WYKZUIMNFLRPCGQYYATRJECWGKCJFILA");
    msg.text.assign("VIESWBZTTHKDXTBNLEEFPLZFXDBLNXKBIPKSLWQYAFVGNVMOOTIAHAWQIXIVJWXHUGNWYUQYMOYJDYQCHRPORA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TextMessage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TextMessage msg;
    msg.setTimeStamp(0.6456760523967817);
    msg.setSource(34272U);
    msg.setSourceEntity(187U);
    msg.setDestination(54164U);
    msg.setDestinationEntity(42U);
    msg.origin.assign("FECXAMNBKZMTVCHZPYWNVAMSWTRTSUZLZSFRZVYQAYRLOWKFCLDEQTUAJYJYYUFGJHMLXURHAXCAXEVQXTOBQCQJTNGKMXBLBJRFPGKVRWKQBOOOSIANULIGDDHIVQYSPNTELDPPFZGHJMENPRWMV");
    msg.text.assign("NYNUXCDFMJHCUJERCQZFORIPXXOHYGBVZIDUAXQXHCSRDIYFTBNVGCANFFRHBCHPAVPFVSPZVHGSWMLGAREDJSSWOTABRYCAQSQHPMSOHOLDYERTJZOMI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TextMessage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgRx msg;
    msg.setTimeStamp(0.2538163337499253);
    msg.setSource(27930U);
    msg.setSourceEntity(171U);
    msg.setDestination(39744U);
    msg.setDestinationEntity(42U);
    msg.origin.assign("VOESGDZRLVPNCWDZGPNRFAVIOLZHUTOBHXDBDOYQLTEPBNBJNZCCLTQKGRTYKIUZLYWAZDCJUUSTG");
    msg.htime = 0.5976021536068825;
    msg.lat = 0.40344949656823803;
    msg.lon = 0.46944180981483974;
    const signed char tmp_msg_0[] = {87, -10, -27, 67, 59, -91, -113, 22, -50, -79, -90, 26, 24, -67, 106, -115, -18, 40, 21, -102};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgRx #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgRx msg;
    msg.setTimeStamp(0.5449709113103072);
    msg.setSource(16772U);
    msg.setSourceEntity(178U);
    msg.setDestination(46749U);
    msg.setDestinationEntity(25U);
    msg.origin.assign("VCTRZJJTNSKYPKZGKIJHZKPCPHXOOWENRNFBZYWZXOBCUNXESTXYBDIKPXVDDSNRSAGOLIJWFTCCVJGOAZYKFAQUJKGDGDIEXJWWXOVQOQZGLGOUHLSQRQPAITAGXFYCZMWBNODETFQRPKBSMOBVURNYCMELAERDSWVDRAL");
    msg.htime = 0.6856242268952073;
    msg.lat = 0.9193570658720692;
    msg.lon = 0.3958510071293262;
    const signed char tmp_msg_0[] = {-126, 33, 16, -96, -100, 36, 18, -17, -120, 45, -8, 21, 40, -122, -113, -101, -87, -76, 47, 50, -115, 97, 64, -61, 41, 44, 118, 25, -21, 112, -47, -96, -95, 17, 75, 59, -74, -26, 26, -49, -120, -92, 55, -112, -87, 120, 105, -66, 1, -77, -5, -13, 105, -117, -107, -117, 102, -29, 79, 22, 62, 53, 104, -55, 110, -42, 62, -36, 124, 30, 99, -29, 107, -64, 100, 93, 78, 26, 94, -48, 13, -119, 110, 15, -17, 73, -73, 0, 88, 33, -94, -72, 55, -6, 115, -90, -93, -111, 26, 26, 12, -82, -104, 25, 62, 67, 81, 16, 59, -96, 84, 61, 20, -50, -37, 120, 18, 115, -23, 55, 76, -76, -71, 30, -43, 83, -112, 2, -32, -10, 10, -111, -31, -34, -28, -23, 34, -27, -61, -120, -126, -60, 22, -77, -125, -38, -96, -6, -43, -102, -58, 102, -20};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgRx #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgRx msg;
    msg.setTimeStamp(0.9410251239401553);
    msg.setSource(25350U);
    msg.setSourceEntity(150U);
    msg.setDestination(54448U);
    msg.setDestinationEntity(204U);
    msg.origin.assign("PFRGLTIGPJQZNGPUNHJXBJFNSLAVCDKGXMDBYLSZRQCNWPQRSAODZLMFOLGCXXIOECFWWVAJFTURIDHCRTTVATLNELNUSDEOLPEKBHYQOKOJVETDGZWANHUXMDXWWOJHIKXHIUOYOMQEPOHBVUVQGNIKHWMPZPBNZWYAJSSYHCEIQBBTXVWYQDSQ");
    msg.htime = 0.7172320486012455;
    msg.lat = 0.3924222787160453;
    msg.lon = 0.07964570286169526;
    const signed char tmp_msg_0[] = {-109, -117, 56, -126, -90, -26, 39, 50, 75, -112, 55, -93, 18, 23, -37, 20, 100, -19, -124, -124, -123, 84, -79, 108, -81, -82, -16, 98, -50, 105, -110, -116, -63, 70, 76, -27, -47, -13, 31, -108, -98, -121, -13, 116, -91, -67, 17, 7, -96, -60, 34, -87, -59, 81, -46, -99, -78, -109, -89, 14, 4, -121, -54, 63, -4, 97, -57, 57, -19, -101, -96, 50, 18, -122, -32, 73, 94, -111, -57, -49, 28, -8, -77, -65, -62, -124, -8, 99, 14, 51, -117, 91, -6, 64, 109, -42, -128, 67, 100, -53, 74, -55, -74, 87, 0, -41, 102, -106, 126, 109, -23, 49, -70, -104, -14, 2, -100, 113, 73, 67, 2, -41, 52, -53, 45, 29, -92, -89, -122, -125, 99, -56, 43, -43, -83, 81, -20, 118, -2};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgRx #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgTx msg;
    msg.setTimeStamp(0.7745671047756602);
    msg.setSource(59200U);
    msg.setSourceEntity(186U);
    msg.setDestination(11195U);
    msg.setDestinationEntity(228U);
    msg.req_id = 17590U;
    msg.ttl = 59734U;
    msg.destination.assign("TERRRZBJROWPOWEODKLGSNWMMTUKL");
    const signed char tmp_msg_0[] = {-36, 22, -9, -68, -49, -23, -34, -118, -72, 40, 41, -84, 86, 2, 92, -37, -66, -69, -33, 77, -25, 84, 64, 113, 112, 10, 93, 74, 122, 76, -65, 18, 97, 26, -39, 79, -31, -93, -30, -94, -87, 109, -81, 60, -71, 95, -111, -34, 61, 24, -56, 62, 2, -3, 30, 2, -4, 5, -29, -38, 15, -7, 47, -102, -128, 44, -100, 58, 13, 19, 73, 94, -125, 4};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgTx #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgTx msg;
    msg.setTimeStamp(0.3610054391732388);
    msg.setSource(13713U);
    msg.setSourceEntity(149U);
    msg.setDestination(34685U);
    msg.setDestinationEntity(152U);
    msg.req_id = 22500U;
    msg.ttl = 4341U;
    msg.destination.assign("ITDOFOYOMXCHBGVFESYJUBQMQABP");
    const signed char tmp_msg_0[] = {100, -18, 57, -44, 105, -31, 93, -28, 100, -94, 104, -13, 117, 53, 13, -34, 53, 54, -124, -101, -60, -71, -20, 40, -6, -56, -58, 38, 116, -44, 12, -86, 64, 8, 92, -15, 92, 4, 100, -33, -67, 70, -85, -65, 53, -77, -55, 26, 83, -43, 62, -54, -79, -1, 54, -46, -27, 31, 100, 107, -13, 107, 98, 46, -56, -40, 115, 10, -50, -90, 15, 13, -26, 113, -113, 57, 104, 16, 49, 23, -123, -19, 94, 85, -74, -24, -19, -8, 102, 83, -13, -33, 19, 46, -105, 72, -41, -14, -31, -125, -101, -50, 85, 65, -61, 107, 84, -81, 54, 54, -38, -110, -16, 28, -104, 29, 36, -105, -119, 10, 68, -18, -10, -114, 17, -74, -11, -3, 0, 14, 34, 60, -126, -118, 44};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgTx #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgTx msg;
    msg.setTimeStamp(0.27232561402317756);
    msg.setSource(13243U);
    msg.setSourceEntity(183U);
    msg.setDestination(23031U);
    msg.setDestinationEntity(113U);
    msg.req_id = 7609U;
    msg.ttl = 50559U;
    msg.destination.assign("BTOIYGQGURXDQEFUGETUBEMLVLJTNXDOVOPPEWLCDZHBHZKRFXATJKBAXAIHOYHCTFUIWQBZTKPMETNNRVCETJOKLKWLZCYSIPXLUFPYFKW");
    const signed char tmp_msg_0[] = {42, 96, -59, 11, 51, -74, 82, -124, 89, 71, 1, -59, -26, 116, 99, 16, 105, -96, 91, 62, 88, -28, 58, 80, 65, 24, -91, -120, 32, -11, -64, 90, 57, 7, -3, -20, -48, -41, 19, -98, 97, -47, -19, -40, 81, -72, -80, 77, -27, 106, 75, 101, 95, -9, 21, -75, 56, -107, -120, 26, -42, 110, 28, -99, -56, -16, -75, -22, -63, -36, -21, 6, -81, 38, 113, 38, -6, -82, 68, -38, 96, 107, 11, 1, 14, 76, 62, 46};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgTx #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumTxStatus msg;
    msg.setTimeStamp(0.9563804868697829);
    msg.setSource(24013U);
    msg.setSourceEntity(35U);
    msg.setDestination(61756U);
    msg.setDestinationEntity(16U);
    msg.req_id = 26016U;
    msg.status = 7U;
    msg.text.assign("URSCXLUWLVGSGZHRFHMANQDCPYMJXEVQFJWVLIINOTLFCKOKBGWBSGKDAAZWZALOIQPTKSJTNTDLUIGALCERWNQWREQJMARNIUKLYEGOBMEISWMBNVSCVFNOHYDXVDOUTEBTGRTZJISQKKMITXPQDWYHYJCOHVGXMFIXAHUZJBMJFDQPXRQWG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumTxStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumTxStatus msg;
    msg.setTimeStamp(0.7016739465076234);
    msg.setSource(36177U);
    msg.setSourceEntity(67U);
    msg.setDestination(21844U);
    msg.setDestinationEntity(128U);
    msg.req_id = 37583U;
    msg.status = 238U;
    msg.text.assign("BNHDJOCJIWYFSXGKPPXQUQEPBZCQSHIULAIVCMANGNIVYCHGXKODGNBJOJQZKLEZBSENCAASGLGTRIMFKSDTLAPNPTOBDFJUVKIHSHVTWHHZUHXMJKDMUQOFIBEQAYQJGLDRENFLZQLXVWJEUFWAFBOTYDDVNDMAGKCXURYVURVZOWKWWRPJCXYHEOURGMYNXDOIZLILTBCZGHKTWFRYWCMBMXBSFVRPYWCSPSXAQJKORSLMFAVMTUYEEZZETP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumTxStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumTxStatus msg;
    msg.setTimeStamp(0.961802621691643);
    msg.setSource(57954U);
    msg.setSourceEntity(227U);
    msg.setDestination(36213U);
    msg.setDestinationEntity(97U);
    msg.req_id = 23671U;
    msg.status = 204U;
    msg.text.assign("ENCXSLEKTIDQNDGKMQIXAUVWVCTFTFVOGJRTSUAUYNQGZLRYDBKRRKEVGGBHYHZOGMJWWRWQWPPGMXEPWNFNHTMFRULJZBUOAVUGRJIFHHMWRDWIBGUULCQSKZYFYTKEZNYXRCDIITNSZVXXBSGISJAMANNLCVLYARFB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumTxStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupMembershipState msg;
    msg.setTimeStamp(0.19926638830294574);
    msg.setSource(63458U);
    msg.setSourceEntity(36U);
    msg.setDestination(55860U);
    msg.setDestinationEntity(47U);
    msg.group_name.assign("JENIKWSVWZWYWJZGATBRQUHFSATFKELVCJAFPGNQIJWNGKLOPFJKSCZCTMULPFELGOMAOFBFBCLJTERXRXYHRRGBXKYOMDXKRJDQMBWIVYKAQVVNYOKG");
    msg.links = 3546657143U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupMembershipState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupMembershipState msg;
    msg.setTimeStamp(0.9612960396583131);
    msg.setSource(5058U);
    msg.setSourceEntity(102U);
    msg.setDestination(52298U);
    msg.setDestinationEntity(168U);
    msg.group_name.assign("AAAWBOBCGREDXNWFAVJZBUCSTADPTYICMNLHIJGUMXRVPMXJPLUMJVFRSMLRNAUQIWKBJRLPMZIMWKZTBOKXHEILQXKFCSZMCZDFIOTVL");
    msg.links = 3709350926U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupMembershipState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupMembershipState msg;
    msg.setTimeStamp(0.8244907474025972);
    msg.setSource(24660U);
    msg.setSourceEntity(41U);
    msg.setDestination(18662U);
    msg.setDestinationEntity(160U);
    msg.group_name.assign("UHQFNZTPNVSMEXJITWOEXAFMWZYBDKJWDWESCYRVILUTRVQEUORVUYBBHCBSUQHVFJIMQ");
    msg.links = 2490722306U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupMembershipState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SystemGroup msg;
    msg.setTimeStamp(0.7352073728012356);
    msg.setSource(54590U);
    msg.setSourceEntity(234U);
    msg.setDestination(40720U);
    msg.setDestinationEntity(251U);
    msg.groupname.assign("UCHVSJEYJFRSOCDLLNHQIBXANXNZECXETLZUOVHFBZOBMJKMFRGHPLAAYMKRMD");
    msg.action = 61U;
    msg.grouplist.assign("SMEIDLELFOZTCAPFMFHLVZYMMSOGBCYJTSKXLCKRJZYWNKVQMUBUNSHPUYWPIBXDTBIDLBXRLYHIFTAKNSTCTOHGWEOOGQPIRQQZFQUMXQZCMGTKDTVJELAGADONVHBLZGURIPIQKNRYGVCHCSAUZQPSCKSWGAFZJHBWLFXPMDUFXNNCNQJEGMNXDKEYRWDMRXFTVHIJJEPAVIUBVKBTVUUESBOWXZQZJHHOYALWAJRPCGEFNPW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SystemGroup #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SystemGroup msg;
    msg.setTimeStamp(0.7686491479332688);
    msg.setSource(11845U);
    msg.setSourceEntity(158U);
    msg.setDestination(3926U);
    msg.setDestinationEntity(130U);
    msg.groupname.assign("BCCBFPXXXOKRCTTATRFXQDDMWOMUAMQYNSUYGAKVFVUGQKDNSSLGRVWVEHIKQTZEFGQTPWNJYTPPYBJOEYJRJKSIHHOGQKODNWDUOYNJWMJPFYH");
    msg.action = 232U;
    msg.grouplist.assign("IVHVSKYRLGDYSUYLNMDEWXZFYEJPRQMYCSATCHDNKWCJQNDISTIHSVYVPGRCRZJTTEIAOMOSDALWGRZXGEVQAQUFYOGLZBYMQXPZIFXNFHVMKKGNGODGHROUHACBBJBAZHTSYBOLGCIQJEBJOTVFURPVBT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SystemGroup #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SystemGroup msg;
    msg.setTimeStamp(0.5670088365401077);
    msg.setSource(45874U);
    msg.setSourceEntity(75U);
    msg.setDestination(15607U);
    msg.setDestinationEntity(158U);
    msg.groupname.assign("DIEBSMRAPXPQNQCLWSD");
    msg.action = 95U;
    msg.grouplist.assign("YCQUJVKNRIRDLHUQFRVVPZRBKABCOHONMQGOCZDRKCGBYKIWIQVNSPFXGNMNJXVGXZJHHUQSDPVIANUERMSFFOSRWSZIACHOGTUYGIKHSOXBPLFFZAXCOEZZQZXHCJDMAQAHWNBXBAEPVRDUVEXHWTVBFTDOMYEBDMLBNUWZEALBKGZOCTTQTYWWEFXTRLTDCMPSFJLTJHPKQYVAEGYSD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SystemGroup #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLatency msg;
    msg.setTimeStamp(0.8842456180863038);
    msg.setSource(33708U);
    msg.setSourceEntity(127U);
    msg.setDestination(41715U);
    msg.setDestinationEntity(96U);
    msg.value = 0.1529645539782134;
    msg.sys_src = 61640U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLatency #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLatency msg;
    msg.setTimeStamp(0.6553126672798574);
    msg.setSource(18989U);
    msg.setSourceEntity(27U);
    msg.setDestination(53039U);
    msg.setDestinationEntity(222U);
    msg.value = 0.7829305635171372;
    msg.sys_src = 42586U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLatency #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLatency msg;
    msg.setTimeStamp(0.7958618030491277);
    msg.setSource(8881U);
    msg.setSourceEntity(88U);
    msg.setDestination(57010U);
    msg.setDestinationEntity(5U);
    msg.value = 0.17327715399310017;
    msg.sys_src = 5091U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLatency #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExtendedRSSI msg;
    msg.setTimeStamp(0.023629797400914643);
    msg.setSource(46816U);
    msg.setSourceEntity(172U);
    msg.setDestination(50847U);
    msg.setDestinationEntity(80U);
    msg.value = 0.6985129844628873;
    msg.units = 212U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExtendedRSSI #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExtendedRSSI msg;
    msg.setTimeStamp(0.1658761818777248);
    msg.setSource(30844U);
    msg.setSourceEntity(156U);
    msg.setDestination(61985U);
    msg.setDestinationEntity(12U);
    msg.value = 0.7508804029239303;
    msg.units = 116U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExtendedRSSI #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExtendedRSSI msg;
    msg.setTimeStamp(0.3751251818286293);
    msg.setSource(15805U);
    msg.setSourceEntity(78U);
    msg.setDestination(13347U);
    msg.setDestinationEntity(172U);
    msg.value = 0.5988630834322588;
    msg.units = 130U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExtendedRSSI #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricData msg;
    msg.setTimeStamp(0.9328376326568332);
    msg.setSource(52370U);
    msg.setSourceEntity(5U);
    msg.setDestination(22411U);
    msg.setDestinationEntity(155U);
    msg.base_lat = 0.6960774508463748;
    msg.base_lon = 0.9603704039359543;
    msg.base_time = 0.719702281459561;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 36813U;
    tmp_msg_0.destination = 10650U;
    tmp_msg_0.timeout = 0.4563848061667397;
    IMC::EmergencyControlState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.state = 216U;
    tmp_tmp_msg_0_0.plan_id.assign("BSKQJSEVMVWDTTZZHUNSCUTKBOWSMFS");
    tmp_tmp_msg_0_0.comm_level = 74U;
    tmp_msg_0.cmd.set(tmp_tmp_msg_0_0);
    msg.data.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricData msg;
    msg.setTimeStamp(0.2798623444442976);
    msg.setSource(17576U);
    msg.setSourceEntity(212U);
    msg.setDestination(37735U);
    msg.setDestinationEntity(92U);
    msg.base_lat = 0.18413524571179618;
    msg.base_lon = 0.344130259542897;
    msg.base_time = 0.0044771295965317925;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricData msg;
    msg.setTimeStamp(0.28492331637477375);
    msg.setSource(54551U);
    msg.setSourceEntity(69U);
    msg.setDestination(21873U);
    msg.setDestinationEntity(81U);
    msg.base_lat = 0.04758419101017397;
    msg.base_lon = 0.44464648515849126;
    msg.base_time = 0.8523153487613215;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 41742U;
    tmp_msg_0.destination = 38627U;
    tmp_msg_0.timeout = 0.31879486823780656;
    IMC::DesiredLinearState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.6675107895674028;
    tmp_tmp_msg_0_0.y = 0.2956841004739982;
    tmp_tmp_msg_0_0.z = 0.04843313170586461;
    tmp_tmp_msg_0_0.vx = 0.37631642247411956;
    tmp_tmp_msg_0_0.vy = 0.5796298123336123;
    tmp_tmp_msg_0_0.vz = 0.9158541953461128;
    tmp_tmp_msg_0_0.ax = 0.8248566062944369;
    tmp_tmp_msg_0_0.ay = 0.7602373825952861;
    tmp_tmp_msg_0_0.az = 0.5729284414168299;
    tmp_tmp_msg_0_0.flags = 52670U;
    tmp_msg_0.cmd.set(tmp_tmp_msg_0_0);
    msg.data.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedHistory msg;
    msg.setTimeStamp(0.9783401543647672);
    msg.setSource(14117U);
    msg.setSourceEntity(200U);
    msg.setDestination(690U);
    msg.setDestinationEntity(105U);
    msg.base_lat = 0.4665675671313183;
    msg.base_lon = 0.5167372286891032;
    msg.base_time = 0.012089317467446348;
    const signed char tmp_msg_0[] = {122, 26, 86, -85, 45, -38, 20, -96, 36, 64, -46, 106, 1, -65, 8, -111, -75, -24, 85, -58, -106, -45, -78, -115, -94, 21, -58, 92, 43, -8, -112, 88, 54, -101, -78, -57, -20, 6, -109, 14, -79, -128, -5, -70, 95, 52, 24, 122, -22, 76, 90, -1, -36, -71, 117, -62, -80, 100, -96, 59, 90, 44, 38, -38, -118, 41, 90, 47, 59, -36, -101, -109, -97, 93, 126, 95, 16, 104, -117, 18, 56, 30, -66, -13, -56, -35, -98, 52, -20, -120, -6, 122, 37, 71, -95, 36, -85, 110, -128, 46, -105, 94, 98, -73, 70, 71, 97, 52, -13, 83, -66, -91, -85, -70, 53, 103, -109, 124, 66, 81, -89, -48, 57, -17, -106, 105, 119, 64, 107, -88, -89, -121, -93, -4, -116, 58, -52, -125, 70, 54, 106, -69, 122, -38, 59, 101, 22, -77, -86, 116, -51, -60, 10, 57, 39, -21, 75, -98, 114, -18, -19, -82, 107, 103, 55, 105, 110, 124, -41, 87, -58, -69, 107, 119, -17, -49, 99, -115, -2, -29, -45, -25, -96, -88, 125, -119, -121, -89, -99, -54, -113, 30, 87, 88};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedHistory #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedHistory msg;
    msg.setTimeStamp(0.6056677736803462);
    msg.setSource(14414U);
    msg.setSourceEntity(159U);
    msg.setDestination(39464U);
    msg.setDestinationEntity(136U);
    msg.base_lat = 0.986616614058237;
    msg.base_lon = 0.3245653787611098;
    msg.base_time = 0.7440485520492405;
    const signed char tmp_msg_0[] = {-127, 78, -107, -103, 80, 1, 65, -61, -99, 102, 41, 29, -42, -74, 75, -68, -47, -74, -3, -122, -126, 0, 90, -100, -98, -11, -88, -94, 100, -116, 18, 101, 125, -4, -103, -126, -101, 11, 75, 14, 115, -43, -36, 53, 43, -119, 80, -21, 44, 14, -60, -61, -14, 84, 74, -4, -113, -27, 104, 72, 98, 48, -123, -52, 38, 101, -35, 120, 70, 108, -45, 85, 22, -32, 105, -18, -10, -34, -4, -18, 114, -114, -69, -34, 108, -77, 20, 37, -4, -104, 76, -85, 90, -95, -103, -2, -99, -14, -5, 95, -96, 97, -10, -77, -120, 120, -77, -114, 37, 80, -33, 49, 105, 92, -63, 1, -124, -86, 47, -101, 93, 71, 64, -49, 12, -122, 70, -62, 35, 64, 51, 88, -68, -5, -44, -28, 74, 71};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedHistory #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedHistory msg;
    msg.setTimeStamp(0.4024460152177973);
    msg.setSource(36076U);
    msg.setSourceEntity(48U);
    msg.setDestination(11416U);
    msg.setDestinationEntity(116U);
    msg.base_lat = 0.21520308481212547;
    msg.base_lon = 0.24381683914775898;
    msg.base_time = 0.05173912211044751;
    const signed char tmp_msg_0[] = {-33, -6, 81, -116, -53, 90, 52, 75, -48, -9, 27, -21, -67, 64, 15, -2, 1, 20, -64, -118, -54, 48, 18, -36, 45, -99, -122, 102, 29, -100, -106, 3, 71, -4, 105, 44, 54, -68, -68, 69, -5, -12, -92, 111, 107, -47, 79, -8, 93, 29, -91, 25, 107, 2, -115, 54, -75, -121, -35, -68, -87, 119, -30, 48, -95, 62, 58, -58, 39, 1, -2, 23, 70, 46, 13, -120, 47, 25, 110, -83, -18, -125, 55, -49};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedHistory #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSample msg;
    msg.setTimeStamp(0.39071707152290647);
    msg.setSource(41647U);
    msg.setSourceEntity(130U);
    msg.setDestination(55773U);
    msg.setDestinationEntity(96U);
    msg.sys_id = 13743U;
    msg.priority = -66;
    msg.x = 20690;
    msg.y = -9545;
    msg.z = -18842;
    msg.t = 19945;
    IMC::PopUp tmp_msg_0;
    tmp_msg_0.timeout = 11558U;
    tmp_msg_0.lat = 0.4033992114158368;
    tmp_msg_0.lon = 0.8117508600820611;
    tmp_msg_0.z = 0.532220068559654;
    tmp_msg_0.z_units = 13U;
    tmp_msg_0.speed = 0.49058287702349623;
    tmp_msg_0.speed_units = 202U;
    tmp_msg_0.duration = 55755U;
    tmp_msg_0.radius = 0.25965830970678005;
    tmp_msg_0.flags = 179U;
    tmp_msg_0.custom.assign("AMGEGLBGZWIMOQTJNQUJBBFHNKRLLLSFNTVOAXPFVAQZQOUGQVSNZRILVREUMKDPXSXVDKJJAAJLITMMBXVCBOHYKWDHCTRQWGDXEZYFQNEMNRMOBURCKGCVCITGJNUIJMCRKVTTOLJUEYMISZNBKPWIKWSLAUHQRUZCWFYUGYZQCYGNAPIPWERYCQITRBPZWPEJTBKPXFHNFJVXFC");
    msg.sample.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSample #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSample msg;
    msg.setTimeStamp(0.7579257475752199);
    msg.setSource(21500U);
    msg.setSourceEntity(25U);
    msg.setDestination(52707U);
    msg.setDestinationEntity(14U);
    msg.sys_id = 35685U;
    msg.priority = -78;
    msg.x = -7190;
    msg.y = -10975;
    msg.z = -29361;
    msg.t = -8515;
    IMC::FormationState tmp_msg_0;
    tmp_msg_0.type = 131U;
    tmp_msg_0.op = 160U;
    tmp_msg_0.possimerr = 0.9858661726026205;
    tmp_msg_0.converg = 0.28175794225607786;
    tmp_msg_0.turbulence = 0.9733511467369576;
    tmp_msg_0.possimmon = 199U;
    tmp_msg_0.commmon = 135U;
    tmp_msg_0.convergmon = 100U;
    msg.sample.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSample #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSample msg;
    msg.setTimeStamp(0.2680898491322936);
    msg.setSource(12043U);
    msg.setSourceEntity(17U);
    msg.setDestination(23894U);
    msg.setDestinationEntity(171U);
    msg.sys_id = 21354U;
    msg.priority = 66;
    msg.x = -29096;
    msg.y = -14950;
    msg.z = -23766;
    msg.t = -24963;
    IMC::Distance tmp_msg_0;
    tmp_msg_0.validity = 234U;
    IMC::DeviceState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.34681699806829547;
    tmp_tmp_msg_0_0.y = 0.9977401837856472;
    tmp_tmp_msg_0_0.z = 0.25671925147255825;
    tmp_tmp_msg_0_0.phi = 0.2931752260548113;
    tmp_tmp_msg_0_0.theta = 0.007347869164034293;
    tmp_tmp_msg_0_0.psi = 0.939387607694373;
    tmp_msg_0.location.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.value = 0.443939842656887;
    msg.sample.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSample #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricDataQuery msg;
    msg.setTimeStamp(0.7562648191632846);
    msg.setSource(58698U);
    msg.setSourceEntity(104U);
    msg.setDestination(30540U);
    msg.setDestinationEntity(99U);
    msg.req_id = 13046U;
    msg.type = 43U;
    msg.max_size = 22260U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.9627667461094443;
    tmp_msg_0.base_lon = 0.9053844875980324;
    tmp_msg_0.base_time = 0.62000296249159;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 27107U;
    tmp_tmp_msg_0_0.destination = 18896U;
    tmp_tmp_msg_0_0.timeout = 0.07477101944862696;
    IMC::AngularVelocity tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.time = 0.28363132291696325;
    tmp_tmp_tmp_msg_0_0_0.x = 0.6113395829788912;
    tmp_tmp_tmp_msg_0_0_0.y = 0.2998210316465212;
    tmp_tmp_tmp_msg_0_0_0.z = 0.18809461064662003;
    tmp_tmp_msg_0_0.cmd.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.data.push_back(tmp_tmp_msg_0_0);
    msg.data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricDataQuery #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricDataQuery msg;
    msg.setTimeStamp(0.9655229603300869);
    msg.setSource(17877U);
    msg.setSourceEntity(153U);
    msg.setDestination(63053U);
    msg.setDestinationEntity(53U);
    msg.req_id = 61033U;
    msg.type = 97U;
    msg.max_size = 36744U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.4177990555990376;
    tmp_msg_0.base_lon = 0.5357900352108254;
    tmp_msg_0.base_time = 0.5142549252924006;
    msg.data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricDataQuery #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricDataQuery msg;
    msg.setTimeStamp(0.8157694667987475);
    msg.setSource(24603U);
    msg.setSourceEntity(190U);
    msg.setDestination(1354U);
    msg.setDestinationEntity(79U);
    msg.req_id = 10442U;
    msg.type = 234U;
    msg.max_size = 446U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.5736331544017682;
    tmp_msg_0.base_lon = 0.9125949437432304;
    tmp_msg_0.base_time = 0.5154665413748757;
    msg.data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricDataQuery #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteCommand msg;
    msg.setTimeStamp(0.17580038796786146);
    msg.setSource(34578U);
    msg.setSourceEntity(24U);
    msg.setDestination(40025U);
    msg.setDestinationEntity(6U);
    msg.original_source = 25014U;
    msg.destination = 63980U;
    msg.timeout = 0.9412740023953381;
    IMC::PushEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("DJJZDFBXLGCHIKCTMUQPVKSEISUXTGXNMBNMMPMJQYMDBITKDKCWMOSEHYRXUIFWENBJLWWONGEDGNGDYGQBATLCWZYJXWRRMRBFSVMQYUILFQNIAZGORWZLAGGFSATAVKOIKLLEHAZVWPPXNVNFUPTTSUIROVYSQPERYNCCYOCPBVHEFUUUWXQTDYGSAHEQAKIQBV");
    msg.cmd.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteCommand #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteCommand msg;
    msg.setTimeStamp(0.9582561790405596);
    msg.setSource(41263U);
    msg.setSourceEntity(201U);
    msg.setDestination(44604U);
    msg.setDestinationEntity(196U);
    msg.original_source = 48993U;
    msg.destination = 60175U;
    msg.timeout = 0.23625962899191333;
    IMC::GroupStreamVelocity tmp_msg_0;
    tmp_msg_0.x = 0.3805345771712273;
    tmp_msg_0.y = 0.3771006757355173;
    tmp_msg_0.z = 0.7167031494398208;
    msg.cmd.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteCommand #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteCommand msg;
    msg.setTimeStamp(0.6445785781150044);
    msg.setSource(40544U);
    msg.setSourceEntity(106U);
    msg.setDestination(30669U);
    msg.setDestinationEntity(73U);
    msg.original_source = 43434U;
    msg.destination = 47005U;
    msg.timeout = 0.0463489405755495;
    IMC::VehicleCommand tmp_msg_0;
    tmp_msg_0.type = 63U;
    tmp_msg_0.request_id = 57868U;
    tmp_msg_0.command = 27U;
    IMC::PopUp tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 15786U;
    tmp_tmp_msg_0_0.lat = 0.17591436350742984;
    tmp_tmp_msg_0_0.lon = 0.4923471137370522;
    tmp_tmp_msg_0_0.z = 0.4917650947709947;
    tmp_tmp_msg_0_0.z_units = 178U;
    tmp_tmp_msg_0_0.speed = 0.8260571556567123;
    tmp_tmp_msg_0_0.speed_units = 58U;
    tmp_tmp_msg_0_0.duration = 221U;
    tmp_tmp_msg_0_0.radius = 0.9950736805373591;
    tmp_tmp_msg_0_0.flags = 142U;
    tmp_tmp_msg_0_0.custom.assign("TVUQERJUHUJHFORBMEZUHWZANTACVOVJEYTKSWVHFDTRSEYKDBIRNFLDKTMGXOKGBFCIVMLWYQAOLBRARKON");
    tmp_msg_0.maneuver.set(tmp_tmp_msg_0_0);
    tmp_msg_0.calib_time = 56260U;
    tmp_msg_0.info.assign("VHWMHKIPSGNYMMUZ");
    msg.cmd.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteCommand #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommSystemsQuery msg;
    msg.setTimeStamp(0.06153037618252066);
    msg.setSource(30944U);
    msg.setSourceEntity(204U);
    msg.setDestination(4166U);
    msg.setDestinationEntity(61U);
    msg.type = 239U;
    msg.comm_interface = 14056U;
    msg.model = 4926U;
    msg.list.assign("XLILGEVYCXRVSGWFQTCMUDPZZDCELCEHTYDCRMOORJRPNWQMVABHPECXLNEQCUDYHADYNJKBQJHOVGFJPOHOQRSHHGTIZPNAABWPEUOCWARKSZTIMLRBIOXLFBSCYDTMSGDEJXKEPMBNXKSTVDBYUUMEFYSFOSTWLXTADWXQINLKUYSIKBTTDJZAPBEGQZXVFZRZAJZFNGRGVVWVHWYOAWOMSWNBIQFAIUKIKFHJQYPCNGGULJLQU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommSystemsQuery #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommSystemsQuery msg;
    msg.setTimeStamp(0.8269549695975055);
    msg.setSource(28677U);
    msg.setSourceEntity(224U);
    msg.setDestination(21370U);
    msg.setDestinationEntity(192U);
    msg.type = 243U;
    msg.comm_interface = 41569U;
    msg.model = 17114U;
    msg.list.assign("YZEFRWULCJMVOUNVDDRBYNLHXSJSWEBZBUHAVDYMSMLWVFSUSDAQGQKFXLZMWUIZEQIRGPGPEIWIKABPAAHTNAHRPCFZJGHMRVOTSDKUYAMODCWWTKZEQEFCJBAJRINCGMIFUMUUHIBXL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommSystemsQuery #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommSystemsQuery msg;
    msg.setTimeStamp(0.9126681856851403);
    msg.setSource(33944U);
    msg.setSourceEntity(38U);
    msg.setDestination(44605U);
    msg.setDestinationEntity(229U);
    msg.type = 51U;
    msg.comm_interface = 19479U;
    msg.model = 21259U;
    msg.list.assign("AUDOWFWLHFVPSNOCARQUWENKEQMKWFXROCJXHACVHMMSPRYWLAADQZSJXBTCIVQRGSZFRPSRAOKARJICGQZWAXODJIUHDPNVZUKLLNSVHKHXIDIBXMQXYXIDSYBINPLDPSTAHFIOFDUJNPCQEJUPBMWRTVSSXLQKGGODWDWIKLQBEOZPUCEYRCYYKTOXHZLLGGTYGVRHMUNBVZEZUETACJLBEVFNYCFMTJBFOFEWU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommSystemsQuery #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TelemetryMsg msg;
    msg.setTimeStamp(0.9129634122759369);
    msg.setSource(43434U);
    msg.setSourceEntity(49U);
    msg.setDestination(55510U);
    msg.setDestinationEntity(227U);
    msg.type = 233U;
    msg.req_id = 2820448608U;
    msg.ttl = 1446U;
    msg.code = 139U;
    msg.destination.assign("GYELBKWGWJORUZUGIHZNXSOLJLEEZBBENVTLIZJBRLGOBHWGFXPNHXANPSXCVAUKRSWKBQGTIOXCYMKVHIJDS");
    msg.source.assign("PAINPCSRFJYOCLFOWMYTQYLSMJGLBVPXZXVZDYVRJEQFUJSLEMRBXLNOOQWCSPGJRBCKCIBXZYPVWABEVTZSEYBNXUADUCPVVCROKMQQRNJCKETGJHOAPHZQEZJHKUPFGDQNNXFDWDUDWGADAFIBHSHFTUDZGQRNIUMFGGYQNUVAADGSULCPKPMEVBJRFHWOKMDWEETIQLETIWYFNHNRCMKOSHTUWTIKIVIWKRTGOSOZTMKXBSAJXL");
    msg.acknowledge = 232U;
    msg.status = 62U;
    const signed char tmp_msg_0[] = {95, -27, 10, -86, 34, -60, 68, 59, -101, 114, -125, 20, 54, -6, 119, 122, 41, -70, 120, 40, 36, -56, 114, -58, -59, -46, -39, 106, -20, 36, 111, 115, -71, 113, -24, -94, 56, 3, -29, 69, 11, -99, -27, -91, 126, -41, -106, -41, 0, -88, -44, -113, -3, -2, -28, 21, -41, -109, -69, 95, 84, 13, -81, -46, 68, -106, 10, 21, 121, -42, -72, -99, -11, -86, -30, -43, 19, -105, -115, -38, -70, 24, 98, 12, 95, -41, -25, 110, -20, -96, 17, -58, -127, -95, 2, -104, -74, 7, -55, 97, 14, -16, -66, 68, -8, 22, 54, 18, 3, -83, -49, 50, 33, -79, 64, 116, 21, 97, 29, 1, 118, 92, 57, -37, -71, -92, 32, -83, 68, -8, -61, 113, -66, 29, 4, -25, -71, -73};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TelemetryMsg #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TelemetryMsg msg;
    msg.setTimeStamp(0.6716881171580872);
    msg.setSource(3060U);
    msg.setSourceEntity(101U);
    msg.setDestination(62351U);
    msg.setDestinationEntity(75U);
    msg.type = 20U;
    msg.req_id = 1479817421U;
    msg.ttl = 39926U;
    msg.code = 145U;
    msg.destination.assign("IVZZWITRIXKXIMHKWCCQQUAULXSSQJZCVDKXEEWNLPMPSLUOHDRYTEAVYNIZSYCPLBQBYKXDDCYCJGNPMNVMKMOWSFSLLZWZJGTFIB");
    msg.source.assign("QYTOKQNNHWBQTASLTQBTGIGMVGUDWHRKYZJFDFEEGUPQKEGOTQSUYSFSIGOEY");
    msg.acknowledge = 245U;
    msg.status = 232U;
    const signed char tmp_msg_0[] = {-68, -9, 2, 85, 60, -116, 14, 7, -50, 6, -114, -89, -32, 122, 42, 71, 107, -91, -83, -76, -15, 102, -58, -73, 26, -53, -10, 87, 101, -41, 79, -95, 3, 103, -96, -109, 50, 125, 77, -36, 15, 15, 76, -74, 7, -128, -98, -37, 107, -89, -41, 118, -37, -63, 65, 77, -97, 42, -24, 21, 111, -86, -76, 102, 97, -91, 94, -73, -85, -47, -73, 21, -15, 85, 56, 4, 4, -126, -122, 42, -81, 45, -34, -29, 61, 42, -107, -23, -68, -60, 43, 126, 64, 119, -105, -21, 18, -105, 68, 9, 21, 111, -91, -12, 51, 107, 106, 74, -123, -98, 62, 43, 4, 51, 54, -54, -92, -29, 77, 104, -84, -122, 18, 56, 106, 45, 113, -23, 90, 15, -69, 30, 115, -22, 24, -1, -12, 45, 1, 17, -49, 83, -88, 45, 20, -10, -33, 72, -87, 11, 56, -120, 20, 53, -109, -62, 99, 87, 8, 79, 117, -83, -28, -72, -111, 78, -43, -49, -1, 111, -30, 89, 74, 122, -84, -29, 113, 111, 54, 18, -12, 47, 62, 55, 20, 33, -52, -58, -46, 20, -88, 20, -31, -115, -65, -64, -40, -52, 30, 73, -39, -8, -97, 45, 123, -64, -17, 26, -23, 63, 27, 45, 82, 110, -47, 11, 50, -107, 74, -116, -13, 126, 2, 68, 92, -107, -120};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TelemetryMsg #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TelemetryMsg msg;
    msg.setTimeStamp(0.7766943283694691);
    msg.setSource(35223U);
    msg.setSourceEntity(37U);
    msg.setDestination(17327U);
    msg.setDestinationEntity(220U);
    msg.type = 254U;
    msg.req_id = 1930470904U;
    msg.ttl = 20845U;
    msg.code = 248U;
    msg.destination.assign("TVUNWPXLIYYZCEBXEIILHAGSTAQIXTWJSHPKHNAHSYXUKLWGQNORLSUJARFRLWMRPHBFCGUFOOZMVHJOFCHIPLJTTUAQKWVDRPNCCVQPRMEJVVSYBKMJYOSFDERYODVUZIUUBQMCETLNDXLKMGQHOPHVWCEYBRXTAJBAXDMKDXBZQYOJNCWFGNWREGDAKVANFLKPIBFNSUZOZZPQSBWHNZTQLTOJZXFTEEGRGFKPMDDIDAMGGY");
    msg.source.assign("TWECLLKMZJPBVXXYMBMXDBCPNKQOBODLHYEUUKRHQCZSVUGYGCHFRUXNTDRWLGEVCDYGHMIPEIZSPFDQLEGWZCJZYMOIRFSAYALWRJNJVRWKIXSUSQXOFZFKFEOOSTWG");
    msg.acknowledge = 91U;
    msg.status = 22U;
    const signed char tmp_msg_0[] = {-13, -91, -43, 96, -110, -83, -100, -89, 45, 125, -26, -98, -85, -37, -72, -16, 97, 36, -55, 119, 16, -14, 52, 94, 77, -128, -73, -68, 6, 119, -48, -87, 37, -24, 112, -66, -112, 36, -103, -89, 59, 17, -49, -101, 72, -3, -124, -50, -88, -101, 36, -32, 57, 117, 106, 109, 86, 80, 12, 15, -29, 89, 62, -5, 55, 79, -98, -67, 44, 91, 99, -76, -79, -61, -22, -26, -32, -77, -71, 100, -112, 55, 19, 18, 5, -118, 35, 90, -9, 23, -54, 7, -78, -60, 47, -117, -5, -74, 3, 114, -42, -109, 71, -55, 126, 45, 41, 6, 72, -58, 25, 38, 25, 28, 22, 48, 5, -1, 75, 103, 4, 81, 104, 1, -65, -91, 112, -90, -37, 33, 37, -94, 76, 111, -121, -91, 92, 60, 73, 82, 51, -57, 57, 65, 3, -127, 57, -36, 58, 82, 36, -101, 20, -21, 45, -80, -64, -21, -62, 85, 106, 73, -89, 14, -43, 8, 10};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TelemetryMsg #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRange msg;
    msg.setTimeStamp(0.7823246128836834);
    msg.setSource(20822U);
    msg.setSourceEntity(33U);
    msg.setDestination(44438U);
    msg.setDestinationEntity(125U);
    msg.id = 27U;
    msg.range = 0.0044304999857459615;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRange #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRange msg;
    msg.setTimeStamp(0.13309024679526094);
    msg.setSource(40294U);
    msg.setSourceEntity(34U);
    msg.setDestination(36501U);
    msg.setDestinationEntity(252U);
    msg.id = 160U;
    msg.range = 0.37883526468029716;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRange #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRange msg;
    msg.setTimeStamp(0.923412898175871);
    msg.setSource(50535U);
    msg.setSourceEntity(78U);
    msg.setDestination(38852U);
    msg.setDestinationEntity(2U);
    msg.id = 2U;
    msg.range = 0.7164039691965144;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRange #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblBeacon msg;
    msg.setTimeStamp(0.41016496858491036);
    msg.setSource(39838U);
    msg.setSourceEntity(230U);
    msg.setDestination(8059U);
    msg.setDestinationEntity(143U);
    msg.beacon.assign("POGNWQWVFRHBNKIGOEKZASLKMDBTWDBQPIRVCJJN");
    msg.lat = 0.7867306692885081;
    msg.lon = 0.37315590655886444;
    msg.depth = 0.9558241336434927;
    msg.query_channel = 53U;
    msg.reply_channel = 119U;
    msg.transponder_delay = 152U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblBeacon #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblBeacon msg;
    msg.setTimeStamp(0.6707470681543288);
    msg.setSource(11225U);
    msg.setSourceEntity(74U);
    msg.setDestination(56018U);
    msg.setDestinationEntity(25U);
    msg.beacon.assign("HLSOWRMLXKWNQWUXFUYAWSPCDSCJIQFZCJKYKEVATRSHQTGTDXDYTXGJEFJCTQLLRCEJAFQHFIDDZFYAFPVRNTMGM");
    msg.lat = 0.18251415975362684;
    msg.lon = 0.08877203157961788;
    msg.depth = 0.9228279783296326;
    msg.query_channel = 142U;
    msg.reply_channel = 185U;
    msg.transponder_delay = 249U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblBeacon #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblBeacon msg;
    msg.setTimeStamp(0.9638930481752441);
    msg.setSource(48290U);
    msg.setSourceEntity(110U);
    msg.setDestination(3287U);
    msg.setDestinationEntity(64U);
    msg.beacon.assign("LSPYTUWSQWQWXWHBWTGVOEOUELFQGXGMPJKCACGSKFOKQTTHURDNELECCODZBNPQKBZRCLVHFNVTDAWIDNANWYZSGEYUIKAPMEVMTKRVXMBWPOTTFILJENZDNSDHRUFFYYIKCKDGIEGSQRXXAGOJNIHLOBXPYJVDAMMYZOQVBLURAMWBGCZYJZQOFTXPRHVKIQRFLSQFLSSJDIHBVKMWURFACJCJJEZXTHHNZMAUXPMVNXURPUOBP");
    msg.lat = 0.23592927801604346;
    msg.lon = 0.4540423331496024;
    msg.depth = 0.7087343689055798;
    msg.query_channel = 127U;
    msg.reply_channel = 13U;
    msg.transponder_delay = 131U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblBeacon #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblConfig msg;
    msg.setTimeStamp(0.8518056779912937);
    msg.setSource(4404U);
    msg.setSourceEntity(158U);
    msg.setDestination(48068U);
    msg.setDestinationEntity(230U);
    msg.op = 119U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblConfig #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblConfig msg;
    msg.setTimeStamp(0.6802123268889883);
    msg.setSource(57335U);
    msg.setSourceEntity(55U);
    msg.setDestination(9241U);
    msg.setDestinationEntity(84U);
    msg.op = 48U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblConfig #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblConfig msg;
    msg.setTimeStamp(0.403793143943738);
    msg.setSource(52913U);
    msg.setSourceEntity(114U);
    msg.setDestination(729U);
    msg.setDestinationEntity(224U);
    msg.op = 140U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblConfig #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticMessage msg;
    msg.setTimeStamp(0.22111903618651219);
    msg.setSource(34657U);
    msg.setSourceEntity(111U);
    msg.setDestination(63800U);
    msg.setDestinationEntity(93U);
    IMC::ArmingState tmp_msg_0;
    tmp_msg_0.state = 117U;
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticMessage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticMessage msg;
    msg.setTimeStamp(0.8451145298860836);
    msg.setSource(45201U);
    msg.setSourceEntity(203U);
    msg.setDestination(17311U);
    msg.setDestinationEntity(133U);
    IMC::FormState tmp_msg_0;
    tmp_msg_0.possimerr = 0.5082892512269724;
    tmp_msg_0.converg = 0.16540199507844222;
    tmp_msg_0.turbulence = 0.4707920742366769;
    tmp_msg_0.possimmon = 243U;
    tmp_msg_0.commmon = 177U;
    tmp_msg_0.convergmon = 8U;
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticMessage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticMessage msg;
    msg.setTimeStamp(0.2015657105947325);
    msg.setSource(33596U);
    msg.setSourceEntity(216U);
    msg.setDestination(4875U);
    msg.setDestinationEntity(224U);
    IMC::TrexPlan tmp_msg_0;
    tmp_msg_0.reactor.assign("RNMAQIPWEXSGOZUXLYOAU");
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticMessage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimAcousticMessage msg;
    msg.setTimeStamp(0.19383990780258942);
    msg.setSource(10411U);
    msg.setSourceEntity(119U);
    msg.setDestination(39438U);
    msg.setDestinationEntity(93U);
    msg.lat = 0.02663200496046092;
    msg.lon = 0.24604460307407106;
    msg.depth = 0.019473495986645717;
    msg.sentence.assign("RNTREPIGQUYUQGRZHVFDUWYNQCOVBWG");
    msg.txtime = 0.8947156310133606;
    msg.modem_type.assign("YVDEDQBSELHLIIKABLXAZIBUFWREPOMWBDOZHSWVNSTEWQTCJQFCCUTUYFSUPXAGDNZVGJSXNCQCRXJGBOGYE");
    msg.sys_src.assign("HNEMIDJMBJPVSOHNCEOXGBLRXWUQSLQZFLRILKHYSEFMTPWVVTRZELOEBNDSSQP");
    msg.seq = 22362U;
    msg.sys_dst.assign("LOIAGNHOVUFFHOEXBVZHYFDZGXYEMTPIXEITLTKLBWIHMNKNJQKIZIVRBDNKTWPPIXRGCQETOPAQLZSLHQWC");
    msg.flags = 93U;
    const signed char tmp_msg_0[] = {-90, -31, 105, -65, 97, -60, -114, 5, -38, -35, -36, -59, -99, 121, -80, -91, 55, -114, -116, 98, -12, -103, 10, 76, -105, 49, -54, 61, 80, -1, -84, -78, 7, -50, -32, 76, -41, 27, -120, 30, 55, 124, -108, 14, -9, 63, 56, 107, 13, 62, 42, -10, -39, -95, 110, 12, -25, -88, -83, -18, -79, -60, -26, -69, -2, 4, -66, -93, -109, -33, 45, -62, 8, -3, 1, -1, 119, -28, -87, -67, -96, 109, 52, 104, -61, -23, 40, -51, 50, 36, -23, 29, -27, -41, -29, 70, -93, 81, 72, -88, -114, 74, -58, -54, -127, 88, 33, 94, -128, 34, 90, 7, 16, -13, 62, 34, -120, 113, -101, -114, 52, -13, -25, -86, -80, -38, 3, 5, 117, -104, -71, 29, -21, -18, 67, -126, -112, 10, -108, -26, 99, -1, -50, -60, -34, -13, -53, -29, 93, -89, 56, -114};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimAcousticMessage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimAcousticMessage msg;
    msg.setTimeStamp(0.6934555243828431);
    msg.setSource(34168U);
    msg.setSourceEntity(179U);
    msg.setDestination(15103U);
    msg.setDestinationEntity(193U);
    msg.lat = 0.6578278489509761;
    msg.lon = 0.7550306810626326;
    msg.depth = 0.14265802980325426;
    msg.sentence.assign("SYGUTDJBXIFMJHVAWHSTGDCLZCCHAGMGCQACPXZRMYPGOIRXNCHMKMGJSYPNNAFBBL");
    msg.txtime = 0.7110920046769192;
    msg.modem_type.assign("ICGOPKMNRCWFEEFITWYHZVJGIBGSVQADSHKQZKBFTKIBCWZNMMQYZCBGNGJMLJVVZFXNDJWPTSXERKFULXVJSQSQUOEAXNRHYCUNQUJMSZAAVTAMRTOOQGLTRDEHUFODCIPTPPOTTHBZBHZJ");
    msg.sys_src.assign("GJIJPVOVDFYESLCHJLDVSUWXOOFNLKEHGQHQBIGLFMAYAXDGHHO");
    msg.seq = 40310U;
    msg.sys_dst.assign("XJLETJBGVQXSJMCZQMVRICADUZEYLZWEXGBXUCOYRFCSRYEKHTEFJVFEAODIIUVJMFPWWMHPJHAKXUSLLKFIKVZTRCLYTOGEDRP");
    msg.flags = 86U;
    const signed char tmp_msg_0[] = {82, -124, 49, 45, 2, 81, 75, 96, -114, -106, 102, 65, 94, 80, 78, 101, 101, -108, -78, 111, -56, 70, 88, -71, 48, 117, 35, 58, 83, -42, -21, -92, 126, -7, -122, -66, 92, 14, -48, 124, -41, 10, 118, 64, 96, -54, -111, -28, 61, -94, -100, -117, -102, 81, -64, -63, -21, 21, -39, 19, 56, -64, -73, 18, 111, 102, 3, -18, 23, -78, 56, -126, -30, -45, 55, 96, -39, -97, 92, -7, -111, -32, -53, 51, 111, 59, 62, 125, 55, -59, 76, 10, -14, -34, -21, -126, -87, 69, -83, 4, 114, -91, -62, -108, -102, -29, 81, 55, -6, 93, 51, -99, -3, 19, -103, -15, 48, 79, 57, 5, -36, 15, 43, -25, -44, -99, -112, 102, 47, -55, -6, -32, 34, -73, 87, -11, -32, -125, 49, 99, -115, 3, 126, 22, -59, 117, 52, 116, -123, 6, 63, 3, 66, 85, 22, -67, -3, 73, -23, 36, -53, -100, 120, -83, -61, 97, -71, -94, 84, -121, -2, -60, 117, -41, 28, -7, -85, 46, 45, -128, -37, 102, 99, -72, -66, 62, -1, -27, 25, -107, -98, -65, -114, -48, 40, -99, -69, -122, -35, 72, 70, -65, 34, -102, -64, -8, 84, 78, 77, -30, -26, -48, -1, -8, -11, 20, 83, -78, 93, -115, 75, 50, 64, -127, 12, 3, 80, 62, 97, 68, -48, -42, -115, 72, -120, -26, 54, -87, -39, -125, -87, -5, -93, -124};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimAcousticMessage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimAcousticMessage msg;
    msg.setTimeStamp(0.18705735762190356);
    msg.setSource(1547U);
    msg.setSourceEntity(220U);
    msg.setDestination(19180U);
    msg.setDestinationEntity(61U);
    msg.lat = 0.685474648964341;
    msg.lon = 0.0159446155350913;
    msg.depth = 0.9844679507592387;
    msg.sentence.assign("BELYXENIAPWGIOEZKHVNYLRTBOGMLNJNTEBLOVZZCVSREVJKFXLESZDGMQGJTIHWGABMZDUHCPSCILXZCUMWSIBTFNEUORFQSMZQLKXBETPUJHKYBCMNRMJSWCCHYOQGSDVMWDOLDJYPKAAPUDZHBTPSFAWEVHXHJAXJJDX");
    msg.txtime = 0.4434820048534749;
    msg.modem_type.assign("AMLYRVJKMIIXNYOEUOCKCTKFGANVEFWJMSEZVLETISPZZUWDNMNULSEAODOMXJDGPTHSWSRRJVBTDSVRMUHKVAPBZXKHSYIWSDDBWWIYUSIWPKHJVIOCCYPBTBVZLGUTZVGFOBJEYYHLZXQWZXCDNKLFMNFGMHQDJBAUHNXJPCMJFDACEFUAEGGGQARQTPOZWRGIARQCBRVPHIOYWJXSXKREQBQZXNPYC");
    msg.sys_src.assign("ZFSDDFQMJYEKYFYBQYRJCMJFESZHVVFIJTQDDTYQROLXXNLYBAPXCEYCUTRWFVXNLCUJIXGQAMZCCPKLVVBFNTKRAPAGBBZCIKHYYZXWJQMMDYOAPEKWSOQWMXUTTELIOMTGVVSPPIOHELSTVCPGAZAKWBWNW");
    msg.seq = 53667U;
    msg.sys_dst.assign("CMVTUTHRHJHLLKQRQBOADTHNPIMNWQYSXMYGAEPVUZLUFFMVMBXWQJWUBKEOKWGQFPHPJKFWJBIVZJLCCOCQLDEGRBOOBNMXEPDIXYRUEOIGLEHWAYAZDIVZDROUNPFWLRGYKXSSRTJUFBVBCIIKFPTQQXAKGYIBVANTSDLMQNWXTSHSMVEJCCKEGZKDRJVFGNJDUAEFXJSTSPHNZHUFZZQPRTXVGOZLBHDOIEMASYYK");
    msg.flags = 86U;
    const signed char tmp_msg_0[] = {-13, 49, -123, 113, -17, -36, -124, -119, 42, 81, -93, 48, -79, 66, 55, 116, -81, -2, 111, -54, -34, 96, 93, -83, -99, -86, -52, 105, 113, 84, 115, 124, 23, 37, 61, 97, -41, 97, 94, 79, 58, -3, 62, -29, 53, -3, -5, 122, -68, 55, 91, 113, -68, -39, 72, 112, 80, 89, -68, 12, 9, -92, 100, -93};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimAcousticMessage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticOperation msg;
    msg.setTimeStamp(0.9868315822074303);
    msg.setSource(49630U);
    msg.setSourceEntity(33U);
    msg.setDestination(31879U);
    msg.setDestinationEntity(220U);
    msg.op = 234U;
    msg.system.assign("YQNLNZRUVGDEDTJLUPSOBPVWFBTHIZQKELOXUPKRMTUJJPHXOMTPRQKQYFHXOGGGKWVADMYYXFUHQTDAGDHNWAENFBOHNZIWVJIKWXZPHCUZESJIMODNHQEGWYARBWNAFDFMRKPQSJXVWOCEJVOIWPILXYMWENLGLTHRMSXCEDPCMTBJDOIYTQFRLLCILBNRB");
    msg.range = 0.8563098931394107;
    IMC::DynamicsSimParam tmp_msg_0;
    tmp_msg_0.op = 84U;
    tmp_msg_0.tas2acc_pgain = 0.22461749953153287;
    tmp_msg_0.bank2p_pgain = 0.4400018726538055;
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticOperation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticOperation msg;
    msg.setTimeStamp(0.35585141827024713);
    msg.setSource(20829U);
    msg.setSourceEntity(119U);
    msg.setDestination(6604U);
    msg.setDestinationEntity(254U);
    msg.op = 40U;
    msg.system.assign("OAQSLFCPWDEWIKRTSXUWRJREJXDBHYXSJCDBXVQDVTHIIAOCBGILM");
    msg.range = 0.5926053336764625;
    IMC::Formation tmp_msg_0;
    tmp_msg_0.formation_name.assign("YPLRAYTDPRDTXCNZMLJFCLXSJQKBJZIGNPTPLFWAFSQJSZCDCFIINSICRRPDBYTASELNFEMVVIYGTOCSPRTSXAGWKYLKPHGQBLKJYQWGPIXOSFFWVNCQMWWPDEOVOHWLTHBOKZAJOEUQEXAZZYBRXNANPJBHHKWBNUWXCGRICCZBUNTJXAYVDUKQOZVWEJADUFSLHKZOQRRXNBGSMMVAKMHIDVYQMTEU");
    tmp_msg_0.type = 221U;
    tmp_msg_0.op = 164U;
    tmp_msg_0.group_name.assign("KZRJWMTUDEFQMUVQQBVXVMVCQTANPPKGPGHUIITWJOPKONBKSOBMBEDGRXYMAPWAQYOSXSMXHCMMKOAVNABLHVODWUDGDZRWEGQIUPIJFNGZOZSTHQECBJCEI");
    tmp_msg_0.plan_id.assign("NHUQSMKXNIRLGFVVCEDPQOFCRJLIHFSUXPOJNSRFPTXXAIQFOYGVLATZARAQIVWUJICSBFREIYSCYWLQBCOBCKEZJJOTUHWZMGKDJBYNFLJLHISZONWNKDBUAAMEZTHZOBQTLPCFZYNMHPKEPXCMLIKSWDQMFVBWUGYWTKGVVRVGKTTDJIICDYMMUHGLHUYDSCZRAUE");
    tmp_msg_0.description.assign("WTIZTTBPLTFYXYCZENLQZASSOENYGVLKBEEWDABBEVIBBFHSUWPZHWJPMJPSCXMUQCKXSTSOWAQFMWNM");
    tmp_msg_0.reference_frame = 124U;
    IMC::VehicleFormationParticipant tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vid = 48953U;
    tmp_tmp_msg_0_0.off_x = 0.957393776318828;
    tmp_tmp_msg_0_0.off_y = 0.17647419035136913;
    tmp_tmp_msg_0_0.off_z = 0.44514564383305943;
    tmp_msg_0.participants.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.leader_bank_lim = 0.2351954646254849;
    tmp_msg_0.leader_speed_min = 0.7313726334021613;
    tmp_msg_0.leader_speed_max = 0.8072633133440477;
    tmp_msg_0.leader_alt_min = 0.17943652958979595;
    tmp_msg_0.leader_alt_max = 0.055494993704955475;
    tmp_msg_0.pos_sim_err_lim = 0.37908142638724995;
    tmp_msg_0.pos_sim_err_wrn = 0.6931606844907566;
    tmp_msg_0.pos_sim_err_timeout = 40362U;
    tmp_msg_0.converg_max = 0.05576015145978208;
    tmp_msg_0.converg_timeout = 61014U;
    tmp_msg_0.comms_timeout = 9035U;
    tmp_msg_0.turb_lim = 0.04967709767186734;
    tmp_msg_0.custom.assign("KTEPACLHLGRIZUBNVJQRXQFTQFRHCOZEPFMVNGOOTWPMCMRMSSQQKJGJDQIFWGXXEDNDBAIFVSZHUNYAXMTQLJPHCYVVMTKSWWALDCXSHBGYCVBJYWSBAELFRUARTXJBNQNBVLJEONVNKFVGTDZZEHAYJPESJUXZIDMMTXDGPWXQINBYSBOSTMEGOWOTKIGMKWAOUYCLKDUEUPCRRLFYY");
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticOperation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticOperation msg;
    msg.setTimeStamp(0.7944668785708002);
    msg.setSource(49971U);
    msg.setSourceEntity(53U);
    msg.setDestination(28816U);
    msg.setDestinationEntity(142U);
    msg.op = 81U;
    msg.system.assign("DZJUAJWHLVBQMHQRGMIHLZCNOVSWFEHLXBZPTAKTGXXRBIBHFRYETQYWWUNYUQIPTBUAFOWWXMYWMTNCNSHGOICODTMDWOZYSXAKPCDWMFLEAHTPQPZBNNLJVHJEAZLZJFEDSDCUQVWKTFSOQIPLMLKKO");
    msg.range = 0.21461987057709053;
    IMC::PowerChannelControl tmp_msg_0;
    tmp_msg_0.name.assign("JYGEBXRDAHLSMAOWZFJPFUNPRSJZCKSOWIYMMAAJVMIDYLPZKRCHUUURPEJAESSEVPONQGFZQTOUOAJYSQXGHWGGQHVFRAHUJEIAWNZYIZOXYNKJGVNEDIYZKRBVYXTPTDOTLF");
    tmp_msg_0.op = 80U;
    tmp_msg_0.sched_time = 0.22783922090632414;
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticOperation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystemsQuery msg;
    msg.setTimeStamp(0.7735477647993868);
    msg.setSource(39470U);
    msg.setSourceEntity(42U);
    msg.setDestination(120U);
    msg.setDestinationEntity(103U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystemsQuery #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystemsQuery msg;
    msg.setTimeStamp(0.7334256546087474);
    msg.setSource(38698U);
    msg.setSourceEntity(71U);
    msg.setDestination(43066U);
    msg.setDestinationEntity(198U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystemsQuery #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystemsQuery msg;
    msg.setTimeStamp(0.3576544115896342);
    msg.setSource(60075U);
    msg.setSourceEntity(237U);
    msg.setDestination(31805U);
    msg.setDestinationEntity(191U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystemsQuery #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystems msg;
    msg.setTimeStamp(0.7651847100306224);
    msg.setSource(51155U);
    msg.setSourceEntity(42U);
    msg.setDestination(57783U);
    msg.setDestinationEntity(100U);
    msg.list.assign("ERGJFZVAOBPFBNKXHGLWYGSGNOQHLZAQMWQLKRTEELCMJEGCCKIDJDYAUURAMZISQIREUZJOCVLYGECYQRIUHBRSBNLXZXEUPXSHITEGFTDJXOMVEJGPMLPUKAYBCHPVRDGEMWVXMKAYTWMWNQBKSVCDBZHYMDGYIDNTSBFLZPJDUVPKOSYOANZAYHACJRWMTSCPSIQZUOORWLNXFIBTNFKKQAPFRWFHUXPTONUXVQKWDOVFSFBVITWTHDCJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystems #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystems msg;
    msg.setTimeStamp(0.039744883299735134);
    msg.setSource(16806U);
    msg.setSourceEntity(164U);
    msg.setDestination(36268U);
    msg.setDestinationEntity(56U);
    msg.list.assign("UETERGBQYOKABNSNBDEOVDFRKVITOWICYQKZZBISMUYGGTXWUPEHAXWIMGQYZHAHFVNPNSJERZJMVQJMLGAAHKRHBOLLFMEBCSHTKSQQVNUOUBNQAJTPFWPTWOZYVCJDZGWLFZEZJYPGSQQDWCSIETFYCUDKPQXWUTPRAFCOVAGVIJSMXBFLTMLXDMWRURKMGDPNRKXKWXLIHFIUCNLXRCTUZLEBOHJDNPHLE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystems #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystems msg;
    msg.setTimeStamp(0.2985925847456461);
    msg.setSource(47845U);
    msg.setSourceEntity(211U);
    msg.setDestination(1810U);
    msg.setDestinationEntity(19U);
    msg.list.assign("DLMRNXPEGGXPEUPKQCJANNPYZSBRIPYYCHOMOULSFGAKISGWFYLJJEBUUSWUIZXREWCTDUGVFCKFTJCEKTNKEWCVYXMLDSRNWXBVRWRTSOIRVJFJAFREITEDIOOJQZPQDKMTGZVBNGFWWSLKAMQZPDMANYFWJHBZCYTFKP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystems #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticLink msg;
    msg.setTimeStamp(0.26033034717180503);
    msg.setSource(13318U);
    msg.setSourceEntity(9U);
    msg.setDestination(42527U);
    msg.setDestinationEntity(222U);
    msg.peer.assign("KQLNCPXSQRBFYRSKGWHUQUAEPNGYSAJSXNTRYVDVFSQOGIIWOROSCIJYITSQPNYZWZF");
    msg.rssi = 0.4508783115655741;
    msg.integrity = 23183U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticLink #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticLink msg;
    msg.setTimeStamp(0.7598418793516934);
    msg.setSource(50210U);
    msg.setSourceEntity(19U);
    msg.setDestination(50277U);
    msg.setDestinationEntity(232U);
    msg.peer.assign("RXILFPJBZQAPSTXJSHNGNQWKYIEBIWRJXLUFDLOGHUWZLZECVHUBPWASAYZIPCGTTJMAWRKMKFVQMUYLHNHNYRTFJIBXLBFJGZXQDMUUQNAWCKGBIVIFITBBREGAXNDBWFVVCJDYMTRSQSZCPWMAUXUEIOYAZSUOQKEISHOMQLXNGTDPVODHPRDUNCWTAVYEORVOKRJBCGQVTYKOFCFJOE");
    msg.rssi = 0.09964943930291958;
    msg.integrity = 9511U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticLink #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticLink msg;
    msg.setTimeStamp(0.8078048434539297);
    msg.setSource(33612U);
    msg.setSourceEntity(33U);
    msg.setDestination(980U);
    msg.setDestinationEntity(109U);
    msg.peer.assign("HXOTFGIYOVETDQZQRFAYCRTGENPOAESBSB");
    msg.rssi = 0.7928138659174879;
    msg.integrity = 62513U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticLink #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRequest msg;
    msg.setTimeStamp(0.6509191316139833);
    msg.setSource(11984U);
    msg.setSourceEntity(214U);
    msg.setDestination(8688U);
    msg.setDestinationEntity(159U);
    msg.req_id = 49663U;
    msg.destination.assign("GRNYGOHQINONUIBWCSFFTJDOHPAHOSWUSMHOFWQWUAFYPHWNGAEVZBDIMMGCAGCKTYKECRLHUGQEVOGNPDELZWMPXACYUEDMO");
    msg.timeout = 0.35177088090700237;
    msg.range = 0.7943267575214505;
    msg.type = 160U;
    IMC::CcuEvent tmp_msg_0;
    tmp_msg_0.type = 28U;
    tmp_msg_0.id.assign("LPUBVAAEVWOCAPQISMZNFOSQZPRDQCNGHOZZBVNFHBCFHRKTSJYIVTBXHJFZYDLIHTEUGFWKJDNISKOBXJCGRSYXNRKAGBNHPCYGMDPGSVKN");
    IMC::ArmingState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.state = 117U;
    tmp_msg_0.arg.set(tmp_tmp_msg_0_0);
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRequest msg;
    msg.setTimeStamp(0.4772756006660662);
    msg.setSource(42562U);
    msg.setSourceEntity(117U);
    msg.setDestination(35590U);
    msg.setDestinationEntity(166U);
    msg.req_id = 30862U;
    msg.destination.assign("NFXWIMYTZFATGJSVFAOBERSGZYTHDGFFGXIKUARQBEPLHMRXXYQWKOIULVUGEQTZYCKRSZTWLSZQENGTABSRPUYNJSHIAPKQDCSCFEYYHTZNMVEJUIPDDSIOWEWPUMJBMWXILHRDUEOBCJTCHLVKGCDFRNKODOCNEXHPJHLVZVTPZHIOYMPQCAORNPBGCISBDWNLWMJESA");
    msg.timeout = 0.8970228269230748;
    msg.range = 0.7378305466027604;
    msg.type = 2U;
    IMC::HistoricDataQuery tmp_msg_0;
    tmp_msg_0.req_id = 25509U;
    tmp_msg_0.type = 91U;
    tmp_msg_0.max_size = 37455U;
    IMC::HistoricData tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.base_lat = 0.9609200423641853;
    tmp_tmp_msg_0_0.base_lon = 0.4066111699241485;
    tmp_tmp_msg_0_0.base_time = 0.8268437886193741;
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRequest msg;
    msg.setTimeStamp(0.7038570391422527);
    msg.setSource(25050U);
    msg.setSourceEntity(241U);
    msg.setDestination(35942U);
    msg.setDestinationEntity(92U);
    msg.req_id = 41553U;
    msg.destination.assign("ACYVLKMHNTGYAXXDKHDRPZQCOTLNWSHERWNJVNWGGEQIZDKWPYOAEUXHUNGZVSYGUEBIXSBOOQWRIACOQKKMSVPJLTYWSNFFHSLMNQPAXPSWRVEZBNJCKEWSTLMLQULGZULIRGRAABUPDGCZHDDDVZWVBMCQBHCNPFAMTOCTCVYRZIPTOBULDQJMKFORPXEKTTFAUVYYFPVYIXQIYMJMFWJZIDNLJRIBEIFGSMJCSUUBHOKEJHFOKQBGJZDA");
    msg.timeout = 0.04172299899542131;
    msg.range = 0.7981917018584476;
    msg.type = 185U;
    IMC::UamTxRange tmp_msg_0;
    tmp_msg_0.seq = 25805U;
    tmp_msg_0.sys_dst.assign("JOLRYXUYZMCKXPOMKVXSELLXWSFMYUGWOWPDPUEPTNXIHDAEBHLRIKIYCJRURQENVUAFTOQMWZGXWTTIARHBIMQCTKZBALQIPITRSKGGJBQHHXBPHYNRQZTVEBBWTUAXBSEPOBFKZYMLELWOVFVUNGMDAOFF");
    tmp_msg_0.timeout = 0.35293722413208506;
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticStatus msg;
    msg.setTimeStamp(0.9066250452026775);
    msg.setSource(4566U);
    msg.setSourceEntity(171U);
    msg.setDestination(49139U);
    msg.setDestinationEntity(54U);
    msg.req_id = 63285U;
    msg.type = 106U;
    msg.status = 116U;
    msg.info.assign("HWCIBZDJFMNYXWAFWPTPLSKGDCPQCYJRWFVYHBYHQTXPREGNVKOCTMLOBOJDPVZZCHOPDSTZJDAQLJRLVFFJWXSTNDMCXVSULDPXTXXVJQUNSQILGJMNGWHOGKZULMWETIXERVYAUACZECAQYEXRFSDGKEMLNVMHKTIINVZBQKKVSUEBRAEGEYIJTZCNWIFHTFHWPARICRSOMKZJLKHPBEUBYIGAYAUORSQSUDWHXRNOFMBQPINUOQBUGLFDO");
    msg.range = 0.1828585575464987;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticStatus msg;
    msg.setTimeStamp(0.17289588449477844);
    msg.setSource(39519U);
    msg.setSourceEntity(77U);
    msg.setDestination(18183U);
    msg.setDestinationEntity(163U);
    msg.req_id = 20590U;
    msg.type = 129U;
    msg.status = 147U;
    msg.info.assign("MWXHRIKSBHGNVLBOTZPEOZZRSVKBVTNEAG");
    msg.range = 0.7008413698806757;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticStatus msg;
    msg.setTimeStamp(0.5936368691301492);
    msg.setSource(33123U);
    msg.setSourceEntity(205U);
    msg.setDestination(45752U);
    msg.setDestinationEntity(196U);
    msg.req_id = 26835U;
    msg.type = 231U;
    msg.status = 248U;
    msg.info.assign("ZOCHZNYCNQNQIXMVJTEFEOTRZFPWUFCDABQRIJPOJCDGYGSTONGNDFOLATAIIPTOQHQROVNEQEXAJIVSSCFENEKOMYCXTBABXBSYZTHVBCKYMBUIDZWUQMPDROIFCIKWQWBZUHCRHSGZWTYG");
    msg.range = 0.12358794404433038;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRelease msg;
    msg.setTimeStamp(0.07029187879808507);
    msg.setSource(59529U);
    msg.setSourceEntity(188U);
    msg.setDestination(31544U);
    msg.setDestinationEntity(243U);
    msg.system.assign("QMPWUIDYWKTOKMFKZMLVGNLCMJHTCSRQUYXOJZLWLAWFXYJHSQIBKUCHTSMJXAENLZNDNDCKZQUQPZRBQKXGKGSNMKXEBOMYOXGRDCTPYDUICVLUQFJNOOOPGEDKAOHVGCOVTCPQFLJIPCYMGRIFZIQJXYWHMOIRTEMTNAISBRGXBYHHDPBDPLAVVWWRUABAEYEBFTAVSURHRGQANXSTJPEBHSZNWJEHGFWPC");
    msg.op = 156U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRelease #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRelease msg;
    msg.setTimeStamp(0.38531220431268787);
    msg.setSource(33322U);
    msg.setSourceEntity(145U);
    msg.setDestination(18471U);
    msg.setDestinationEntity(188U);
    msg.system.assign("IDSFGQSSAESQZLXIQKMLMSUPFCQKUTYXEGIKMUGZRHZCVGOTRDPZNTXSYTKVRUDSZMOWVLDNRBZNBLRIHGRLHYQHRENUVDVLROCANEFYHKLBBNFXPLNUONSHVDWBMCFLFTPAPYJJJYIGIWCBIMQIDPKBZABTAXIWWWXUQLMKCQCOPY");
    msg.op = 120U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRelease #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRelease msg;
    msg.setTimeStamp(0.26119219366104574);
    msg.setSource(65368U);
    msg.setSourceEntity(195U);
    msg.setDestination(43815U);
    msg.setDestinationEntity(178U);
    msg.system.assign("JKEUIGIYPKFMO");
    msg.op = 19U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRelease #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rpm msg;
    msg.setTimeStamp(0.4561646597482196);
    msg.setSource(45949U);
    msg.setSourceEntity(19U);
    msg.setDestination(22227U);
    msg.setDestinationEntity(166U);
    msg.value = 3221;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rpm #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rpm msg;
    msg.setTimeStamp(0.8622827181817234);
    msg.setSource(4301U);
    msg.setSourceEntity(184U);
    msg.setDestination(30611U);
    msg.setDestinationEntity(158U);
    msg.value = 7955;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rpm #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rpm msg;
    msg.setTimeStamp(0.9511459525073601);
    msg.setSource(1725U);
    msg.setSourceEntity(104U);
    msg.setDestination(60281U);
    msg.setDestinationEntity(127U);
    msg.value = 19340;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rpm #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Voltage msg;
    msg.setTimeStamp(0.94623368727141);
    msg.setSource(12366U);
    msg.setSourceEntity(160U);
    msg.setDestination(53768U);
    msg.setDestinationEntity(178U);
    msg.value = 0.11274643175697596;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Voltage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Voltage msg;
    msg.setTimeStamp(0.9224016698780516);
    msg.setSource(4527U);
    msg.setSourceEntity(234U);
    msg.setDestination(12218U);
    msg.setDestinationEntity(141U);
    msg.value = 0.6711526295619685;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Voltage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Voltage msg;
    msg.setTimeStamp(0.7764525683331905);
    msg.setSource(60892U);
    msg.setSourceEntity(194U);
    msg.setDestination(59818U);
    msg.setDestinationEntity(59U);
    msg.value = 0.1557684294269972;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Voltage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Current msg;
    msg.setTimeStamp(0.9966904713968425);
    msg.setSource(17475U);
    msg.setSourceEntity(64U);
    msg.setDestination(1944U);
    msg.setDestinationEntity(103U);
    msg.value = 0.4365680076289751;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Current #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Current msg;
    msg.setTimeStamp(0.6855368715242374);
    msg.setSource(26897U);
    msg.setSourceEntity(58U);
    msg.setDestination(58798U);
    msg.setDestinationEntity(239U);
    msg.value = 0.1923773659024819;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Current #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Current msg;
    msg.setTimeStamp(0.8265633160458514);
    msg.setSource(53988U);
    msg.setSourceEntity(203U);
    msg.setDestination(60492U);
    msg.setDestinationEntity(0U);
    msg.value = 0.8676078366950161;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Current #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFix msg;
    msg.setTimeStamp(0.22669031166822318);
    msg.setSource(3019U);
    msg.setSourceEntity(226U);
    msg.setDestination(9490U);
    msg.setDestinationEntity(188U);
    msg.validity = 27708U;
    msg.type = 66U;
    msg.utc_year = 10929U;
    msg.utc_month = 98U;
    msg.utc_day = 231U;
    msg.utc_time = 0.12190757241103023;
    msg.lat = 0.4515134998467899;
    msg.lon = 0.3183661354749767;
    msg.height = 0.4774014892325169;
    msg.satellites = 140U;
    msg.cog = 0.8229863744439088;
    msg.sog = 0.9808896193182951;
    msg.hdop = 0.45657225216328057;
    msg.vdop = 0.20500541454018395;
    msg.hacc = 0.7811587677436214;
    msg.vacc = 0.5761209896468861;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFix #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFix msg;
    msg.setTimeStamp(0.8017492068708255);
    msg.setSource(7050U);
    msg.setSourceEntity(67U);
    msg.setDestination(50685U);
    msg.setDestinationEntity(176U);
    msg.validity = 17687U;
    msg.type = 158U;
    msg.utc_year = 15019U;
    msg.utc_month = 149U;
    msg.utc_day = 108U;
    msg.utc_time = 0.9054533082624312;
    msg.lat = 0.9275500905902178;
    msg.lon = 0.5955682801349079;
    msg.height = 0.8405020193253478;
    msg.satellites = 58U;
    msg.cog = 0.39428032986586536;
    msg.sog = 0.8817721332250543;
    msg.hdop = 0.3937327606193147;
    msg.vdop = 0.08420319987751868;
    msg.hacc = 0.5468649966051096;
    msg.vacc = 0.8354516213507299;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFix #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFix msg;
    msg.setTimeStamp(0.9115441812815877);
    msg.setSource(30038U);
    msg.setSourceEntity(117U);
    msg.setDestination(8513U);
    msg.setDestinationEntity(127U);
    msg.validity = 4741U;
    msg.type = 169U;
    msg.utc_year = 21032U;
    msg.utc_month = 22U;
    msg.utc_day = 167U;
    msg.utc_time = 0.3077714687896481;
    msg.lat = 0.12293167509294378;
    msg.lon = 0.03458770837561742;
    msg.height = 0.27782495111094274;
    msg.satellites = 184U;
    msg.cog = 0.6384441590949232;
    msg.sog = 0.3654852496015796;
    msg.hdop = 0.6525093490038232;
    msg.vdop = 0.5936697214332038;
    msg.hacc = 0.07417447342404926;
    msg.vacc = 0.25674108238468396;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFix #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAngles msg;
    msg.setTimeStamp(0.08301041596363268);
    msg.setSource(27502U);
    msg.setSourceEntity(88U);
    msg.setDestination(40504U);
    msg.setDestinationEntity(28U);
    msg.time = 0.034494826921415256;
    msg.phi = 0.32973186714416813;
    msg.theta = 0.3995692618826998;
    msg.psi = 0.48145350910565454;
    msg.psi_magnetic = 0.7206923135125083;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAngles #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAngles msg;
    msg.setTimeStamp(0.02804866510041437);
    msg.setSource(20036U);
    msg.setSourceEntity(164U);
    msg.setDestination(33193U);
    msg.setDestinationEntity(4U);
    msg.time = 0.6063534871289469;
    msg.phi = 0.36926544566659536;
    msg.theta = 0.33909461364203886;
    msg.psi = 0.9313972812420617;
    msg.psi_magnetic = 0.3781009082603809;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAngles #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAngles msg;
    msg.setTimeStamp(0.1643301505905811);
    msg.setSource(29349U);
    msg.setSourceEntity(35U);
    msg.setDestination(44298U);
    msg.setDestinationEntity(101U);
    msg.time = 0.33737486203311073;
    msg.phi = 0.20536307127351328;
    msg.theta = 0.3575775051307303;
    msg.psi = 0.2968919730307302;
    msg.psi_magnetic = 0.28851546239469816;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAngles #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAnglesDelta msg;
    msg.setTimeStamp(0.5306688181828055);
    msg.setSource(60904U);
    msg.setSourceEntity(77U);
    msg.setDestination(49327U);
    msg.setDestinationEntity(50U);
    msg.time = 0.4483031913273918;
    msg.x = 0.5633044979392423;
    msg.y = 0.8492761276838665;
    msg.z = 0.9520319496014897;
    msg.timestep = 0.2704970244840955;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAnglesDelta #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAnglesDelta msg;
    msg.setTimeStamp(0.800635522012139);
    msg.setSource(6011U);
    msg.setSourceEntity(64U);
    msg.setDestination(63156U);
    msg.setDestinationEntity(248U);
    msg.time = 0.4571718669784217;
    msg.x = 0.09623538726944836;
    msg.y = 0.08428999642453983;
    msg.z = 0.13142820768438346;
    msg.timestep = 0.2526523329185736;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAnglesDelta #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAnglesDelta msg;
    msg.setTimeStamp(0.024569761673103763);
    msg.setSource(55688U);
    msg.setSourceEntity(229U);
    msg.setDestination(53174U);
    msg.setDestinationEntity(158U);
    msg.time = 0.5917211113743595;
    msg.x = 0.17845328029846974;
    msg.y = 0.8148106760353871;
    msg.z = 0.13247517153945665;
    msg.timestep = 0.7234321851166047;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAnglesDelta #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AngularVelocity msg;
    msg.setTimeStamp(0.6528864097746863);
    msg.setSource(20652U);
    msg.setSourceEntity(234U);
    msg.setDestination(44271U);
    msg.setDestinationEntity(224U);
    msg.time = 0.5099280712985909;
    msg.x = 0.015719274236210445;
    msg.y = 0.8835591633505646;
    msg.z = 0.2325532924038255;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AngularVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AngularVelocity msg;
    msg.setTimeStamp(0.226071022893515);
    msg.setSource(19789U);
    msg.setSourceEntity(238U);
    msg.setDestination(9817U);
    msg.setDestinationEntity(163U);
    msg.time = 0.37202565468730453;
    msg.x = 0.39928334872839355;
    msg.y = 0.6763868520207456;
    msg.z = 0.707209219888965;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AngularVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AngularVelocity msg;
    msg.setTimeStamp(0.797507768756144);
    msg.setSource(11676U);
    msg.setSourceEntity(1U);
    msg.setDestination(7922U);
    msg.setDestinationEntity(142U);
    msg.time = 0.761277640293158;
    msg.x = 0.5980392064872425;
    msg.y = 0.015135221154521816;
    msg.z = 0.172522520979421;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AngularVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Acceleration msg;
    msg.setTimeStamp(0.9347328773501632);
    msg.setSource(48811U);
    msg.setSourceEntity(114U);
    msg.setDestination(59932U);
    msg.setDestinationEntity(68U);
    msg.time = 0.12874854278523318;
    msg.x = 0.9983475930033773;
    msg.y = 0.1177374970468077;
    msg.z = 0.871107798298888;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Acceleration #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Acceleration msg;
    msg.setTimeStamp(0.24666060180632832);
    msg.setSource(28970U);
    msg.setSourceEntity(156U);
    msg.setDestination(8647U);
    msg.setDestinationEntity(28U);
    msg.time = 0.5669458760204832;
    msg.x = 0.9820037793323109;
    msg.y = 0.3769431183029369;
    msg.z = 0.867541474903428;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Acceleration #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Acceleration msg;
    msg.setTimeStamp(0.54451080445976);
    msg.setSource(32410U);
    msg.setSourceEntity(31U);
    msg.setDestination(46720U);
    msg.setDestinationEntity(88U);
    msg.time = 0.8864674618905034;
    msg.x = 0.3627766194209997;
    msg.y = 0.009556024086844084;
    msg.z = 0.22522965051466548;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Acceleration #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MagneticField msg;
    msg.setTimeStamp(0.3368502832112351);
    msg.setSource(57723U);
    msg.setSourceEntity(43U);
    msg.setDestination(43012U);
    msg.setDestinationEntity(229U);
    msg.time = 0.8939132716730851;
    msg.x = 0.45492475116564646;
    msg.y = 0.9780177604029241;
    msg.z = 0.18847901833566783;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MagneticField #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MagneticField msg;
    msg.setTimeStamp(0.3014564875142284);
    msg.setSource(41348U);
    msg.setSourceEntity(103U);
    msg.setDestination(22155U);
    msg.setDestinationEntity(102U);
    msg.time = 0.9194582014304049;
    msg.x = 0.0071690737701198826;
    msg.y = 0.9092487522507873;
    msg.z = 0.5100866610636613;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MagneticField #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MagneticField msg;
    msg.setTimeStamp(0.6058369597884923);
    msg.setSource(4514U);
    msg.setSourceEntity(85U);
    msg.setDestination(52366U);
    msg.setDestinationEntity(240U);
    msg.time = 0.35621730219726533;
    msg.x = 0.07589545099392614;
    msg.y = 0.9574215478236857;
    msg.z = 0.7303853721861117;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MagneticField #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroundVelocity msg;
    msg.setTimeStamp(0.7992244707836226);
    msg.setSource(8740U);
    msg.setSourceEntity(29U);
    msg.setDestination(12549U);
    msg.setDestinationEntity(11U);
    msg.validity = 208U;
    msg.x = 0.8781538980854513;
    msg.y = 0.7933351750353739;
    msg.z = 0.7453986285558674;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroundVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroundVelocity msg;
    msg.setTimeStamp(0.5866297566240274);
    msg.setSource(36584U);
    msg.setSourceEntity(235U);
    msg.setDestination(58698U);
    msg.setDestinationEntity(127U);
    msg.validity = 237U;
    msg.x = 0.9507166897823723;
    msg.y = 0.2816386226279375;
    msg.z = 0.9643222971683768;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroundVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroundVelocity msg;
    msg.setTimeStamp(0.19000582306142266);
    msg.setSource(4011U);
    msg.setSourceEntity(157U);
    msg.setDestination(48265U);
    msg.setDestinationEntity(71U);
    msg.validity = 149U;
    msg.x = 0.6953289465969276;
    msg.y = 0.868599580330415;
    msg.z = 0.5492768882461082;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroundVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterVelocity msg;
    msg.setTimeStamp(0.9680362806239671);
    msg.setSource(46675U);
    msg.setSourceEntity(36U);
    msg.setDestination(23214U);
    msg.setDestinationEntity(25U);
    msg.validity = 1U;
    msg.x = 0.2812322537154931;
    msg.y = 0.5874146978718138;
    msg.z = 0.8221263332492451;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterVelocity msg;
    msg.setTimeStamp(0.6887285434571867);
    msg.setSource(65382U);
    msg.setSourceEntity(221U);
    msg.setDestination(31471U);
    msg.setDestinationEntity(94U);
    msg.validity = 124U;
    msg.x = 0.8907995653850135;
    msg.y = 0.8523669266281001;
    msg.z = 0.6513475928318626;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterVelocity msg;
    msg.setTimeStamp(0.924133411948309);
    msg.setSource(43141U);
    msg.setSourceEntity(5U);
    msg.setDestination(18184U);
    msg.setDestinationEntity(166U);
    msg.validity = 115U;
    msg.x = 0.09977299518515825;
    msg.y = 0.24879550086568547;
    msg.z = 0.7742454101129272;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VelocityDelta msg;
    msg.setTimeStamp(0.23890964699961514);
    msg.setSource(17093U);
    msg.setSourceEntity(195U);
    msg.setDestination(58624U);
    msg.setDestinationEntity(84U);
    msg.time = 0.8344917951443568;
    msg.x = 0.5474691278349995;
    msg.y = 0.14025065953977278;
    msg.z = 0.2242100429596453;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VelocityDelta #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VelocityDelta msg;
    msg.setTimeStamp(0.5668913268563415);
    msg.setSource(38548U);
    msg.setSourceEntity(63U);
    msg.setDestination(43334U);
    msg.setDestinationEntity(97U);
    msg.time = 0.6044568139574537;
    msg.x = 0.034827102171614555;
    msg.y = 0.8785541878552885;
    msg.z = 0.930962201443004;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VelocityDelta #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VelocityDelta msg;
    msg.setTimeStamp(0.4101848662576596);
    msg.setSource(40310U);
    msg.setSourceEntity(20U);
    msg.setDestination(54653U);
    msg.setDestinationEntity(178U);
    msg.time = 0.18754158216791206;
    msg.x = 0.6047971684470809;
    msg.y = 0.4658545372190108;
    msg.z = 0.2129508972366735;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VelocityDelta #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Distance msg;
    msg.setTimeStamp(0.6563943394602553);
    msg.setSource(62971U);
    msg.setSourceEntity(230U);
    msg.setDestination(54322U);
    msg.setDestinationEntity(220U);
    msg.validity = 37U;
    msg.value = 0.16091302052328738;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Distance #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Distance msg;
    msg.setTimeStamp(0.7817470217105057);
    msg.setSource(47184U);
    msg.setSourceEntity(37U);
    msg.setDestination(30423U);
    msg.setDestinationEntity(92U);
    msg.validity = 190U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.6308897830730185;
    tmp_msg_0.beam_height = 0.9888428891917859;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.8941299581508814;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Distance #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Distance msg;
    msg.setTimeStamp(0.9334418263987426);
    msg.setSource(57109U);
    msg.setSourceEntity(94U);
    msg.setDestination(64648U);
    msg.setDestinationEntity(223U);
    msg.validity = 117U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.24272180028176582;
    tmp_msg_0.beam_height = 0.1800044087097692;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.6602863596230392;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Distance #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Temperature msg;
    msg.setTimeStamp(0.8942217658077443);
    msg.setSource(34849U);
    msg.setSourceEntity(7U);
    msg.setDestination(12302U);
    msg.setDestinationEntity(122U);
    msg.value = 0.6675463410806938;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Temperature #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Temperature msg;
    msg.setTimeStamp(0.8914585882266066);
    msg.setSource(13904U);
    msg.setSourceEntity(197U);
    msg.setDestination(56392U);
    msg.setDestinationEntity(194U);
    msg.value = 0.9037253867378694;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Temperature #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Temperature msg;
    msg.setTimeStamp(0.9936168751728314);
    msg.setSource(30477U);
    msg.setSourceEntity(109U);
    msg.setDestination(30848U);
    msg.setDestinationEntity(84U);
    msg.value = 0.24159862462279702;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Temperature #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pressure msg;
    msg.setTimeStamp(0.4832175644443345);
    msg.setSource(16313U);
    msg.setSourceEntity(75U);
    msg.setDestination(41549U);
    msg.setDestinationEntity(223U);
    msg.value = 0.060493633579388195;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pressure #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pressure msg;
    msg.setTimeStamp(0.32878425636733566);
    msg.setSource(27249U);
    msg.setSourceEntity(194U);
    msg.setDestination(16952U);
    msg.setDestinationEntity(30U);
    msg.value = 0.20248109086309762;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pressure #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pressure msg;
    msg.setTimeStamp(0.9316478945717005);
    msg.setSource(47019U);
    msg.setSourceEntity(183U);
    msg.setDestination(28547U);
    msg.setDestinationEntity(78U);
    msg.value = 0.7232794343293837;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pressure #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Depth msg;
    msg.setTimeStamp(0.5945170433729361);
    msg.setSource(13004U);
    msg.setSourceEntity(69U);
    msg.setDestination(38162U);
    msg.setDestinationEntity(103U);
    msg.value = 0.6963619789915063;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Depth #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Depth msg;
    msg.setTimeStamp(0.7061149332046904);
    msg.setSource(53887U);
    msg.setSourceEntity(230U);
    msg.setDestination(30048U);
    msg.setDestinationEntity(51U);
    msg.value = 0.330814562749706;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Depth #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Depth msg;
    msg.setTimeStamp(0.19361039663569857);
    msg.setSource(23035U);
    msg.setSourceEntity(181U);
    msg.setDestination(17604U);
    msg.setDestinationEntity(170U);
    msg.value = 0.6630326950830571;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Depth #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DepthOffset msg;
    msg.setTimeStamp(0.3948918415496171);
    msg.setSource(3137U);
    msg.setSourceEntity(9U);
    msg.setDestination(18753U);
    msg.setDestinationEntity(0U);
    msg.value = 0.18032928171989526;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DepthOffset #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DepthOffset msg;
    msg.setTimeStamp(0.17837952644790622);
    msg.setSource(14715U);
    msg.setSourceEntity(196U);
    msg.setDestination(17350U);
    msg.setDestinationEntity(225U);
    msg.value = 0.48564129101607556;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DepthOffset #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DepthOffset msg;
    msg.setTimeStamp(0.979446821966804);
    msg.setSource(39458U);
    msg.setSourceEntity(238U);
    msg.setDestination(21843U);
    msg.setDestinationEntity(140U);
    msg.value = 0.5646858026807021;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DepthOffset #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoundSpeed msg;
    msg.setTimeStamp(0.13738627146068028);
    msg.setSource(14808U);
    msg.setSourceEntity(226U);
    msg.setDestination(7462U);
    msg.setDestinationEntity(149U);
    msg.value = 0.7519778200948938;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoundSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoundSpeed msg;
    msg.setTimeStamp(0.3241803862828584);
    msg.setSource(29228U);
    msg.setSourceEntity(192U);
    msg.setDestination(49682U);
    msg.setDestinationEntity(184U);
    msg.value = 0.23314599382158385;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoundSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoundSpeed msg;
    msg.setTimeStamp(0.6208177918665478);
    msg.setSource(37318U);
    msg.setSourceEntity(231U);
    msg.setDestination(32847U);
    msg.setDestinationEntity(4U);
    msg.value = 0.04637704675529908;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoundSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterDensity msg;
    msg.setTimeStamp(0.0885472337020844);
    msg.setSource(27420U);
    msg.setSourceEntity(176U);
    msg.setDestination(43075U);
    msg.setDestinationEntity(92U);
    msg.value = 0.15153823045082515;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterDensity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterDensity msg;
    msg.setTimeStamp(0.1437295300024508);
    msg.setSource(4449U);
    msg.setSourceEntity(71U);
    msg.setDestination(52254U);
    msg.setDestinationEntity(82U);
    msg.value = 0.5829493049497393;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterDensity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterDensity msg;
    msg.setTimeStamp(0.21278618345769396);
    msg.setSource(35995U);
    msg.setSourceEntity(97U);
    msg.setDestination(4951U);
    msg.setDestinationEntity(30U);
    msg.value = 0.49850065338792293;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterDensity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Conductivity msg;
    msg.setTimeStamp(0.2921242192102018);
    msg.setSource(3089U);
    msg.setSourceEntity(133U);
    msg.setDestination(32018U);
    msg.setDestinationEntity(48U);
    msg.value = 0.20693438233078698;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Conductivity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Conductivity msg;
    msg.setTimeStamp(0.2523075571767154);
    msg.setSource(33672U);
    msg.setSourceEntity(41U);
    msg.setDestination(2907U);
    msg.setDestinationEntity(120U);
    msg.value = 0.2714828710983429;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Conductivity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Conductivity msg;
    msg.setTimeStamp(0.21474368320080583);
    msg.setSource(45133U);
    msg.setSourceEntity(31U);
    msg.setDestination(45260U);
    msg.setDestinationEntity(118U);
    msg.value = 0.7387371937732161;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Conductivity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Salinity msg;
    msg.setTimeStamp(0.833868736889507);
    msg.setSource(10428U);
    msg.setSourceEntity(60U);
    msg.setDestination(3736U);
    msg.setDestinationEntity(162U);
    msg.value = 0.6032457827063931;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Salinity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Salinity msg;
    msg.setTimeStamp(0.8583348783602603);
    msg.setSource(63970U);
    msg.setSourceEntity(221U);
    msg.setDestination(44603U);
    msg.setDestinationEntity(117U);
    msg.value = 0.8645465285908663;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Salinity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Salinity msg;
    msg.setTimeStamp(0.2458418766028575);
    msg.setSource(12979U);
    msg.setSourceEntity(234U);
    msg.setDestination(13210U);
    msg.setDestinationEntity(108U);
    msg.value = 0.27908025609066445;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Salinity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WindSpeed msg;
    msg.setTimeStamp(0.08871958106442923);
    msg.setSource(63702U);
    msg.setSourceEntity(199U);
    msg.setDestination(26203U);
    msg.setDestinationEntity(151U);
    msg.direction = 0.900157928964188;
    msg.speed = 0.8189109446775897;
    msg.turbulence = 0.5565740041980632;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WindSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WindSpeed msg;
    msg.setTimeStamp(0.402939692467977);
    msg.setSource(54085U);
    msg.setSourceEntity(63U);
    msg.setDestination(16156U);
    msg.setDestinationEntity(188U);
    msg.direction = 0.16917509802280173;
    msg.speed = 0.9864512001442339;
    msg.turbulence = 0.6617841175659183;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WindSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WindSpeed msg;
    msg.setTimeStamp(0.8059750428073308);
    msg.setSource(43199U);
    msg.setSourceEntity(141U);
    msg.setDestination(7350U);
    msg.setDestinationEntity(74U);
    msg.direction = 0.33118983578368466;
    msg.speed = 0.6475297132562763;
    msg.turbulence = 0.8479619744821795;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WindSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeHumidity msg;
    msg.setTimeStamp(0.39259826418440913);
    msg.setSource(55555U);
    msg.setSourceEntity(25U);
    msg.setDestination(54340U);
    msg.setDestinationEntity(64U);
    msg.value = 0.22245130197489527;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeHumidity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeHumidity msg;
    msg.setTimeStamp(0.30417713041340344);
    msg.setSource(9883U);
    msg.setSourceEntity(245U);
    msg.setDestination(10087U);
    msg.setDestinationEntity(221U);
    msg.value = 0.922852541738216;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeHumidity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeHumidity msg;
    msg.setTimeStamp(0.044457356182202146);
    msg.setSource(63122U);
    msg.setSourceEntity(198U);
    msg.setDestination(9966U);
    msg.setDestinationEntity(188U);
    msg.value = 0.26562081004939087;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeHumidity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataText msg;
    msg.setTimeStamp(0.3053352225130761);
    msg.setSource(53030U);
    msg.setSourceEntity(164U);
    msg.setDestination(41259U);
    msg.setDestinationEntity(37U);
    msg.value.assign("DESYMURPVHBFNDDAKPLDYJHYIKBFEQFJAOMUQYNHMFBSIECUQBHCQPE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataText #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataText msg;
    msg.setTimeStamp(0.21257354700096942);
    msg.setSource(48315U);
    msg.setSourceEntity(104U);
    msg.setDestination(20965U);
    msg.setDestinationEntity(126U);
    msg.value.assign("KQHVHCQTNDYCCTYLBTHVUIBFGAIQZJTQFJYPRKFZAZXYGOYKPWHPYVKQPKEMPFICSXRSWHZBDYVRTNZWBNF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataText #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataText msg;
    msg.setTimeStamp(0.6000724019344138);
    msg.setSource(46542U);
    msg.setSourceEntity(64U);
    msg.setDestination(48751U);
    msg.setDestinationEntity(68U);
    msg.value.assign("URRWJIFIDIWHKLCAGYSMQFMMPCZGZYLDZQZQMFTONPFVABEKRSYWDYKDZNUNCJNLAKCAUVNHQESGLPAPJXGBZYOOFWICGUBBUJQSNSCPNPJFJKZQSEXGS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataText #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataBinary msg;
    msg.setTimeStamp(0.6143307846656414);
    msg.setSource(45514U);
    msg.setSourceEntity(85U);
    msg.setDestination(31212U);
    msg.setDestinationEntity(108U);
    const signed char tmp_msg_0[] = {-27, 31, 104, 83, -4, -100, 72, -111, 79, 44, -125, -102, 83, -68, -67, 41, -66, 126, -29, 51, -61, -56, -22, -4, 116, -2, -103, -21, 80, -108, -4, -108, -74, 41, -77, 114, 74, 117, 44, 25, 71, -107, -36, 124, 68, 118, -33, 8, -50, -96, -124, -114, -64, 70, -7, -71, -38, -27, -57, -107, -91, 54, -114, 13, -83, -80, -35, -48, -21};
    msg.value.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataBinary #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataBinary msg;
    msg.setTimeStamp(0.01832820575129379);
    msg.setSource(53810U);
    msg.setSourceEntity(90U);
    msg.setDestination(5826U);
    msg.setDestinationEntity(17U);
    const signed char tmp_msg_0[] = {79, 100, -111, -6, -58, -11, 63, 61, -81, -64, -12, -7, -24, 87, -10, -126, -52, 25, -47, 116, 78, 90, -14, -55, 50, 1, -113, 67, 50, 33, -18, -120, 39, 41, -92, 67, -64, -32};
    msg.value.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataBinary #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataBinary msg;
    msg.setTimeStamp(0.9751552764045172);
    msg.setSource(15446U);
    msg.setSourceEntity(131U);
    msg.setDestination(52061U);
    msg.setDestinationEntity(229U);
    const signed char tmp_msg_0[] = {-91, -19, -74, 87, -81, 14, -1, -121, 11, 30, 49, -95, 6, -15, -99, -101, -40, 102, -14, -46, -26, -122, 94, -95, 13, -121, -48, -22, -103, 77, -43, 67, -33, 74, -14, -77, 39, -124, -39, -108, 68, -84, 86, -19, -51, -101, 44, 81, -7, -51, -24, 33, -21, 112, -40, -31, -103, -123, 105, -112, -1, 87, -121, -104, 26, -93, 24, 112, -108, -21, -33, -40, -94, -18, -97, -9, -82, 28, 115, 57, -8, 28, -31, 15, 27, -9, -54, -78, -61, -20, -55, 87, -28, 54, 50, 126, -56, -27, -18, 114, 91, -76, 0, 63, -41, -6, 114, 1, 114, 114, 51, 44, -128, -87, 42, -44, -80, 31, -31, 121, -90, -95, -23, 8, 91, 78, 80, -56, 105, 31, 79, -16, 56, 117, -54, 123, 112, 7, -57, -8, -57, 122, 75, -83, -104, -87, 20, -82, 117, -97, 47, -67, -32, -86, 49, 76, -10, 19, -88, 1, -5, -22, -21, -22, -116, 90, -30, 23, -36, 13, 80, -43, -83, 79, -12, 70, 84, 104, 2, 84, 51, 102, 70, 121, -128, -16, -25, -12, -127, -66, 117, 35, 114, -40, -70, -6, 124, 91, -91, 67, -14, 107, -29, 107, 23, -84, -76, 83, 52, 60, -5, 47, -5, -30, -124, 28};
    msg.value.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataBinary #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Force msg;
    msg.setTimeStamp(0.1297551860788626);
    msg.setSource(46263U);
    msg.setSourceEntity(233U);
    msg.setDestination(61261U);
    msg.setDestinationEntity(72U);
    msg.value = 0.6588445937315549;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Force #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Force msg;
    msg.setTimeStamp(0.9809156583682503);
    msg.setSource(25079U);
    msg.setSourceEntity(178U);
    msg.setDestination(57844U);
    msg.setDestinationEntity(32U);
    msg.value = 0.2656497896020784;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Force #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Force msg;
    msg.setTimeStamp(0.992240155132137);
    msg.setSource(43168U);
    msg.setSourceEntity(57U);
    msg.setDestination(25128U);
    msg.setDestinationEntity(158U);
    msg.value = 0.8842989415411104;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Force #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SonarData msg;
    msg.setTimeStamp(0.2765699980358488);
    msg.setSource(56434U);
    msg.setSourceEntity(23U);
    msg.setDestination(15903U);
    msg.setDestinationEntity(8U);
    msg.type = 135U;
    msg.frequency = 3831744036U;
    msg.min_range = 13308U;
    msg.max_range = 30011U;
    msg.bits_per_point = 194U;
    msg.scale_factor = 0.941616517408156;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.029816165816865414;
    tmp_msg_0.beam_height = 0.08088074536085166;
    msg.beam_config.push_back(tmp_msg_0);
    const signed char tmp_msg_1[] = {66, -26, 9, 42, -91, 106, 107, -74, -100, 10, -6, -24, -19, -59, 40, 30, -122, -116, -33, 60, 90, -48, 52, 76, 96, 40, -17, -98, 72, 31, -44, 41, -89, 118, 63, -74, -39, -123, 90, 38, -36, 75, 54, -20, 51, 81, -3, -69, -34, 18, 19, 54, -20, -125, -54, -99, -118, -91, -48, -113, -93, -71, 120, 91, -7, 68, 87, 25, -66, 14, 96, 6, -4, 28, 4, -87, 83, 84, -116, 89, -87, 120, -7, 9, 115, -34, 102, -63, 108, 34, -19, 117, -2, 61, -64, 106, 56, 70, 115, -123, -12, 40, -114, -62, -116, 106, 28, -16, 0, -79, -123, 4, 71, 97, 119, 9, -74, 113, -69, -113, 18, -57, -100, -70, -63, 15, 52, -58, -112, -8, -87, -61, -75, 35, -32, -67, 117};
    msg.data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SonarData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SonarData msg;
    msg.setTimeStamp(0.16812452640770115);
    msg.setSource(49918U);
    msg.setSourceEntity(221U);
    msg.setDestination(49218U);
    msg.setDestinationEntity(244U);
    msg.type = 57U;
    msg.frequency = 1456753535U;
    msg.min_range = 55302U;
    msg.max_range = 4969U;
    msg.bits_per_point = 189U;
    msg.scale_factor = 0.5920626826188556;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.49349391648241314;
    tmp_msg_0.beam_height = 0.8339086197806701;
    msg.beam_config.push_back(tmp_msg_0);
    const signed char tmp_msg_1[] = {-34, 104, 62, -68, 93, -11, 27, -59, -7, 59, 118, 105, -30};
    msg.data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SonarData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SonarData msg;
    msg.setTimeStamp(0.9851335375000425);
    msg.setSource(25289U);
    msg.setSourceEntity(101U);
    msg.setDestination(62264U);
    msg.setDestinationEntity(233U);
    msg.type = 117U;
    msg.frequency = 1112509522U;
    msg.min_range = 63857U;
    msg.max_range = 21988U;
    msg.bits_per_point = 154U;
    msg.scale_factor = 0.2911701486977025;
    const signed char tmp_msg_0[] = {50, -95, -118, -69, 31, -57, -67, 62, 29, 92, 10, 33, -57, 42, -5, -73, -28, 34, -79, -100, 9, -9, -17, -2, 104, -116, 104, -17, 12, 2, 10, 19, 77, -9, 108, 122, 83, -110, 5, -48, 25, 74, 118, 125, 48, 105, 108, 77, -69, 107, 11, -32, -99, -58, 9, -123, -63, 29, 32, 121, 98, 11, -3, 44, 87, 68, -110, 7, 96, -75, 103, 81, -100, 38, 0, 90, -79, 78, 22, -68, -78, -76, -13, -40, -89, -110, 113, -80, -45, 94, -96, 24, -110, -26, -112, 57, -55, -60, -103, -31, 98, -86, -88, 12, 34, -128, -95, 92, 59, -33, -32, -22, -120, -7, -91, -106, -23, -41, -127, 14, 45, 109, -2, -65, -98, 64, -61, 115, -46, -5, 32, 97, -22, -98, 79, 120, 35, -121, -15, 35, 119, -31, 119, 98, 22, -66, 80, 14, 76, 57, 43, 43, -73, -83, -65, 18, -118, -4, 64, -15, 40, -109, 98, 120, 97, -83, 1, -77, -128, 104, -115, -6, -51, 120, 97, 35, -122, 68, 92, -115, -69, -92, -113, -19, 105, 66, 48, -1, 7, -42, -8, 48, -15, -122, -117, -23, -112, 121, 66, 103, -120, 45, 118, 56, 117, -68, -43, 6, -89, 110, -38, 64, -72, 50, -35, -101, -17, 11, 125, 58, 14, 61, 123, 15, 2, -101, 14, 49, 25, 83, 126, 51, -36, 100, 41, -63};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SonarData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pulse msg;
    msg.setTimeStamp(0.010466294696491962);
    msg.setSource(43793U);
    msg.setSourceEntity(41U);
    msg.setDestination(4004U);
    msg.setDestinationEntity(28U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pulse #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pulse msg;
    msg.setTimeStamp(0.6393784473188707);
    msg.setSource(14707U);
    msg.setSourceEntity(66U);
    msg.setDestination(1405U);
    msg.setDestinationEntity(228U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pulse #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pulse msg;
    msg.setTimeStamp(0.12064042788386553);
    msg.setSource(53772U);
    msg.setSourceEntity(4U);
    msg.setDestination(28417U);
    msg.setDestinationEntity(176U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pulse #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PulseDetectionControl msg;
    msg.setTimeStamp(0.4272017887593449);
    msg.setSource(26195U);
    msg.setSourceEntity(119U);
    msg.setDestination(47697U);
    msg.setDestinationEntity(121U);
    msg.op = 97U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PulseDetectionControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PulseDetectionControl msg;
    msg.setTimeStamp(0.12310444643911855);
    msg.setSource(36432U);
    msg.setSourceEntity(62U);
    msg.setDestination(12789U);
    msg.setDestinationEntity(112U);
    msg.op = 98U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PulseDetectionControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PulseDetectionControl msg;
    msg.setTimeStamp(0.7832154899826814);
    msg.setSource(40456U);
    msg.setSourceEntity(126U);
    msg.setDestination(51059U);
    msg.setDestinationEntity(249U);
    msg.op = 28U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PulseDetectionControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FuelLevel msg;
    msg.setTimeStamp(0.7118092361137043);
    msg.setSource(19466U);
    msg.setSourceEntity(200U);
    msg.setDestination(7297U);
    msg.setDestinationEntity(4U);
    msg.value = 0.31154132844518845;
    msg.confidence = 0.60364624104565;
    msg.opmodes.assign("ABCEWCHWPSDOSKGBORMRTVDUJPSXHJHVFHQLJEBKKSDRVPDJSLLEPSLJXEDONZAIIEUZTBAXHHVPGCSFDTIJCZFGMWQYWMSYVQMACIRPRIICXYNQNJJKYFVXFZQSTGOTDFQRHBRTNLYMBGZMMKKEGLNKUMMLTKKNNYNPMCFTOOOLZHHXHCQFCQXYAIZYUIVBYPZWOIYUUSXZAWGGJTQUUQEJBWBEUOCREGFGVAZPLADVVIBKNWWNAUT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FuelLevel #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FuelLevel msg;
    msg.setTimeStamp(0.9124287391182144);
    msg.setSource(26075U);
    msg.setSourceEntity(72U);
    msg.setDestination(21994U);
    msg.setDestinationEntity(183U);
    msg.value = 0.6646677071474357;
    msg.confidence = 0.34294206156953433;
    msg.opmodes.assign("CSNELLOCXGGZXNEHRNXNUECMHCTANVAAFGODICOAUZIBWFRDJRPTVVGJFUYDSTTMLVIURQCWMWBXNIJQVEHHJTLOOYAXPGEVKKDYWEYCYLBSDHRBKFWUNZLKKAJIPUOIEJFATDIESKCJAQPRNLHSMVQBMOTBMQTKWRPMXYUAMGQFKBYIDQNKUJSFZHLHRFUQSPZBHYV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FuelLevel #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FuelLevel msg;
    msg.setTimeStamp(0.6191650386784475);
    msg.setSource(31109U);
    msg.setSourceEntity(67U);
    msg.setDestination(46939U);
    msg.setDestinationEntity(46U);
    msg.value = 0.004043514133053372;
    msg.confidence = 0.5850351933147008;
    msg.opmodes.assign("AOZOFPIBWIUASZGGZRTCRWCJNILDRPGXKB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FuelLevel #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsNavData msg;
    msg.setTimeStamp(0.1736177308794783);
    msg.setSource(43477U);
    msg.setSourceEntity(248U);
    msg.setDestination(57026U);
    msg.setDestinationEntity(37U);
    msg.itow = 1267140103U;
    msg.lat = 0.7877520471964703;
    msg.lon = 0.7860912912263004;
    msg.height_ell = 0.22584212740007448;
    msg.height_sea = 0.5601828636473185;
    msg.hacc = 0.12062530934242133;
    msg.vacc = 0.8264100106026366;
    msg.vel_n = 0.24072205030590077;
    msg.vel_e = 0.8262536859831741;
    msg.vel_d = 0.8398880038936719;
    msg.speed = 0.22815954809281058;
    msg.gspeed = 0.7014914131483405;
    msg.heading = 0.0326413285948598;
    msg.sacc = 0.40940859683926234;
    msg.cacc = 0.01961427798933535;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsNavData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsNavData msg;
    msg.setTimeStamp(0.14775569236697483);
    msg.setSource(42263U);
    msg.setSourceEntity(84U);
    msg.setDestination(61371U);
    msg.setDestinationEntity(30U);
    msg.itow = 1155856473U;
    msg.lat = 0.09809129303917286;
    msg.lon = 0.5973980364667688;
    msg.height_ell = 0.19584553984040498;
    msg.height_sea = 0.5385290963127212;
    msg.hacc = 0.7163542564800944;
    msg.vacc = 0.6597667714698392;
    msg.vel_n = 0.9815217664746814;
    msg.vel_e = 0.6532481608439145;
    msg.vel_d = 0.31575209906036317;
    msg.speed = 0.5777807379490215;
    msg.gspeed = 0.823536661704626;
    msg.heading = 0.7442522043862441;
    msg.sacc = 0.047709563371470365;
    msg.cacc = 0.31837450257349265;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsNavData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsNavData msg;
    msg.setTimeStamp(0.6715430948947124);
    msg.setSource(20016U);
    msg.setSourceEntity(225U);
    msg.setDestination(43305U);
    msg.setDestinationEntity(9U);
    msg.itow = 3898732729U;
    msg.lat = 0.4025313286854012;
    msg.lon = 0.6757437637054663;
    msg.height_ell = 0.46450260549216094;
    msg.height_sea = 0.6356302230143903;
    msg.hacc = 0.0698506607342666;
    msg.vacc = 0.653491575491509;
    msg.vel_n = 0.919077646922686;
    msg.vel_e = 0.7542796940685571;
    msg.vel_d = 0.7104761985373543;
    msg.speed = 0.4187638240463316;
    msg.gspeed = 0.9091054082595307;
    msg.heading = 0.0041658197869838265;
    msg.sacc = 0.33623413148516235;
    msg.cacc = 0.5071040847618838;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsNavData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ServoPosition msg;
    msg.setTimeStamp(0.32424061774528123);
    msg.setSource(28053U);
    msg.setSourceEntity(96U);
    msg.setDestination(1955U);
    msg.setDestinationEntity(65U);
    msg.id = 128U;
    msg.value = 0.24120342176686793;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ServoPosition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ServoPosition msg;
    msg.setTimeStamp(0.5398155489121985);
    msg.setSource(1777U);
    msg.setSourceEntity(136U);
    msg.setDestination(40857U);
    msg.setDestinationEntity(70U);
    msg.id = 19U;
    msg.value = 0.42235968459926854;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ServoPosition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ServoPosition msg;
    msg.setTimeStamp(0.011614638731541893);
    msg.setSource(45567U);
    msg.setSourceEntity(37U);
    msg.setDestination(7890U);
    msg.setDestinationEntity(17U);
    msg.id = 148U;
    msg.value = 0.8140977096734119;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ServoPosition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DeviceState msg;
    msg.setTimeStamp(0.3753625532548477);
    msg.setSource(22691U);
    msg.setSourceEntity(4U);
    msg.setDestination(37550U);
    msg.setDestinationEntity(153U);
    msg.x = 0.4296085238403613;
    msg.y = 0.32592323063872053;
    msg.z = 0.8048376311365038;
    msg.phi = 0.7625343866426839;
    msg.theta = 0.4411216779568299;
    msg.psi = 0.7902533507446313;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DeviceState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DeviceState msg;
    msg.setTimeStamp(0.7774070444670126);
    msg.setSource(59300U);
    msg.setSourceEntity(140U);
    msg.setDestination(35350U);
    msg.setDestinationEntity(70U);
    msg.x = 0.3672072799106366;
    msg.y = 0.7236104694097001;
    msg.z = 0.6366601373492798;
    msg.phi = 0.5987967736509476;
    msg.theta = 0.9598514266662842;
    msg.psi = 0.5053261507966162;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DeviceState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DeviceState msg;
    msg.setTimeStamp(0.50046483718322);
    msg.setSource(43141U);
    msg.setSourceEntity(228U);
    msg.setDestination(18371U);
    msg.setDestinationEntity(36U);
    msg.x = 0.7624075013070638;
    msg.y = 0.46236997211094566;
    msg.z = 0.7703992484352651;
    msg.phi = 0.9842778660095696;
    msg.theta = 0.17832141747888297;
    msg.psi = 0.061128076570910905;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DeviceState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::BeamConfig msg;
    msg.setTimeStamp(0.44677535966044424);
    msg.setSource(50213U);
    msg.setSourceEntity(106U);
    msg.setDestination(30766U);
    msg.setDestinationEntity(184U);
    msg.beam_width = 0.15384486444764045;
    msg.beam_height = 0.21186614726933006;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("BeamConfig #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::BeamConfig msg;
    msg.setTimeStamp(0.37452567698155936);
    msg.setSource(22898U);
    msg.setSourceEntity(125U);
    msg.setDestination(40153U);
    msg.setDestinationEntity(41U);
    msg.beam_width = 0.5786072932926096;
    msg.beam_height = 0.8453464650690888;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("BeamConfig #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::BeamConfig msg;
    msg.setTimeStamp(0.2175583913800494);
    msg.setSource(605U);
    msg.setSourceEntity(193U);
    msg.setDestination(57282U);
    msg.setDestinationEntity(11U);
    msg.beam_width = 0.26721505070010965;
    msg.beam_height = 0.07551143315788345;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("BeamConfig #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DataSanity msg;
    msg.setTimeStamp(0.3034602554900514);
    msg.setSource(21667U);
    msg.setSourceEntity(222U);
    msg.setDestination(23841U);
    msg.setDestinationEntity(60U);
    msg.sane = 209U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DataSanity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DataSanity msg;
    msg.setTimeStamp(0.45437268767117345);
    msg.setSource(47208U);
    msg.setSourceEntity(142U);
    msg.setDestination(20023U);
    msg.setDestinationEntity(65U);
    msg.sane = 197U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DataSanity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DataSanity msg;
    msg.setTimeStamp(0.11519938262992457);
    msg.setSource(54688U);
    msg.setSourceEntity(191U);
    msg.setDestination(56102U);
    msg.setDestinationEntity(27U);
    msg.sane = 63U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DataSanity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RhodamineDye msg;
    msg.setTimeStamp(0.33859343183381463);
    msg.setSource(48842U);
    msg.setSourceEntity(143U);
    msg.setDestination(60765U);
    msg.setDestinationEntity(145U);
    msg.value = 0.29208169261962524;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RhodamineDye #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RhodamineDye msg;
    msg.setTimeStamp(0.006493036324882406);
    msg.setSource(24259U);
    msg.setSourceEntity(213U);
    msg.setDestination(53208U);
    msg.setDestinationEntity(146U);
    msg.value = 0.9424367479598278;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RhodamineDye #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RhodamineDye msg;
    msg.setTimeStamp(0.5885576937653186);
    msg.setSource(28969U);
    msg.setSourceEntity(12U);
    msg.setDestination(48347U);
    msg.setDestinationEntity(13U);
    msg.value = 0.11710283010121647;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RhodamineDye #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CrudeOil msg;
    msg.setTimeStamp(0.677280279218711);
    msg.setSource(57696U);
    msg.setSourceEntity(103U);
    msg.setDestination(41035U);
    msg.setDestinationEntity(10U);
    msg.value = 0.1491003486342275;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CrudeOil #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CrudeOil msg;
    msg.setTimeStamp(0.8344339777760008);
    msg.setSource(3036U);
    msg.setSourceEntity(95U);
    msg.setDestination(62067U);
    msg.setDestinationEntity(122U);
    msg.value = 0.7421633637771068;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CrudeOil #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CrudeOil msg;
    msg.setTimeStamp(0.4627954098192607);
    msg.setSource(39915U);
    msg.setSourceEntity(108U);
    msg.setDestination(60233U);
    msg.setDestinationEntity(112U);
    msg.value = 0.23311607801744072;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CrudeOil #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FineOil msg;
    msg.setTimeStamp(0.624536663679821);
    msg.setSource(57783U);
    msg.setSourceEntity(101U);
    msg.setDestination(44508U);
    msg.setDestinationEntity(99U);
    msg.value = 0.1282833344143084;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FineOil #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FineOil msg;
    msg.setTimeStamp(0.6110902847497899);
    msg.setSource(19015U);
    msg.setSourceEntity(50U);
    msg.setDestination(40857U);
    msg.setDestinationEntity(244U);
    msg.value = 0.41625104751037545;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FineOil #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FineOil msg;
    msg.setTimeStamp(0.42027688254967477);
    msg.setSource(28021U);
    msg.setSourceEntity(246U);
    msg.setDestination(52658U);
    msg.setDestinationEntity(78U);
    msg.value = 0.13717494913849448;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FineOil #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Turbidity msg;
    msg.setTimeStamp(0.6509853407527263);
    msg.setSource(5828U);
    msg.setSourceEntity(199U);
    msg.setDestination(24594U);
    msg.setDestinationEntity(27U);
    msg.value = 0.8957883824769665;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Turbidity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Turbidity msg;
    msg.setTimeStamp(0.9253252949323064);
    msg.setSource(34722U);
    msg.setSourceEntity(189U);
    msg.setDestination(22912U);
    msg.setDestinationEntity(67U);
    msg.value = 0.8214260678412526;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Turbidity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Turbidity msg;
    msg.setTimeStamp(0.28902002295764617);
    msg.setSource(59634U);
    msg.setSourceEntity(81U);
    msg.setDestination(16209U);
    msg.setDestinationEntity(194U);
    msg.value = 0.3518303016526225;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Turbidity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Chlorophyll msg;
    msg.setTimeStamp(0.5883097238551158);
    msg.setSource(44836U);
    msg.setSourceEntity(175U);
    msg.setDestination(64465U);
    msg.setDestinationEntity(192U);
    msg.value = 0.8507826965255219;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Chlorophyll #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Chlorophyll msg;
    msg.setTimeStamp(0.2311490271611678);
    msg.setSource(20511U);
    msg.setSourceEntity(237U);
    msg.setDestination(34933U);
    msg.setDestinationEntity(142U);
    msg.value = 0.060076075035195964;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Chlorophyll #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Chlorophyll msg;
    msg.setTimeStamp(0.8389177068492742);
    msg.setSource(48981U);
    msg.setSourceEntity(109U);
    msg.setDestination(8450U);
    msg.setDestinationEntity(54U);
    msg.value = 0.6211135193186301;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Chlorophyll #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Fluorescein msg;
    msg.setTimeStamp(0.6436072996122039);
    msg.setSource(8337U);
    msg.setSourceEntity(212U);
    msg.setDestination(56424U);
    msg.setDestinationEntity(224U);
    msg.value = 0.38640414189607697;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Fluorescein #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Fluorescein msg;
    msg.setTimeStamp(0.3359967848110271);
    msg.setSource(6760U);
    msg.setSourceEntity(97U);
    msg.setDestination(15659U);
    msg.setDestinationEntity(35U);
    msg.value = 0.3299308121550206;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Fluorescein #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Fluorescein msg;
    msg.setTimeStamp(0.6375061017306539);
    msg.setSource(19662U);
    msg.setSourceEntity(127U);
    msg.setDestination(44875U);
    msg.setDestinationEntity(44U);
    msg.value = 0.12909836779491712;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Fluorescein #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycocyanin msg;
    msg.setTimeStamp(0.7239990442832829);
    msg.setSource(34533U);
    msg.setSourceEntity(49U);
    msg.setDestination(44356U);
    msg.setDestinationEntity(6U);
    msg.value = 0.5156283868362445;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycocyanin #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycocyanin msg;
    msg.setTimeStamp(0.6557400514468938);
    msg.setSource(52163U);
    msg.setSourceEntity(15U);
    msg.setDestination(24823U);
    msg.setDestinationEntity(166U);
    msg.value = 0.008352061916914622;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycocyanin #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycocyanin msg;
    msg.setTimeStamp(0.48684345031986564);
    msg.setSource(21822U);
    msg.setSourceEntity(91U);
    msg.setDestination(52835U);
    msg.setDestinationEntity(155U);
    msg.value = 0.16890261392876904;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycocyanin #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycoerythrin msg;
    msg.setTimeStamp(0.8571265521739322);
    msg.setSource(33106U);
    msg.setSourceEntity(99U);
    msg.setDestination(40441U);
    msg.setDestinationEntity(66U);
    msg.value = 0.36858667988120186;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycoerythrin #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycoerythrin msg;
    msg.setTimeStamp(0.7290077376803836);
    msg.setSource(47223U);
    msg.setSourceEntity(96U);
    msg.setDestination(61468U);
    msg.setDestinationEntity(85U);
    msg.value = 0.25141131535942374;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycoerythrin #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycoerythrin msg;
    msg.setTimeStamp(0.15983800710340335);
    msg.setSource(64510U);
    msg.setSourceEntity(35U);
    msg.setDestination(25966U);
    msg.setDestinationEntity(93U);
    msg.value = 0.21891121422988158;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycoerythrin #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRtk msg;
    msg.setTimeStamp(0.5980421747646658);
    msg.setSource(62050U);
    msg.setSourceEntity(119U);
    msg.setDestination(3105U);
    msg.setDestinationEntity(25U);
    msg.validity = 59291U;
    msg.type = 215U;
    msg.tow = 1559577067U;
    msg.base_lat = 0.9758767737947132;
    msg.base_lon = 0.07335922772837411;
    msg.base_height = 0.8556156442131941;
    msg.n = 0.31644597844177225;
    msg.e = 0.7915025799827468;
    msg.d = 0.06698521833769222;
    msg.v_n = 0.7952758089024747;
    msg.v_e = 0.17732003292230136;
    msg.v_d = 0.6721893067571815;
    msg.satellites = 234U;
    msg.iar_hyp = 13713U;
    msg.iar_ratio = 0.204560885735511;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRtk #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRtk msg;
    msg.setTimeStamp(0.17177099821002406);
    msg.setSource(21406U);
    msg.setSourceEntity(71U);
    msg.setDestination(63381U);
    msg.setDestinationEntity(186U);
    msg.validity = 60097U;
    msg.type = 132U;
    msg.tow = 3279142065U;
    msg.base_lat = 0.7293196551873496;
    msg.base_lon = 0.3203702496355012;
    msg.base_height = 0.7846150208658307;
    msg.n = 0.9516529994703228;
    msg.e = 0.06575904496408413;
    msg.d = 0.8579181361078354;
    msg.v_n = 0.7080558270051376;
    msg.v_e = 0.9726002235315636;
    msg.v_d = 0.20731403641567725;
    msg.satellites = 138U;
    msg.iar_hyp = 7077U;
    msg.iar_ratio = 0.6629692411466697;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRtk #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRtk msg;
    msg.setTimeStamp(0.8071711699007839);
    msg.setSource(19114U);
    msg.setSourceEntity(162U);
    msg.setDestination(17717U);
    msg.setDestinationEntity(196U);
    msg.validity = 64100U;
    msg.type = 181U;
    msg.tow = 1542396999U;
    msg.base_lat = 0.6071450776267708;
    msg.base_lon = 0.4691041636705371;
    msg.base_height = 0.8351546937138699;
    msg.n = 0.3729076909710335;
    msg.e = 0.47630853627368386;
    msg.d = 0.8928660448229384;
    msg.v_n = 0.014470204538382991;
    msg.v_e = 0.653029135734595;
    msg.v_d = 0.7011616829871693;
    msg.satellites = 148U;
    msg.iar_hyp = 65337U;
    msg.iar_ratio = 0.019654642499340236;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRtk #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExternalNavData msg;
    msg.setTimeStamp(0.8014961769064296);
    msg.setSource(53277U);
    msg.setSourceEntity(61U);
    msg.setDestination(14395U);
    msg.setDestinationEntity(32U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.4910091241633999;
    tmp_msg_0.lon = 0.9115790863486196;
    tmp_msg_0.height = 0.2336842473418126;
    tmp_msg_0.x = 0.6161591978723641;
    tmp_msg_0.y = 0.11011351289597582;
    tmp_msg_0.z = 0.7356987914936182;
    tmp_msg_0.phi = 0.5120667615135113;
    tmp_msg_0.theta = 0.12319751788932409;
    tmp_msg_0.psi = 0.20573553312182602;
    tmp_msg_0.u = 0.31742255586384394;
    tmp_msg_0.v = 0.5936672130211127;
    tmp_msg_0.w = 0.17117394333309255;
    tmp_msg_0.vx = 0.23188064403168263;
    tmp_msg_0.vy = 0.6895421901563772;
    tmp_msg_0.vz = 0.28934443512641683;
    tmp_msg_0.p = 0.5834225793669006;
    tmp_msg_0.q = 0.9007106391438364;
    tmp_msg_0.r = 0.7497086829037012;
    tmp_msg_0.depth = 0.1222234027810718;
    tmp_msg_0.alt = 0.5093914740900735;
    msg.state.set(tmp_msg_0);
    msg.type = 128U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExternalNavData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExternalNavData msg;
    msg.setTimeStamp(0.8962893609566954);
    msg.setSource(4962U);
    msg.setSourceEntity(76U);
    msg.setDestination(25557U);
    msg.setDestinationEntity(211U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.9396490072867422;
    tmp_msg_0.lon = 0.6736864188809918;
    tmp_msg_0.height = 0.3740659735444364;
    tmp_msg_0.x = 0.610992062434861;
    tmp_msg_0.y = 0.7887397787220191;
    tmp_msg_0.z = 0.9484956798911329;
    tmp_msg_0.phi = 0.7983106033648696;
    tmp_msg_0.theta = 0.811867142038397;
    tmp_msg_0.psi = 0.678642502585484;
    tmp_msg_0.u = 0.7677487875477017;
    tmp_msg_0.v = 0.9690302777404265;
    tmp_msg_0.w = 0.20612563218916957;
    tmp_msg_0.vx = 0.6111133093835955;
    tmp_msg_0.vy = 0.1823979610068538;
    tmp_msg_0.vz = 0.9805643677888362;
    tmp_msg_0.p = 0.42781536025068345;
    tmp_msg_0.q = 0.2034020127855387;
    tmp_msg_0.r = 0.6146514944533417;
    tmp_msg_0.depth = 0.8280571048425496;
    tmp_msg_0.alt = 0.5789283132030655;
    msg.state.set(tmp_msg_0);
    msg.type = 17U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExternalNavData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExternalNavData msg;
    msg.setTimeStamp(0.9118213145366105);
    msg.setSource(23573U);
    msg.setSourceEntity(178U);
    msg.setDestination(32794U);
    msg.setDestinationEntity(20U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.803692701197368;
    tmp_msg_0.lon = 0.4961940888074292;
    tmp_msg_0.height = 0.11605713053289202;
    tmp_msg_0.x = 0.3328359224870333;
    tmp_msg_0.y = 0.6194560507609445;
    tmp_msg_0.z = 0.8339773826818311;
    tmp_msg_0.phi = 0.4169741480718191;
    tmp_msg_0.theta = 0.6048067877622716;
    tmp_msg_0.psi = 0.13034961464419947;
    tmp_msg_0.u = 0.6334785116067626;
    tmp_msg_0.v = 0.3982196438305341;
    tmp_msg_0.w = 0.15982141704430808;
    tmp_msg_0.vx = 0.0590562368840819;
    tmp_msg_0.vy = 0.6171054000368146;
    tmp_msg_0.vz = 0.3371116139891964;
    tmp_msg_0.p = 0.9965498456184307;
    tmp_msg_0.q = 0.24027290759426;
    tmp_msg_0.r = 0.5927411299119052;
    tmp_msg_0.depth = 0.7890046131270022;
    tmp_msg_0.alt = 0.30819753060499466;
    msg.state.set(tmp_msg_0);
    msg.type = 253U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExternalNavData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOxygen msg;
    msg.setTimeStamp(0.4754165638323664);
    msg.setSource(41193U);
    msg.setSourceEntity(210U);
    msg.setDestination(9884U);
    msg.setDestinationEntity(49U);
    msg.value = 0.7801088612807503;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOxygen #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOxygen msg;
    msg.setTimeStamp(0.6736201034464562);
    msg.setSource(25007U);
    msg.setSourceEntity(9U);
    msg.setDestination(38949U);
    msg.setDestinationEntity(84U);
    msg.value = 0.2824424313778706;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOxygen #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOxygen msg;
    msg.setTimeStamp(0.10799264707380518);
    msg.setSource(31136U);
    msg.setSourceEntity(253U);
    msg.setDestination(18050U);
    msg.setDestinationEntity(75U);
    msg.value = 0.6820416057111649;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOxygen #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AirSaturation msg;
    msg.setTimeStamp(0.6690537419084155);
    msg.setSource(62609U);
    msg.setSourceEntity(159U);
    msg.setDestination(28961U);
    msg.setDestinationEntity(251U);
    msg.value = 0.9823444616136662;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AirSaturation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AirSaturation msg;
    msg.setTimeStamp(0.9073422649882243);
    msg.setSource(47232U);
    msg.setSourceEntity(168U);
    msg.setDestination(57029U);
    msg.setDestinationEntity(225U);
    msg.value = 0.836489553012007;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AirSaturation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AirSaturation msg;
    msg.setTimeStamp(0.8544614670391061);
    msg.setSource(42394U);
    msg.setSourceEntity(29U);
    msg.setDestination(58734U);
    msg.setDestinationEntity(72U);
    msg.value = 0.6662213258360129;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AirSaturation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Throttle msg;
    msg.setTimeStamp(0.24647867451401306);
    msg.setSource(56266U);
    msg.setSourceEntity(11U);
    msg.setDestination(62335U);
    msg.setDestinationEntity(107U);
    msg.value = 0.8190135117384006;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Throttle #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Throttle msg;
    msg.setTimeStamp(0.34001535047408027);
    msg.setSource(64178U);
    msg.setSourceEntity(91U);
    msg.setDestination(64421U);
    msg.setDestinationEntity(145U);
    msg.value = 0.18945032187521282;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Throttle #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Throttle msg;
    msg.setTimeStamp(0.51615552773683);
    msg.setSource(24509U);
    msg.setSourceEntity(62U);
    msg.setDestination(29860U);
    msg.setDestinationEntity(252U);
    msg.value = 0.46996727181118503;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Throttle #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PH msg;
    msg.setTimeStamp(0.6360060757856829);
    msg.setSource(21989U);
    msg.setSourceEntity(142U);
    msg.setDestination(33643U);
    msg.setDestinationEntity(50U);
    msg.value = 0.1784926268046496;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PH #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PH msg;
    msg.setTimeStamp(0.8028673298858167);
    msg.setSource(42227U);
    msg.setSourceEntity(254U);
    msg.setDestination(60703U);
    msg.setDestinationEntity(199U);
    msg.value = 0.7088979920183255;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PH #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PH msg;
    msg.setTimeStamp(0.11284413834547258);
    msg.setSource(32508U);
    msg.setSourceEntity(207U);
    msg.setDestination(49433U);
    msg.setDestinationEntity(115U);
    msg.value = 0.7130600918508799;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PH #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Redox msg;
    msg.setTimeStamp(0.07015000957425377);
    msg.setSource(2112U);
    msg.setSourceEntity(24U);
    msg.setDestination(59847U);
    msg.setDestinationEntity(64U);
    msg.value = 0.41754057283304136;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Redox #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Redox msg;
    msg.setTimeStamp(0.014174337040998686);
    msg.setSource(20845U);
    msg.setSourceEntity(183U);
    msg.setDestination(8534U);
    msg.setDestinationEntity(178U);
    msg.value = 0.23799860183043564;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Redox #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Redox msg;
    msg.setTimeStamp(0.7905288773032336);
    msg.setSource(17776U);
    msg.setSourceEntity(92U);
    msg.setDestination(2245U);
    msg.setDestinationEntity(48U);
    msg.value = 0.5325503566872593;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Redox #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.7766896381610778);
    msg.setSource(26279U);
    msg.setSourceEntity(109U);
    msg.setDestination(51576U);
    msg.setDestinationEntity(14U);
    msg.id = 83U;
    msg.zoom = 40U;
    msg.action = 119U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CameraZoom #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.987899735777414);
    msg.setSource(41497U);
    msg.setSourceEntity(40U);
    msg.setDestination(61633U);
    msg.setDestinationEntity(151U);
    msg.id = 42U;
    msg.zoom = 65U;
    msg.action = 90U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CameraZoom #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.911091992051208);
    msg.setSource(14771U);
    msg.setSourceEntity(131U);
    msg.setDestination(17985U);
    msg.setDestinationEntity(58U);
    msg.id = 61U;
    msg.zoom = 146U;
    msg.action = 238U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CameraZoom #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetThrusterActuation msg;
    msg.setTimeStamp(0.30590926346239355);
    msg.setSource(44858U);
    msg.setSourceEntity(107U);
    msg.setDestination(58892U);
    msg.setDestinationEntity(200U);
    msg.id = 191U;
    msg.value = 0.8720181822703088;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetThrusterActuation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetThrusterActuation msg;
    msg.setTimeStamp(0.8648659120253385);
    msg.setSource(25840U);
    msg.setSourceEntity(71U);
    msg.setDestination(55813U);
    msg.setDestinationEntity(183U);
    msg.id = 84U;
    msg.value = 0.6153374252014184;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetThrusterActuation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetThrusterActuation msg;
    msg.setTimeStamp(0.12852725766739892);
    msg.setSource(28537U);
    msg.setSourceEntity(218U);
    msg.setDestination(35860U);
    msg.setDestinationEntity(147U);
    msg.id = 151U;
    msg.value = 0.8993165739477476;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetThrusterActuation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetServoPosition msg;
    msg.setTimeStamp(0.400601172098752);
    msg.setSource(20120U);
    msg.setSourceEntity(53U);
    msg.setDestination(20317U);
    msg.setDestinationEntity(101U);
    msg.id = 192U;
    msg.value = 0.3866204915529451;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetServoPosition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetServoPosition msg;
    msg.setTimeStamp(0.8833417066935816);
    msg.setSource(4351U);
    msg.setSourceEntity(234U);
    msg.setDestination(5757U);
    msg.setDestinationEntity(188U);
    msg.id = 3U;
    msg.value = 0.14513764414934782;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetServoPosition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetServoPosition msg;
    msg.setTimeStamp(0.21772668574689735);
    msg.setSource(48070U);
    msg.setSourceEntity(121U);
    msg.setDestination(5044U);
    msg.setDestinationEntity(25U);
    msg.id = 206U;
    msg.value = 0.32866890562953543;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetServoPosition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetControlSurfaceDeflection msg;
    msg.setTimeStamp(0.8059847341930217);
    msg.setSource(15584U);
    msg.setSourceEntity(31U);
    msg.setDestination(56941U);
    msg.setDestinationEntity(170U);
    msg.id = 189U;
    msg.angle = 0.7928029086231967;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetControlSurfaceDeflection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetControlSurfaceDeflection msg;
    msg.setTimeStamp(0.3034543761942995);
    msg.setSource(39289U);
    msg.setSourceEntity(33U);
    msg.setDestination(14938U);
    msg.setDestinationEntity(60U);
    msg.id = 230U;
    msg.angle = 0.4908690161986943;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetControlSurfaceDeflection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetControlSurfaceDeflection msg;
    msg.setTimeStamp(0.6588247023730129);
    msg.setSource(56547U);
    msg.setSourceEntity(49U);
    msg.setDestination(58866U);
    msg.setDestinationEntity(94U);
    msg.id = 21U;
    msg.angle = 0.9133127338212378;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetControlSurfaceDeflection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActionsRequest msg;
    msg.setTimeStamp(0.9751576157492076);
    msg.setSource(2355U);
    msg.setSourceEntity(238U);
    msg.setDestination(13353U);
    msg.setDestinationEntity(117U);
    msg.op = 70U;
    msg.actions.assign("KTSYBIZWTANQBKSMURJLFYFCTVIG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActionsRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActionsRequest msg;
    msg.setTimeStamp(0.6780684165877064);
    msg.setSource(3498U);
    msg.setSourceEntity(181U);
    msg.setDestination(3692U);
    msg.setDestinationEntity(102U);
    msg.op = 82U;
    msg.actions.assign("TXBUESAHDRMFJCIQRLWTLVOFKWODQJSVYJZVMODVMUBFUUYMVIDFQQJMZFOZXPHOKMIGOXEIINUVNLQXWXZRNBSLUNENVWQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActionsRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActionsRequest msg;
    msg.setTimeStamp(0.41273983042241646);
    msg.setSource(6137U);
    msg.setSourceEntity(140U);
    msg.setDestination(50113U);
    msg.setDestinationEntity(117U);
    msg.op = 187U;
    msg.actions.assign("BYBPWDURNHDNRIZTGLEINUPRAUJRHVTCBIIDIMSKODCKVYLBKKMZVGQFSQMAUIOEUVOTCAQLULMZNTLBLDWMEGXKBPPDZEINHMPQPDGAPKCDJRTVVZZRYCTWHUCXFMYSJCGAGYJJXZPFEAFJYSZJJWXZFVQYEUZTLXSQOYUNKFWRREAXSHMWCIHWOWMOBSBHXNPNFBJXVGOXWTNFEFSICGCPERTHKBDQTOASSHQGGXFQAALVYEHKJKIUQLORDL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActionsRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActions msg;
    msg.setTimeStamp(0.13300937668536417);
    msg.setSource(33512U);
    msg.setSourceEntity(19U);
    msg.setDestination(19999U);
    msg.setDestinationEntity(56U);
    msg.actions.assign("BEVHUSVQJTGVQB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActions #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActions msg;
    msg.setTimeStamp(0.9872585587235652);
    msg.setSource(10910U);
    msg.setSourceEntity(61U);
    msg.setDestination(53642U);
    msg.setDestinationEntity(136U);
    msg.actions.assign("BCGDJJDPWOZHBUNZTGEXTWVDKNDCBPP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActions #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActions msg;
    msg.setTimeStamp(0.488167946899301);
    msg.setSource(54571U);
    msg.setSourceEntity(91U);
    msg.setDestination(7038U);
    msg.setDestinationEntity(125U);
    msg.actions.assign("GVDQOGFBXORWUVBIUZMWQGLKPYLUJOCJZUSJUPGAYODVMQYDGKLYHFZATVXHLSJJVX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActions #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ButtonEvent msg;
    msg.setTimeStamp(0.11578673537957429);
    msg.setSource(16356U);
    msg.setSourceEntity(111U);
    msg.setDestination(18161U);
    msg.setDestinationEntity(170U);
    msg.button = 242U;
    msg.value = 11U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ButtonEvent #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ButtonEvent msg;
    msg.setTimeStamp(0.28261527777530926);
    msg.setSource(53530U);
    msg.setSourceEntity(69U);
    msg.setDestination(54015U);
    msg.setDestinationEntity(209U);
    msg.button = 174U;
    msg.value = 4U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ButtonEvent #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ButtonEvent msg;
    msg.setTimeStamp(0.2517959026359664);
    msg.setSource(46592U);
    msg.setSourceEntity(134U);
    msg.setDestination(22945U);
    msg.setDestinationEntity(175U);
    msg.button = 199U;
    msg.value = 114U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ButtonEvent #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LcdControl msg;
    msg.setTimeStamp(0.48924480633691136);
    msg.setSource(8156U);
    msg.setSourceEntity(8U);
    msg.setDestination(8501U);
    msg.setDestinationEntity(127U);
    msg.op = 87U;
    msg.text.assign("CBWYTKHGQJRLHYXNAUKSPHVVZYOSLZZFHCRIBJDFSGPIOXJAM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LcdControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LcdControl msg;
    msg.setTimeStamp(0.40020382867696325);
    msg.setSource(25393U);
    msg.setSourceEntity(56U);
    msg.setDestination(64911U);
    msg.setDestinationEntity(133U);
    msg.op = 79U;
    msg.text.assign("WHPYJOGSRYCYOLXIZPIVCZRYVKXZNFLTDQFCNOUWBFKUENRZIGEQFAHYYI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LcdControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LcdControl msg;
    msg.setTimeStamp(0.15553130481981703);
    msg.setSource(20851U);
    msg.setSourceEntity(236U);
    msg.setDestination(21535U);
    msg.setDestinationEntity(146U);
    msg.op = 208U;
    msg.text.assign("LGHUBOHADGHIJJCEAJDIRRCXUJYCNWJYGGKIMXQFMDQSDPNQBOWRSESNKNQEYPNLIFGZVUPGWLIPHTPTKWCFEPIVUYVHMBFYKWXHOLTRMCXRPUVTXRZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LcdControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerOperation msg;
    msg.setTimeStamp(0.07671555794101281);
    msg.setSource(10890U);
    msg.setSourceEntity(80U);
    msg.setDestination(10663U);
    msg.setDestinationEntity(92U);
    msg.op = 219U;
    msg.time_remain = 0.30383098061473046;
    msg.sched_time = 0.027100929465159962;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerOperation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerOperation msg;
    msg.setTimeStamp(0.8441226249353259);
    msg.setSource(8180U);
    msg.setSourceEntity(144U);
    msg.setDestination(55230U);
    msg.setDestinationEntity(16U);
    msg.op = 184U;
    msg.time_remain = 0.9175739390061721;
    msg.sched_time = 0.6027858438627641;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerOperation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerOperation msg;
    msg.setTimeStamp(0.06273546387663265);
    msg.setSource(8401U);
    msg.setSourceEntity(108U);
    msg.setDestination(59549U);
    msg.setDestinationEntity(250U);
    msg.op = 34U;
    msg.time_remain = 0.4618071550004539;
    msg.sched_time = 0.7873675715068759;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerOperation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelControl msg;
    msg.setTimeStamp(0.251349105577115);
    msg.setSource(19124U);
    msg.setSourceEntity(107U);
    msg.setDestination(57329U);
    msg.setDestinationEntity(39U);
    msg.name.assign("MEANPFNOJQLAJFZASKQMWDYBXOGUCDXIPCBWZOYBUGVZETKJROCYVVJYZHZQONOKTVFKEALJJAQQHSFKVKLNBBNDLLNUQACTRGAOYJHMYSZFDEGSKYHIJMLDYFVSWKVCXMSAWTIBPNWMXAQDTLMICVWPQRRIZMRCXUFHBXEOGGWUDIYCXSXSCDITXRTOBHEWUOGHTKMEERXTGW");
    msg.op = 222U;
    msg.sched_time = 0.8568242058991412;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelControl msg;
    msg.setTimeStamp(0.4776769071384124);
    msg.setSource(22604U);
    msg.setSourceEntity(9U);
    msg.setDestination(1483U);
    msg.setDestinationEntity(44U);
    msg.name.assign("BFTPWEGJEKTFIGTBYIFNUQPOP");
    msg.op = 210U;
    msg.sched_time = 0.4021280414034959;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelControl msg;
    msg.setTimeStamp(0.3975418793903919);
    msg.setSource(1523U);
    msg.setSourceEntity(76U);
    msg.setDestination(19563U);
    msg.setDestinationEntity(170U);
    msg.name.assign("IBKUEZDOOPJDAKWIKHIJLYNMLMFJWCNMHEELMHYLBWCQIKKARAQUOYNRUWWNZHWKQSGTAJDESQHRITLAOJUAVOGPNBOFRXKSYLYXSLYNHPXLMVWVTEYRPSNBYXVMTGVQLTBWVNWPVUGQQXDSEMFGCATUSECWZGKCBXUOJADFHIIRNNBUSMFJYBLZSZBXEXPMOQDVXAFTGCZHPTIMJZPZF");
    msg.op = 238U;
    msg.sched_time = 0.2761461504327114;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryPowerChannelState msg;
    msg.setTimeStamp(0.015214556867378937);
    msg.setSource(40931U);
    msg.setSourceEntity(84U);
    msg.setDestination(42184U);
    msg.setDestinationEntity(60U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryPowerChannelState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryPowerChannelState msg;
    msg.setTimeStamp(0.15883676001603186);
    msg.setSource(8926U);
    msg.setSourceEntity(25U);
    msg.setDestination(38487U);
    msg.setDestinationEntity(134U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryPowerChannelState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryPowerChannelState msg;
    msg.setTimeStamp(0.5020748487683993);
    msg.setSource(6296U);
    msg.setSourceEntity(116U);
    msg.setDestination(6619U);
    msg.setDestinationEntity(222U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryPowerChannelState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelState msg;
    msg.setTimeStamp(0.3655968238610582);
    msg.setSource(48806U);
    msg.setSourceEntity(153U);
    msg.setDestination(60959U);
    msg.setDestinationEntity(238U);
    msg.name.assign("WUGOKDPCREKHLDQRYSWIFDDVUAQZILFREXTFAMOJMKPJNAPOJVDDJBFIPLUUNINTSBMGCSECKUDZVKUHABEIJFTSEHZSYOPORTXFRYGLHUAXBJCQSCQFAUHVYZMEGF");
    msg.state = 29U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelState msg;
    msg.setTimeStamp(0.6364490837388929);
    msg.setSource(37256U);
    msg.setSourceEntity(18U);
    msg.setDestination(40144U);
    msg.setDestinationEntity(42U);
    msg.name.assign("BGTFERDHPVCYIWILCJAVSULITSWOUBRETTCFHXFOYJALNAJPNTDSMEQTXYEXMIFPQSNCWIMXREHQDZQNHNMUEDRJAMGHZNYXPCCVIHACBSTIUZWJBJNDPPRGMLALERWMSFWXPEVXMAROMRYYZKVUJYDFKBUOWHHWKPOENKFKPKRGRYBAWZNLUTGVAUZ");
    msg.state = 112U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelState msg;
    msg.setTimeStamp(0.8243941908465963);
    msg.setSource(53385U);
    msg.setSourceEntity(79U);
    msg.setDestination(51991U);
    msg.setDestinationEntity(163U);
    msg.name.assign("CIQWGPLSIKABNIYSVPSNVIQLSJSYGIFXMTZDYGOXLXBCWSSOBKMVJXAYDKELHZOFMNDPCWRWMDRXKCDZRLUOBEVDYFCTBEYEVGKMFGUTGVTHZIFAZR");
    msg.state = 102U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LedBrightness msg;
    msg.setTimeStamp(0.2445238249352073);
    msg.setSource(53067U);
    msg.setSourceEntity(105U);
    msg.setDestination(7240U);
    msg.setDestinationEntity(28U);
    msg.name.assign("DXOROFFILFSTCRAUDPUATISSHDYFQABEWWMXYRGVTIHGHCCPCNCPYKNJRZLUKGEQAWEIZXXSMGYZKEZVPDUNCJLQNELCQVBUEETBVGUWQMRVKHRSJSKQADYTHDKSZPIVOPZMZJWGBMTOJAUHNRVIVWX");
    msg.value = 236U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LedBrightness #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LedBrightness msg;
    msg.setTimeStamp(0.0455576696307487);
    msg.setSource(38496U);
    msg.setSourceEntity(168U);
    msg.setDestination(51431U);
    msg.setDestinationEntity(128U);
    msg.name.assign("WPMVEGIFULIQERUTMYPGGQZUOQLPMXMWQRQEAMRZNZKUWFCYYZUFNDKVBIOJKCXKGLIAZYSCNTUDNIRBVEMLQBLHJVWJEAFJHJVRHDHKCSTXLOMVGTIUBYDYXRXDIVGSRUXJCGRLWBFPPXZAZMLXEIRBNSHREGGSJYASLWJOPFQFWSQVFBNKHCWBVDSOTKHQUNIAPAOEPTOZQXWATPASTHXDESYFAVTMOZDIYLFGKJENTBPNDHK");
    msg.value = 74U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LedBrightness #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LedBrightness msg;
    msg.setTimeStamp(0.9201474514918897);
    msg.setSource(28591U);
    msg.setSourceEntity(119U);
    msg.setDestination(51845U);
    msg.setDestinationEntity(38U);
    msg.name.assign("EUQZOXGHQZKMGHHYWYETLCWXWKSBGPUSLWXVDFBKLYEJMCCBLVODAHNFVQXWMVAZQBZIAPPBINTRZMCILONAZFQPBJFFQVURLREUFBWZJMPYYSJRECYJZIMWQUHTITPWJOCMHNHVTXZHAYFFESFBYTNOZAXGCGGJEQDSKJAREDRSLJAQPSKMUGARIOKODQWCSDXNPBPLWXCSXFI");
    msg.value = 244U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LedBrightness #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryLedBrightness msg;
    msg.setTimeStamp(0.3054038483683055);
    msg.setSource(64212U);
    msg.setSourceEntity(238U);
    msg.setDestination(26843U);
    msg.setDestinationEntity(42U);
    msg.name.assign("EJYNTTFHEGIQYVZQTCTMGAWIDSOTZBFXWOASJHMBKSARAIROHHAPQUXEWDNJERFNVMPBOEKLSXHEUDCUDKKYQIMDHZOJSPXBXYCCLWQTDMHJPRNTHAGBLCRELVKHENUZFGFUUYBSLSSMUDFGINCJJBGGWRGKUFLDIYVRIFCDZBOEOZCKLIWZZCFUPAGBAZBPRXWYONKTNDWZPVQMPQVMGNTW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryLedBrightness #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryLedBrightness msg;
    msg.setTimeStamp(0.24553839042648862);
    msg.setSource(52773U);
    msg.setSourceEntity(226U);
    msg.setDestination(34023U);
    msg.setDestinationEntity(132U);
    msg.name.assign("YGIGFVWWDDPNLQZFVGEVCAOXETVGFONSNQRFSYURMIMBFTLXBUTHYIBISZPIVOBDVURMAXHYGBAYKEVSGJWUFTLUXOGXTNHGBOEFHPCYOJEWLNETPZBASJDQTJPIJKPJZJIWNPMXPRQVUINKZOJVCQZHASWKXVCXSRZDSTOOMLCKUHCRWRI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryLedBrightness #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryLedBrightness msg;
    msg.setTimeStamp(0.038127030391731154);
    msg.setSource(34957U);
    msg.setSourceEntity(216U);
    msg.setDestination(52928U);
    msg.setDestinationEntity(201U);
    msg.name.assign("RCAUJKZCYRILDVSTXRAUFDMSXUTOWAMFHOMNJPGEJXVDTYLNLWMXYCSMJTEQEKAAPKVVCHZASKNSZVUJVTISLBLWPRBDTPOCFDCEVUZDGTPZUHQEAQJIBNADFYVGXPQYYKBSHLJFLLZTWODFREQERGNTPLIXRQCJGFKZIRKXFWHBHBRWYONQPKNUMZWGODWONHBCAXNHARVISEIWXFWMIXDNPISOOJCYECJPKGGEYQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryLedBrightness #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetLedBrightness msg;
    msg.setTimeStamp(0.06882524389441169);
    msg.setSource(62461U);
    msg.setSourceEntity(5U);
    msg.setDestination(62460U);
    msg.setDestinationEntity(15U);
    msg.name.assign("KHVTILCKEZIXAQKSRDHRGADKQZMIBLZSRQYNVYHNVKETJAFUEN");
    msg.value = 60U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetLedBrightness #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetLedBrightness msg;
    msg.setTimeStamp(0.44104255309824913);
    msg.setSource(37495U);
    msg.setSourceEntity(190U);
    msg.setDestination(15086U);
    msg.setDestinationEntity(66U);
    msg.name.assign("AQJUICBVMJFSLQZPHVHRKSGYQBNDIYGYNSXINXVFQYWJCGZMTGZHYVVKQKNTEQXHNEWXLFZHZJEPNLKSF");
    msg.value = 221U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetLedBrightness #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetLedBrightness msg;
    msg.setTimeStamp(0.7231320867611744);
    msg.setSource(45703U);
    msg.setSourceEntity(85U);
    msg.setDestination(17438U);
    msg.setDestinationEntity(90U);
    msg.name.assign("WLRVPNKJZLIXJYAJYYQSEPQSQWDNGTAYTZFFMMYTKVKODEKCBACFPGTFFHSPHDJEBQNSUTYDOQEXBXMUGOJKMVOJUAWDFNNOYKOIBARHLRXNKQFEEGJGIZVJCVHYXNDODEBVCFUMTQKEZRHVHOXMIXOILPMTRKMBUURIOUDQZSINAWZFLTSDYCRKGBBSZUWPJMSAAWVZRPHUILEQZPTYTZ");
    msg.value = 148U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetLedBrightness #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetPWM msg;
    msg.setTimeStamp(0.8533242071172633);
    msg.setSource(15581U);
    msg.setSourceEntity(46U);
    msg.setDestination(15209U);
    msg.setDestinationEntity(198U);
    msg.id = 162U;
    msg.period = 2519134884U;
    msg.duty_cycle = 1695890695U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetPWM #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetPWM msg;
    msg.setTimeStamp(0.7383780258455361);
    msg.setSource(53170U);
    msg.setSourceEntity(108U);
    msg.setDestination(44802U);
    msg.setDestinationEntity(191U);
    msg.id = 160U;
    msg.period = 4256467046U;
    msg.duty_cycle = 577904619U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetPWM #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetPWM msg;
    msg.setTimeStamp(0.2320106697808726);
    msg.setSource(46341U);
    msg.setSourceEntity(32U);
    msg.setDestination(60418U);
    msg.setDestinationEntity(40U);
    msg.id = 85U;
    msg.period = 686226015U;
    msg.duty_cycle = 1769358893U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetPWM #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PWM msg;
    msg.setTimeStamp(0.9935565748911648);
    msg.setSource(4816U);
    msg.setSourceEntity(137U);
    msg.setDestination(59700U);
    msg.setDestinationEntity(114U);
    msg.id = 250U;
    msg.period = 3430856632U;
    msg.duty_cycle = 3594844179U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PWM #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PWM msg;
    msg.setTimeStamp(0.1493616287112195);
    msg.setSource(28848U);
    msg.setSourceEntity(203U);
    msg.setDestination(3691U);
    msg.setDestinationEntity(100U);
    msg.id = 145U;
    msg.period = 11667119U;
    msg.duty_cycle = 4060196668U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PWM #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PWM msg;
    msg.setTimeStamp(0.03635719172137575);
    msg.setSource(44761U);
    msg.setSourceEntity(185U);
    msg.setDestination(4414U);
    msg.setDestinationEntity(167U);
    msg.id = 196U;
    msg.period = 2775607017U;
    msg.duty_cycle = 3612199663U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PWM #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedState msg;
    msg.setTimeStamp(0.40550353412549023);
    msg.setSource(50169U);
    msg.setSourceEntity(77U);
    msg.setDestination(51147U);
    msg.setDestinationEntity(193U);
    msg.lat = 0.43037261397511706;
    msg.lon = 0.27621931724429616;
    msg.height = 0.2501575867306922;
    msg.x = 0.9586690447164158;
    msg.y = 0.296226406483333;
    msg.z = 0.07891509124600848;
    msg.phi = 0.29417502981208754;
    msg.theta = 0.635343909671708;
    msg.psi = 0.5772741199322666;
    msg.u = 0.4914694904990048;
    msg.v = 0.12846786227820328;
    msg.w = 0.24241617846784003;
    msg.vx = 0.17875243517818507;
    msg.vy = 0.08727911004995648;
    msg.vz = 0.516326104371065;
    msg.p = 0.06904163052370438;
    msg.q = 0.990720426698745;
    msg.r = 0.6892532765500069;
    msg.depth = 0.5918517389598028;
    msg.alt = 0.2522412085888587;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedState msg;
    msg.setTimeStamp(0.31724841455156594);
    msg.setSource(51012U);
    msg.setSourceEntity(5U);
    msg.setDestination(46748U);
    msg.setDestinationEntity(244U);
    msg.lat = 0.9852718369716166;
    msg.lon = 0.5366782442167888;
    msg.height = 0.6024677095410753;
    msg.x = 0.6132514643688256;
    msg.y = 0.6947716226610918;
    msg.z = 0.3755489696677502;
    msg.phi = 0.9107532363935057;
    msg.theta = 0.6891450262974407;
    msg.psi = 0.46210779950114833;
    msg.u = 0.74036207614561;
    msg.v = 0.17433416468269958;
    msg.w = 0.9658146099049195;
    msg.vx = 0.07203066273154513;
    msg.vy = 0.2126342922718203;
    msg.vz = 0.9927739818205229;
    msg.p = 0.020026159939893318;
    msg.q = 0.6827341321709395;
    msg.r = 0.6960977390341317;
    msg.depth = 0.16168071728843492;
    msg.alt = 0.5452586218177831;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedState msg;
    msg.setTimeStamp(0.469643520628108);
    msg.setSource(3684U);
    msg.setSourceEntity(143U);
    msg.setDestination(21779U);
    msg.setDestinationEntity(42U);
    msg.lat = 0.18523046390003017;
    msg.lon = 0.6209476412533985;
    msg.height = 0.08806748449544943;
    msg.x = 0.9582731293326692;
    msg.y = 0.6287130828924895;
    msg.z = 0.4774555005356931;
    msg.phi = 0.2241017709899814;
    msg.theta = 0.23990648652316082;
    msg.psi = 0.9719179342563188;
    msg.u = 0.7791358103429025;
    msg.v = 0.7357313903719326;
    msg.w = 0.5182673971844595;
    msg.vx = 0.5380840834901645;
    msg.vy = 0.8132508128297737;
    msg.vz = 0.7235974880909899;
    msg.p = 0.7885133448694804;
    msg.q = 0.2730794488610315;
    msg.r = 0.6830834244812336;
    msg.depth = 0.9057336915624777;
    msg.alt = 0.06774662620418126;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedStreamVelocity msg;
    msg.setTimeStamp(0.5439134659447296);
    msg.setSource(29606U);
    msg.setSourceEntity(221U);
    msg.setDestination(51947U);
    msg.setDestinationEntity(105U);
    msg.x = 0.9143535053853746;
    msg.y = 0.914003080860436;
    msg.z = 0.9062255213564804;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedStreamVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedStreamVelocity msg;
    msg.setTimeStamp(0.921404374611487);
    msg.setSource(23178U);
    msg.setSourceEntity(119U);
    msg.setDestination(30548U);
    msg.setDestinationEntity(197U);
    msg.x = 0.66978502829929;
    msg.y = 0.27487772363655083;
    msg.z = 0.38222734361312183;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedStreamVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedStreamVelocity msg;
    msg.setTimeStamp(0.3840435935386385);
    msg.setSource(43164U);
    msg.setSourceEntity(140U);
    msg.setDestination(570U);
    msg.setDestinationEntity(178U);
    msg.x = 0.8455231987934653;
    msg.y = 0.6773555626825605;
    msg.z = 0.291309587189862;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedStreamVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IndicatedSpeed msg;
    msg.setTimeStamp(0.9322881210145074);
    msg.setSource(47519U);
    msg.setSourceEntity(226U);
    msg.setDestination(41403U);
    msg.setDestinationEntity(97U);
    msg.value = 0.14609566464624524;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IndicatedSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IndicatedSpeed msg;
    msg.setTimeStamp(0.9843154783747908);
    msg.setSource(34945U);
    msg.setSourceEntity(0U);
    msg.setDestination(57172U);
    msg.setDestinationEntity(109U);
    msg.value = 0.506981843645655;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IndicatedSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IndicatedSpeed msg;
    msg.setTimeStamp(0.7364513865295568);
    msg.setSource(23658U);
    msg.setSourceEntity(23U);
    msg.setDestination(49646U);
    msg.setDestinationEntity(230U);
    msg.value = 0.7950580907881772;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IndicatedSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrueSpeed msg;
    msg.setTimeStamp(0.2170385689484523);
    msg.setSource(56305U);
    msg.setSourceEntity(28U);
    msg.setDestination(35812U);
    msg.setDestinationEntity(166U);
    msg.value = 0.6754893774075648;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrueSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrueSpeed msg;
    msg.setTimeStamp(0.031170070799546923);
    msg.setSource(17847U);
    msg.setSourceEntity(60U);
    msg.setDestination(49333U);
    msg.setDestinationEntity(239U);
    msg.value = 0.9072039474485816;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrueSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrueSpeed msg;
    msg.setTimeStamp(0.5554323876747764);
    msg.setSource(58268U);
    msg.setSourceEntity(13U);
    msg.setDestination(30428U);
    msg.setDestinationEntity(25U);
    msg.value = 0.1346533879566305;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrueSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationUncertainty msg;
    msg.setTimeStamp(0.49314023567257104);
    msg.setSource(63818U);
    msg.setSourceEntity(69U);
    msg.setDestination(13734U);
    msg.setDestinationEntity(180U);
    msg.x = 0.8210367753581681;
    msg.y = 0.617894184240576;
    msg.z = 0.9783767764797714;
    msg.phi = 0.5647235252652574;
    msg.theta = 0.20568684088177402;
    msg.psi = 0.7400622185370316;
    msg.p = 0.03018830394794747;
    msg.q = 0.009443742100057606;
    msg.r = 0.7156787564986976;
    msg.u = 0.29735502901575095;
    msg.v = 0.3827804144858993;
    msg.w = 0.05643781912618595;
    msg.bias_psi = 0.4233393406838609;
    msg.bias_r = 0.478261515260228;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationUncertainty #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationUncertainty msg;
    msg.setTimeStamp(0.998399346021337);
    msg.setSource(14113U);
    msg.setSourceEntity(240U);
    msg.setDestination(62309U);
    msg.setDestinationEntity(0U);
    msg.x = 0.43182590885556305;
    msg.y = 0.2836862965844742;
    msg.z = 0.6882064266255614;
    msg.phi = 0.7055510410023841;
    msg.theta = 0.21594084535955427;
    msg.psi = 0.13648845793809927;
    msg.p = 0.6335404153655245;
    msg.q = 0.15890509888033855;
    msg.r = 0.627996227254827;
    msg.u = 0.6232852772743902;
    msg.v = 0.9986625051702728;
    msg.w = 0.37001274495391057;
    msg.bias_psi = 0.4512791007565101;
    msg.bias_r = 0.7833292133733594;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationUncertainty #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationUncertainty msg;
    msg.setTimeStamp(0.9901019814100038);
    msg.setSource(12744U);
    msg.setSourceEntity(182U);
    msg.setDestination(16336U);
    msg.setDestinationEntity(33U);
    msg.x = 0.14559888377238328;
    msg.y = 0.9616682674847311;
    msg.z = 0.33512867982869754;
    msg.phi = 0.5123803319844626;
    msg.theta = 0.9496716257337208;
    msg.psi = 0.5236671283961045;
    msg.p = 0.3037600261015635;
    msg.q = 0.4241262866159048;
    msg.r = 0.6936034520442838;
    msg.u = 0.43164147721317325;
    msg.v = 0.4170823937327224;
    msg.w = 0.11452186855035962;
    msg.bias_psi = 0.8302165964122568;
    msg.bias_r = 0.6575705805075238;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationUncertainty #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationData msg;
    msg.setTimeStamp(0.10197617524916514);
    msg.setSource(24648U);
    msg.setSourceEntity(206U);
    msg.setDestination(37464U);
    msg.setDestinationEntity(143U);
    msg.bias_psi = 0.5996569147652967;
    msg.bias_r = 0.15742687304217773;
    msg.cog = 0.8097888568185713;
    msg.cyaw = 0.9576020318910605;
    msg.lbl_rej_level = 0.42841023431423375;
    msg.gps_rej_level = 0.1887852755423095;
    msg.custom_x = 0.3541307003192157;
    msg.custom_y = 0.5302104688824906;
    msg.custom_z = 0.5377180908634404;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationData msg;
    msg.setTimeStamp(0.8582922231963541);
    msg.setSource(1451U);
    msg.setSourceEntity(119U);
    msg.setDestination(35309U);
    msg.setDestinationEntity(211U);
    msg.bias_psi = 0.969761443861834;
    msg.bias_r = 0.04574016033111583;
    msg.cog = 0.6793920347817897;
    msg.cyaw = 0.13478290756160272;
    msg.lbl_rej_level = 0.9836745369829961;
    msg.gps_rej_level = 0.07504905997173172;
    msg.custom_x = 0.026534655424100828;
    msg.custom_y = 0.08276618078245479;
    msg.custom_z = 0.09884681905928017;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationData msg;
    msg.setTimeStamp(0.4828424502519536);
    msg.setSource(3024U);
    msg.setSourceEntity(223U);
    msg.setDestination(42453U);
    msg.setDestinationEntity(16U);
    msg.bias_psi = 0.5788714089212648;
    msg.bias_r = 0.18823472393574425;
    msg.cog = 0.4167025788136437;
    msg.cyaw = 0.02558538981983005;
    msg.lbl_rej_level = 0.2427031359214119;
    msg.gps_rej_level = 0.18741738306177935;
    msg.custom_x = 0.8303426614023831;
    msg.custom_y = 0.9430986115075972;
    msg.custom_z = 0.6190234803766509;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRejection msg;
    msg.setTimeStamp(0.13910400706418458);
    msg.setSource(60446U);
    msg.setSourceEntity(68U);
    msg.setDestination(39221U);
    msg.setDestinationEntity(98U);
    msg.utc_time = 0.18097073444629586;
    msg.reason = 92U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRejection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRejection msg;
    msg.setTimeStamp(0.9689500827141284);
    msg.setSource(10205U);
    msg.setSourceEntity(105U);
    msg.setDestination(60078U);
    msg.setDestinationEntity(39U);
    msg.utc_time = 0.13796859489278612;
    msg.reason = 190U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRejection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRejection msg;
    msg.setTimeStamp(0.04746683040208799);
    msg.setSource(49650U);
    msg.setSourceEntity(149U);
    msg.setDestination(7742U);
    msg.setDestinationEntity(8U);
    msg.utc_time = 0.6360232576129692;
    msg.reason = 131U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRejection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRangeAcceptance msg;
    msg.setTimeStamp(0.8946675743235903);
    msg.setSource(2232U);
    msg.setSourceEntity(41U);
    msg.setDestination(20363U);
    msg.setDestinationEntity(181U);
    msg.id = 42U;
    msg.range = 0.008331027912287015;
    msg.acceptance = 34U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRangeAcceptance #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRangeAcceptance msg;
    msg.setTimeStamp(0.943492656627064);
    msg.setSource(1880U);
    msg.setSourceEntity(21U);
    msg.setDestination(46552U);
    msg.setDestinationEntity(27U);
    msg.id = 95U;
    msg.range = 0.16002196400526114;
    msg.acceptance = 183U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRangeAcceptance #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRangeAcceptance msg;
    msg.setTimeStamp(0.0687214189488431);
    msg.setSource(48406U);
    msg.setSourceEntity(59U);
    msg.setDestination(15679U);
    msg.setDestinationEntity(51U);
    msg.id = 140U;
    msg.range = 0.9151495106356332;
    msg.acceptance = 112U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRangeAcceptance #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DvlRejection msg;
    msg.setTimeStamp(0.462209822011298);
    msg.setSource(28047U);
    msg.setSourceEntity(81U);
    msg.setDestination(62675U);
    msg.setDestinationEntity(180U);
    msg.type = 136U;
    msg.reason = 105U;
    msg.value = 0.19311269573545697;
    msg.timestep = 0.19088192209665922;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DvlRejection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DvlRejection msg;
    msg.setTimeStamp(0.051855979651510564);
    msg.setSource(6215U);
    msg.setSourceEntity(90U);
    msg.setDestination(23059U);
    msg.setDestinationEntity(151U);
    msg.type = 233U;
    msg.reason = 120U;
    msg.value = 0.8675071668630677;
    msg.timestep = 0.8108687130724707;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DvlRejection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DvlRejection msg;
    msg.setTimeStamp(0.155894382497632);
    msg.setSource(7363U);
    msg.setSourceEntity(198U);
    msg.setDestination(31337U);
    msg.setDestinationEntity(205U);
    msg.type = 216U;
    msg.reason = 8U;
    msg.value = 0.9671983302578676;
    msg.timestep = 0.1232821050629691;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DvlRejection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblEstimate msg;
    msg.setTimeStamp(0.1971387731502433);
    msg.setSource(15638U);
    msg.setSourceEntity(151U);
    msg.setDestination(65504U);
    msg.setDestinationEntity(142U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("QMBUXWYKVOTTIKPPOXHOESBKCMVSGMULRACDRXBSGHWGMCCITCFALZSSPKGXAJIRLQJGLOBJIHJBLHTIVUCZJJAKLRPPOHZKDGFWLIUUNEKFQPPBB");
    tmp_msg_0.lat = 0.3957966264673053;
    tmp_msg_0.lon = 0.7491983735787259;
    tmp_msg_0.depth = 0.26511772572170955;
    tmp_msg_0.query_channel = 140U;
    tmp_msg_0.reply_channel = 54U;
    tmp_msg_0.transponder_delay = 157U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.8882207407787994;
    msg.y = 0.8528597929310193;
    msg.var_x = 0.8664307352465833;
    msg.var_y = 0.9333031889646345;
    msg.distance = 0.9150106963814948;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblEstimate #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblEstimate msg;
    msg.setTimeStamp(0.9385104907280868);
    msg.setSource(18212U);
    msg.setSourceEntity(62U);
    msg.setDestination(63576U);
    msg.setDestinationEntity(153U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("QSWKYBZZGLZUIFALRWMAGZFTJUIJTVCYRVHXDHZNRCTWGJMDHUJBUJCQGBFVKKNDPJEBPUPPLZHGVNWAEFGNKYWKBQQHNYWKEXCOADCVQXFSHZPGQFPUEUGYZIATVDARRNJBVCUMXTQQJRTOJMACNSDRMC");
    tmp_msg_0.lat = 0.6097038868573302;
    tmp_msg_0.lon = 0.22220474037562798;
    tmp_msg_0.depth = 0.48675894421247534;
    tmp_msg_0.query_channel = 188U;
    tmp_msg_0.reply_channel = 16U;
    tmp_msg_0.transponder_delay = 226U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.0017339407879320978;
    msg.y = 0.12465969049541781;
    msg.var_x = 0.1587277296271724;
    msg.var_y = 0.4882320516053177;
    msg.distance = 0.7873757815097832;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblEstimate #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblEstimate msg;
    msg.setTimeStamp(0.07591081687666357);
    msg.setSource(57250U);
    msg.setSourceEntity(43U);
    msg.setDestination(59089U);
    msg.setDestinationEntity(27U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("UVYBJJSZGGQTAUKBDFSMVKLPMAURKQOJVLETOADABDWMPNFIBUQZHDCLMJSBCCNROBCIDREQTUMJWOVCYVXKPWWAPALYGHYHGFSFRINLMPTUXVZXNUEMGDIZXEGRKYRHZKYMAKRFRYSWULMJZWHJODNQKIEGXT");
    tmp_msg_0.lat = 0.6749944813326688;
    tmp_msg_0.lon = 0.10390449568544613;
    tmp_msg_0.depth = 0.9359387457831787;
    tmp_msg_0.query_channel = 157U;
    tmp_msg_0.reply_channel = 205U;
    tmp_msg_0.transponder_delay = 146U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.35670575042764463;
    msg.y = 0.10410233611493558;
    msg.var_x = 0.24578098454259523;
    msg.var_y = 0.2772995359994401;
    msg.distance = 0.9529728796379238;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblEstimate #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AlignmentState msg;
    msg.setTimeStamp(0.3490751234620222);
    msg.setSource(29000U);
    msg.setSourceEntity(70U);
    msg.setDestination(57719U);
    msg.setDestinationEntity(233U);
    msg.state = 188U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AlignmentState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AlignmentState msg;
    msg.setTimeStamp(0.9066338449109954);
    msg.setSource(63639U);
    msg.setSourceEntity(3U);
    msg.setDestination(14843U);
    msg.setDestinationEntity(196U);
    msg.state = 95U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AlignmentState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AlignmentState msg;
    msg.setTimeStamp(0.010450746429142566);
    msg.setSource(63064U);
    msg.setSourceEntity(6U);
    msg.setDestination(50362U);
    msg.setDestinationEntity(204U);
    msg.state = 44U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AlignmentState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupStreamVelocity msg;
    msg.setTimeStamp(0.8059218792608942);
    msg.setSource(3828U);
    msg.setSourceEntity(174U);
    msg.setDestination(6971U);
    msg.setDestinationEntity(17U);
    msg.x = 0.5708387079842326;
    msg.y = 0.25475250202849;
    msg.z = 0.1939978307310104;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupStreamVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupStreamVelocity msg;
    msg.setTimeStamp(0.38445428901964385);
    msg.setSource(53479U);
    msg.setSourceEntity(10U);
    msg.setDestination(19210U);
    msg.setDestinationEntity(134U);
    msg.x = 0.3070769417050502;
    msg.y = 0.07623136892689941;
    msg.z = 0.5284239444141385;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupStreamVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupStreamVelocity msg;
    msg.setTimeStamp(0.7542049547025258);
    msg.setSource(28448U);
    msg.setSourceEntity(118U);
    msg.setDestination(37388U);
    msg.setDestinationEntity(11U);
    msg.x = 0.890557113815888;
    msg.y = 0.9851795341537841;
    msg.z = 0.599192213197067;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupStreamVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Airflow msg;
    msg.setTimeStamp(0.7787264924659323);
    msg.setSource(7821U);
    msg.setSourceEntity(143U);
    msg.setDestination(27070U);
    msg.setDestinationEntity(178U);
    msg.va = 0.9643393407160881;
    msg.aoa = 0.6348024320305234;
    msg.ssa = 0.6830399020971897;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Airflow #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Airflow msg;
    msg.setTimeStamp(0.8281931529607102);
    msg.setSource(36339U);
    msg.setSourceEntity(228U);
    msg.setDestination(24731U);
    msg.setDestinationEntity(40U);
    msg.va = 0.21294497185942807;
    msg.aoa = 0.08853110863134062;
    msg.ssa = 0.18544979822753405;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Airflow #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Airflow msg;
    msg.setTimeStamp(0.32399317320548504);
    msg.setSource(9844U);
    msg.setSourceEntity(3U);
    msg.setDestination(6867U);
    msg.setDestinationEntity(254U);
    msg.va = 0.26770913343294866;
    msg.aoa = 0.7572730690021511;
    msg.ssa = 0.37071222508257984;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Airflow #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeading msg;
    msg.setTimeStamp(0.8366419814333945);
    msg.setSource(52059U);
    msg.setSourceEntity(206U);
    msg.setDestination(40586U);
    msg.setDestinationEntity(0U);
    msg.value = 0.6781407588811875;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeading #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeading msg;
    msg.setTimeStamp(0.04872928590614223);
    msg.setSource(29153U);
    msg.setSourceEntity(29U);
    msg.setDestination(58199U);
    msg.setDestinationEntity(125U);
    msg.value = 0.9931346963149533;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeading #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeading msg;
    msg.setTimeStamp(0.33273085373417177);
    msg.setSource(45026U);
    msg.setSourceEntity(71U);
    msg.setDestination(47517U);
    msg.setDestinationEntity(69U);
    msg.value = 0.8919342742699249;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeading #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredZ msg;
    msg.setTimeStamp(0.0009669426700126271);
    msg.setSource(3491U);
    msg.setSourceEntity(169U);
    msg.setDestination(37550U);
    msg.setDestinationEntity(242U);
    msg.value = 0.6967604002909729;
    msg.z_units = 224U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredZ #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredZ msg;
    msg.setTimeStamp(0.6793865905068235);
    msg.setSource(7360U);
    msg.setSourceEntity(190U);
    msg.setDestination(33166U);
    msg.setDestinationEntity(120U);
    msg.value = 0.40761861159572466;
    msg.z_units = 70U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredZ #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredZ msg;
    msg.setTimeStamp(0.8160426300671657);
    msg.setSource(37591U);
    msg.setSourceEntity(229U);
    msg.setDestination(14296U);
    msg.setDestinationEntity(52U);
    msg.value = 0.48443306359051985;
    msg.z_units = 122U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredZ #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredSpeed msg;
    msg.setTimeStamp(0.39190498889159864);
    msg.setSource(22367U);
    msg.setSourceEntity(74U);
    msg.setDestination(10744U);
    msg.setDestinationEntity(158U);
    msg.value = 0.3645704526207676;
    msg.speed_units = 249U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredSpeed msg;
    msg.setTimeStamp(0.616710463841585);
    msg.setSource(37979U);
    msg.setSourceEntity(11U);
    msg.setDestination(59805U);
    msg.setDestinationEntity(27U);
    msg.value = 0.5206101542437291;
    msg.speed_units = 122U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredSpeed msg;
    msg.setTimeStamp(0.985715069588988);
    msg.setSource(18026U);
    msg.setSourceEntity(212U);
    msg.setDestination(64079U);
    msg.setDestinationEntity(149U);
    msg.value = 0.41123633313295915;
    msg.speed_units = 156U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredRoll msg;
    msg.setTimeStamp(0.9080095419566556);
    msg.setSource(23251U);
    msg.setSourceEntity(242U);
    msg.setDestination(39882U);
    msg.setDestinationEntity(195U);
    msg.value = 0.06423427759760758;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredRoll #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredRoll msg;
    msg.setTimeStamp(0.044134673672659);
    msg.setSource(48215U);
    msg.setSourceEntity(248U);
    msg.setDestination(49331U);
    msg.setDestinationEntity(217U);
    msg.value = 0.25855491501520067;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredRoll #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredRoll msg;
    msg.setTimeStamp(0.14487928234438485);
    msg.setSource(12279U);
    msg.setSourceEntity(20U);
    msg.setDestination(19918U);
    msg.setDestinationEntity(29U);
    msg.value = 0.139394212110323;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredRoll #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPitch msg;
    msg.setTimeStamp(0.5270465803985394);
    msg.setSource(4808U);
    msg.setSourceEntity(4U);
    msg.setDestination(55017U);
    msg.setDestinationEntity(116U);
    msg.value = 0.9956472980562964;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPitch #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPitch msg;
    msg.setTimeStamp(0.4392870656190194);
    msg.setSource(16458U);
    msg.setSourceEntity(13U);
    msg.setDestination(55839U);
    msg.setDestinationEntity(226U);
    msg.value = 0.05308383268459549;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPitch #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPitch msg;
    msg.setTimeStamp(0.653764500457662);
    msg.setSource(3108U);
    msg.setSourceEntity(239U);
    msg.setDestination(54617U);
    msg.setDestinationEntity(217U);
    msg.value = 0.660645379701539;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPitch #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVerticalRate msg;
    msg.setTimeStamp(0.2530110329914601);
    msg.setSource(33017U);
    msg.setSourceEntity(248U);
    msg.setDestination(51436U);
    msg.setDestinationEntity(11U);
    msg.value = 0.33433619307838147;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVerticalRate #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVerticalRate msg;
    msg.setTimeStamp(0.611864240043445);
    msg.setSource(61923U);
    msg.setSourceEntity(179U);
    msg.setDestination(37866U);
    msg.setDestinationEntity(115U);
    msg.value = 0.8216301622246143;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVerticalRate #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVerticalRate msg;
    msg.setTimeStamp(0.8943106515030733);
    msg.setSource(39176U);
    msg.setSourceEntity(210U);
    msg.setDestination(25244U);
    msg.setDestinationEntity(121U);
    msg.value = 0.5358262629634518;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVerticalRate #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPath msg;
    msg.setTimeStamp(0.5131611922976821);
    msg.setSource(29956U);
    msg.setSourceEntity(225U);
    msg.setDestination(35342U);
    msg.setDestinationEntity(86U);
    msg.path_ref = 1671377920U;
    msg.start_lat = 0.9859519649325837;
    msg.start_lon = 0.5905705514891758;
    msg.start_z = 0.8267912683217375;
    msg.start_z_units = 207U;
    msg.end_lat = 0.2395227885579202;
    msg.end_lon = 0.06609309682881492;
    msg.end_z = 0.23739968697499125;
    msg.end_z_units = 215U;
    msg.speed = 0.7246963397326065;
    msg.speed_units = 249U;
    msg.lradius = 0.9073873782977874;
    msg.flags = 153U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPath #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPath msg;
    msg.setTimeStamp(0.8587471379798614);
    msg.setSource(267U);
    msg.setSourceEntity(37U);
    msg.setDestination(44030U);
    msg.setDestinationEntity(149U);
    msg.path_ref = 1067427929U;
    msg.start_lat = 0.07670736916513543;
    msg.start_lon = 0.2860820322283816;
    msg.start_z = 0.7928416846352448;
    msg.start_z_units = 163U;
    msg.end_lat = 0.8793270767337316;
    msg.end_lon = 0.643906511888319;
    msg.end_z = 0.5782608601278428;
    msg.end_z_units = 83U;
    msg.speed = 0.4921096951370535;
    msg.speed_units = 243U;
    msg.lradius = 0.4506670203106544;
    msg.flags = 13U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPath #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPath msg;
    msg.setTimeStamp(0.65252107952719);
    msg.setSource(31562U);
    msg.setSourceEntity(42U);
    msg.setDestination(10654U);
    msg.setDestinationEntity(244U);
    msg.path_ref = 297987041U;
    msg.start_lat = 0.09419025810462112;
    msg.start_lon = 0.28412591230109885;
    msg.start_z = 0.3996121274078511;
    msg.start_z_units = 122U;
    msg.end_lat = 0.08773927710096396;
    msg.end_lon = 0.5610279046156247;
    msg.end_z = 0.10453130277317435;
    msg.end_z_units = 190U;
    msg.speed = 0.06222541853404229;
    msg.speed_units = 141U;
    msg.lradius = 0.26677643772708004;
    msg.flags = 181U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPath #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredControl msg;
    msg.setTimeStamp(0.1438309167825379);
    msg.setSource(50472U);
    msg.setSourceEntity(150U);
    msg.setDestination(22503U);
    msg.setDestinationEntity(114U);
    msg.x = 0.7032715990686083;
    msg.y = 0.7402405420412993;
    msg.z = 0.8137914905779018;
    msg.k = 0.40632447773006475;
    msg.m = 0.5538120857183886;
    msg.n = 0.1003550253023896;
    msg.flags = 168U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredControl msg;
    msg.setTimeStamp(0.4728677919017832);
    msg.setSource(59767U);
    msg.setSourceEntity(2U);
    msg.setDestination(19555U);
    msg.setDestinationEntity(236U);
    msg.x = 0.7564951936494054;
    msg.y = 0.4419597022518049;
    msg.z = 0.16455820026714685;
    msg.k = 0.15531019434637572;
    msg.m = 0.32870615391106817;
    msg.n = 0.2078353233641722;
    msg.flags = 163U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredControl msg;
    msg.setTimeStamp(0.1569279507090633);
    msg.setSource(26236U);
    msg.setSourceEntity(9U);
    msg.setDestination(40564U);
    msg.setDestinationEntity(4U);
    msg.x = 0.6899473086472823;
    msg.y = 0.17657138907268766;
    msg.z = 0.8194213696105282;
    msg.k = 0.5410582345296057;
    msg.m = 0.46316000551142544;
    msg.n = 0.8190346172475368;
    msg.flags = 217U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeadingRate msg;
    msg.setTimeStamp(0.8559157963044811);
    msg.setSource(62520U);
    msg.setSourceEntity(224U);
    msg.setDestination(39700U);
    msg.setDestinationEntity(52U);
    msg.value = 0.8146477333387594;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeadingRate #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeadingRate msg;
    msg.setTimeStamp(0.6993218087209506);
    msg.setSource(34039U);
    msg.setSourceEntity(7U);
    msg.setDestination(51487U);
    msg.setDestinationEntity(198U);
    msg.value = 0.0771154798502508;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeadingRate #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeadingRate msg;
    msg.setTimeStamp(0.21077525693311772);
    msg.setSource(35462U);
    msg.setSourceEntity(153U);
    msg.setDestination(63872U);
    msg.setDestinationEntity(135U);
    msg.value = 0.15662268581730088;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeadingRate #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVelocity msg;
    msg.setTimeStamp(0.8770688928543553);
    msg.setSource(13144U);
    msg.setSourceEntity(69U);
    msg.setDestination(25215U);
    msg.setDestinationEntity(116U);
    msg.u = 0.08374990832627704;
    msg.v = 0.6609815862605215;
    msg.w = 0.24241312325824205;
    msg.p = 0.6236517094083567;
    msg.q = 0.492066466986002;
    msg.r = 0.25657414204551265;
    msg.flags = 82U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVelocity msg;
    msg.setTimeStamp(0.5257339450013967);
    msg.setSource(52264U);
    msg.setSourceEntity(152U);
    msg.setDestination(5226U);
    msg.setDestinationEntity(116U);
    msg.u = 0.49687130049721806;
    msg.v = 0.7610668594105672;
    msg.w = 0.044193733368734445;
    msg.p = 0.749457693105227;
    msg.q = 0.6738656321735923;
    msg.r = 0.6704218907344278;
    msg.flags = 3U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVelocity msg;
    msg.setTimeStamp(0.6166793176095631);
    msg.setSource(31815U);
    msg.setSourceEntity(138U);
    msg.setDestination(52236U);
    msg.setDestinationEntity(76U);
    msg.u = 0.15319931531090314;
    msg.v = 0.5506414975961695;
    msg.w = 0.23225258094678025;
    msg.p = 0.16817171285992227;
    msg.q = 0.7011110545448102;
    msg.r = 0.2988337888813889;
    msg.flags = 30U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathControlState msg;
    msg.setTimeStamp(0.6640009365882048);
    msg.setSource(33399U);
    msg.setSourceEntity(5U);
    msg.setDestination(775U);
    msg.setDestinationEntity(219U);
    msg.path_ref = 589890703U;
    msg.start_lat = 0.02229179681380289;
    msg.start_lon = 0.36424153148160676;
    msg.start_z = 0.8261429256034275;
    msg.start_z_units = 109U;
    msg.end_lat = 0.7467737676160535;
    msg.end_lon = 0.6519452716814566;
    msg.end_z = 0.8670614265346268;
    msg.end_z_units = 68U;
    msg.lradius = 0.30653388390389946;
    msg.flags = 238U;
    msg.x = 0.22116408837043866;
    msg.y = 0.14493889565736862;
    msg.z = 0.8911175065994963;
    msg.vx = 0.6190668917806734;
    msg.vy = 0.9002103937004217;
    msg.vz = 0.1338869774022755;
    msg.course_error = 0.8416384368381162;
    msg.eta = 45720U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathControlState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathControlState msg;
    msg.setTimeStamp(0.6782496525031856);
    msg.setSource(52165U);
    msg.setSourceEntity(69U);
    msg.setDestination(838U);
    msg.setDestinationEntity(100U);
    msg.path_ref = 4060175938U;
    msg.start_lat = 0.5604198257971591;
    msg.start_lon = 0.15558535094529313;
    msg.start_z = 0.6335393000084205;
    msg.start_z_units = 61U;
    msg.end_lat = 0.4570341869129063;
    msg.end_lon = 0.4770292253578756;
    msg.end_z = 0.613519362136244;
    msg.end_z_units = 239U;
    msg.lradius = 0.38020815309694966;
    msg.flags = 220U;
    msg.x = 0.7236758631612952;
    msg.y = 0.9998665370880085;
    msg.z = 0.9329350837391901;
    msg.vx = 0.8814997058852978;
    msg.vy = 0.566987461244488;
    msg.vz = 0.49599527841365754;
    msg.course_error = 0.6926736318969633;
    msg.eta = 12746U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathControlState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathControlState msg;
    msg.setTimeStamp(0.3188087629385714);
    msg.setSource(53661U);
    msg.setSourceEntity(224U);
    msg.setDestination(20557U);
    msg.setDestinationEntity(189U);
    msg.path_ref = 558850042U;
    msg.start_lat = 0.6905379217115415;
    msg.start_lon = 0.7504488336485595;
    msg.start_z = 0.45994774081876066;
    msg.start_z_units = 25U;
    msg.end_lat = 0.4165862739756012;
    msg.end_lon = 0.1002152813799001;
    msg.end_z = 0.5519504184452569;
    msg.end_z_units = 78U;
    msg.lradius = 0.37157420355187576;
    msg.flags = 31U;
    msg.x = 0.462048386347926;
    msg.y = 0.559605653494872;
    msg.z = 0.21847521953558402;
    msg.vx = 0.11024928833731051;
    msg.vy = 0.36213325029688004;
    msg.vz = 0.8428945856289458;
    msg.course_error = 0.9329387405341858;
    msg.eta = 13763U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathControlState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AllocatedControlTorques msg;
    msg.setTimeStamp(0.47247567354699616);
    msg.setSource(11778U);
    msg.setSourceEntity(191U);
    msg.setDestination(57618U);
    msg.setDestinationEntity(191U);
    msg.k = 0.1876110348900366;
    msg.m = 0.5800103286256675;
    msg.n = 0.8158382443710623;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AllocatedControlTorques #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AllocatedControlTorques msg;
    msg.setTimeStamp(0.06347092405024446);
    msg.setSource(51143U);
    msg.setSourceEntity(215U);
    msg.setDestination(47562U);
    msg.setDestinationEntity(52U);
    msg.k = 0.4888195954375537;
    msg.m = 0.2966565956876407;
    msg.n = 0.3015620200991802;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AllocatedControlTorques #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AllocatedControlTorques msg;
    msg.setTimeStamp(0.3775822384154004);
    msg.setSource(30899U);
    msg.setSourceEntity(130U);
    msg.setDestination(51758U);
    msg.setDestinationEntity(62U);
    msg.k = 0.9307599252621369;
    msg.m = 0.39147240107616654;
    msg.n = 0.009437575232585593;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AllocatedControlTorques #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlParcel msg;
    msg.setTimeStamp(0.5409673411024233);
    msg.setSource(57317U);
    msg.setSourceEntity(232U);
    msg.setDestination(48657U);
    msg.setDestinationEntity(37U);
    msg.p = 0.7318426696474444;
    msg.i = 0.271353058867598;
    msg.d = 0.8881443814463005;
    msg.a = 0.5857100062636856;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlParcel #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlParcel msg;
    msg.setTimeStamp(0.32825390519945985);
    msg.setSource(20471U);
    msg.setSourceEntity(14U);
    msg.setDestination(18081U);
    msg.setDestinationEntity(230U);
    msg.p = 0.0349414205443489;
    msg.i = 0.7959917916523249;
    msg.d = 0.07936691577293609;
    msg.a = 0.5867207332694007;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlParcel #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlParcel msg;
    msg.setTimeStamp(0.7939773135590408);
    msg.setSource(58791U);
    msg.setSourceEntity(96U);
    msg.setDestination(45461U);
    msg.setDestinationEntity(124U);
    msg.p = 0.6994796625788035;
    msg.i = 0.31225090335712025;
    msg.d = 0.9372098031342787;
    msg.a = 0.35616215758720526;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlParcel #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Brake msg;
    msg.setTimeStamp(0.45503336308950193);
    msg.setSource(19708U);
    msg.setSourceEntity(33U);
    msg.setDestination(1607U);
    msg.setDestinationEntity(210U);
    msg.op = 116U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Brake #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Brake msg;
    msg.setTimeStamp(0.9938644810746978);
    msg.setSource(1974U);
    msg.setSourceEntity(59U);
    msg.setDestination(61628U);
    msg.setDestinationEntity(68U);
    msg.op = 114U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Brake #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Brake msg;
    msg.setTimeStamp(0.6237677487407397);
    msg.setSource(33338U);
    msg.setSourceEntity(38U);
    msg.setDestination(35846U);
    msg.setDestinationEntity(64U);
    msg.op = 3U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Brake #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredLinearState msg;
    msg.setTimeStamp(0.5152164806568764);
    msg.setSource(22448U);
    msg.setSourceEntity(47U);
    msg.setDestination(3262U);
    msg.setDestinationEntity(136U);
    msg.x = 0.9797752024875994;
    msg.y = 0.4196799859721875;
    msg.z = 0.02338255489074359;
    msg.vx = 0.8390195174549686;
    msg.vy = 0.944146856349203;
    msg.vz = 0.3135157250827497;
    msg.ax = 0.1087776213338596;
    msg.ay = 0.29143086100324056;
    msg.az = 0.9795259831704093;
    msg.flags = 45456U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredLinearState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredLinearState msg;
    msg.setTimeStamp(0.9509284727046767);
    msg.setSource(53850U);
    msg.setSourceEntity(8U);
    msg.setDestination(34426U);
    msg.setDestinationEntity(128U);
    msg.x = 0.4050041197619434;
    msg.y = 0.24957509092783647;
    msg.z = 0.8900642115967535;
    msg.vx = 0.005574174153862965;
    msg.vy = 0.14334833422807525;
    msg.vz = 0.2545192187777957;
    msg.ax = 0.08110285155758612;
    msg.ay = 0.017802060371490014;
    msg.az = 0.5090409000219628;
    msg.flags = 11804U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredLinearState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredLinearState msg;
    msg.setTimeStamp(0.17567447084302357);
    msg.setSource(26464U);
    msg.setSourceEntity(237U);
    msg.setDestination(31743U);
    msg.setDestinationEntity(116U);
    msg.x = 0.8266694267685941;
    msg.y = 0.18051057940568516;
    msg.z = 0.2919707517882132;
    msg.vx = 0.20634470667266647;
    msg.vy = 0.7296805645261308;
    msg.vz = 0.968501536498799;
    msg.ax = 0.6361045380731823;
    msg.ay = 0.573674843540924;
    msg.az = 0.07014764232012316;
    msg.flags = 47007U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredLinearState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredThrottle msg;
    msg.setTimeStamp(0.7875626427100181);
    msg.setSource(11532U);
    msg.setSourceEntity(211U);
    msg.setDestination(530U);
    msg.setDestinationEntity(10U);
    msg.value = 0.560432165539736;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredThrottle #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredThrottle msg;
    msg.setTimeStamp(0.36888268122663326);
    msg.setSource(58149U);
    msg.setSourceEntity(120U);
    msg.setDestination(56163U);
    msg.setDestinationEntity(32U);
    msg.value = 0.8688796498934146;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredThrottle #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredThrottle msg;
    msg.setTimeStamp(0.28690382568717687);
    msg.setSource(14591U);
    msg.setSourceEntity(9U);
    msg.setDestination(28789U);
    msg.setDestinationEntity(105U);
    msg.value = 0.8944392230310573;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredThrottle #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Goto msg;
    msg.setTimeStamp(0.7297983043885923);
    msg.setSource(56349U);
    msg.setSourceEntity(182U);
    msg.setDestination(17627U);
    msg.setDestinationEntity(214U);
    msg.timeout = 22932U;
    msg.lat = 0.02889548474832726;
    msg.lon = 0.21387312289956417;
    msg.z = 0.7377691712240948;
    msg.z_units = 19U;
    msg.speed = 0.5759235381887445;
    msg.speed_units = 124U;
    msg.roll = 0.8622735857849888;
    msg.pitch = 0.8600378409501469;
    msg.yaw = 0.45592453289303014;
    msg.custom.assign("KFPNWNFSJHOPSIDOZTBRIUPHAGDQFQOKNDQWLFHOVXPGSRDZUQTGWVVZRLAHXWHR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Goto #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Goto msg;
    msg.setTimeStamp(0.5189323531165236);
    msg.setSource(22788U);
    msg.setSourceEntity(98U);
    msg.setDestination(17892U);
    msg.setDestinationEntity(20U);
    msg.timeout = 30458U;
    msg.lat = 0.35746472250926786;
    msg.lon = 0.9167340264575522;
    msg.z = 0.7216906181773538;
    msg.z_units = 135U;
    msg.speed = 0.6897428211548995;
    msg.speed_units = 8U;
    msg.roll = 0.0024234558672479034;
    msg.pitch = 0.2744899124647844;
    msg.yaw = 0.15928212234966987;
    msg.custom.assign("NUFNLUOQXVUTFKPHPROWLFZNYMYBSYPDUWSDHVIHEJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Goto #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Goto msg;
    msg.setTimeStamp(0.9421180168822243);
    msg.setSource(62875U);
    msg.setSourceEntity(178U);
    msg.setDestination(9083U);
    msg.setDestinationEntity(41U);
    msg.timeout = 11871U;
    msg.lat = 0.5079132866882246;
    msg.lon = 0.8862427513031851;
    msg.z = 0.34547143632243016;
    msg.z_units = 37U;
    msg.speed = 0.8128452360394269;
    msg.speed_units = 22U;
    msg.roll = 0.37104902008525165;
    msg.pitch = 0.7760749836935782;
    msg.yaw = 0.5614071074712722;
    msg.custom.assign("WVTTBVZIOUJYWARSGABXIZKUFWNFCCGSUPCOLZULWKKQPILOMKBRRNCYQFGKMDEQUQZJBZOSDWKJGMMXSFXYVDCRYFRWQFOOKTKINNYFGLBYCRCJLEMHDEUTRLAHLTIMOIPZPJSYDVXQBGZEFEBXGPXZEVRKUAMTHUZGNJHFOSNALEJAVPVJLA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Goto #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopUp msg;
    msg.setTimeStamp(0.8023666993833467);
    msg.setSource(4271U);
    msg.setSourceEntity(253U);
    msg.setDestination(35230U);
    msg.setDestinationEntity(65U);
    msg.timeout = 14529U;
    msg.lat = 0.4297803731132963;
    msg.lon = 0.9924036253280413;
    msg.z = 0.8578310426868292;
    msg.z_units = 54U;
    msg.speed = 0.6076330650514767;
    msg.speed_units = 239U;
    msg.duration = 64388U;
    msg.radius = 0.4673871636999667;
    msg.flags = 82U;
    msg.custom.assign("QRDGQILSVZFOIBUWVIUAPMCARJIZHDLPAXKLVEHRHXKGFPNTSKYIWLQYTAECELDHJXYJIDXAUAZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopUp #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopUp msg;
    msg.setTimeStamp(0.6569970915530581);
    msg.setSource(23972U);
    msg.setSourceEntity(155U);
    msg.setDestination(26602U);
    msg.setDestinationEntity(212U);
    msg.timeout = 13819U;
    msg.lat = 0.7920168150107922;
    msg.lon = 0.574975934310601;
    msg.z = 0.24259901108081405;
    msg.z_units = 111U;
    msg.speed = 0.7345037723257505;
    msg.speed_units = 232U;
    msg.duration = 54465U;
    msg.radius = 0.8264343040113823;
    msg.flags = 200U;
    msg.custom.assign("UBJYOYFBSEYSFTSRCZDHHQEPUISPBBRAYHKVZLPVYRWWGEBPUJGKVDAXWJVYGXRIFVWONAGIJZRLOVAEHCHJMVIVTGKNXXZQDTOCUJEPNDLJIDHQCAGCEKNCPNCGKZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopUp #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopUp msg;
    msg.setTimeStamp(0.9978512128406669);
    msg.setSource(58808U);
    msg.setSourceEntity(216U);
    msg.setDestination(45979U);
    msg.setDestinationEntity(23U);
    msg.timeout = 43809U;
    msg.lat = 0.019014760813215625;
    msg.lon = 0.583124342299947;
    msg.z = 0.4098639799675805;
    msg.z_units = 160U;
    msg.speed = 0.08964619625558634;
    msg.speed_units = 193U;
    msg.duration = 45247U;
    msg.radius = 0.4172637604807091;
    msg.flags = 225U;
    msg.custom.assign("DLPVFPWQOTPODBYLKOKIXYQUANCGURELCVZVEGDVBCUYCNJUICST");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopUp #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Teleoperation msg;
    msg.setTimeStamp(0.3622967784967751);
    msg.setSource(10333U);
    msg.setSourceEntity(87U);
    msg.setDestination(29355U);
    msg.setDestinationEntity(229U);
    msg.custom.assign("BBZUABIZWEDRUEQTZLGQYDTDGOUGYCYUHXLOAWECPMNWMRSCKSFYDMXFMDIHEUYVITBJWGHXNSAUSHCXYYIJFXPEGSVQHODCGCCFLZQRELRNGWBOKBGWJZMVVWZRTKKEPUQEWBLGAOPAQF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Teleoperation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Teleoperation msg;
    msg.setTimeStamp(0.7190928275909516);
    msg.setSource(56340U);
    msg.setSourceEntity(58U);
    msg.setDestination(49855U);
    msg.setDestinationEntity(132U);
    msg.custom.assign("DXKTXAVYYBEQLMCLCVAWMKGIUWISOWUZHRMWFCMCENPXMTIFTGJLEENBXYRMZZJXJUJAURBASYXZDOXCUBTDAZRLCSQPBWIDHTUSPMRNWBMDGYIJPRQGOVBEWCVFGKK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Teleoperation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Teleoperation msg;
    msg.setTimeStamp(0.6331234098781887);
    msg.setSource(3852U);
    msg.setSourceEntity(120U);
    msg.setDestination(62319U);
    msg.setDestinationEntity(25U);
    msg.custom.assign("WPSBOKEFAGXSILQPACWUUCDVVBNNXDFNDEZYAYQJXTFWRSIVEQRBKEZMTYCEJKZDZSJTAYKXTNDZPMLOS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Teleoperation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Loiter msg;
    msg.setTimeStamp(0.6507884186097546);
    msg.setSource(48263U);
    msg.setSourceEntity(211U);
    msg.setDestination(44624U);
    msg.setDestinationEntity(157U);
    msg.timeout = 65416U;
    msg.lat = 0.34709338494869124;
    msg.lon = 0.825718532888667;
    msg.z = 0.41190523602875406;
    msg.z_units = 52U;
    msg.duration = 31812U;
    msg.speed = 0.5444627378063314;
    msg.speed_units = 6U;
    msg.type = 95U;
    msg.radius = 0.18817902912993323;
    msg.length = 0.3674947411608026;
    msg.bearing = 0.33623531180440025;
    msg.direction = 141U;
    msg.custom.assign("POUVKAQLNCTBMXHKLPKFGGITFXWVSOHCSFK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Loiter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Loiter msg;
    msg.setTimeStamp(0.15530102990109063);
    msg.setSource(65079U);
    msg.setSourceEntity(59U);
    msg.setDestination(63404U);
    msg.setDestinationEntity(226U);
    msg.timeout = 54754U;
    msg.lat = 0.8609276499391859;
    msg.lon = 0.7435239381844709;
    msg.z = 0.8501520584062564;
    msg.z_units = 147U;
    msg.duration = 46438U;
    msg.speed = 0.4668294445616977;
    msg.speed_units = 253U;
    msg.type = 213U;
    msg.radius = 0.9274394767040468;
    msg.length = 0.2631017142527534;
    msg.bearing = 0.49064543805795613;
    msg.direction = 56U;
    msg.custom.assign("VVBBXKPKQDHTNLXLUFOCDCEEABHYQGNXUANYCBBUROZWORLWRMSFRSHZDQJEISYICYTIRWHIGWKQHBAURZHNDAGUQESFMVFVVHKYJWJSTQLALXYQMERCUHALIPXNGCWQYSESASJQZCPBMJRALPGTOPVEDNVMJPFNUVOEKUULAGCFWGMBYPFJGG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Loiter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Loiter msg;
    msg.setTimeStamp(0.2660038786284672);
    msg.setSource(61755U);
    msg.setSourceEntity(12U);
    msg.setDestination(10412U);
    msg.setDestinationEntity(92U);
    msg.timeout = 976U;
    msg.lat = 0.41065216191205633;
    msg.lon = 0.8278456705026069;
    msg.z = 0.7110726216297841;
    msg.z_units = 28U;
    msg.duration = 19069U;
    msg.speed = 0.25053608730127164;
    msg.speed_units = 165U;
    msg.type = 200U;
    msg.radius = 0.5748955827252482;
    msg.length = 0.022269235509331797;
    msg.bearing = 0.7998554747426261;
    msg.direction = 72U;
    msg.custom.assign("SGDOSRXTLRTPIZHLSOWTFWPCABCZTNNPLPMHCFYOQFPHQYTPEXWLEBZHKZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Loiter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IdleManeuver msg;
    msg.setTimeStamp(0.9861041249662186);
    msg.setSource(55678U);
    msg.setSourceEntity(116U);
    msg.setDestination(4165U);
    msg.setDestinationEntity(1U);
    msg.duration = 42421U;
    msg.custom.assign("FWYPICWRVXFFLRPYQWBDVPWMIKEFSZHRQQIGZXWTUZLKPJURVQSNWYNDJVLGKJYMAQEYROSDVZXRSGBASQKMEGPSDHTJSZWDOVZCFN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IdleManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IdleManeuver msg;
    msg.setTimeStamp(0.08501501288606916);
    msg.setSource(56556U);
    msg.setSourceEntity(204U);
    msg.setDestination(25396U);
    msg.setDestinationEntity(119U);
    msg.duration = 41U;
    msg.custom.assign("GPORJZGSIZQRYCMNIGTICABKLBRTQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IdleManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IdleManeuver msg;
    msg.setTimeStamp(0.3540321980639223);
    msg.setSource(26914U);
    msg.setSourceEntity(16U);
    msg.setDestination(6948U);
    msg.setDestinationEntity(102U);
    msg.duration = 3103U;
    msg.custom.assign("EVNKARWZGCNDJYEMQBVIUAKOPZWXBSFRDJHKVBTHZFSEWAZVYXMWNSZSQLSEFNQLQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IdleManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LowLevelControl msg;
    msg.setTimeStamp(0.9977589440847379);
    msg.setSource(47093U);
    msg.setSourceEntity(34U);
    msg.setDestination(27612U);
    msg.setDestinationEntity(28U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 3613362771U;
    tmp_msg_0.start_lat = 0.0633070403783299;
    tmp_msg_0.start_lon = 0.6573922840510927;
    tmp_msg_0.start_z = 0.5858506591081185;
    tmp_msg_0.start_z_units = 24U;
    tmp_msg_0.end_lat = 0.8486681373896707;
    tmp_msg_0.end_lon = 0.3498802638089271;
    tmp_msg_0.end_z = 0.9661412603164309;
    tmp_msg_0.end_z_units = 238U;
    tmp_msg_0.speed = 0.864474825023273;
    tmp_msg_0.speed_units = 245U;
    tmp_msg_0.lradius = 0.21689642001717513;
    tmp_msg_0.flags = 150U;
    msg.control.set(tmp_msg_0);
    msg.duration = 52634U;
    msg.custom.assign("RDUCRVBVRHNOGFNMRYMSGTGZOWCNFPJHRDMVVBWAZWUBWYTAMHGEEPYCLOKBRYWHKJEAYIZNOLCMBYFGWAISLZBCBYYRFPKMCEQKUNUITLQPTHVZDHPJEAEIHLXANNGEFSBAYDUQFJXWOTSFJUSXNNJQNPZYIKZAIGPKEVXQLMSZLBFPQVUSRZZVWGFUJMCGSQXRDSDJXQTFDIOOIEMICJJDGTQPDWSVXLH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LowLevelControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LowLevelControl msg;
    msg.setTimeStamp(0.7564893933992981);
    msg.setSource(52576U);
    msg.setSourceEntity(6U);
    msg.setDestination(27359U);
    msg.setDestinationEntity(24U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.9198048508096975;
    tmp_msg_0.z_units = 153U;
    msg.control.set(tmp_msg_0);
    msg.duration = 61270U;
    msg.custom.assign("MKGDBVOXWOIJMSAQAYANPICZTBDZBCCXYCXBJJESG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LowLevelControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LowLevelControl msg;
    msg.setTimeStamp(0.1434295326795164);
    msg.setSource(14607U);
    msg.setSourceEntity(173U);
    msg.setDestination(52602U);
    msg.setDestinationEntity(81U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.05077286381570345;
    msg.control.set(tmp_msg_0);
    msg.duration = 37861U;
    msg.custom.assign("YXVJOACLZPQIYZZXKDTHMQNWAWJHDARBGIWRAMCIPTICKKKZNBNRVYJQSBTSFOIJIUFHDKJWHQSM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LowLevelControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rows msg;
    msg.setTimeStamp(0.8278250162445673);
    msg.setSource(6124U);
    msg.setSourceEntity(223U);
    msg.setDestination(13361U);
    msg.setDestinationEntity(223U);
    msg.timeout = 40128U;
    msg.lat = 0.82376755504607;
    msg.lon = 0.892672876045473;
    msg.z = 0.7742722364321178;
    msg.z_units = 46U;
    msg.speed = 0.38214376121174476;
    msg.speed_units = 144U;
    msg.bearing = 0.7347227480673315;
    msg.cross_angle = 0.6265559219321628;
    msg.width = 0.8976982023034943;
    msg.length = 0.913974424405612;
    msg.hstep = 0.6696755953717702;
    msg.coff = 169U;
    msg.alternation = 183U;
    msg.flags = 144U;
    msg.custom.assign("WKISZUBRDHUSEBNVSKQDLPUMKNTXKLBCNJXILYNDZVSKSONPHMQTKQOVHVPJXKMXMSPGUEOFGMKYBFGLCCEIZFPLXGRRTCLHOFUOXRGMEPBOLXVYOTVDRHCHAUYSYLZXWQUQVWDTPJEQOSJAQHXERCMFBJFGKDAOWLQN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rows #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rows msg;
    msg.setTimeStamp(0.9895797012319871);
    msg.setSource(27819U);
    msg.setSourceEntity(129U);
    msg.setDestination(57729U);
    msg.setDestinationEntity(99U);
    msg.timeout = 41012U;
    msg.lat = 0.1549697062912606;
    msg.lon = 0.32657345448776565;
    msg.z = 0.5364209280138579;
    msg.z_units = 32U;
    msg.speed = 0.30724060618633653;
    msg.speed_units = 77U;
    msg.bearing = 0.5114427118289486;
    msg.cross_angle = 0.5164878193583327;
    msg.width = 0.06416836418947913;
    msg.length = 0.5437388118343605;
    msg.hstep = 0.9109251708368241;
    msg.coff = 20U;
    msg.alternation = 10U;
    msg.flags = 181U;
    msg.custom.assign("OFMGCKTZSSSGMAYVMEXCLDKWMKSVMRNHBKBRITVRZFBNILUOWPQVSFMTDTIOHBASYRCDHZQNIPDGJATUFGCGVIZLUXDWDD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rows #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rows msg;
    msg.setTimeStamp(0.7851751560836594);
    msg.setSource(53039U);
    msg.setSourceEntity(10U);
    msg.setDestination(26061U);
    msg.setDestinationEntity(44U);
    msg.timeout = 8808U;
    msg.lat = 0.5743268351543277;
    msg.lon = 0.8827768969107248;
    msg.z = 0.019632973558647904;
    msg.z_units = 73U;
    msg.speed = 0.48451412010973005;
    msg.speed_units = 246U;
    msg.bearing = 0.2113371051026265;
    msg.cross_angle = 0.529085088606691;
    msg.width = 0.2568672406767436;
    msg.length = 0.8978230420722297;
    msg.hstep = 0.9944205446206219;
    msg.coff = 54U;
    msg.alternation = 15U;
    msg.flags = 10U;
    msg.custom.assign("LTKHBSRKTLLCQPWLHFTFMCIJSPAXZRFWISBSAVDPZKOGGTIBMIJMGFDTXQDHWEDUMQJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rows #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPath msg;
    msg.setTimeStamp(0.013528639997511416);
    msg.setSource(40390U);
    msg.setSourceEntity(143U);
    msg.setDestination(59924U);
    msg.setDestinationEntity(48U);
    msg.timeout = 35363U;
    msg.lat = 0.6264311549412886;
    msg.lon = 0.023972804065400033;
    msg.z = 0.4609716702604575;
    msg.z_units = 31U;
    msg.speed = 0.014429876188085;
    msg.speed_units = 16U;
    msg.custom.assign("ERGAKLERTVQCDFNMHSCUBAEOANZWZZVIXYWJIAOBAKEWPPMLCUJLYIOHLMUIHERQAXTYIBODCBITSKIKHYNDSLUCUHFDVQWRTZYHO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPath #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPath msg;
    msg.setTimeStamp(0.0914205889508819);
    msg.setSource(10623U);
    msg.setSourceEntity(77U);
    msg.setDestination(16103U);
    msg.setDestinationEntity(130U);
    msg.timeout = 5189U;
    msg.lat = 0.5152257561609278;
    msg.lon = 0.46212446416697484;
    msg.z = 0.6601202068192645;
    msg.z_units = 88U;
    msg.speed = 0.6045237033600598;
    msg.speed_units = 95U;
    msg.custom.assign("CBFYAPVZIOVAGAHVXFXJNXZAAUVLBWCMGRWZIQAGJRNKHHRUDNNTTFWQJZWGIKJVMPPSMWFQOGTKXITYDMHUEBYMDQWFONCPWRSVUTLYQHSHJQIEPKHCJNERCXYKLKBCEOZGUZLDEWPZVUYRXZXSOVSSAAGPJCRLDQBNOSUBYIKEVFIANFMATUIZPGDMMXIDFUBOWLEEGPWFLDLCXTNKPBKRQH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPath #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPath msg;
    msg.setTimeStamp(0.08423163164287206);
    msg.setSource(15273U);
    msg.setSourceEntity(46U);
    msg.setDestination(47210U);
    msg.setDestinationEntity(103U);
    msg.timeout = 34964U;
    msg.lat = 0.777749627880811;
    msg.lon = 0.5831114122257961;
    msg.z = 0.6023942831989628;
    msg.z_units = 237U;
    msg.speed = 0.7124808580796256;
    msg.speed_units = 112U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.9332331607178702;
    tmp_msg_0.y = 0.5070677245269637;
    tmp_msg_0.z = 0.769463967955102;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("TYFWOPVDRQRICPEGDQAGJXIOSLDLLZPOOFRNZFDWMGSAIYITHBYVGESHFWDSXBDJNQVZNVPGGJZIBFFZXUNLGEBSSCYOFSIHPWHZKLMBMXTCKNNUVWJXMMVRXPNYDMGOLAFAQBCTYUNRDSOMTHHWJNZAMTYUVECDGRBIBMFMHKEZZYGUJWQZYACXUKKSXKHUPQHELEQK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPath #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathPoint msg;
    msg.setTimeStamp(0.4639027218292918);
    msg.setSource(6451U);
    msg.setSourceEntity(87U);
    msg.setDestination(15037U);
    msg.setDestinationEntity(90U);
    msg.x = 0.7220541777978464;
    msg.y = 0.07885412905866862;
    msg.z = 0.4288864962313049;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathPoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathPoint msg;
    msg.setTimeStamp(0.8727444895890452);
    msg.setSource(5152U);
    msg.setSourceEntity(14U);
    msg.setDestination(65036U);
    msg.setDestinationEntity(10U);
    msg.x = 0.8967976110293894;
    msg.y = 0.7891308451860768;
    msg.z = 0.8885537801406549;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathPoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathPoint msg;
    msg.setTimeStamp(0.20701258434617842);
    msg.setSource(8373U);
    msg.setSourceEntity(143U);
    msg.setDestination(35773U);
    msg.setDestinationEntity(47U);
    msg.x = 0.8578659954666757;
    msg.y = 0.9790553930319511;
    msg.z = 0.8569827694254448;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathPoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::YoYo msg;
    msg.setTimeStamp(0.48870401403581);
    msg.setSource(44184U);
    msg.setSourceEntity(239U);
    msg.setDestination(7242U);
    msg.setDestinationEntity(124U);
    msg.timeout = 34545U;
    msg.lat = 0.889686399702337;
    msg.lon = 0.3367064931328042;
    msg.z = 0.3677740751445623;
    msg.z_units = 172U;
    msg.amplitude = 0.634414950829506;
    msg.pitch = 0.8172008064788928;
    msg.speed = 0.35017503145333073;
    msg.speed_units = 176U;
    msg.custom.assign("RCDETWFIGYCUYYCLGTTKFUXIIMAKJBNNIDXBYGKMAVFCWEKBQPMMGRWWWPMGSOQVDUZARJDYSJRHOQECRVXYDHHVUGNBEOQTQYDLGFLYKYXPTPSINAJJHCULVMVOOZFJZNUWBHJAUTNYQQREZQIZCGZLVEBHHSDZDANSFSTLCQPONIP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("YoYo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::YoYo msg;
    msg.setTimeStamp(0.6721068836561227);
    msg.setSource(14820U);
    msg.setSourceEntity(220U);
    msg.setDestination(24807U);
    msg.setDestinationEntity(187U);
    msg.timeout = 53427U;
    msg.lat = 0.494484866753949;
    msg.lon = 0.38847624092130684;
    msg.z = 0.03666716349347876;
    msg.z_units = 201U;
    msg.amplitude = 0.43480753244974457;
    msg.pitch = 0.4980193180173801;
    msg.speed = 0.014913476167351059;
    msg.speed_units = 225U;
    msg.custom.assign("KKVKFQIUYDFQEYSLDASMGONDBTLFSVQGXYXEXWCTUOUAMEOPWVXOBAEEHVTPTMVPQMVUJPZDCIKZIROWHSRZMEFKMBSABAOQJBVAZPHSUWFJZFTLWGRUABMNCPDJYRMGIEKSICLUZJXRHBGGRHWWLBPDDRDQYDNXQNRVJCEAOIKNICPYZQYYHZMGLB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("YoYo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::YoYo msg;
    msg.setTimeStamp(0.5227369267450747);
    msg.setSource(20801U);
    msg.setSourceEntity(164U);
    msg.setDestination(1096U);
    msg.setDestinationEntity(120U);
    msg.timeout = 61808U;
    msg.lat = 0.9429751294130434;
    msg.lon = 0.34913865028207447;
    msg.z = 0.6095613333863197;
    msg.z_units = 243U;
    msg.amplitude = 0.17515485284150567;
    msg.pitch = 0.6247318523997893;
    msg.speed = 0.9852126013722246;
    msg.speed_units = 188U;
    msg.custom.assign("YQWWLEZJNFCN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("YoYo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TeleoperationDone msg;
    msg.setTimeStamp(0.7433720092339194);
    msg.setSource(51319U);
    msg.setSourceEntity(248U);
    msg.setDestination(23188U);
    msg.setDestinationEntity(54U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TeleoperationDone #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TeleoperationDone msg;
    msg.setTimeStamp(0.2833830862909169);
    msg.setSource(46282U);
    msg.setSourceEntity(40U);
    msg.setDestination(5405U);
    msg.setDestinationEntity(179U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TeleoperationDone #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TeleoperationDone msg;
    msg.setTimeStamp(0.26190082968143635);
    msg.setSource(35547U);
    msg.setSourceEntity(1U);
    msg.setDestination(26589U);
    msg.setDestinationEntity(181U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TeleoperationDone #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeeping msg;
    msg.setTimeStamp(0.488864073527007);
    msg.setSource(21324U);
    msg.setSourceEntity(220U);
    msg.setDestination(26584U);
    msg.setDestinationEntity(171U);
    msg.lat = 0.15664695328793898;
    msg.lon = 0.16012424180504248;
    msg.z = 0.8107926426655794;
    msg.z_units = 158U;
    msg.radius = 0.03691719689462525;
    msg.duration = 58283U;
    msg.speed = 0.3191758357052955;
    msg.speed_units = 70U;
    msg.custom.assign("HHYUZZTWKIFOGYUWQKZXBEDTDVCBVEWOSNJVXMDCTSLRZREOYNPAUYHJAYRSOKIQELXVBZWRQAYPFXNUQDVEGEJAXGRPIIDGILFRHHNCYSPCXVNQKQTIZDCUFWDTKVLRRNOMEBLAKLYBNQTFASSSDUBZOCMOBFJMMQOZAIGWPDKLNZSGRMYIHJXVSIGMLFELZWODAFJXWVOVUKWBUHSCHUJCQCCJXBGAEMPFNTE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeeping #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeeping msg;
    msg.setTimeStamp(0.571916564122827);
    msg.setSource(28422U);
    msg.setSourceEntity(30U);
    msg.setDestination(25752U);
    msg.setDestinationEntity(196U);
    msg.lat = 0.7394254792228864;
    msg.lon = 0.2691149574511813;
    msg.z = 0.04005413718097861;
    msg.z_units = 102U;
    msg.radius = 0.8652164843214929;
    msg.duration = 20102U;
    msg.speed = 0.7271560379294145;
    msg.speed_units = 170U;
    msg.custom.assign("PBYMVSPNQQKZDRLNUZRMLMHOEYRXO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeeping #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeeping msg;
    msg.setTimeStamp(0.2998167070547255);
    msg.setSource(38011U);
    msg.setSourceEntity(106U);
    msg.setDestination(59911U);
    msg.setDestinationEntity(57U);
    msg.lat = 0.7777961789943783;
    msg.lon = 0.24743456078487602;
    msg.z = 0.9884715084813398;
    msg.z_units = 96U;
    msg.radius = 0.5604646212641832;
    msg.duration = 22428U;
    msg.speed = 0.3350966446298611;
    msg.speed_units = 46U;
    msg.custom.assign("NQCGWSERMUTUMNBKDTSBWXTEXLHMGDBIYQVNPTPZNIOGIASJJJHLWUCBFBFEZTUNOLJRPLZDFNKZCKVYCWEKUKQRHHPMUDZPQTODPCYMZLLLBMVMSXAMDUBGBKUHFXGCADKKQOHYHGAAXJHBSEDREAFYBZNEOUOXLAHIRFDZOW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeeping #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Elevator msg;
    msg.setTimeStamp(0.5308996447953075);
    msg.setSource(3491U);
    msg.setSourceEntity(218U);
    msg.setDestination(41077U);
    msg.setDestinationEntity(47U);
    msg.timeout = 33435U;
    msg.flags = 208U;
    msg.lat = 0.5494530268630627;
    msg.lon = 0.2277455580075034;
    msg.start_z = 0.4102799526275349;
    msg.start_z_units = 27U;
    msg.end_z = 0.051506068738722544;
    msg.end_z_units = 189U;
    msg.radius = 0.7951152286471115;
    msg.speed = 0.44491414538841834;
    msg.speed_units = 148U;
    msg.custom.assign("WXHOAILVYOYDNMLYWKVHHSGBUQCROKJATEAPNSIQLXUNVGTDXNCZGPEYOQWQOQPMUYTBXLOPDA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Elevator #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Elevator msg;
    msg.setTimeStamp(0.4184324342447824);
    msg.setSource(18148U);
    msg.setSourceEntity(233U);
    msg.setDestination(38853U);
    msg.setDestinationEntity(12U);
    msg.timeout = 27174U;
    msg.flags = 125U;
    msg.lat = 0.12603839720787968;
    msg.lon = 0.514356407311689;
    msg.start_z = 0.10100354119317168;
    msg.start_z_units = 138U;
    msg.end_z = 0.10349395151061347;
    msg.end_z_units = 206U;
    msg.radius = 0.7956069232044494;
    msg.speed = 0.039623157391925456;
    msg.speed_units = 4U;
    msg.custom.assign("HMYNZWGKFBEOTUQRMZDORPARWQWJWKXDHDBNHMTTEHBSNLACGQXFIXRYCZTXKEUPFLYYVNHXXZKOFPDTOEESXUOPPBKHSVYYFVPDHSVLAJBZFORNBNULGJTLTJZKVRIMIPNDJJWTEQBUSAABQZKUGXDQM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Elevator #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Elevator msg;
    msg.setTimeStamp(0.7409598594813271);
    msg.setSource(11834U);
    msg.setSourceEntity(48U);
    msg.setDestination(15676U);
    msg.setDestinationEntity(12U);
    msg.timeout = 65155U;
    msg.flags = 86U;
    msg.lat = 0.3482708415659401;
    msg.lon = 0.7286826149336885;
    msg.start_z = 0.09617586277215695;
    msg.start_z_units = 138U;
    msg.end_z = 0.8904144617169348;
    msg.end_z_units = 210U;
    msg.radius = 0.1994445678565766;
    msg.speed = 0.5732873942419092;
    msg.speed_units = 16U;
    msg.custom.assign("BRRPHHLRCUVEOFZHOMGHUNNMFHQJTSTLQUQOBHZLVTVDFEKBIDHYDFZNXAUZLEAAGISKSBWJWKBTMUDGFRRDLSOVKJQQLYKQRBEKNAFSTVGNXSCZHJVGLKGRJBXPMCXEEDCZNATOMXTWVNRQOWYYUUNWYYJAPUWJLXNH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Elevator #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowTrajectory msg;
    msg.setTimeStamp(0.747175070353762);
    msg.setSource(49473U);
    msg.setSourceEntity(229U);
    msg.setDestination(6063U);
    msg.setDestinationEntity(148U);
    msg.timeout = 47007U;
    msg.lat = 0.2381772211360933;
    msg.lon = 0.8317899656630815;
    msg.z = 0.33867713983394776;
    msg.z_units = 31U;
    msg.speed = 0.3779731571991277;
    msg.speed_units = 249U;
    msg.custom.assign("FCDPMQNSMNIHJGIMQZRWUAFCBVXXIEXZDVCSKYOZD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowTrajectory #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowTrajectory msg;
    msg.setTimeStamp(0.021741205123466556);
    msg.setSource(20352U);
    msg.setSourceEntity(138U);
    msg.setDestination(54539U);
    msg.setDestinationEntity(182U);
    msg.timeout = 52722U;
    msg.lat = 0.6963104065109441;
    msg.lon = 0.5998929824879884;
    msg.z = 0.9959780739691786;
    msg.z_units = 45U;
    msg.speed = 0.312537747937904;
    msg.speed_units = 28U;
    msg.custom.assign("BKDJZNSCWJTWQCJRGTEOCNQJYTEALFFNXBOFMSQNSHQBCTPFZIHDXWGGXXDLOYRFCUMFDROWUNAQAHTJVAKJKYSXVJIULZNBPFXRMNWQLQYTELPMXUPTHICECAPTE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowTrajectory #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowTrajectory msg;
    msg.setTimeStamp(0.6966964070544337);
    msg.setSource(1949U);
    msg.setSourceEntity(177U);
    msg.setDestination(9781U);
    msg.setDestinationEntity(129U);
    msg.timeout = 59289U;
    msg.lat = 0.22785231205517853;
    msg.lon = 0.1934038199658623;
    msg.z = 0.8458617474725213;
    msg.z_units = 165U;
    msg.speed = 0.46803720959047124;
    msg.speed_units = 210U;
    msg.custom.assign("NCVYTWXAHBOUSHFBUDALWIQPFAPFGWOLMQTBSUYNTITQY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowTrajectory #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrajectoryPoint msg;
    msg.setTimeStamp(0.0997676475836855);
    msg.setSource(51719U);
    msg.setSourceEntity(204U);
    msg.setDestination(45181U);
    msg.setDestinationEntity(27U);
    msg.x = 0.23541597413367;
    msg.y = 0.005310412702275946;
    msg.z = 0.5873572599426298;
    msg.t = 0.4116998739901446;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrajectoryPoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrajectoryPoint msg;
    msg.setTimeStamp(0.7154045277685557);
    msg.setSource(2297U);
    msg.setSourceEntity(81U);
    msg.setDestination(45876U);
    msg.setDestinationEntity(134U);
    msg.x = 0.509172899896207;
    msg.y = 0.8357629596272151;
    msg.z = 0.20905896341779462;
    msg.t = 0.19112859230395596;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrajectoryPoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrajectoryPoint msg;
    msg.setTimeStamp(0.9490996902768798);
    msg.setSource(63172U);
    msg.setSourceEntity(128U);
    msg.setDestination(28134U);
    msg.setDestinationEntity(87U);
    msg.x = 0.6838455897215749;
    msg.y = 0.3135828105933799;
    msg.z = 0.2901673267316339;
    msg.t = 0.7510801955391343;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrajectoryPoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CustomManeuver msg;
    msg.setTimeStamp(0.4748665173530493);
    msg.setSource(1162U);
    msg.setSourceEntity(141U);
    msg.setDestination(18182U);
    msg.setDestinationEntity(112U);
    msg.timeout = 28440U;
    msg.name.assign("TRERDFESMOMHZZXMPCTUBHRWJHQKTEHXXYAIUYVHNADSVOJUVNRIIOGXJGUWSNWEPLJDGDTTZAOYVCPMGTOFHFQNPQRZCZKUKPOMTQJHVAGSBQHCTWMHYJWAFKWCDUYCYXOVMZSGZBLYBOVRFACPIRKGFDKELYBXNKBWWANIGMXDSLXVKDWQVBLKNJICEGT");
    msg.custom.assign("SOIEKDVRMDIRVILHDHJXMEJFLCDTPCCBUMCKHJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CustomManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CustomManeuver msg;
    msg.setTimeStamp(0.7724746532575595);
    msg.setSource(42706U);
    msg.setSourceEntity(203U);
    msg.setDestination(12389U);
    msg.setDestinationEntity(22U);
    msg.timeout = 60385U;
    msg.name.assign("BBTGJETLOZKSLGUHLVPAGXZKAPHDSDUNYIRZSGLZPWHKPCPCEQYOWJOSSXXBHUMSQAOEVQQTTRGZXIGIPKLMNNOEPTEOIBUFYPXAULHOCUNEDAMZRVBDFMIFISNNBHAXFGIOCVZVRQNKRMMJKCRLIBWWTJNPRVTYVFIZTXBAAEWGCYLYJRROQJDEDHOLJFMPBYKLKFJEXAMTKYFZKHHHGGDCMXIDESRT");
    msg.custom.assign("EHZDUDETLGUYONRZLWNRNYPUAGXIGEXAGIVUQMSWYEPBQPBKFBJCPESOAMXCKDJMRXRALHTLYKOMIPTKUWCAZXJKDITBMFMCTAJDWVDQTJSIRASWAOUOIIZGEZHFIMJFELZOFCRDHFNZKLNQIFHVXQCQOQBVCOBXJEGJRSNCDLQUATSGMHUSRQBNNSKFZBHXJFTCWWGDPVVNIJDURLVHPYWTUWBYNOYPMERKPWQFBXZYGAYOGCS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CustomManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CustomManeuver msg;
    msg.setTimeStamp(0.36930574301794317);
    msg.setSource(30273U);
    msg.setSourceEntity(31U);
    msg.setDestination(31731U);
    msg.setDestinationEntity(53U);
    msg.timeout = 53754U;
    msg.name.assign("JQXNGPRGTDUVEKLVKRPLKSLUKWDQUSNAVBIMYSYIZIKNTDENXQMRHBOAQEGIHMOYRAFLTTOHPUPAAWZETZGEFNCMZWJVTCQYDXRVBBJRFQLDTDOSHPSCIJMSYDCHFEUJWGEDOZWDFQZVXQUQAPXHNYAMUJLPKDWJLWIVUTMXVNGGEBKBLWFXXMYSGGZKZIXCWXHCJFVYQPIANMCHSZFGPJROFBTLHYBBTSFRUAKKOAONBOIPHSULCCEOIYR");
    msg.custom.assign("VCHWUKCZLRQFFKVQWXHMTZJKFNPRASFSWSNYTLBRGPBNLQVFPFOUYQMNKTMTAYVHXVCFNNZACJDMVRGAHQJGLBGGZRJSPEQRIIBCQGYTXXCWJOHFKEU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CustomManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormation msg;
    msg.setTimeStamp(0.8621029126787947);
    msg.setSource(31289U);
    msg.setSourceEntity(188U);
    msg.setDestination(60765U);
    msg.setDestinationEntity(114U);
    msg.lat = 0.831300536323536;
    msg.lon = 0.18872248644085332;
    msg.z = 0.39366946316906926;
    msg.z_units = 19U;
    msg.speed = 0.9440031794065737;
    msg.speed_units = 127U;
    msg.start_time = 0.2572193630449314;
    msg.custom.assign("PNLNDFWFASBVUCPKUNUYSBAPEHKREAHDMIAIWMJVTGPOXBHTELJHKHVMCDPWYQRLIGOUFOVWRKQTODUQZLBNDFUVUPEQOTCBTTDHOJZYKRMZYKVVKYLLXDXYYAQKZNRCSJBQQSCAXDCDEIBRSWGCPEBOHGQFFNHXOBGGZMPJTMXLXVQUEWJZJMHVUZMWQLRSWNEKGMFEXAZTINIYNAKURROLZJCIXWAXJZPBMCVISGGISFWHDFYPTEGI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormation msg;
    msg.setTimeStamp(0.11183385340118535);
    msg.setSource(23569U);
    msg.setSourceEntity(202U);
    msg.setDestination(37653U);
    msg.setDestinationEntity(75U);
    msg.lat = 0.9397437868481054;
    msg.lon = 0.5372711255475063;
    msg.z = 0.35987889322712374;
    msg.z_units = 124U;
    msg.speed = 0.18430178143372722;
    msg.speed_units = 141U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.6470197289931121;
    tmp_msg_0.y = 0.6934778452264315;
    tmp_msg_0.z = 0.6657300272715995;
    tmp_msg_0.t = 0.7525660422806025;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.139817631814371;
    msg.custom.assign("DWYIACKXNH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormation msg;
    msg.setTimeStamp(0.35850488948210324);
    msg.setSource(9816U);
    msg.setSourceEntity(110U);
    msg.setDestination(57822U);
    msg.setDestinationEntity(67U);
    msg.lat = 0.7564186415788045;
    msg.lon = 0.6545424617135992;
    msg.z = 0.1214083443574393;
    msg.z_units = 199U;
    msg.speed = 0.575778099142045;
    msg.speed_units = 188U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.017857288979819863;
    tmp_msg_0.y = 0.9532619142716336;
    tmp_msg_0.z = 0.8375982365226183;
    tmp_msg_0.t = 0.7877907144840766;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 64932U;
    tmp_msg_1.off_x = 0.2609705420772801;
    tmp_msg_1.off_y = 0.06810207087497167;
    tmp_msg_1.off_z = 0.3083055122983225;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.8563399153923249;
    msg.custom.assign("XIIMNTOCVJEESJCAEHLCDDKCFDNMIXUUAUPTEBTGJHFIGSJADQTZHTOOLUYXXQQSARJNCWSCUZLJUVSCEFPDPQBOHKNMEOBPEKFDRFEYPWSIITTGJPNLNLAZKUOQDXBPWZRIEYXVPKFUDWCTRXWR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormationParticipant msg;
    msg.setTimeStamp(0.5903835241248725);
    msg.setSource(53112U);
    msg.setSourceEntity(98U);
    msg.setDestination(39709U);
    msg.setDestinationEntity(74U);
    msg.vid = 58091U;
    msg.off_x = 0.5198225303041885;
    msg.off_y = 0.3058965472170405;
    msg.off_z = 0.2859471084612849;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormationParticipant #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormationParticipant msg;
    msg.setTimeStamp(0.9325973212797221);
    msg.setSource(60843U);
    msg.setSourceEntity(22U);
    msg.setDestination(9049U);
    msg.setDestinationEntity(55U);
    msg.vid = 41292U;
    msg.off_x = 0.7579983751877774;
    msg.off_y = 0.3900118206246711;
    msg.off_z = 0.3640500644603393;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormationParticipant #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormationParticipant msg;
    msg.setTimeStamp(0.6599236298909884);
    msg.setSource(13901U);
    msg.setSourceEntity(159U);
    msg.setDestination(4823U);
    msg.setDestinationEntity(74U);
    msg.vid = 22474U;
    msg.off_x = 0.24490332045096308;
    msg.off_y = 0.7467562579366859;
    msg.off_z = 0.9693926495152211;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormationParticipant #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StopManeuver msg;
    msg.setTimeStamp(0.3133123581292172);
    msg.setSource(51512U);
    msg.setSourceEntity(71U);
    msg.setDestination(29021U);
    msg.setDestinationEntity(172U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StopManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StopManeuver msg;
    msg.setTimeStamp(0.9049099670786245);
    msg.setSource(18157U);
    msg.setSourceEntity(254U);
    msg.setDestination(8119U);
    msg.setDestinationEntity(52U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StopManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StopManeuver msg;
    msg.setTimeStamp(0.410965328329046);
    msg.setSource(11324U);
    msg.setSourceEntity(137U);
    msg.setDestination(52695U);
    msg.setDestinationEntity(92U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StopManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RegisterManeuver msg;
    msg.setTimeStamp(0.707039115719916);
    msg.setSource(1963U);
    msg.setSourceEntity(231U);
    msg.setDestination(1301U);
    msg.setDestinationEntity(179U);
    msg.mid = 38201U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RegisterManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RegisterManeuver msg;
    msg.setTimeStamp(0.29431402260960204);
    msg.setSource(58461U);
    msg.setSourceEntity(218U);
    msg.setDestination(12803U);
    msg.setDestinationEntity(240U);
    msg.mid = 56771U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RegisterManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RegisterManeuver msg;
    msg.setTimeStamp(0.9275030733037795);
    msg.setSource(19364U);
    msg.setSourceEntity(40U);
    msg.setDestination(28205U);
    msg.setDestinationEntity(10U);
    msg.mid = 35225U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RegisterManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverControlState msg;
    msg.setTimeStamp(0.19989142377702918);
    msg.setSource(56447U);
    msg.setSourceEntity(187U);
    msg.setDestination(19207U);
    msg.setDestinationEntity(219U);
    msg.state = 217U;
    msg.eta = 10261U;
    msg.info.assign("JQQCEIGWJILDGLYBNBSJYBMSHUCQVLSTHWXRXRZQUTNYHRHGUZPMIJSKOOBCMWLUURMFPKJEPFZTDLAGEGRWUMUNGXYBVDZXNEDXVKYVCXGFVGLSJEHWOIAPADZZBUMTOZXZFSWRTCQNTLAGLPFRJCWUDPQBDNIOWRFFCNVYHQVNIIFJJBFIYJCKTS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverControlState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverControlState msg;
    msg.setTimeStamp(0.06588990708828235);
    msg.setSource(32087U);
    msg.setSourceEntity(171U);
    msg.setDestination(50733U);
    msg.setDestinationEntity(68U);
    msg.state = 2U;
    msg.eta = 53031U;
    msg.info.assign("IWTOXLLGINZBFRCLEWSEMSMIUKTFRPGKWMGSSVCVJP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverControlState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverControlState msg;
    msg.setTimeStamp(0.5552583145289051);
    msg.setSource(10975U);
    msg.setSourceEntity(26U);
    msg.setDestination(10504U);
    msg.setDestinationEntity(74U);
    msg.state = 7U;
    msg.eta = 59648U;
    msg.info.assign("HSEFNSEKAMNQYXNBGDFMAZTYNZRCGCSQDPTHQMITIJVGFGRUKJYPJYUQWEUQATIBSEBOUXVGXCUBKRQTPYPLSDKBADVIPIXNPFIRQCURMUUEOZIMTZGSEBNMOXKDLWRBLHNICVWFCIGTSCMHARLVNYRQCAXOFYHWSBMYZKOVZIFVDEMFOWSZLNWGULHAJDKOYEULDZGCLTWCOFHEXBAVDPJWEBSXXJDNZHOHQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverControlState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowSystem msg;
    msg.setTimeStamp(0.7843584956966522);
    msg.setSource(57871U);
    msg.setSourceEntity(46U);
    msg.setDestination(5912U);
    msg.setDestinationEntity(28U);
    msg.system = 45311U;
    msg.duration = 17648U;
    msg.speed = 0.02452298970891109;
    msg.speed_units = 10U;
    msg.x = 0.9985785437560731;
    msg.y = 0.28090471691553354;
    msg.z = 0.38116725972466514;
    msg.z_units = 151U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowSystem #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowSystem msg;
    msg.setTimeStamp(0.4657633888392856);
    msg.setSource(1691U);
    msg.setSourceEntity(38U);
    msg.setDestination(34953U);
    msg.setDestinationEntity(84U);
    msg.system = 59910U;
    msg.duration = 23681U;
    msg.speed = 0.484045351028879;
    msg.speed_units = 228U;
    msg.x = 0.3101310124647513;
    msg.y = 0.6322497660473229;
    msg.z = 0.5095443931428645;
    msg.z_units = 17U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowSystem #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowSystem msg;
    msg.setTimeStamp(0.597624562708898);
    msg.setSource(4926U);
    msg.setSourceEntity(40U);
    msg.setDestination(55077U);
    msg.setDestinationEntity(67U);
    msg.system = 17495U;
    msg.duration = 33979U;
    msg.speed = 0.6482246972215321;
    msg.speed_units = 196U;
    msg.x = 0.38844936774344807;
    msg.y = 0.834420543349851;
    msg.z = 0.005897805814570889;
    msg.z_units = 63U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowSystem #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommsRelay msg;
    msg.setTimeStamp(0.7663485204564986);
    msg.setSource(46373U);
    msg.setSourceEntity(49U);
    msg.setDestination(30782U);
    msg.setDestinationEntity(69U);
    msg.lat = 0.6167423785987959;
    msg.lon = 0.5632994182433292;
    msg.speed = 0.39924660647505517;
    msg.speed_units = 126U;
    msg.duration = 6241U;
    msg.sys_a = 6107U;
    msg.sys_b = 51329U;
    msg.move_threshold = 0.9726526739971763;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommsRelay #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommsRelay msg;
    msg.setTimeStamp(0.9426615526230794);
    msg.setSource(22436U);
    msg.setSourceEntity(109U);
    msg.setDestination(12150U);
    msg.setDestinationEntity(202U);
    msg.lat = 0.6733082598247538;
    msg.lon = 0.12082616277910874;
    msg.speed = 0.3732497618772014;
    msg.speed_units = 64U;
    msg.duration = 51215U;
    msg.sys_a = 42145U;
    msg.sys_b = 10228U;
    msg.move_threshold = 0.9913293205379256;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommsRelay #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommsRelay msg;
    msg.setTimeStamp(0.7149133727857884);
    msg.setSource(30115U);
    msg.setSourceEntity(82U);
    msg.setDestination(27437U);
    msg.setDestinationEntity(228U);
    msg.lat = 0.11285960878857038;
    msg.lon = 0.7330883612921546;
    msg.speed = 0.014508155334856498;
    msg.speed_units = 146U;
    msg.duration = 52886U;
    msg.sys_a = 65344U;
    msg.sys_b = 9544U;
    msg.move_threshold = 0.17414101359151646;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommsRelay #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CoverArea msg;
    msg.setTimeStamp(0.6239937275501818);
    msg.setSource(37322U);
    msg.setSourceEntity(210U);
    msg.setDestination(39518U);
    msg.setDestinationEntity(169U);
    msg.lat = 0.8785346008805535;
    msg.lon = 0.5592021804619676;
    msg.z = 0.3599417460435427;
    msg.z_units = 134U;
    msg.speed = 0.6209682539829783;
    msg.speed_units = 220U;
    msg.custom.assign("JCNDFGOOFGYBXDGPAJMAQLBXKWQLFBSMHZJSMOVRXT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CoverArea #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CoverArea msg;
    msg.setTimeStamp(0.3506217419776164);
    msg.setSource(10679U);
    msg.setSourceEntity(79U);
    msg.setDestination(37241U);
    msg.setDestinationEntity(36U);
    msg.lat = 0.5927047052249093;
    msg.lon = 0.6905476275877802;
    msg.z = 0.9984084635679187;
    msg.z_units = 89U;
    msg.speed = 0.8346366028240321;
    msg.speed_units = 7U;
    msg.custom.assign("GSSCBAQQXAZJEFRTAPMNPIFSEHWALYIPEGVOPZTXDOJZMJLNQZJRWSRWUKLRTAMNHYFWRHECRGMPPHFTQSUMAXVSSITBVNJOSIKEPUUBUWFAYLBARQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CoverArea #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CoverArea msg;
    msg.setTimeStamp(0.510936241772739);
    msg.setSource(19075U);
    msg.setSourceEntity(21U);
    msg.setDestination(46868U);
    msg.setDestinationEntity(69U);
    msg.lat = 0.7799890653948593;
    msg.lon = 0.848658317151614;
    msg.z = 0.3705641714547715;
    msg.z_units = 75U;
    msg.speed = 0.5414908596681605;
    msg.speed_units = 121U;
    msg.custom.assign("VPXKHRHAOMUAFGIQASYBUKNWGTYNHXZEZUGFCJQMARIQUIQKCKREEKMBHMUBBRVYZQTJXKENKNLZJHDADEMIGYXFJEOMFWRSYSZLNHLPHOXYZPDULMKTJIZTVWICDIOBOSQPUBVWQXVBYFLSJTWTEDSACYMNSHNAIJXJJOCNCGQOUCPNHQEWVJGKSPXOZXOPVLCBW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CoverArea #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PolygonVertex msg;
    msg.setTimeStamp(0.119407188205366);
    msg.setSource(29711U);
    msg.setSourceEntity(205U);
    msg.setDestination(52649U);
    msg.setDestinationEntity(192U);
    msg.lat = 0.5320346512753247;
    msg.lon = 0.6470983147022991;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PolygonVertex #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PolygonVertex msg;
    msg.setTimeStamp(0.9961653513828723);
    msg.setSource(65407U);
    msg.setSourceEntity(107U);
    msg.setDestination(60370U);
    msg.setDestinationEntity(21U);
    msg.lat = 0.8202513621683198;
    msg.lon = 0.5890332998598261;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PolygonVertex #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PolygonVertex msg;
    msg.setTimeStamp(0.47319117151299395);
    msg.setSource(42112U);
    msg.setSourceEntity(40U);
    msg.setDestination(47026U);
    msg.setDestinationEntity(84U);
    msg.lat = 0.7356247952505004;
    msg.lon = 0.28300824307342587;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PolygonVertex #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompassCalibration msg;
    msg.setTimeStamp(0.046055068125026466);
    msg.setSource(60003U);
    msg.setSourceEntity(97U);
    msg.setDestination(25107U);
    msg.setDestinationEntity(109U);
    msg.timeout = 58386U;
    msg.lat = 0.4793493772272146;
    msg.lon = 0.8494837376781262;
    msg.z = 0.6436446356647194;
    msg.z_units = 60U;
    msg.pitch = 0.32619140200327623;
    msg.amplitude = 0.84693483166097;
    msg.duration = 34569U;
    msg.speed = 0.9801705480674281;
    msg.speed_units = 75U;
    msg.radius = 0.13267112052591212;
    msg.direction = 200U;
    msg.custom.assign("WYVHXFTMEGKTJAYRFXGQRGGUJJFVYVPSSTWLKXYUCYMDOQOEIORDTJDISKOZYOEWNQKXIBCBDWGAQRRIJYFLZZTSHFYILTCZJNVDSOLFKKTZUXIPYHCBMMGZWFLUJEERCWAXWBRNVNMBLBBSUEXARVN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompassCalibration #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompassCalibration msg;
    msg.setTimeStamp(0.5503236647895923);
    msg.setSource(63326U);
    msg.setSourceEntity(230U);
    msg.setDestination(49982U);
    msg.setDestinationEntity(130U);
    msg.timeout = 20982U;
    msg.lat = 0.4620126605521966;
    msg.lon = 0.3912372781614999;
    msg.z = 0.6322789816655792;
    msg.z_units = 165U;
    msg.pitch = 0.3885937188635459;
    msg.amplitude = 0.2690981408692755;
    msg.duration = 39079U;
    msg.speed = 0.6539037694394535;
    msg.speed_units = 191U;
    msg.radius = 0.47210792561111015;
    msg.direction = 113U;
    msg.custom.assign("ORPPEQFOUQDZMHEVBPQASJRFAKNSUEDLALAYNBGBDKCKTYHQMVKXUEIDJIGXGFNSE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompassCalibration #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompassCalibration msg;
    msg.setTimeStamp(0.01981844426516788);
    msg.setSource(37026U);
    msg.setSourceEntity(206U);
    msg.setDestination(7312U);
    msg.setDestinationEntity(173U);
    msg.timeout = 18742U;
    msg.lat = 0.926576493980066;
    msg.lon = 0.055049429624502544;
    msg.z = 0.2986644450486605;
    msg.z_units = 97U;
    msg.pitch = 0.7156724429330897;
    msg.amplitude = 0.7922974421518603;
    msg.duration = 52428U;
    msg.speed = 0.24073534968279153;
    msg.speed_units = 182U;
    msg.radius = 0.16974722834050515;
    msg.direction = 83U;
    msg.custom.assign("TLREPIDKYJWRIHIEVVKTMBVHMYRBVQYFLUPVZHQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompassCalibration #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationParameters msg;
    msg.setTimeStamp(0.12489052188215988);
    msg.setSource(45456U);
    msg.setSourceEntity(79U);
    msg.setDestination(21538U);
    msg.setDestinationEntity(215U);
    msg.formation_name.assign("HMWLCATMBVELUHCCMREXDAONZQQZSTUXTHAJEWQCEEKRUFBZ");
    msg.reference_frame = 145U;
    msg.custom.assign("IIPXXFVWVJEBDTTEFISSHCWODOHQFRJWBXCUSYUHYKRDWNIKQDLNZWNHGXC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationParameters msg;
    msg.setTimeStamp(0.7502328168848391);
    msg.setSource(48983U);
    msg.setSourceEntity(92U);
    msg.setDestination(2504U);
    msg.setDestinationEntity(21U);
    msg.formation_name.assign("LFODUTXJPQRBJJTABOIIQWMARJDNXCYCXDOACMZNFMVHLHYNCMVROYZKZFQNPGLXTM");
    msg.reference_frame = 11U;
    msg.custom.assign("KBXHSAFNGSWZNGGVJRCOKSZLIBJGCPYRXEUMJYJHVXWEQTKIQLXXBELRKQUYYGGTYSSMDSVFAYQPRETIELMMONNOMWTXVLDYDTNCPAQAEHRRMKOFQMZEHKARGTCUUZBV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationParameters msg;
    msg.setTimeStamp(0.011460864782816493);
    msg.setSource(18301U);
    msg.setSourceEntity(75U);
    msg.setDestination(8566U);
    msg.setDestinationEntity(230U);
    msg.formation_name.assign("IFNJHXLVYYCJMSWSDQLHKQGCEGRKLXMBJOCOSEFNBOZMMDEXFPQHTCCXZOV");
    msg.reference_frame = 245U;
    msg.custom.assign("AJBSVOUOLLOJZCFBEIOEUDTDKDRTUCWPQWORSMKEBXUVWHYCGYDHIFRACTVNETXWLDNWXLTACFLEYUZHPAIJOSXAGRKEICURZEPU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationPlanExecution msg;
    msg.setTimeStamp(0.22615540692622926);
    msg.setSource(11387U);
    msg.setSourceEntity(155U);
    msg.setDestination(9849U);
    msg.setDestinationEntity(56U);
    msg.group_name.assign("DBBBIJJWEVWOPETQZHURGSZKLSMNVFYJPVAJRKOPDUVIUOMNCCEIUJXLBLQDPXVCSRPNMMKGYECXPNGTHWZYSBDLNDHRZSPFCHAZDSZWLQTFWMGSOXFZPRIKZIXBZAFQJUOEBDVNEQJCTVHJ");
    msg.formation_name.assign("XVKNAPSVWHPGULNTFVRLARRHOMCCZFJPZIWZUSDDRDDSUBQWFGZZAOUSYJWMXGHYGUKCVNTPLMOADDGTJIKN");
    msg.plan_id.assign("OSVFSQXWXYMIIJMPTHNDGWJGFMPGSASFRAHNOCYUIPPSBHZRBOPUHHEZCBZHRIKCDOUHGSAPFWGZATHPKBBXKRYCDQZKOALNYVM");
    msg.description.assign("VGBCFBGWTFJBKZVEAHEGJUSUGPPMXXLEURNJODYSOXKOCCQQACDUMEVHAKZMEZEZJLFNKUWSDFTVBUIJLHBYGIFCWGPERJTVWYXLVXARNWAKDYJLVWJXZGQSMUAHSIGONTXJVYREDIRIWRHPCH");
    msg.leader_speed = 0.8733995151926118;
    msg.leader_bank_lim = 0.4309009895363881;
    msg.pos_sim_err_lim = 0.02251186776029579;
    msg.pos_sim_err_wrn = 0.5809331939562854;
    msg.pos_sim_err_timeout = 46422U;
    msg.converg_max = 0.33946388593282717;
    msg.converg_timeout = 61727U;
    msg.comms_timeout = 39839U;
    msg.turb_lim = 0.6737080283096828;
    msg.custom.assign("MABHXVOBKQJQHBGBGWUIONDWKNDGZUW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationPlanExecution #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationPlanExecution msg;
    msg.setTimeStamp(0.46737668925604337);
    msg.setSource(46151U);
    msg.setSourceEntity(85U);
    msg.setDestination(57315U);
    msg.setDestinationEntity(130U);
    msg.group_name.assign("JNRDHQSAAITPQCXBFAEVPRAWUWFGZOGLDIEXFYKXEAOALDBDOJLMCGXYNKCSWOPTMQHBGZQHYGWEKLCNWEYWIEYGPVNJGXLTYPOIUSVXKNBNJVQEJRDSTFVDPFBQTIRKEKJUOLHBLBGOXCQMDGNMVULFMUJBKCTZSYKIUSHXIWUTJMFZMJPZYZNKWUKCWMHCDTZVWXVTDOCQVAEUYZFHSSNYVQSUBXFSM");
    msg.formation_name.assign("YESFTWAJOYZOBUQQPTGGWSPOVUWDPZFHEEFRZFDJVCZKGFNZPRRIIPUXQAXSJQNGARFDMWFIMHGHWBMLVRTHZGFMMXDOSCNJKEYZWUTPAQKXYDMEXDIARQIUGWLSRVRJYYBPAXVKMRVNTKLXMTONLCHZCWVKVCYILHNKBVDBLYBQEQUZISAFDDUQ");
    msg.plan_id.assign("URNYGMIPZJBYQHWZMPSRHSVRRNCQEELSGUDFKTVYTIFCNHXKMBGVOEAKCPPSTOASPLRBIQULAUJHWXQMCQEUQOEZQJNEQHDKUXWJHOOTNBGVMENKTYOXKVQHADIGJORZBPVMAASXYMIIRBUIMHBQEBGLDUUZNCNAFZTVMVTSGLYXCDT");
    msg.description.assign("MFPWGZDOHBEREVYIHHIZSYSBUEDTKZCFIMKAUHBURUPGGXRDKPPDPOVMZSYJLCXIHPJSEQMLALQBJUAWMECVAWBARXGRNTNQFIBLXKMZPCEOBWLSLCIATPHNQABDWYYXQJXRONOKODYWTOEXGGGDFUSTYBGWF");
    msg.leader_speed = 0.6495303893027358;
    msg.leader_bank_lim = 0.6253514398707845;
    msg.pos_sim_err_lim = 0.756080248017618;
    msg.pos_sim_err_wrn = 0.4864526714544899;
    msg.pos_sim_err_timeout = 50344U;
    msg.converg_max = 0.7491691638444492;
    msg.converg_timeout = 41602U;
    msg.comms_timeout = 7236U;
    msg.turb_lim = 0.015081401133208439;
    msg.custom.assign("PBSZQCWMADPYDFWMKDFRTMSYGKFTZUYCEVWIFCGKKGWFGIYVQZIDPUCMDWNGGBOIBHTTHREFILESPBZTRFTJZKOKQEGWUOCZMKCHJDEUHPSHDDNXQQADIYSYEMUJJNOJMFUXVPYQVKBNOILERACLELPASNKWOOJZPVLRV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationPlanExecution #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationPlanExecution msg;
    msg.setTimeStamp(0.4235507098285478);
    msg.setSource(58719U);
    msg.setSourceEntity(206U);
    msg.setDestination(58518U);
    msg.setDestinationEntity(129U);
    msg.group_name.assign("KFHHZQZCFNGVQPVUNOAYKZWIIDRYJWPWJPHKKTGGEAVXYVIJSTFCUQMSWOFEXFBHXFEBZOZQEKRMUJDCYZDIRTFVPQUQDCMLPCNTASOVTBSAMOJFYCLGOYNTAZRKOMTZBAWKWYWYLAHOINPGZSQALJIGVREEASXGXNUXLMEMOTKJPMFNXDNESHTVNJJGEPBUXRLUEPHRRRCXUBUDCGHDICHYILBWQGOIMDDJVDNBQWARIWCSKPQLUSBTVHBZSX");
    msg.formation_name.assign("VEDFMSTXNSNGABFHLNOGMPBRUVVRKHDPRKMDIHLWTICAQVC");
    msg.plan_id.assign("GJJDMCYWRXTXNCEKHGQCUDPWMZDKYJDNLTQBQBMLCCLTYJFRCVAACPPWERASQRVXSDNVHLZTAPGDMYVMWIRDLSOOPWVXEIFHHIKABSUZZNFPWFUTGUYIXSNGLANBXIAEBITUDTTURQQSHKLFOBIABHZRHBRGZBOMAJMQXNCFNIHUJPHLNJMMOKDUFEUSWEDSFYSIGLQQGWOHCUOZVSVGYVTYYBJEORZYQKLIT");
    msg.description.assign("YCKGIQBEPIITNXCJBWGVQDFXTCHBNRAAZQLPFEGVALRIZLOTNZBHWVYYPJSGSUTHLGEYOFXIYWCTGHJHBUYFOSLSMRDZQXXNUFHE");
    msg.leader_speed = 0.2771836221823175;
    msg.leader_bank_lim = 0.5771228426421201;
    msg.pos_sim_err_lim = 0.6395505375186743;
    msg.pos_sim_err_wrn = 0.6629095829534049;
    msg.pos_sim_err_timeout = 11344U;
    msg.converg_max = 0.019323497743444662;
    msg.converg_timeout = 59983U;
    msg.comms_timeout = 49930U;
    msg.turb_lim = 0.8994337544038141;
    msg.custom.assign("EOLWKLYYATZSJZUKESQGCDEHQJFHXQWSEEQLGHWCKHGQTKYDOTEIDDGNJYLRDQHLINFMDWXTZIQUTNFFRALJPQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationPlanExecution #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowReference msg;
    msg.setTimeStamp(0.3148139540851227);
    msg.setSource(45111U);
    msg.setSourceEntity(29U);
    msg.setDestination(15157U);
    msg.setDestinationEntity(223U);
    msg.control_src = 41813U;
    msg.control_ent = 184U;
    msg.timeout = 0.02912056146837705;
    msg.loiter_radius = 0.7160164758604964;
    msg.altitude_interval = 0.718367712104412;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowReference #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowReference msg;
    msg.setTimeStamp(0.012829915573618789);
    msg.setSource(43829U);
    msg.setSourceEntity(94U);
    msg.setDestination(53590U);
    msg.setDestinationEntity(110U);
    msg.control_src = 30964U;
    msg.control_ent = 124U;
    msg.timeout = 0.5802399205484599;
    msg.loiter_radius = 0.5377258466734935;
    msg.altitude_interval = 0.6950523909559183;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowReference #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowReference msg;
    msg.setTimeStamp(0.6550279720236949);
    msg.setSource(43064U);
    msg.setSourceEntity(17U);
    msg.setDestination(7412U);
    msg.setDestinationEntity(11U);
    msg.control_src = 18796U;
    msg.control_ent = 119U;
    msg.timeout = 0.7183461775188388;
    msg.loiter_radius = 0.4808925302650435;
    msg.altitude_interval = 0.18004670920110877;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowReference #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Reference msg;
    msg.setTimeStamp(0.33989318515344336);
    msg.setSource(22679U);
    msg.setSourceEntity(190U);
    msg.setDestination(1749U);
    msg.setDestinationEntity(113U);
    msg.flags = 12U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.40888934665958354;
    tmp_msg_0.speed_units = 29U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.674696991239806;
    tmp_msg_1.z_units = 201U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.6687298210652467;
    msg.lon = 0.8417619809905277;
    msg.radius = 0.9929435073211007;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Reference #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Reference msg;
    msg.setTimeStamp(0.2692012541518265);
    msg.setSource(17227U);
    msg.setSourceEntity(162U);
    msg.setDestination(3619U);
    msg.setDestinationEntity(91U);
    msg.flags = 87U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.4252291341218395;
    tmp_msg_0.speed_units = 98U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.6278674213876512;
    tmp_msg_1.z_units = 3U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.08366544847090074;
    msg.lon = 0.47571697958415615;
    msg.radius = 0.614150859878424;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Reference #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Reference msg;
    msg.setTimeStamp(0.6660284117529119);
    msg.setSource(64227U);
    msg.setSourceEntity(62U);
    msg.setDestination(52867U);
    msg.setDestinationEntity(185U);
    msg.flags = 222U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.744656272636552;
    tmp_msg_0.speed_units = 45U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.9153977328808117;
    tmp_msg_1.z_units = 243U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.233525366352888;
    msg.lon = 0.14184220392173807;
    msg.radius = 0.2375668457614738;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Reference #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowRefState msg;
    msg.setTimeStamp(0.3701718829416022);
    msg.setSource(60603U);
    msg.setSourceEntity(48U);
    msg.setDestination(20980U);
    msg.setDestinationEntity(33U);
    msg.control_src = 9678U;
    msg.control_ent = 21U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 82U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.18138664129488535;
    tmp_tmp_msg_0_0.speed_units = 176U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.19164470668168176;
    tmp_tmp_msg_0_1.z_units = 85U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.05704512514213966;
    tmp_msg_0.lon = 0.06522494118480826;
    tmp_msg_0.radius = 0.03161747238195045;
    msg.reference.set(tmp_msg_0);
    msg.state = 8U;
    msg.proximity = 89U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowRefState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowRefState msg;
    msg.setTimeStamp(0.9164209312852624);
    msg.setSource(37425U);
    msg.setSourceEntity(12U);
    msg.setDestination(55496U);
    msg.setDestinationEntity(218U);
    msg.control_src = 20199U;
    msg.control_ent = 243U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 179U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.7665823919887624;
    tmp_tmp_msg_0_0.speed_units = 85U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.5144995815498818;
    tmp_tmp_msg_0_1.z_units = 49U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.7084581358056836;
    tmp_msg_0.lon = 0.8815826493854443;
    tmp_msg_0.radius = 0.9250556112519086;
    msg.reference.set(tmp_msg_0);
    msg.state = 37U;
    msg.proximity = 193U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowRefState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowRefState msg;
    msg.setTimeStamp(0.0795239644400203);
    msg.setSource(27859U);
    msg.setSourceEntity(240U);
    msg.setDestination(39719U);
    msg.setDestinationEntity(204U);
    msg.control_src = 35226U;
    msg.control_ent = 61U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 205U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.7514983908054456;
    tmp_tmp_msg_0_0.speed_units = 108U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.891417441226459;
    tmp_tmp_msg_0_1.z_units = 198U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.6401253373450594;
    tmp_msg_0.lon = 0.33328470144289934;
    tmp_msg_0.radius = 0.7779207931174352;
    msg.reference.set(tmp_msg_0);
    msg.state = 210U;
    msg.proximity = 166U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowRefState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationMonitor msg;
    msg.setTimeStamp(0.24843160410307852);
    msg.setSource(47161U);
    msg.setSourceEntity(142U);
    msg.setDestination(5119U);
    msg.setDestinationEntity(69U);
    msg.ax_cmd = 0.14462596892180157;
    msg.ay_cmd = 0.5906407753514998;
    msg.az_cmd = 0.04843134825786266;
    msg.ax_des = 0.7840555196498062;
    msg.ay_des = 0.7715620785355347;
    msg.az_des = 0.3791366054543761;
    msg.virt_err_x = 0.39796092649199843;
    msg.virt_err_y = 0.16812774912569428;
    msg.virt_err_z = 0.1862906202901773;
    msg.surf_fdbk_x = 0.7141469522536892;
    msg.surf_fdbk_y = 0.8966642279397052;
    msg.surf_fdbk_z = 0.38901990755777227;
    msg.surf_unkn_x = 0.6088360368352599;
    msg.surf_unkn_y = 0.526000479241965;
    msg.surf_unkn_z = 0.051117353337731264;
    msg.ss_x = 0.9436050763129957;
    msg.ss_y = 0.25179276314588184;
    msg.ss_z = 0.8769532236388934;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationMonitor #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationMonitor msg;
    msg.setTimeStamp(0.3069546755935565);
    msg.setSource(30193U);
    msg.setSourceEntity(211U);
    msg.setDestination(27667U);
    msg.setDestinationEntity(191U);
    msg.ax_cmd = 0.6423205867433079;
    msg.ay_cmd = 0.8370752620463854;
    msg.az_cmd = 0.5964024581538698;
    msg.ax_des = 0.1706133244597573;
    msg.ay_des = 0.7872686701713433;
    msg.az_des = 0.7057287693136984;
    msg.virt_err_x = 0.4566903344346972;
    msg.virt_err_y = 0.10775643100409127;
    msg.virt_err_z = 0.9713665483043255;
    msg.surf_fdbk_x = 0.245282270527709;
    msg.surf_fdbk_y = 0.9200374111711147;
    msg.surf_fdbk_z = 0.5779164266018347;
    msg.surf_unkn_x = 0.9755837303812191;
    msg.surf_unkn_y = 0.8395423222204832;
    msg.surf_unkn_z = 0.2085597769959865;
    msg.ss_x = 0.8023748970920914;
    msg.ss_y = 0.6701463871604177;
    msg.ss_z = 0.9912748012006088;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationMonitor #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationMonitor msg;
    msg.setTimeStamp(0.14302513159866737);
    msg.setSource(58528U);
    msg.setSourceEntity(205U);
    msg.setDestination(34578U);
    msg.setDestinationEntity(101U);
    msg.ax_cmd = 0.189401405296572;
    msg.ay_cmd = 0.7959666570899662;
    msg.az_cmd = 0.9698155112514187;
    msg.ax_des = 0.3837925309776704;
    msg.ay_des = 0.23293102766741958;
    msg.az_des = 0.3855589243423799;
    msg.virt_err_x = 0.8464199402459647;
    msg.virt_err_y = 0.766022689021938;
    msg.virt_err_z = 0.48849306402156534;
    msg.surf_fdbk_x = 0.6661841866363895;
    msg.surf_fdbk_y = 0.6726820608813889;
    msg.surf_fdbk_z = 0.7259905515600453;
    msg.surf_unkn_x = 0.5832094819166118;
    msg.surf_unkn_y = 0.36519547111833217;
    msg.surf_unkn_z = 0.8700752743875328;
    msg.ss_x = 0.44147052385828156;
    msg.ss_y = 0.6493330968809237;
    msg.ss_z = 0.0943049620698373;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationMonitor #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeState msg;
    msg.setTimeStamp(0.3400023188396105);
    msg.setSource(35646U);
    msg.setSourceEntity(103U);
    msg.setDestination(36683U);
    msg.setDestinationEntity(128U);
    msg.s_id.assign("PMFXFQKAXKPITKXGDJXLNESIVBWYARMFUORFVIEWVAPGHOVCPJNUNKUJQSUJOFFEQODWWCQGVAKFFNKJNCHZYLBLAEDCNZNRIMPGVMVTXBIRDEJRGCWQVDAZBLDVTYSTQHLLUIRPTUAEGTCOBBJELTDUY");
    msg.dist = 0.2948664827648638;
    msg.err = 0.7359937278787803;
    msg.ctrl_imp = 0.5633939695119319;
    msg.rel_dir_x = 0.06922030533381962;
    msg.rel_dir_y = 0.5565515470227976;
    msg.rel_dir_z = 0.9887145099662934;
    msg.err_x = 0.018270191647417056;
    msg.err_y = 0.5398774498678015;
    msg.err_z = 0.6023161951902654;
    msg.rf_err_x = 0.44202575199649996;
    msg.rf_err_y = 0.9741481306493533;
    msg.rf_err_z = 0.41652247256255426;
    msg.rf_err_vx = 0.28364702431707145;
    msg.rf_err_vy = 0.30600645411769634;
    msg.rf_err_vz = 0.8974964795301201;
    msg.ss_x = 0.6249764732917631;
    msg.ss_y = 0.5009301139755876;
    msg.ss_z = 0.7595995752572;
    msg.virt_err_x = 0.6312792803034193;
    msg.virt_err_y = 0.958920775896109;
    msg.virt_err_z = 0.0056954365718427935;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeState msg;
    msg.setTimeStamp(0.00421189835568847);
    msg.setSource(40742U);
    msg.setSourceEntity(194U);
    msg.setDestination(42043U);
    msg.setDestinationEntity(172U);
    msg.s_id.assign("RNHYLMOZDSYKWUYTFAEXQEMFTWOBWDZRVSBHIUNYBPYCCHEJORLXEMGDATWNINSPSHFQUHICYNUBHFSJQXBKJEQKCAWSUCCXLUKDBTDMIJGGZMGYXMMGAFZVEIGAMOXRDBNYVJWAJNZAGOFFVSOWZZVFRFJTQRVYVGPEXCJDKMAWVQQRDMHBOFUGPIPSTWQAXLQEXVPIOTJU");
    msg.dist = 0.200596604482302;
    msg.err = 0.0575381150622859;
    msg.ctrl_imp = 0.3984334513731812;
    msg.rel_dir_x = 0.6176872111374133;
    msg.rel_dir_y = 0.514939156967441;
    msg.rel_dir_z = 0.6589927923992331;
    msg.err_x = 0.9246956553349942;
    msg.err_y = 0.9035930997323086;
    msg.err_z = 0.7539421311484223;
    msg.rf_err_x = 0.29584374999108654;
    msg.rf_err_y = 0.8045478585080957;
    msg.rf_err_z = 0.172043338826377;
    msg.rf_err_vx = 0.5808013331585679;
    msg.rf_err_vy = 0.10838534309436287;
    msg.rf_err_vz = 0.7647028926648033;
    msg.ss_x = 0.5781670111354976;
    msg.ss_y = 0.03847879356766626;
    msg.ss_z = 0.4559001725827372;
    msg.virt_err_x = 0.9067087259647517;
    msg.virt_err_y = 0.3878953332579772;
    msg.virt_err_z = 0.2896730499503668;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeState msg;
    msg.setTimeStamp(0.34764885233448783);
    msg.setSource(65158U);
    msg.setSourceEntity(42U);
    msg.setDestination(886U);
    msg.setDestinationEntity(61U);
    msg.s_id.assign("JEUFEJPYLRSTXLDDWJMULCHAWUAJZTJFEPWBJYQBXIIIMSGSWXPGYQGKZICANHVMKZQP");
    msg.dist = 0.11594524450005061;
    msg.err = 0.09624802648553388;
    msg.ctrl_imp = 0.2549701008374303;
    msg.rel_dir_x = 0.2857974571539512;
    msg.rel_dir_y = 0.6998492248643375;
    msg.rel_dir_z = 0.3814474497606566;
    msg.err_x = 0.08560551385098558;
    msg.err_y = 0.194961028118666;
    msg.err_z = 0.7214273826786768;
    msg.rf_err_x = 0.0842723557301488;
    msg.rf_err_y = 0.010960727499065182;
    msg.rf_err_z = 0.44034719800345723;
    msg.rf_err_vx = 0.47656677215214027;
    msg.rf_err_vy = 0.5518623527532668;
    msg.rf_err_vz = 0.4036511457525004;
    msg.ss_x = 0.25823405757353146;
    msg.ss_y = 0.09558999083472797;
    msg.ss_z = 0.8017623395702109;
    msg.virt_err_x = 0.6413296210850146;
    msg.virt_err_y = 0.7332734603698342;
    msg.virt_err_z = 0.07487831703713188;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Dislodge msg;
    msg.setTimeStamp(0.2618652904791824);
    msg.setSource(41735U);
    msg.setSourceEntity(16U);
    msg.setDestination(22692U);
    msg.setDestinationEntity(184U);
    msg.timeout = 770U;
    msg.rpm = 0.7406405306834536;
    msg.direction = 198U;
    msg.custom.assign("MVWWDIPBWZAQVSKSGJCHVBSOANBHICZWOAGNGTXVUASYRISTFJJBXZLRQKQDULXZMMYCXXYJCCDDQRTEWZNOIMNNKGGPLHEO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Dislodge #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Dislodge msg;
    msg.setTimeStamp(0.07389629187060609);
    msg.setSource(15494U);
    msg.setSourceEntity(100U);
    msg.setDestination(54520U);
    msg.setDestinationEntity(239U);
    msg.timeout = 6558U;
    msg.rpm = 0.2874356737566819;
    msg.direction = 226U;
    msg.custom.assign("RCAWXLZOCCSXIHVVBXSKOXLXPQMDATDJZDIYLIWLXPRBCHBBIZREVOTNQWVYITGHGTLSAVHBKZARJOFRUTVWBEFDLOGKQQFHVIEDSKODDSLIUDRGGAJXXLLUGNZFYAWHBRMDQEWJXCBOEASGWVPBMZPEKYQYKUYQOITYMPGEAGUZSBMHITMHJEEPCKJUPWZFFNJXPJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Dislodge #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Dislodge msg;
    msg.setTimeStamp(0.09789587158151658);
    msg.setSource(49770U);
    msg.setSourceEntity(74U);
    msg.setDestination(59677U);
    msg.setDestinationEntity(207U);
    msg.timeout = 52567U;
    msg.rpm = 0.9370996116470138;
    msg.direction = 192U;
    msg.custom.assign("WULSZAABDAJTZHCUQNXJVYLHOZVTPXHXWKAQUVOESXQAMLWHRFYLGMPJYPRCVCOMBIEQVXIKNJGWBDYNPFPZMHJBJGSODKEGNGRCILPZNQRVFRFJKNXKOWFIDPBOOVPJGIMCVROEBEASUMBEENWYSDMICKSDUMATIEUXJTILSGQRAZZRLJWRWEUZYRTNUYQSPVWMQUTYSTIFNAEKWHPOHAIQTBFXTNVDKLGYDQYXBZKCZCFHF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Dislodge #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Formation msg;
    msg.setTimeStamp(0.38536181784858026);
    msg.setSource(17039U);
    msg.setSourceEntity(244U);
    msg.setDestination(26115U);
    msg.setDestinationEntity(186U);
    msg.formation_name.assign("TSBZUNBXXMGODVGRXJBRLCAWAAZEVYKRWBWKTXJUGWKNCKWNDJZXNXHVMROEZNWHRXGHHTQIJIQNASLUYXIKKPSYYCZLCLMSALHOEOHPYLKUTAGRNWEBEOUUWDMMOGVMF");
    msg.type = 174U;
    msg.op = 206U;
    msg.group_name.assign("XYSAHUIMEKFQKSWRHQOXKZQROXXGFKQROCVOMULKBPMAUNWBSDRAMKKBPLBSONMQYWHVXKBWTGAHWONAYHNFZCCPXRUBMDIFTHYHHWFMZLEVZEG");
    msg.plan_id.assign("ZSGKHLJSSPGMHZQOMEPUIAQNBGERXTELLHAVRXAUYJJSEWJJSAZWHSVIUBVRSKRNUKGWAWBYAOJQFZARUDDPTOYXDJDEZRYSNMPIDMBGZBCLVBCILXFVOUNUATTDBTCPNJWHDIKZPTRPVSMKSOOYOVQGCQCEKTKTXFWHJLYCMFIFYLXVQBQQAJVDNB");
    msg.description.assign("YOVNEYKOHSIGFOBWQNTMUGTIASXRACVXQTLMKFKZDDHVBNWUBZWZAJARWCEODYOBIKIEKSQWPLVVBDYIJXXGQAVPMDTJLCILSOQWQVEXDCHRKTPIZHZXIEFOMHNMDKPZGVOUBGJEPDQCNJJMLFEQFBYPVNYROAWJHFNKCTFNHRUTZXGZBCQWOELCYADXXHNDUFGPWZNFTHLU");
    msg.reference_frame = 58U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 422U;
    tmp_msg_0.off_x = 0.5720456874863455;
    tmp_msg_0.off_y = 0.6634014405816473;
    tmp_msg_0.off_z = 0.42132054519590667;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.44958256296898835;
    msg.leader_speed_min = 0.31603589999492665;
    msg.leader_speed_max = 0.23930950780695937;
    msg.leader_alt_min = 0.6558948283731199;
    msg.leader_alt_max = 0.31472874183000854;
    msg.pos_sim_err_lim = 0.575655063674344;
    msg.pos_sim_err_wrn = 0.17654915488505118;
    msg.pos_sim_err_timeout = 59279U;
    msg.converg_max = 0.26039772056032373;
    msg.converg_timeout = 16982U;
    msg.comms_timeout = 5640U;
    msg.turb_lim = 0.34763925248487526;
    msg.custom.assign("CAWHGIVYBKKSOLVYTXUPPGXTOJYAXZZXLLLISRNQBLENJUHGCBEPMRFJAJYKZZFVMSTLNFVROTKPQVKQMFQYLIQNWWZOSRGPCDQPQYHVNDJXRDAOOSZXOEMEFBYJTICTBGUBASJBWKDMCMEQNVWNSKDAJRDVOGDVMIPKGOHVOQKWEDSTYAPUWENWCTXCEDUJMEIRNHUIHQRZJMHFYZYGHCAXNMIBWUFFXIFDAUHHEBWXLR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Formation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Formation msg;
    msg.setTimeStamp(0.8083307998655298);
    msg.setSource(59130U);
    msg.setSourceEntity(72U);
    msg.setDestination(59133U);
    msg.setDestinationEntity(229U);
    msg.formation_name.assign("STJYHJLDNQEWAJEUJPZIABUQJPVXBIOVLQOKWTQTPBHGMCDPYOLSFMRKWHEPPDACZXCQACDUQD");
    msg.type = 57U;
    msg.op = 118U;
    msg.group_name.assign("WODLIHSZHRTOASNUFDWWGGXMKDCBKVPRJKDAJGVCACMUBMRYHDEVXXQOMSIDCYNNIJGVJLPPEWCCRXIGECATQHAUVBZOQVFHIUKYEXWSBXCOTEPUYVUHNIKQSJBPWNWDTBGMAQHCGWIWYTLHGUMUJYAJULKNNJYDGXWYFBROBEBSMZIRLZBSDIZRS");
    msg.plan_id.assign("MXWMYDKIYOPHOSCIMXHNFHTWDBKRVKAQHNIMMWQTFSRNUKXAFGFJPLZCTCZEAIVSHVFVCSUXQPZZXYKKQYUKUOBJBDETBFDARYTIOYZJJKVBEWZTLXFMS");
    msg.description.assign("KXBIKQALAJORVTEUILVVWVGGYSLXBGEYPCNJVPUBPTHHHHBIFWHUAJSQULDEFEEPNFGWXXLOFPAQRZXYKUILJRWZVYFUGCBIXUAOKTCWIETDTQFJGM");
    msg.reference_frame = 114U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 17823U;
    tmp_msg_0.off_x = 0.9604783984409958;
    tmp_msg_0.off_y = 0.833428723418029;
    tmp_msg_0.off_z = 0.5936693704405362;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.871683028402424;
    msg.leader_speed_min = 0.2595947504923948;
    msg.leader_speed_max = 0.7360884907594585;
    msg.leader_alt_min = 0.951890188181967;
    msg.leader_alt_max = 0.28225382208106375;
    msg.pos_sim_err_lim = 0.291350069689449;
    msg.pos_sim_err_wrn = 0.7239412623846043;
    msg.pos_sim_err_timeout = 64831U;
    msg.converg_max = 0.05305422167155993;
    msg.converg_timeout = 32407U;
    msg.comms_timeout = 54569U;
    msg.turb_lim = 0.3404325882715762;
    msg.custom.assign("CSDNNLAYOJAMOPLZFXRZTWTVKBZPAUPAZHJNSFAXUZOWLQCIEGQDOQXYBQWXDIUQJAKYOQUCPRXAWEMEXESGH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Formation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Formation msg;
    msg.setTimeStamp(0.06900793278283646);
    msg.setSource(12690U);
    msg.setSourceEntity(164U);
    msg.setDestination(27368U);
    msg.setDestinationEntity(191U);
    msg.formation_name.assign("JCSGXXFPCOKDQIHUYMXFODRVRNWVAFAEKUJFDTAKMIRECZKUROUMIDTNSWDMWQEQIOFHHNMUJKOCAYWWWVWLZSDCWXEBLLCUFQHAZOPHZKCPNRWYTBHACFTXZZEUPEHQLMPNGGVSGHXUQMBOBYNAZOJVIXJAETNDAVUJYXZEXVGKAZKRETLNPPYLBZQHQVYXWRBJTNDGLSJQIORDBKY");
    msg.type = 87U;
    msg.op = 13U;
    msg.group_name.assign("YUWVOLYAZHQOHNLTKDDTVXCJIBIVLEQMMBAXUCJNEJSNIUVXZBUCGWZKHGQFJRENZFEXCTADTQQVEUAFGTHDGCUSKJKZKOKBBMEPMGXIWNAQNIBGRKTBIBQSWDOFLJIFICTFYGLNCROLAZMRSDNVZNAYGY");
    msg.plan_id.assign("BTBOGWZFOOTSJXUBHFREMJXHFHMRNLFYDWTAHHKZXRKUIBTTVNEWPXPMFSNTCPKYYGQQKPNCILILIADVCJQUVTGWZ");
    msg.description.assign("NWIWPTCBDXLPYRTKRTQRROSGENQZUVEBHEQVKNMQKYWJSAIRMLVJXHLIYZLFAIPGUSAFIVYMDTBXLOPEFZEYFDBUEPTXYVCJIRUTQDACWQSTIOSZCCUMNVRGHCGEHXRPZBTAJGMULFPWXFJFZKWAQDGSRHOWMOUCYEGSAWSKJBWHGEXCTQKYHZPABIIOXNOSVVVVMHDZKJBILPHWAUNKFJALZBKNXMQCNOFHNMJGDRJNGDDMUZEBXQLY");
    msg.reference_frame = 64U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 61710U;
    tmp_msg_0.off_x = 0.8149347796146695;
    tmp_msg_0.off_y = 0.1772948929600271;
    tmp_msg_0.off_z = 0.6697357720423345;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.2886677836445337;
    msg.leader_speed_min = 0.9222223935492673;
    msg.leader_speed_max = 0.8546346655448964;
    msg.leader_alt_min = 0.2488967383242483;
    msg.leader_alt_max = 0.31013911481566037;
    msg.pos_sim_err_lim = 0.9545264568218423;
    msg.pos_sim_err_wrn = 0.4417335927919013;
    msg.pos_sim_err_timeout = 19515U;
    msg.converg_max = 0.17302467840685587;
    msg.converg_timeout = 48341U;
    msg.comms_timeout = 25346U;
    msg.turb_lim = 0.7481817030191468;
    msg.custom.assign("LHRHJNAUVWHTZWEBOZWCDUCTFHX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Formation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Launch msg;
    msg.setTimeStamp(0.5305119059244048);
    msg.setSource(6655U);
    msg.setSourceEntity(147U);
    msg.setDestination(7340U);
    msg.setDestinationEntity(104U);
    msg.timeout = 56165U;
    msg.lat = 0.9610298495409612;
    msg.lon = 0.8589558224300269;
    msg.z = 0.06318146862436957;
    msg.z_units = 40U;
    msg.speed = 0.08333185531606835;
    msg.speed_units = 62U;
    msg.custom.assign("CCIIBSCYYPPQAJGNIWDHNFIKGKXFVWONSHIWXTMAOMVQJQCNABLNDLRAIGTKSJXSIHJKXZRORPTTGZPMCPZSYUEWUAPXCVZQUAHPYGMSLDHAMMQUZVPWCSOJJZNMSZBCNNWFVFFDXVUGGL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Launch #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Launch msg;
    msg.setTimeStamp(0.16230455063921212);
    msg.setSource(47117U);
    msg.setSourceEntity(134U);
    msg.setDestination(34891U);
    msg.setDestinationEntity(20U);
    msg.timeout = 30461U;
    msg.lat = 0.3459389968905936;
    msg.lon = 0.022636805777353497;
    msg.z = 0.9022866965244359;
    msg.z_units = 65U;
    msg.speed = 0.9611457067774343;
    msg.speed_units = 220U;
    msg.custom.assign("ELVQYBROPEUOXBABZXLGNSLGKAQQPVRTMTXGSFBGSJKFMELOUAYCKOFTIUXBNWHRBRZIDCLPZZGNHHJOPDPDFGXPUSFCDOAKEVCXQARIYMIHWUFGZCERDYUGSIWPPAIVKVJXDBVRJKBAWMJGCVLJCNPBP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Launch #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Launch msg;
    msg.setTimeStamp(0.19597685229228856);
    msg.setSource(11258U);
    msg.setSourceEntity(70U);
    msg.setDestination(10399U);
    msg.setDestinationEntity(194U);
    msg.timeout = 22488U;
    msg.lat = 0.1340227389544253;
    msg.lon = 0.9762416666908345;
    msg.z = 0.789366795456396;
    msg.z_units = 190U;
    msg.speed = 0.3968295982590091;
    msg.speed_units = 13U;
    msg.custom.assign("VCCBKOXOHADRWPIIHUSRFUBPEVWOWOUHCSCRUNNNZUACYABOQFGYJJSOIEPTTPXIHQHSQQFDDIEUZTDAFYIDHKOCGXKFLIQPTVWZBOXJBQIZOVLXZKNDZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Launch #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Drop msg;
    msg.setTimeStamp(0.9151448587110961);
    msg.setSource(44038U);
    msg.setSourceEntity(225U);
    msg.setDestination(23514U);
    msg.setDestinationEntity(26U);
    msg.timeout = 47809U;
    msg.lat = 0.4784186944437526;
    msg.lon = 0.5406967742354206;
    msg.z = 0.7321493013904785;
    msg.z_units = 210U;
    msg.speed = 0.8537029663295623;
    msg.speed_units = 243U;
    msg.custom.assign("NWPBFDLLXTOVDBQZVXEZQKRYWAGHRTZOGGLOFNUXNTJUMGMLUJMCMFOYCJHZBXYIASQUGSKVWTTFWTXAKBPOETJIRBLQRNDFDGRBADYMCISSYAJKQONGZCAYEDITHFHUZBXPQYQZZBVXIINVLYBJVEKEMKAWYOCVXDLPVUTIJJGSLHURMOWYHNBLEEUQPPIKU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Drop #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Drop msg;
    msg.setTimeStamp(0.11807810908909544);
    msg.setSource(6362U);
    msg.setSourceEntity(151U);
    msg.setDestination(28378U);
    msg.setDestinationEntity(253U);
    msg.timeout = 38658U;
    msg.lat = 0.4636684722753531;
    msg.lon = 0.8609190455824626;
    msg.z = 0.15913889149303162;
    msg.z_units = 142U;
    msg.speed = 0.07451477828934183;
    msg.speed_units = 227U;
    msg.custom.assign("CFCZNNDLMOYTWLYTBAFEUDKJOZYUBVQOZZGGEFKIWGSFRJGRMKAOMIWHAQTVITQXXPXGNFISUKLDSMICNDD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Drop #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Drop msg;
    msg.setTimeStamp(0.3898795685131431);
    msg.setSource(43375U);
    msg.setSourceEntity(61U);
    msg.setDestination(62778U);
    msg.setDestinationEntity(107U);
    msg.timeout = 27040U;
    msg.lat = 0.468795127271851;
    msg.lon = 0.12113308762774733;
    msg.z = 0.8008030524555058;
    msg.z_units = 90U;
    msg.speed = 0.5461838801384047;
    msg.speed_units = 205U;
    msg.custom.assign("YYKVKCNAUZTNJRZLPIKQEZEDPYUVFWBLAXECOIUJRJCAJCXVGVXQCJPPHKWKZIWIAKCTCDSEBKGABYHASVDNZPYHFLMGRMLQPJENWWUOMLHNHZOFBNQSXVUGGBWGVHGGNUILRUELKGESBBDJTXTLJIXIKRCPFSTQODDFCJFIYDOFOYQMMZKRDVSLEQUZMTZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Drop #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ScheduledGoto msg;
    msg.setTimeStamp(0.8794033171322306);
    msg.setSource(5668U);
    msg.setSourceEntity(130U);
    msg.setDestination(48025U);
    msg.setDestinationEntity(148U);
    msg.arrival_time = 0.41664592205259043;
    msg.lat = 0.023768823520118776;
    msg.lon = 0.6159991323585495;
    msg.z = 0.4717463940788754;
    msg.z_units = 187U;
    msg.travel_z = 0.8710775863388761;
    msg.travel_z_units = 135U;
    msg.delayed = 237U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ScheduledGoto #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ScheduledGoto msg;
    msg.setTimeStamp(0.5340526587281277);
    msg.setSource(57905U);
    msg.setSourceEntity(114U);
    msg.setDestination(4698U);
    msg.setDestinationEntity(9U);
    msg.arrival_time = 0.33226842898830034;
    msg.lat = 0.4488605617319016;
    msg.lon = 0.39938091539396814;
    msg.z = 0.84222053143694;
    msg.z_units = 114U;
    msg.travel_z = 0.8582599784304272;
    msg.travel_z_units = 194U;
    msg.delayed = 17U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ScheduledGoto #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ScheduledGoto msg;
    msg.setTimeStamp(0.2027697351808173);
    msg.setSource(44547U);
    msg.setSourceEntity(77U);
    msg.setDestination(38372U);
    msg.setDestinationEntity(182U);
    msg.arrival_time = 0.29382365380003805;
    msg.lat = 0.8880147279579347;
    msg.lon = 0.7306306223544456;
    msg.z = 0.8367444509069905;
    msg.z_units = 163U;
    msg.travel_z = 0.6714411842040418;
    msg.travel_z_units = 37U;
    msg.delayed = 63U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ScheduledGoto #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RowsCoverage msg;
    msg.setTimeStamp(0.5596516631334234);
    msg.setSource(63045U);
    msg.setSourceEntity(135U);
    msg.setDestination(12810U);
    msg.setDestinationEntity(18U);
    msg.lat = 0.5324309952544681;
    msg.lon = 0.24418669201889043;
    msg.z = 0.4640409755888478;
    msg.z_units = 235U;
    msg.speed = 0.8468179682553905;
    msg.speed_units = 202U;
    msg.bearing = 0.9185372851185034;
    msg.cross_angle = 0.5397963203579068;
    msg.width = 0.9089946782931246;
    msg.length = 0.8042262117706659;
    msg.coff = 224U;
    msg.angaperture = 0.7234344080986188;
    msg.range = 45858U;
    msg.overlap = 201U;
    msg.flags = 155U;
    msg.custom.assign("LUMVCSGTFQXVWKELRPCTWXDKPHUEKXMENLDBJIVQOIKYICT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RowsCoverage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RowsCoverage msg;
    msg.setTimeStamp(0.27888761186089095);
    msg.setSource(21854U);
    msg.setSourceEntity(212U);
    msg.setDestination(3083U);
    msg.setDestinationEntity(9U);
    msg.lat = 0.497951409372168;
    msg.lon = 0.14775697397570542;
    msg.z = 0.27320987280014275;
    msg.z_units = 59U;
    msg.speed = 0.7369560604932135;
    msg.speed_units = 55U;
    msg.bearing = 0.1459620693753615;
    msg.cross_angle = 0.7428295006719909;
    msg.width = 0.5119142431449941;
    msg.length = 0.04167883310486742;
    msg.coff = 245U;
    msg.angaperture = 0.43488424869526576;
    msg.range = 19069U;
    msg.overlap = 184U;
    msg.flags = 113U;
    msg.custom.assign("QVZXJXPHXULEMYNZVQWOPISYRSUSTWQKDYJTRPOUUIYNEHZNPGMGBZCCCIQGOBJKPKQANZMOPQKEJZHNLBGEYITYJHTVODABACJBKAFIDRPBTVONTKBTAFHCJRUVWDHLDPSBGOUNQMVSWDMZXXALEGHGLFUQHJRDLRAIDZTFVGKWUKIYNEMLJESEXOXCBCFTAZWGLTNRJLWUMGDFQOFWFXCFY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RowsCoverage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RowsCoverage msg;
    msg.setTimeStamp(0.6917176391119176);
    msg.setSource(54784U);
    msg.setSourceEntity(186U);
    msg.setDestination(9765U);
    msg.setDestinationEntity(48U);
    msg.lat = 0.5924621866568373;
    msg.lon = 0.5483698087294697;
    msg.z = 0.314102296945558;
    msg.z_units = 116U;
    msg.speed = 0.23863419480604897;
    msg.speed_units = 12U;
    msg.bearing = 0.5305010564952327;
    msg.cross_angle = 0.3725380566451104;
    msg.width = 0.8717149615750363;
    msg.length = 0.680137352799354;
    msg.coff = 31U;
    msg.angaperture = 0.9268219849961381;
    msg.range = 41091U;
    msg.overlap = 203U;
    msg.flags = 25U;
    msg.custom.assign("VDZLPSJIYSURTXGOVMAQGBFIFZCLKWDVPMEIDSWKUOJBTVAPTFYFXXTDUTRBGCRMDHFYDEUXOVALKMHEJJCEMZXQUTZBBGAELQTBS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RowsCoverage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sample msg;
    msg.setTimeStamp(0.2503986015835422);
    msg.setSource(7686U);
    msg.setSourceEntity(253U);
    msg.setDestination(58845U);
    msg.setDestinationEntity(98U);
    msg.timeout = 35373U;
    msg.lat = 0.5448877435183374;
    msg.lon = 0.5995137027581979;
    msg.z = 0.25914131081246305;
    msg.z_units = 50U;
    msg.speed = 0.286010463587561;
    msg.speed_units = 207U;
    msg.syringe0 = 16U;
    msg.syringe1 = 245U;
    msg.syringe2 = 28U;
    msg.custom.assign("BJXQIBISZZGYWATZVJEITMGWVQCLQPKQINATCSJPOJUBJRJLTXPOTUSYLNKICKSNZUNCAISONCDFCNZXRWQAAKLNSLMQYDQSVCAZFMFTEDZQMIBFOCVWTGVOVDEHPZFEHBACBNLMUXZEZKHHBKFYBDMMKIDUHHTLUDEFUGEOGXDPOMRPKPDROWAJKKXGVQOGEOP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sample #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sample msg;
    msg.setTimeStamp(0.9032091338258557);
    msg.setSource(62336U);
    msg.setSourceEntity(37U);
    msg.setDestination(7931U);
    msg.setDestinationEntity(60U);
    msg.timeout = 42731U;
    msg.lat = 0.39214688809200626;
    msg.lon = 0.6626860393557712;
    msg.z = 0.9778954660727996;
    msg.z_units = 99U;
    msg.speed = 0.1390121368185835;
    msg.speed_units = 245U;
    msg.syringe0 = 239U;
    msg.syringe1 = 8U;
    msg.syringe2 = 80U;
    msg.custom.assign("ZNUFBQPSDCWZQASCFVTHBEDRFGZUUACXZIMHHTSLGMDSAXEKBJZQYSGAKUTMVNXLIRQAIHMJCUVLEIBXISQUVHUXRNRQMWKDQGJPBFRKOHPOZXLRNICKXFEHQJADGSQPLUGXTKGWJBZCVRLAVKOIOSWWEHWVXIELKIMBMNYTYPCTENYBJVPDRLOCBNOTJYEYGKSBUJDWHOWCTFOMXPPAF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sample #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sample msg;
    msg.setTimeStamp(0.9929122728500571);
    msg.setSource(31490U);
    msg.setSourceEntity(171U);
    msg.setDestination(53040U);
    msg.setDestinationEntity(168U);
    msg.timeout = 59956U;
    msg.lat = 0.4037268536333489;
    msg.lon = 0.9491842364773794;
    msg.z = 0.03065352493025597;
    msg.z_units = 2U;
    msg.speed = 0.43767276729017424;
    msg.speed_units = 201U;
    msg.syringe0 = 187U;
    msg.syringe1 = 199U;
    msg.syringe2 = 163U;
    msg.custom.assign("QKCMKYFPWIRUSBHGFDKBETMUFNKBUYGGTUNSQTSCVUGFXWMHQZTHRYZCMVLATCTAYLMJMWZKDEXYBPIDIPDEDJGEYNOKBEPEYZGJAJAHCXPWESJPEDLRYLARXZJBUMDXEYWJASIPIWCKRADKONSSRCODVINVMTIWUBLFVTOFLBQNIQUXOUVGXAJSGHUZOSTPL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sample #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTracking msg;
    msg.setTimeStamp(0.6281906760538556);
    msg.setSource(25891U);
    msg.setSourceEntity(120U);
    msg.setDestination(18762U);
    msg.setDestinationEntity(35U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTracking #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTracking msg;
    msg.setTimeStamp(0.7374073963334019);
    msg.setSource(18109U);
    msg.setSourceEntity(135U);
    msg.setDestination(16719U);
    msg.setDestinationEntity(200U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTracking #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTracking msg;
    msg.setTimeStamp(0.2586228651168907);
    msg.setSource(3115U);
    msg.setSourceEntity(234U);
    msg.setDestination(5151U);
    msg.setDestinationEntity(81U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTracking #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Takeoff msg;
    msg.setTimeStamp(0.7765602637116246);
    msg.setSource(53065U);
    msg.setSourceEntity(191U);
    msg.setDestination(27582U);
    msg.setDestinationEntity(226U);
    msg.lat = 0.5302909916184595;
    msg.lon = 0.5007871988983197;
    msg.z = 0.8099102213421409;
    msg.z_units = 151U;
    msg.speed = 0.13679406645823;
    msg.speed_units = 190U;
    msg.takeoff_pitch = 0.07660339506256242;
    msg.custom.assign("VBGUFNOSFZINWHUOVADAROJPBXBBVLJXENMIGOIACBYYQLEXQTNCKYQXKB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Takeoff #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Takeoff msg;
    msg.setTimeStamp(0.523131238134755);
    msg.setSource(54346U);
    msg.setSourceEntity(209U);
    msg.setDestination(26994U);
    msg.setDestinationEntity(168U);
    msg.lat = 0.30776544636197245;
    msg.lon = 0.39046380268807446;
    msg.z = 0.6750579637844248;
    msg.z_units = 90U;
    msg.speed = 0.22669391058216226;
    msg.speed_units = 60U;
    msg.takeoff_pitch = 0.8101755159417466;
    msg.custom.assign("YFZEGJNFRSXCHKRBKPAUCVVHMGJLSKREPYHXFENJXPMNETYTXIBEKWNAWRQZBYWJZFCIQSRQIIEHXFSAHBSSNBDICPAAGZIMAIKPGLJP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Takeoff #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Takeoff msg;
    msg.setTimeStamp(0.5755209735055642);
    msg.setSource(57524U);
    msg.setSourceEntity(80U);
    msg.setDestination(34046U);
    msg.setDestinationEntity(17U);
    msg.lat = 0.7427555896708081;
    msg.lon = 0.5951120192616647;
    msg.z = 0.6946641072214348;
    msg.z_units = 73U;
    msg.speed = 0.27031752486753924;
    msg.speed_units = 225U;
    msg.takeoff_pitch = 0.6461856133078472;
    msg.custom.assign("EBYNYKWZMXWLSSESZAJXXZKWOAAPWWORQUOKTHEDJKJFVAJCLAGMEVHXUMPBMBISCUKFYRBVNOLNYEJXORHQZINRNQTOKCTGYHHGXXFHDVZEBEPUFLPVHYUPGHAPXZCITWDDITCT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Takeoff #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Land msg;
    msg.setTimeStamp(0.8845434923918373);
    msg.setSource(38860U);
    msg.setSourceEntity(63U);
    msg.setDestination(2895U);
    msg.setDestinationEntity(120U);
    msg.lat = 0.22165561226626662;
    msg.lon = 0.4259018251099669;
    msg.z = 0.7210996455923483;
    msg.z_units = 160U;
    msg.speed = 0.8843939082401927;
    msg.speed_units = 90U;
    msg.abort_z = 0.245566593997128;
    msg.bearing = 0.1448017547908813;
    msg.glide_slope = 186U;
    msg.glide_slope_alt = 0.5443501189336128;
    msg.custom.assign("STUSAUMSHQKYEWKDOCVMNHZWUEDBGHKGNKYCOMS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Land #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Land msg;
    msg.setTimeStamp(0.9521579852195087);
    msg.setSource(18563U);
    msg.setSourceEntity(2U);
    msg.setDestination(16489U);
    msg.setDestinationEntity(252U);
    msg.lat = 0.857332720148255;
    msg.lon = 0.36071288327574946;
    msg.z = 0.06720565220394703;
    msg.z_units = 163U;
    msg.speed = 0.6259531886205335;
    msg.speed_units = 45U;
    msg.abort_z = 0.02101607062493327;
    msg.bearing = 0.14268794964672982;
    msg.glide_slope = 206U;
    msg.glide_slope_alt = 0.9851184001361023;
    msg.custom.assign("CFOPWTGBLTFKYMAKAPDXVAKCQRPDSXFAUYKKLQVBYOYJGQPUUARUOHNWQEEKSWCVEIGABUWSDNRWBCIVDIPCRGLTIEMWXPUDZKZIUFBYFRMJBTTGNXJCAVFRQXTJTDMLNCZHWFYUXITKUOSORSVLBEOXJZHSNSBFOXMGMNEZRJBJGMLFEGDBKYDVVJOACSDHZEWEHNGAHXMCOMKVLRQYAIWQJVILWQIPXLNNJQYELZSZQS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Land #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Land msg;
    msg.setTimeStamp(0.15136253636177788);
    msg.setSource(5957U);
    msg.setSourceEntity(123U);
    msg.setDestination(11904U);
    msg.setDestinationEntity(184U);
    msg.lat = 0.12454239366728126;
    msg.lon = 0.47318606803800023;
    msg.z = 0.03587364027378115;
    msg.z_units = 159U;
    msg.speed = 0.7960835117914626;
    msg.speed_units = 208U;
    msg.abort_z = 0.4051310805173859;
    msg.bearing = 0.41919035251759473;
    msg.glide_slope = 223U;
    msg.glide_slope_alt = 0.14834280947571477;
    msg.custom.assign("IYCVRWOWCBZMNXPMSGSGWLVMJDFURKBVJJDLNPEMTRKXZLZCUVURPAXHTXNLQTUNSKGPFAJLKAVQZORFZYEYPWPXSJVEADDTNVDTHRGRGUSIRIIBLEQKTOSEBSOFLMGJIQHQQCTZASPKDNKMIVDYVHZYUY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Land #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutonomousSection msg;
    msg.setTimeStamp(0.6663633570590025);
    msg.setSource(20333U);
    msg.setSourceEntity(86U);
    msg.setDestination(511U);
    msg.setDestinationEntity(251U);
    msg.lat = 0.7197284676663089;
    msg.lon = 0.4411852269916313;
    msg.speed = 0.33810759790055045;
    msg.speed_units = 189U;
    msg.limits = 69U;
    msg.max_depth = 0.19426963522104201;
    msg.min_alt = 0.5703380865990845;
    msg.time_limit = 0.4262193091357993;
    msg.controller.assign("HVVKKJMGOKDKUEYSIEVULBRNYENFPCOEZLFGBIJLCBJZOEKYBXIXV");
    msg.custom.assign("YORPXHOTWWCBWZBYV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutonomousSection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutonomousSection msg;
    msg.setTimeStamp(0.6129056795892788);
    msg.setSource(44722U);
    msg.setSourceEntity(74U);
    msg.setDestination(19300U);
    msg.setDestinationEntity(253U);
    msg.lat = 0.9568407848010194;
    msg.lon = 0.36203267073298073;
    msg.speed = 0.8343867882191921;
    msg.speed_units = 133U;
    msg.limits = 63U;
    msg.max_depth = 0.3079844459013549;
    msg.min_alt = 0.4423708265864601;
    msg.time_limit = 0.6965805577107645;
    msg.controller.assign("ULRFQXNUSLBTBJPYCKLEUEMESTW");
    msg.custom.assign("WZJTWQLDKEIEEYPZVSBQENWOYTMNVJRQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutonomousSection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutonomousSection msg;
    msg.setTimeStamp(0.6537727414382282);
    msg.setSource(26011U);
    msg.setSourceEntity(37U);
    msg.setDestination(57283U);
    msg.setDestinationEntity(171U);
    msg.lat = 0.24001744661548396;
    msg.lon = 0.12000878164162943;
    msg.speed = 0.9546424539195894;
    msg.speed_units = 74U;
    msg.limits = 239U;
    msg.max_depth = 0.3082861113400579;
    msg.min_alt = 0.20843610524518164;
    msg.time_limit = 0.6558175879652934;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.5210340617604803;
    tmp_msg_0.lon = 0.5654755682405376;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("HKJGXHEWDZRLZVBNMFQACRUUHWGOBJKQMOQULGXTNVGEH");
    msg.custom.assign("QEUPHXABGEIGLLSWSLZDYKRBNLFQXVFRIDWOBEQTFJTWDNUGOGARSZKURNGFDUOWOVYMDADBELXIJTIKNAJOWKJRHCWZVHVGHIVBZPFEXBKQRTBXHULPAWZINYSNVNDKTGWNQPDJEJMPTODOKFJSZIAIM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutonomousSection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPoint msg;
    msg.setTimeStamp(0.7851364373245505);
    msg.setSource(55441U);
    msg.setSourceEntity(221U);
    msg.setDestination(27654U);
    msg.setDestinationEntity(125U);
    msg.target.assign("SJBQFQJAEXSRDPISVFYMMWJCBITCAOHJXZLGLRIVQFQFPCOOXURDBRLPFTEMEYXNLGFSPTLNHTZUYTZSYVHYKXXETDLAPQDWVOVNGBWGWNEUFDKEOJHQKFCFFNVNUDVBDAGWEVCHBISPBBRHCORQDRTXYOWUPKMLWEAKPHRIUZOSKIZIJZMBHZKAHVLATLXAUZYSJUJWZCNRTWOJNYAGQWCXKBKJCP");
    msg.max_speed = 0.2372436429462067;
    msg.speed_units = 66U;
    msg.lat = 0.8165543159778612;
    msg.lon = 0.03371201594765394;
    msg.z = 0.5601687602251942;
    msg.z_units = 103U;
    msg.custom.assign("IHHPOJZPSTDTAEVSLDALFERIEBSSUURUDMCYEXNKFSDNYCGMHHBVXNTFUFOBHUS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPoint msg;
    msg.setTimeStamp(0.23924162901323087);
    msg.setSource(58526U);
    msg.setSourceEntity(116U);
    msg.setDestination(35341U);
    msg.setDestinationEntity(14U);
    msg.target.assign("OZGPIBFUEAMILTRMCCJCIBJLENQSOFSPFFNGTKWSHOPCCQMCMRJBLDXVMOENGDVRJWTNKLEPOWRLXMPYSAZTMLKIGPB");
    msg.max_speed = 0.2766589932307787;
    msg.speed_units = 234U;
    msg.lat = 0.6652797132839422;
    msg.lon = 0.4011435510199425;
    msg.z = 0.698424027061942;
    msg.z_units = 154U;
    msg.custom.assign("DRDTWEQRARWZOBFNAJBWEAQFAJQUHVFFOTXLDHOQHVHJGCHBAUHLCSHLTMBMNLPSNSTUTLYZECOJXYPDFAUZGOCPWVLOSLKNYBSIQUBPMBHFIRKDZKBYKWGMCIVUFZMDNEITWYWBURXQNVZKQWMHTJRIRCZKQIYYZALXOXJFGQEZOVUXOXRGDRYXLGSGFSGEXSMJLDIPTAGKECGYIHVWVPPUKXMMINVNWCSNEKUEEJTDVCCNYAMPZPIPJTQA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPoint msg;
    msg.setTimeStamp(0.8808420884973838);
    msg.setSource(31951U);
    msg.setSourceEntity(87U);
    msg.setDestination(46924U);
    msg.setDestinationEntity(181U);
    msg.target.assign("XRXQVXCXKDEHYSWPFTALTMHJHNFYPGCTJLTQKCXIPYLWXCUVCKNWLJQTZIRQZGYRLADZWZTBINGVOGKTHIZG");
    msg.max_speed = 0.7737419873689271;
    msg.speed_units = 228U;
    msg.lat = 0.3609506019656421;
    msg.lon = 0.5723347408276639;
    msg.z = 0.09627920445581639;
    msg.z_units = 74U;
    msg.custom.assign("NEUTSVVRVGOFZKPYJSJXYKANSELPLYQWGAYEQNDNIPHVBNRVTROANJSUFPPKYMZVIIWZDPMCNEMLQRFAYTIPSZDXQDMZKLZTWBCXDFQTNAEXXYGKGVMMTSVAUCLPJTWCQMCOAVBWOLLLXBBXWYRPJHSHUZLCONHLFDARFKSEQEUGRCZOEPUJHQKKJGGFHWWDWJFBSOAGRBDRWBTQOERKHJITYUHVXBOCUZIIIZUIBH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Alignment msg;
    msg.setTimeStamp(0.05333728437340535);
    msg.setSource(25328U);
    msg.setSourceEntity(43U);
    msg.setDestination(11415U);
    msg.setDestinationEntity(133U);
    msg.timeout = 23235U;
    msg.lat = 0.432500433013677;
    msg.lon = 0.3021608838358295;
    msg.speed = 0.907039694197904;
    msg.speed_units = 156U;
    msg.custom.assign("UOLMQPVYZNZGKLDXPAXJBHNVNMFOVTDJJZAWWPJHALNXPXLCTOIEOGECRBZIASWPBXIWFSVIRMHLUVLQYALXZAPTDERETCBCS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Alignment #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Alignment msg;
    msg.setTimeStamp(0.7775207122975254);
    msg.setSource(23811U);
    msg.setSourceEntity(218U);
    msg.setDestination(40278U);
    msg.setDestinationEntity(212U);
    msg.timeout = 40204U;
    msg.lat = 0.14860560071779438;
    msg.lon = 0.10041714761851617;
    msg.speed = 0.28694889426816805;
    msg.speed_units = 242U;
    msg.custom.assign("WFDHRSVPZRXSGOGAZIKASZVGRPTUDKQUQIJJOCDZTUCZFWFCBKCCALTYYMLBVCQWZRZFMDTUWGMDKHYBSADSIUWIYJBQRWJV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Alignment #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Alignment msg;
    msg.setTimeStamp(0.9427481011402685);
    msg.setSource(61867U);
    msg.setSourceEntity(251U);
    msg.setDestination(58252U);
    msg.setDestinationEntity(226U);
    msg.timeout = 21042U;
    msg.lat = 0.9846136776377951;
    msg.lon = 0.046620054006946576;
    msg.speed = 0.9718810926230191;
    msg.speed_units = 189U;
    msg.custom.assign("YZKYVSOYLWBQVTRHGLBZMBAUCAHUJOXRHYMPONAXZPZFWGBEKMTUAMBGGVJFZGJFJRENUQILSLLVECANBS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Alignment #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeepingExtended msg;
    msg.setTimeStamp(0.6323895255397336);
    msg.setSource(11863U);
    msg.setSourceEntity(50U);
    msg.setDestination(59145U);
    msg.setDestinationEntity(194U);
    msg.lat = 0.7283455022861636;
    msg.lon = 0.798201660515603;
    msg.z = 0.23455833614203492;
    msg.z_units = 208U;
    msg.radius = 0.08015634679799943;
    msg.duration = 57515U;
    msg.speed = 0.4220540192837685;
    msg.speed_units = 166U;
    msg.popup_period = 36079U;
    msg.popup_duration = 7263U;
    msg.flags = 192U;
    msg.custom.assign("GQETICBEGSWQLJOEPOZFYRBGKRTORBRPTDTNLMAWZEQFOTJHKQVXUMIVNJOJFFHNDFVPJPKUHLHSIDCSLUDPVWSYUCNRISYMLNYUMWUFFLXVMXAKZARHGGIBOJFMBWTOSXHTXGPKIKKJAYAIECBT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeepingExtended #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeepingExtended msg;
    msg.setTimeStamp(0.6109905689733488);
    msg.setSource(27297U);
    msg.setSourceEntity(26U);
    msg.setDestination(47290U);
    msg.setDestinationEntity(0U);
    msg.lat = 0.1777368816093604;
    msg.lon = 0.3784948969737867;
    msg.z = 0.7211276359364287;
    msg.z_units = 229U;
    msg.radius = 0.4725063688414982;
    msg.duration = 35949U;
    msg.speed = 0.4372370325142344;
    msg.speed_units = 226U;
    msg.popup_period = 39627U;
    msg.popup_duration = 9592U;
    msg.flags = 41U;
    msg.custom.assign("OJPCMHRSERAPESPIKBSTWKIFUOFZADYOAQZUSBRKKEIMFWKEWVLBFNAPAJRQZSYLXMHCRFACWXOAPUBKIMVNPZTSZJRGHJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeepingExtended #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeepingExtended msg;
    msg.setTimeStamp(0.5839708120475384);
    msg.setSource(56284U);
    msg.setSourceEntity(137U);
    msg.setDestination(35957U);
    msg.setDestinationEntity(163U);
    msg.lat = 0.763931059436022;
    msg.lon = 0.6904956030342092;
    msg.z = 0.8788927243392771;
    msg.z_units = 55U;
    msg.radius = 0.2943322099200717;
    msg.duration = 52393U;
    msg.speed = 0.8003840438576687;
    msg.speed_units = 200U;
    msg.popup_period = 60703U;
    msg.popup_duration = 60506U;
    msg.flags = 84U;
    msg.custom.assign("EBFEBZFXNVAYUOYDJYWMCOXWEJVRSOECVNJCSGLJUBQDKYITLMMHICSEJHUDPDOKHAXHZBUQIZVJMZFGQWGALVPPGITMSKGRJNKLXNYNWFYIBJBFKOBMDKTAYTPTRZTFVNYMINOBLLHKZQGCQXCOEQVNXQZUIARR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeepingExtended #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverDone msg;
    msg.setTimeStamp(0.31818252787484);
    msg.setSource(57462U);
    msg.setSourceEntity(33U);
    msg.setDestination(460U);
    msg.setDestinationEntity(182U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverDone #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverDone msg;
    msg.setTimeStamp(0.7083971495301937);
    msg.setSource(18831U);
    msg.setSourceEntity(63U);
    msg.setDestination(54701U);
    msg.setDestinationEntity(20U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverDone #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverDone msg;
    msg.setTimeStamp(0.883190767533787);
    msg.setSource(40864U);
    msg.setSourceEntity(253U);
    msg.setDestination(54608U);
    msg.setDestinationEntity(155U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverDone #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Magnetometer msg;
    msg.setTimeStamp(0.1528706080595854);
    msg.setSource(2261U);
    msg.setSourceEntity(56U);
    msg.setDestination(4638U);
    msg.setDestinationEntity(103U);
    msg.timeout = 17392U;
    msg.lat = 0.27795749475403597;
    msg.lon = 0.9721567678912015;
    msg.z = 0.6439791479276381;
    msg.z_units = 165U;
    msg.speed = 0.23845489021459687;
    msg.speed_units = 250U;
    msg.bearing = 0.6275078457965872;
    msg.width = 0.19584403122689598;
    msg.direction = 72U;
    msg.custom.assign("UPEULMEDOZWIPSEKLJHBRAISJOROKAMZWQDVWECLDATZYUYWEAILKGCR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Magnetometer #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Magnetometer msg;
    msg.setTimeStamp(0.17646618379249812);
    msg.setSource(27226U);
    msg.setSourceEntity(12U);
    msg.setDestination(45196U);
    msg.setDestinationEntity(222U);
    msg.timeout = 35000U;
    msg.lat = 0.4918200144250011;
    msg.lon = 0.5239986905194883;
    msg.z = 0.1732258958099525;
    msg.z_units = 11U;
    msg.speed = 0.95862412868407;
    msg.speed_units = 193U;
    msg.bearing = 0.015058810509946507;
    msg.width = 0.6313635833656884;
    msg.direction = 59U;
    msg.custom.assign("XZLUBYTSQWHYFJFDIXIVJFHYGNOMLDXGSXTRMRVALWERQFEPZRYFCBVWLKIRVNBJAJURBGTWQJNUGKVZHFMBAWBNQSYIMBNVGBJIMHICWGRHODNXAYCKJWQOWDDOEMKGBTIFTYSX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Magnetometer #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Magnetometer msg;
    msg.setTimeStamp(0.4474809707219245);
    msg.setSource(49706U);
    msg.setSourceEntity(218U);
    msg.setDestination(56746U);
    msg.setDestinationEntity(139U);
    msg.timeout = 34374U;
    msg.lat = 0.7479004236935193;
    msg.lon = 0.9871619323889104;
    msg.z = 0.3022353231604791;
    msg.z_units = 159U;
    msg.speed = 0.8237946119869831;
    msg.speed_units = 108U;
    msg.bearing = 0.48955666579583523;
    msg.width = 0.6225638739483209;
    msg.direction = 162U;
    msg.custom.assign("MEJJKISPRUSWCPBRXTIEKEKAWLCORUQDJRSFEKTWRDPQENMDOAMCGHNJJGZHZOYGDBBMHCVWEBADJMUGAVETSKXZLTYIHOFAESRXZJOYHPQFAUADBBVVFQQCUQRFSGPSBOPDPLTEJFUZKW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Magnetometer #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleState msg;
    msg.setTimeStamp(0.26018837060750133);
    msg.setSource(53887U);
    msg.setSourceEntity(213U);
    msg.setDestination(25677U);
    msg.setDestinationEntity(174U);
    msg.op_mode = 3U;
    msg.error_count = 238U;
    msg.error_ents.assign("TRBXBXPKGBGDKIBOEDLTVCEHWPKQUPPJEURTEUVYHZQDWLMUGPQHTXIWNGOFCSQKIOCUCZYRQRZZQUYHDGAMPFBWFNHAKHSAEQHYJSLLRDNUNFNFIICOUPYLMTXRRBMVMCEDOMAVOJJSGWCILPNXVSJKXAAAHGDTSWSDDJVNMBFIMLSZVJZWQVEIJLRHAUFNWYKGBTEWVUXPGZFJFQLMYSKCTRIABBRYLZWJMX");
    msg.maneuver_type = 20473U;
    msg.maneuver_stime = 0.055431398023318645;
    msg.maneuver_eta = 59097U;
    msg.control_loops = 3391224843U;
    msg.flags = 220U;
    msg.last_error.assign("YESKGXHSHOADHCZSPBDBJDSDFTIQIDHPBGOMWYTJWVDGTHSRXJIGPDSVHBXNZOPRENWNFJWAPAHREBJYQOBRCLZEQVZFPJMYDFUYNXMYGRTIWONXFLIKMPLZVQFQDQMUTBUVIKEEBTJVIIUOAQAZFGHOUAKYVRZCXNVGUALPTRJSGIDWEKKXLCHZMWFBJVNUUMROPKKCRTLNLUEVOTNXFMWOMIMSCYGCKBXQTYFKCPLNEJCZAGQYWSHW");
    msg.last_error_time = 0.6924128708719204;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleState msg;
    msg.setTimeStamp(0.674292871454646);
    msg.setSource(48904U);
    msg.setSourceEntity(8U);
    msg.setDestination(10757U);
    msg.setDestinationEntity(190U);
    msg.op_mode = 207U;
    msg.error_count = 97U;
    msg.error_ents.assign("YXCNQVSFCVOSDKQUIUWGYINEKCPHFPAKSPOXLPJVGJQLLLJWYLJLVWMXZEACHQIYINEAHJONZMDDXRSSDRSXSRNFJMJITGTTFAOIZGBXCEGFVTWOXRAAHEIQFTMRUCPOKLBPTUKDN");
    msg.maneuver_type = 23800U;
    msg.maneuver_stime = 0.6827331259117202;
    msg.maneuver_eta = 49653U;
    msg.control_loops = 2148751975U;
    msg.flags = 236U;
    msg.last_error.assign("FXNFFEODKPJMHYYQBOIXPXKKWYVIQWMTMJASHUZFDCDWKALUALLSKY");
    msg.last_error_time = 0.9647661918201148;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleState msg;
    msg.setTimeStamp(0.5364376353751169);
    msg.setSource(61590U);
    msg.setSourceEntity(105U);
    msg.setDestination(31836U);
    msg.setDestinationEntity(230U);
    msg.op_mode = 101U;
    msg.error_count = 215U;
    msg.error_ents.assign("HICDYYUNSXRSNUWVVBWSEOPDQFINCRGUHHNOULEPTLAUVRBFOPSZCXSL");
    msg.maneuver_type = 11497U;
    msg.maneuver_stime = 0.4814313047601373;
    msg.maneuver_eta = 902U;
    msg.control_loops = 2526700726U;
    msg.flags = 32U;
    msg.last_error.assign("TAYLIMEUOCBZCRMCOZNSIXVKQAFCPVWJJOJMBLBEHTFQL");
    msg.last_error_time = 0.1925919706384187;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleCommand msg;
    msg.setTimeStamp(0.6380947375846379);
    msg.setSource(13465U);
    msg.setSourceEntity(99U);
    msg.setDestination(57196U);
    msg.setDestinationEntity(158U);
    msg.type = 241U;
    msg.request_id = 6408U;
    msg.command = 84U;
    IMC::ImageTracking tmp_msg_0;
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 37698U;
    msg.info.assign("CDLUUUOISXTXQPJECSFNBLBPZZZAHCOOABYCIGZRJPOXWQNEMQNUITNRECQBMLYVXXMWTUTPSLKXOPHWVDCSKAKLJAWAWCOYCRFFSKLHDFDPWXKVKZINDTYGBHQIVYSULFMUFQZPZJDSRIRHQEVRQHOVQFRAJM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleCommand #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleCommand msg;
    msg.setTimeStamp(0.8983357087393715);
    msg.setSource(42031U);
    msg.setSourceEntity(149U);
    msg.setDestination(39788U);
    msg.setDestinationEntity(181U);
    msg.type = 82U;
    msg.request_id = 59782U;
    msg.command = 189U;
    IMC::Alignment tmp_msg_0;
    tmp_msg_0.timeout = 36336U;
    tmp_msg_0.lat = 0.9814390561684871;
    tmp_msg_0.lon = 0.8432608209726242;
    tmp_msg_0.speed = 0.49567365938323926;
    tmp_msg_0.speed_units = 133U;
    tmp_msg_0.custom.assign("TXTQYWZDFHRVLZCOSAUAHVQOMURVUTGOBEZHGECFMKMPBYQSNNOAINZEAYLHEBGYTGQRCIWNGDPQIKDIWSOFYOXYLFUWCWBMKIRZXICHLCOVZINYNOZSUVIDXBLMQDUNR");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 56072U;
    msg.info.assign("ITUZNFCBQXXKUQUIKIIOHWULQPXSBVVFXYEMEPFRNQNNBCSCISJGHRSTOVCJCZJCWFEDUZREQMKDUAVFIZJTVFJFTMIOIYPEWYKYQNMVHLGDXHYWBDBERBGNKNAQNMBYWQHJPOPJXOLXGLAFZCMFVWQLHUDATNJHAZJKTMWZORYOLGOMAERBPKRTRILGXWRAZWLYAYOBHDU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleCommand #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleCommand msg;
    msg.setTimeStamp(0.021677540876300028);
    msg.setSource(24375U);
    msg.setSourceEntity(253U);
    msg.setDestination(16071U);
    msg.setDestinationEntity(194U);
    msg.type = 199U;
    msg.request_id = 16974U;
    msg.command = 182U;
    IMC::Teleoperation tmp_msg_0;
    tmp_msg_0.custom.assign("NVHLZYCBMOWTFYBMSPIEYZTNKIXGZRCCFXLAGODBSASZXOTINUTWJFOWYJJEWQASWYQDELBSJ");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 56284U;
    msg.info.assign("SGUVTGMROAODAM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleCommand #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MonitorEntityState msg;
    msg.setTimeStamp(0.21326862000244573);
    msg.setSource(20926U);
    msg.setSourceEntity(226U);
    msg.setDestination(52264U);
    msg.setDestinationEntity(209U);
    msg.command = 25U;
    msg.entities.assign("WJPRHZTKGKIYCHUGMIBXBYAYXXDTTJSFKVNFHUKTWMFIHMZPJSDCBWJUCLEVBSOCSFWVAVTIWQXNPQTVNQAHIEGRMPPUMADSILHYNBLFLHEXUWCGRVJAPKLLWZGMNSORAZYGWRKSMRVMSJBGARDJJYRXFGONYDXPZZOG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MonitorEntityState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MonitorEntityState msg;
    msg.setTimeStamp(0.3008189605069379);
    msg.setSource(11889U);
    msg.setSourceEntity(16U);
    msg.setDestination(16133U);
    msg.setDestinationEntity(31U);
    msg.command = 84U;
    msg.entities.assign("TMFVPNOLYYUUBDZBXPVZFKACDSEAXDRAVIZUKMRPVULUHUAKIPKQEJPSQEYQKSAECHIHFACQTTQTNMJGYICNJOKCYHHTUOXRYOOPYZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MonitorEntityState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MonitorEntityState msg;
    msg.setTimeStamp(0.1312197357537781);
    msg.setSource(59073U);
    msg.setSourceEntity(229U);
    msg.setDestination(42599U);
    msg.setDestinationEntity(34U);
    msg.command = 203U;
    msg.entities.assign("CTFUSSIEMPBWFROUZDEGDYRISRQDRDKOJALTERYJCMQAKIKBNQLREXZSNHHQLWUGNFCHXMKGFLKGPULTAKVWVFBCZBEXURRJDJHPINOSBHOLHQHFIOTTWHFBNSSUFMDMPLKENVTZUQGMFVFMZPGZJXWLJVAVOZWTCEVSRBJSAZCHLDVYGIEYAAYXNDHOIETQETQGAGWVPYJUYBKNPSGC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MonitorEntityState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityMonitoringState msg;
    msg.setTimeStamp(0.3597794321458273);
    msg.setSource(57975U);
    msg.setSourceEntity(72U);
    msg.setDestination(35168U);
    msg.setDestinationEntity(106U);
    msg.mcount = 78U;
    msg.mnames.assign("RXPCBSANNIAYAQPSZUGRJUJPYHOGRPFSTTTNDFMCCCFMQZEOHGZBUDOWNRYTAZCWKYNCCBDKWOGAEJWALXNYOVLFBAWYIBMDGLHKMIKKSUCXGMS");
    msg.ecount = 93U;
    msg.enames.assign("GRVSMQLNQBRVTWRCOXYZFFOVHIKWACYXGPGJLXWECIBIQCSHFRULIOURJQSJYMPMAFFVNUTCBQMNYNZTWXAPAKHOAEVVGYPFKSWDRQORBXEIZKPTOTJHQTSSEJRYLKAMCCNSNZJOGZIGJUWVPTTXOHMQODFGMHUKBWBMDNAFDSBJINKWSXVNAITBXGODKLABEUCYQEJHYVQP");
    msg.ccount = 250U;
    msg.cnames.assign("XVWGUENOTXAOKURHOAVOJGWDLEPYKASPIHSSPTGYRWUZMRHHMKPQXNEXSQGIDKQFLUKOHDYECFSMLPMAFUPSJTNFBPQZPVCUYRZJBGTNZMLQXYFXYLTABYLEHXCWPG");
    msg.last_error.assign("TFBOBNUZQKDQPZCWRILEEHCVPCJGENGSMWIUQZWYROTUIKXSOVTBFPNRHMRLGEZYHJCDOXSTSGGCUGXJFQAOBINZWXIBEMPTPBLSNNDDJIHCTVACDYJZGOWALNVIQIFSBLKNXKJBCFHCLUXGAQUVKYHEMDDJXMTAMRPSXJDPUMHWDTVYYCFQAEEOVLRZXJRZLSXQRIRYKHKKAKVQOYTDQBWUAVGSNZ");
    msg.last_error_time = 0.018235366660826036;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityMonitoringState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityMonitoringState msg;
    msg.setTimeStamp(0.04012992323351039);
    msg.setSource(16225U);
    msg.setSourceEntity(229U);
    msg.setDestination(61181U);
    msg.setDestinationEntity(203U);
    msg.mcount = 40U;
    msg.mnames.assign("PGDNKNSKWFWDAHKJOTVYLCHUHSDNSGBNXXMJABEYUUKYPFAWKQYPTLCCTJIJGDMQRODLVKZCGTEYGVTSDRRLEBIEOVGIRMCABQLHYFKLXDJYHIHSPQPVHCXXOMZPIWBOOFXFNZRGFNNHWKTSMYXXBAMVKIKABUQZQVVCWLNLWQTZJREWIAOZUWEQY");
    msg.ecount = 146U;
    msg.enames.assign("CPXHVBIDRAUPXPIVYPLFFYBOEOOKZYJOJPUAREBEMJOWJZVCCVNTKDAXMZUTGJCXESKSRRQQOVJHMZSIUJNLHDXFEUTXDWMOYRNDSNFTLXEWNIPYP");
    msg.ccount = 125U;
    msg.cnames.assign("ULLTMCVRPHCRQOTPHFADGDBZZDEGOGZGTBROHNLYQJKXMMKXQJRVEAVZJPBDKWUKZNFIAQBYJCPCEIHAGMSQYSCQWYPDXJMVIPVGPHEQHMJKMEGTVLQAVUSFMOSOFKVWEWCUVGCODNIXSITOHBBSQCTMBKTNSJIASFZLWLL");
    msg.last_error.assign("NWRGCVDZBEFRAHAPKAYFCAKYJKHDZBXOLZZNPFJZCUVUICRMUVWHYHYHLJWDQIQFSQSOGBGITWMBARSJXYXLEQNBONFOOMDXXRKMORZERTVTTTUSZSUBULDCJREYPUCOBETKPMMSCKBGYTQFDRPSLNBWJGHHAKSIKCWBVVSGXIEHNCEMDVDDWQNVXKNVPOQUFPYHIQJRJTAIZTQUAVFINEIEIWYJXLANMKJXLAUXFOQHEODZYGFSTLPLPWGM");
    msg.last_error_time = 0.30330638060080295;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityMonitoringState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityMonitoringState msg;
    msg.setTimeStamp(0.9303103369832192);
    msg.setSource(1387U);
    msg.setSourceEntity(135U);
    msg.setDestination(52591U);
    msg.setDestinationEntity(92U);
    msg.mcount = 165U;
    msg.mnames.assign("FKCPPZCPYUVRIBLXWXRNIYRRJBDVHJFKYLDDZZJU");
    msg.ecount = 109U;
    msg.enames.assign("TUXQIDWQYUCHDNRQHKOKDEGZCAQFEOXIAFKMCZUSTEQJBXLCQFXGKPGMSQFIFALKONCISZNGRLXYLERHPWMTZHUBDDKJWUYBFZTSVLABJGMFTHPLMLAURETLPPODSIGXEPZUKQSHJBSWHMXBPLVGRICJAEFYDSWHGYSIZWOKBZNNLHGVTJRNCJTQUVFVWIPHQRVVMFTEYUAZDXIXAVRWOKWZ");
    msg.ccount = 55U;
    msg.cnames.assign("COBDKYRXYGNTWZQV");
    msg.last_error.assign("JLUSDDBSAYMTHMBFTZFXZZYBEIHVUEPAEUPLADSQSODJQKKYRGXPRMSFJTTWIQIFGZILLBOSKCSMUNDQXHZJNREOHNMCKNEUXPPQMZQCXHYUCNBANSQPXISNALAO");
    msg.last_error_time = 0.34661408354968704;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityMonitoringState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OperationalLimits msg;
    msg.setTimeStamp(0.22009035893551232);
    msg.setSource(50974U);
    msg.setSourceEntity(166U);
    msg.setDestination(59974U);
    msg.setDestinationEntity(108U);
    msg.mask = 220U;
    msg.max_depth = 0.6525802520641242;
    msg.min_altitude = 0.5673982778504162;
    msg.max_altitude = 0.9229741652151948;
    msg.min_speed = 0.36534202419882855;
    msg.max_speed = 0.8303349273287997;
    msg.max_vrate = 0.003120248828866523;
    msg.lat = 0.7294580064046797;
    msg.lon = 0.5815600933916163;
    msg.orientation = 0.724035059523875;
    msg.width = 0.9086149236163014;
    msg.length = 0.3772300363236931;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OperationalLimits #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OperationalLimits msg;
    msg.setTimeStamp(0.05735433780312271);
    msg.setSource(22481U);
    msg.setSourceEntity(172U);
    msg.setDestination(43672U);
    msg.setDestinationEntity(72U);
    msg.mask = 107U;
    msg.max_depth = 0.9759411895850674;
    msg.min_altitude = 0.1992403455053604;
    msg.max_altitude = 0.07506792655857997;
    msg.min_speed = 0.7418536939978402;
    msg.max_speed = 0.29502083546431956;
    msg.max_vrate = 0.915577494071838;
    msg.lat = 0.15344742885686358;
    msg.lon = 0.47134070601677625;
    msg.orientation = 0.18352548497038224;
    msg.width = 0.007541418826500501;
    msg.length = 0.4597652710436033;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OperationalLimits #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OperationalLimits msg;
    msg.setTimeStamp(0.431909387346468);
    msg.setSource(21969U);
    msg.setSourceEntity(239U);
    msg.setDestination(49324U);
    msg.setDestinationEntity(138U);
    msg.mask = 11U;
    msg.max_depth = 0.7891817853628484;
    msg.min_altitude = 0.9182003489658418;
    msg.max_altitude = 0.32535535690331285;
    msg.min_speed = 0.5252625342541262;
    msg.max_speed = 0.4734056117111345;
    msg.max_vrate = 0.28079413426628297;
    msg.lat = 0.7487746522811032;
    msg.lon = 0.12124998831454237;
    msg.orientation = 0.5212168863195523;
    msg.width = 0.42009579347286297;
    msg.length = 0.42986222248597095;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OperationalLimits #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetOperationalLimits msg;
    msg.setTimeStamp(0.6027515218865253);
    msg.setSource(11998U);
    msg.setSourceEntity(83U);
    msg.setDestination(28127U);
    msg.setDestinationEntity(138U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetOperationalLimits #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetOperationalLimits msg;
    msg.setTimeStamp(0.049103787489484074);
    msg.setSource(27869U);
    msg.setSourceEntity(235U);
    msg.setDestination(19860U);
    msg.setDestinationEntity(13U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetOperationalLimits #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetOperationalLimits msg;
    msg.setTimeStamp(0.11622720583722501);
    msg.setSource(21095U);
    msg.setSourceEntity(62U);
    msg.setDestination(38498U);
    msg.setDestinationEntity(102U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetOperationalLimits #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Calibration msg;
    msg.setTimeStamp(0.04273903394455758);
    msg.setSource(26227U);
    msg.setSourceEntity(48U);
    msg.setDestination(43111U);
    msg.setDestinationEntity(125U);
    msg.duration = 39625U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Calibration #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Calibration msg;
    msg.setTimeStamp(0.3501507625177469);
    msg.setSource(64077U);
    msg.setSourceEntity(195U);
    msg.setDestination(11513U);
    msg.setDestinationEntity(187U);
    msg.duration = 5602U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Calibration #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Calibration msg;
    msg.setTimeStamp(0.5221561442675382);
    msg.setSource(3211U);
    msg.setSourceEntity(132U);
    msg.setDestination(57404U);
    msg.setDestinationEntity(80U);
    msg.duration = 6932U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Calibration #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlLoops msg;
    msg.setTimeStamp(0.9602276149719053);
    msg.setSource(39827U);
    msg.setSourceEntity(12U);
    msg.setDestination(44966U);
    msg.setDestinationEntity(78U);
    msg.enable = 28U;
    msg.mask = 3016265317U;
    msg.scope_ref = 2919729939U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlLoops #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlLoops msg;
    msg.setTimeStamp(0.4700720085785216);
    msg.setSource(45470U);
    msg.setSourceEntity(19U);
    msg.setDestination(55953U);
    msg.setDestinationEntity(176U);
    msg.enable = 193U;
    msg.mask = 3863921239U;
    msg.scope_ref = 2177467563U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlLoops #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlLoops msg;
    msg.setTimeStamp(0.3653751013554454);
    msg.setSource(23236U);
    msg.setSourceEntity(118U);
    msg.setDestination(16102U);
    msg.setDestinationEntity(93U);
    msg.enable = 31U;
    msg.mask = 1113280361U;
    msg.scope_ref = 3003016572U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlLoops #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleMedium msg;
    msg.setTimeStamp(0.05091550926341104);
    msg.setSource(5516U);
    msg.setSourceEntity(96U);
    msg.setDestination(38095U);
    msg.setDestinationEntity(217U);
    msg.medium = 41U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleMedium #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleMedium msg;
    msg.setTimeStamp(0.8578131253065937);
    msg.setSource(52331U);
    msg.setSourceEntity(40U);
    msg.setDestination(14473U);
    msg.setDestinationEntity(218U);
    msg.medium = 90U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleMedium #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleMedium msg;
    msg.setTimeStamp(0.44065145370301206);
    msg.setSource(8971U);
    msg.setSourceEntity(73U);
    msg.setDestination(13804U);
    msg.setDestinationEntity(146U);
    msg.medium = 2U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleMedium #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Collision msg;
    msg.setTimeStamp(0.4275604209995274);
    msg.setSource(37860U);
    msg.setSourceEntity(105U);
    msg.setDestination(64200U);
    msg.setDestinationEntity(168U);
    msg.value = 0.9427774983836187;
    msg.type = 208U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Collision #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Collision msg;
    msg.setTimeStamp(0.7735476223534014);
    msg.setSource(5417U);
    msg.setSourceEntity(137U);
    msg.setDestination(26026U);
    msg.setDestinationEntity(125U);
    msg.value = 0.6453017787451957;
    msg.type = 30U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Collision #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Collision msg;
    msg.setTimeStamp(0.33231958993667865);
    msg.setSource(59802U);
    msg.setSourceEntity(27U);
    msg.setDestination(41754U);
    msg.setDestinationEntity(48U);
    msg.value = 0.03391997389372858;
    msg.type = 83U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Collision #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormState msg;
    msg.setTimeStamp(0.7369016276027509);
    msg.setSource(30633U);
    msg.setSourceEntity(135U);
    msg.setDestination(8859U);
    msg.setDestinationEntity(77U);
    msg.possimerr = 0.41883157162894036;
    msg.converg = 0.649546357168695;
    msg.turbulence = 0.5839767294935115;
    msg.possimmon = 232U;
    msg.commmon = 246U;
    msg.convergmon = 28U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormState msg;
    msg.setTimeStamp(0.40921094049866424);
    msg.setSource(30790U);
    msg.setSourceEntity(171U);
    msg.setDestination(27104U);
    msg.setDestinationEntity(242U);
    msg.possimerr = 0.5929253812213399;
    msg.converg = 0.3488439531595139;
    msg.turbulence = 0.8237852240195088;
    msg.possimmon = 143U;
    msg.commmon = 239U;
    msg.convergmon = 105U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormState msg;
    msg.setTimeStamp(0.46320345269071306);
    msg.setSource(29821U);
    msg.setSourceEntity(165U);
    msg.setDestination(17940U);
    msg.setDestinationEntity(35U);
    msg.possimerr = 0.4753532128733138;
    msg.converg = 0.01583468419769829;
    msg.turbulence = 0.6937990138918868;
    msg.possimmon = 176U;
    msg.commmon = 241U;
    msg.convergmon = 90U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutopilotMode msg;
    msg.setTimeStamp(0.5203192089825004);
    msg.setSource(35843U);
    msg.setSourceEntity(165U);
    msg.setDestination(26290U);
    msg.setDestinationEntity(9U);
    msg.autonomy = 8U;
    msg.mode.assign("HIBKBSMJKRMXCRRVPUONJTLRLKMCINRQWHBUCXNGGSTDHPZYWAISYYTGVTOYDGWVAGSQOKDLXLTWLPABFMEVWIKZJUAAFWZX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutopilotMode #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutopilotMode msg;
    msg.setTimeStamp(0.22076911081989725);
    msg.setSource(8738U);
    msg.setSourceEntity(153U);
    msg.setDestination(20906U);
    msg.setDestinationEntity(226U);
    msg.autonomy = 248U;
    msg.mode.assign("SDJVPYAOXZIKTXWVWPOGXPLJKWUTBEBCSKUQCRPXAMQVWFMFGGQHDYSDCXMYBLYFHXLBHGNMAMNWEAVVXGQJSWTFOCBTEBJYUNUQLIEVAGJRWYRCZUINZFVOBAUQCCHPBLRVDOUATLOATNYPDMMFWLYDVISIDANYEODRWOHQSVIETERSON");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutopilotMode #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutopilotMode msg;
    msg.setTimeStamp(0.9856171202620658);
    msg.setSource(17850U);
    msg.setSourceEntity(207U);
    msg.setDestination(48137U);
    msg.setDestinationEntity(177U);
    msg.autonomy = 97U;
    msg.mode.assign("CVEXXOKCBWBCUTOQYKEUFZJPDGFETFPTEGUCJXAANLLMSSQMZEVDRZZAESHWRLPANBQCEXNSMKOUDFPM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutopilotMode #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationState msg;
    msg.setTimeStamp(0.3132245112686304);
    msg.setSource(24513U);
    msg.setSourceEntity(67U);
    msg.setDestination(39551U);
    msg.setDestinationEntity(228U);
    msg.type = 244U;
    msg.op = 199U;
    msg.possimerr = 0.9790103705544931;
    msg.converg = 0.12050334460031198;
    msg.turbulence = 0.8444170417546117;
    msg.possimmon = 115U;
    msg.commmon = 232U;
    msg.convergmon = 159U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationState msg;
    msg.setTimeStamp(0.9387509141911274);
    msg.setSource(55364U);
    msg.setSourceEntity(202U);
    msg.setDestination(61202U);
    msg.setDestinationEntity(239U);
    msg.type = 107U;
    msg.op = 88U;
    msg.possimerr = 0.2306174990082529;
    msg.converg = 0.3762429552631946;
    msg.turbulence = 0.40230430389936744;
    msg.possimmon = 115U;
    msg.commmon = 35U;
    msg.convergmon = 88U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationState msg;
    msg.setTimeStamp(0.22879346268948808);
    msg.setSource(36402U);
    msg.setSourceEntity(241U);
    msg.setDestination(54049U);
    msg.setDestinationEntity(9U);
    msg.type = 23U;
    msg.op = 165U;
    msg.possimerr = 0.24818380864473533;
    msg.converg = 0.8940760233577338;
    msg.turbulence = 0.8577726744337967;
    msg.possimmon = 119U;
    msg.commmon = 107U;
    msg.convergmon = 163U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportControl msg;
    msg.setTimeStamp(0.22280556899358772);
    msg.setSource(62392U);
    msg.setSourceEntity(107U);
    msg.setDestination(38955U);
    msg.setDestinationEntity(150U);
    msg.op = 161U;
    msg.comm_interface = 201U;
    msg.period = 13883U;
    msg.sys_dst.assign("XLWGJNKJXLZCPQRNZBCOLCMGGDTPLCHOAOTBFMSRWXFFUVAGVWVPJHAVXKOKBQTUNVAGMZJWQEWHVBIUYMTJAOCYNQBKQUDWKQYJOJOZNDRHLJOEMCQPTCHDKEIYYKKRVMWIIRERUIUBSGCLNTEKBSAPQETDMCVDWAIZHFFHSLDXXFLBSRTYZPGIZMKNWLSXCSBEFJVUXLYHNMISQFIUXFYFGWQTSUHDRPATRSYEGZVREDDUMOBP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportControl msg;
    msg.setTimeStamp(0.11887053828955174);
    msg.setSource(49496U);
    msg.setSourceEntity(89U);
    msg.setDestination(54387U);
    msg.setDestinationEntity(51U);
    msg.op = 222U;
    msg.comm_interface = 40U;
    msg.period = 24007U;
    msg.sys_dst.assign("NOHVCKRWXCGBSYSRMRDIEIXVWTSGMDCEMJGOBVKIXYTYODXGVKRNJPDVGJVPQTLLLZDKAFFTOEEBUMTPZNWMKTOTYWSKQQPUVFNOUQMPABLHSSH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportControl msg;
    msg.setTimeStamp(0.23075634489689978);
    msg.setSource(21471U);
    msg.setSourceEntity(71U);
    msg.setDestination(62097U);
    msg.setDestinationEntity(51U);
    msg.op = 47U;
    msg.comm_interface = 254U;
    msg.period = 48096U;
    msg.sys_dst.assign("YCCJEPTDNMFWIMQNBRWDOKRDFXVDAASPFCJLYUSBZYIGQPPNELIVJATZPVBPEWLDPGOYDIAZVSCNDITARWELVDMRMFWIRNSBSGEOZROVCDAPBGCUIXASJGPXHNKHYQKBUEYZXUHORMLXVUCBKFWHMNNCLUJSLBAOFRZYFLSQZIKOVXHHVKNEGGYQUJCFXOMWXNOKHHLFMTBZSJWFYO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StateReport msg;
    msg.setTimeStamp(0.39677564669386023);
    msg.setSource(5007U);
    msg.setSourceEntity(49U);
    msg.setDestination(315U);
    msg.setDestinationEntity(162U);
    msg.stime = 939937914U;
    msg.latitude = 0.24548450846466596;
    msg.longitude = 0.6157047121137911;
    msg.altitude = 6971U;
    msg.depth = 1221U;
    msg.heading = 7972U;
    msg.speed = 13533;
    msg.fuel = -83;
    msg.exec_state = 37;
    msg.plan_checksum = 12425U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StateReport #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StateReport msg;
    msg.setTimeStamp(0.3173232909741025);
    msg.setSource(45868U);
    msg.setSourceEntity(24U);
    msg.setDestination(50396U);
    msg.setDestinationEntity(15U);
    msg.stime = 3073120996U;
    msg.latitude = 0.0938775160385612;
    msg.longitude = 0.2747996236022915;
    msg.altitude = 30239U;
    msg.depth = 2689U;
    msg.heading = 58261U;
    msg.speed = -9426;
    msg.fuel = 103;
    msg.exec_state = 60;
    msg.plan_checksum = 36420U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StateReport #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StateReport msg;
    msg.setTimeStamp(0.27038860280201293);
    msg.setSource(36665U);
    msg.setSourceEntity(226U);
    msg.setDestination(43790U);
    msg.setDestinationEntity(223U);
    msg.stime = 4180383990U;
    msg.latitude = 0.6481278977381871;
    msg.longitude = 0.4290492634369659;
    msg.altitude = 30877U;
    msg.depth = 50987U;
    msg.heading = 2432U;
    msg.speed = -24754;
    msg.fuel = -74;
    msg.exec_state = -59;
    msg.plan_checksum = 50003U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StateReport #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionRequest msg;
    msg.setTimeStamp(0.46239993484653064);
    msg.setSource(48977U);
    msg.setSourceEntity(83U);
    msg.setDestination(49076U);
    msg.setDestinationEntity(146U);
    msg.req_id = 61276U;
    msg.comm_mean = 107U;
    msg.destination.assign("GYWGTLUDZWBUZBKVWXVELTPCPOKAVMYUAXAUQVPRFKZRPBGHDWLNMHZOJBIXQXIQOEFMGVDAADZQGMMYOJRQDRLQIUZCJKXIIWNXHEFZKIZJTCHARXFSUFOIHCZWKDYFIZRYODSCJCAMNPKMYRJSMBRYYLPNVUAQXUFXFNIKLLXITTTSOTA");
    msg.deadline = 0.5714642951956169;
    msg.range = 0.6749366099855378;
    msg.data_mode = 168U;
    IMC::Abort tmp_msg_0;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("SXFEFUVPFRTTASNBBLCTCNHJXZFWNLKYMJPRGVUSKBMAXBOQWITCPBSJGMGI");
    const signed char tmp_msg_1[] = {19, -74, -49, -74, 112, -114, 31, 98, -120, -52, -99, -128, -101, -104, -14};
    msg.raw_data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionRequest msg;
    msg.setTimeStamp(0.9079608907632499);
    msg.setSource(9114U);
    msg.setSourceEntity(191U);
    msg.setDestination(40553U);
    msg.setDestinationEntity(238U);
    msg.req_id = 65134U;
    msg.comm_mean = 224U;
    msg.destination.assign("FOYWINIUUJUTOUUVNRBOVEGXIMJCORWVKXZVNFBITNDEXJZUULHWFIRRQJQFNCGEEQOSYKWGCGXCUKLJMWAATSHTGRQZPKSKNLHADOOHEKDRPHLDMRZ");
    msg.deadline = 0.7311196948380775;
    msg.range = 0.8634039877183588;
    msg.data_mode = 228U;
    IMC::AisInfo tmp_msg_0;
    tmp_msg_0.msg_type.assign("EKOZWPCIZMEAONVYHPBLTSYT");
    tmp_msg_0.sensor_class.assign("NJIFLEXCWIILGXEOWVFJKGOMFXLCLQQOYIQOYZDRPSIKUNCJRKXUXTFBMUGONHALWMSZPZRRTVTFJJSPNEYDNMGIVQDOATFDZNMJHWZHEHELDKWWHEXJSYRNHBNCLCNJTYGVTLHAHBZWXAAGEXAVKTPCRFTCZDPKYYEGMOBGEWDITVQRSSXIQIPAIDBQOQEBUAKQCWAJFBUPYNMVLDVFOPMUKMZYQAOPVMFWBVZSRSCUZUXTJ");
    tmp_msg_0.mmsi.assign("PDQPQPXDLTDIMIHJWUUSRZTKXDVMCOFHFRLQNFUWBDFZXSPGGOCLIJCKTKDSIRZDABTYREWMJWZZGONMHWEWELXQNCJREBOFAGTTQIPYIAHYMMLHHOJLZKEVVKUGPNANBSKGVEJMIQKGIWHUTXKQVWYOANSSQJDXYAWYVGEAFCAENTHRBVFLMVABDCRCRUJIUVKCOEYRPLBPSZCFXXNTYJDLMXGP");
    tmp_msg_0.callsign.assign("ABYNTFBTNDIYJAJWSVCXWQPTEDEJXZPHBYMEZAVWXBMNHELQNPRMSWEQPJUMCMZLZUPJETVLCNHWNLIHJLKDGBLOIRYEOMFLMZKUAAJUOVPXFAGLJXGQXCPRONEFWVMYFFOHPZZBSUVBMIYJRW");
    tmp_msg_0.name.assign("EQWYDXICNRGUBOSNCFYSIGVCXTPVTFKUWLYGTEJUVNRQWOPOEHVHLEEFIDJQXOZUACKMRQBEUXYSZHKNBKPPZZZWOSNPDNVIWBOPDNGGNJACVARAUYFULJDHBXWKGWSLKFQAYZUTFNMTHZLNAVLAMZITCISWHSOBCPITQMSUEWBLLPKVHBZOVEAJYTXJBFRIKMVXJQICFEDXOWBQSZLYEMDSPLRFCGKHMMGUHRJQRAJARDDKOFXTIMP");
    tmp_msg_0.nav_status = 194U;
    tmp_msg_0.type_and_cargo = 21U;
    tmp_msg_0.lat = 0.3909758256107274;
    tmp_msg_0.lon = 0.810966789056107;
    tmp_msg_0.course = 0.8927000356872684;
    tmp_msg_0.speed = 0.7172045124603205;
    tmp_msg_0.dist = 0.9941947964576948;
    tmp_msg_0.a = 0.14675834133326493;
    tmp_msg_0.b = 0.7110066816167714;
    tmp_msg_0.c = 0.1231889350981007;
    tmp_msg_0.d = 0.5157858145372398;
    tmp_msg_0.draught = 0.2568825217954025;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("GMSCREWLQVPMMPGMLZTWKBZVIOUSQIASPDQYYLXFYICEFUYQQSCLSTDDPWJHRMOSCBVTGWKWDTOCQBBOTKVYLDATZZRAWANQERXMFKTROMBCJMNTUHIUYUKLENFEVPXUENJUHPYXCIIOHAIWUABQSH");
    const signed char tmp_msg_1[] = {-127, -90, -124, 74, 87, -114, -91, -75, 125, 54, -81, -73, -120, 81, 65, -121, -17, -11, 120, 114, -39, -87, 40, -71, 104, 57, 0, 89, -64, 88, 15, 50, 66, 70, -26, -84, -91, -26, -43, -17, 89, 12, 4, -24, -59, -40, 95, -112, -123, 117, -36, 58, 43, -26, 16, -78, 109, -20, -99, -1, -53, 0, 7, 16, -21, -15, 91, 12, 34, 68, 17, -128, 33, -100, -37, 120, -71, -19, -73, -30, -43, 21, -52, 58, 106, -75, 115, 19, 33, 114, -13, 24, -82, 10, -117, -19, -25, 121, -126, -111, -80, 51, -52, 5, 8, 83, -101, 23, -47, 118, 11, 124, 43, 83, -21, -118, 39, -29, 41, -105, 24, -62, 110, -119, 120, 35, 88, 16, 53, 76, -53, 118, -117, -14, 97, 109, -35, 118, -93, -28, -3, 49, -69, -97, -77, -18, -91, -33, -26, 52, -47, -70, 53, 107, -97, -116, -125};
    msg.raw_data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionRequest msg;
    msg.setTimeStamp(0.3567365499396111);
    msg.setSource(54495U);
    msg.setSourceEntity(184U);
    msg.setDestination(15278U);
    msg.setDestinationEntity(120U);
    msg.req_id = 14037U;
    msg.comm_mean = 72U;
    msg.destination.assign("RQXCAICHQNDBTHNWISFCLJLKPNSLETYFJEZIPDQPSQNOMUUMHFVVOZNDKMYDRYYLTDBKOEOYQHHGGHMVCXXGAVLPXDZILKVUFRBYWFXSKMSRFHMJKRSKZRBFVGENBFFEBOCBOYMEPCDGGHLEIACZZZEWDNPTBIKWDZTIWQCOPWLNLEHOBAAJPQMIPRUXWVCGURJRZOVQYVSJ");
    msg.deadline = 0.6382572785469399;
    msg.range = 0.40879313637403025;
    msg.data_mode = 220U;
    IMC::UamRxRange tmp_msg_0;
    tmp_msg_0.seq = 13909U;
    tmp_msg_0.sys.assign("VDEMTXLCHGGYJKMNHUAJTVRCKXEMXIQIAXEOJQGWLOLPDQYUERWNYFJIPEORABATAOYUHDCMNLEKMFRMAYHTEOVBMIHIOTUZWFLQIBQDSOVNSTGMMJQBCRZDPBFUINCLNSYJUTYNHKRBBPALKUCKKWZZXPZYCXMGSKVOJUUOWNTWIVDVDKZRJEQUSIHTGESGOE");
    tmp_msg_0.value = 0.7371088326376218;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("UYJKCVIBJWXJFIUYTDXRKYCHUAXSFPHMRLNLJUEAFRTWVGULVMOEQZETLPBKUJHHFCVVPISOBSBPHDZWKYXXTDQUZDWNBCPVYJZCDGIYYBYQEMQGPPZMOLSQOVDZGORWYFTFYPDIWOAJRZXMWMIAGQCEEORQKWCHSJGPSLAMMSZFEOEARAVGDZTCGF");
    const signed char tmp_msg_1[] = {5, 43, -13, 30, 31, -72, -49, 106, -8, 47, 69, 71, -69, -86, 109, -107, -24, -33, -29, -51, 4, 107, 55, -98, -34, 38, 17, 76, -80, -58, 52, -60, 9, -81, -61, 71, 2, -104, -36, 25, -105, -68, 29, 66, -46, -27, -45, 38, 13, 110, -116, 87, 5, -49, 81, 93, -54, 62, -79, 94, 91, 57, -117, 55, -9, -84, -83, 122, 71, 116, 116, -121, 60, -108, 87, -53, 39, -126, 107, 91, -128, 5, -6, 2, 76, -60, -2, 78, -85, -43, -124, -125, -95, -58, 118, -28, 58, -10, -79, -53, 73, -80, 52, 10, -2, 96, -86, 110, -84, -124, 112, -34, 92, 125, 126, -49, -77, 5, -22, 78, -122, -97, -47, -39, 40, 13, 7, 0, -94, -107, -30, 18, 66, 4, 54, -77, -121, -38, 24, 100, -78, -34, 44, 52, 42, 41, -78, -94, 74, -13, -42, -81, 105, 32, 86, -79, 66, 105, 60, 17, 52, -101, -55, 38, -47, 53, -121, -32, -20, 47, -123, 35, -42, 6, 71};
    msg.raw_data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionStatus msg;
    msg.setTimeStamp(0.11862179340698853);
    msg.setSource(6730U);
    msg.setSourceEntity(30U);
    msg.setDestination(57895U);
    msg.setDestinationEntity(194U);
    msg.req_id = 541U;
    msg.status = 67U;
    msg.range = 0.9418682492690063;
    msg.info.assign("TSELJOBSRLTXCMYKRQCTDHIWHGMW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionStatus msg;
    msg.setTimeStamp(0.4823309971998203);
    msg.setSource(8801U);
    msg.setSourceEntity(100U);
    msg.setDestination(9271U);
    msg.setDestinationEntity(157U);
    msg.req_id = 30237U;
    msg.status = 202U;
    msg.range = 0.6367584136933017;
    msg.info.assign("CKIGZQZWLRNYPBGNDTWREGOOLPZMGADUVWFUEWCARYFFKVYMJRTHQKAHFVBGNUCVZSLEIBEDGXOHHSHYHUOPVPMFPCSMWCNSELXXJMQOEDYSJKLNUTOPXOPBTHWEZOMBVURFPKQDZTSLEAYJRAIANXTUWMBMLUIDSISYGGMAXFRIIALKZXRFWTKWGYPHCYJTSRQIUNRGNBOQJDYUZPDJCQJBQDJNJCAZCKQI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionStatus msg;
    msg.setTimeStamp(0.7119928064156555);
    msg.setSource(10140U);
    msg.setSourceEntity(99U);
    msg.setDestination(60802U);
    msg.setDestinationEntity(55U);
    msg.req_id = 23232U;
    msg.status = 9U;
    msg.range = 0.9156794785025089;
    msg.info.assign("FVLRUYTNXVGOPOSKCIYOSJZOJBIGSSFEGHOSZRFKEWVXDKOAPWQCPYXARLZWBLNRHUQCQZBWSSRNQRIMDJFZFQXPNVFJWDLYZQOGLAYSEAHJYMKUIVHTTUQQKFBGRWFUYJBBDGXDMWZCIMGUKTIGCETAMXSJEUNJAPBYRVKEBTLLUQVLIN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRequest msg;
    msg.setTimeStamp(0.22813725468583068);
    msg.setSource(64623U);
    msg.setSourceEntity(55U);
    msg.setDestination(39998U);
    msg.setDestinationEntity(32U);
    msg.req_id = 53154U;
    msg.destination.assign("TVXNYZBATTXTPUZZEDGAZSGSAIGNCBJQWWKJQPKYN");
    msg.timeout = 0.794151490664194;
    msg.sms_text.assign("SWRJFJPECXWVCPQDMLEJQWZBAYFSWLKMKXTFQSOKGUZBJYAQRSCFAUNZOXNXYUNDFBITPAQBZSTTLGOFYXQPDDEYBNUVMOWJWJEMVRXHDXGJIKOUZIRTTTBKUDMGARLIRTIHXPMCKSOIDKNPIRPSYPAOMSHMGHXCLNDSAVLMCBIOWGGVEFHSZQYUCZLHAWQKPEGBKNV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRequest msg;
    msg.setTimeStamp(0.01736214869948771);
    msg.setSource(11802U);
    msg.setSourceEntity(188U);
    msg.setDestination(55922U);
    msg.setDestinationEntity(115U);
    msg.req_id = 51061U;
    msg.destination.assign("AVHQVAYXKYFAMAJXBINJLBVFCENZSZOYCQQKSDRUOJSASUHSDFLZYWKJDFJQWEKMYMXNXOLQEFUEGCRZVYEHPNIDUJPFH");
    msg.timeout = 0.6388623855759813;
    msg.sms_text.assign("OPCUYJFRACYSYHMALDQNXOECDTBNGXQEXCJAQDPMKYADKUFHUMSRZLGYAFZKWVBEDGXSHVBLPGJVHRSGUJZWTNZIBULZGZHJQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRequest msg;
    msg.setTimeStamp(0.7190002533944727);
    msg.setSource(22163U);
    msg.setSourceEntity(214U);
    msg.setDestination(53733U);
    msg.setDestinationEntity(225U);
    msg.req_id = 39607U;
    msg.destination.assign("SVHRYFBLGHROYKJWMKOYUMUKJXUZ");
    msg.timeout = 0.9514285032371189;
    msg.sms_text.assign("JCKKCFNITQYZYQNABMAOEQGRCCDUWKFSTCJUKIGPQEMGBLCHDYHVOINDDRRDTVPAKHMPFGQOUWVOFZLKUH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsStatus msg;
    msg.setTimeStamp(0.2545012668520006);
    msg.setSource(13787U);
    msg.setSourceEntity(110U);
    msg.setDestination(14301U);
    msg.setDestinationEntity(35U);
    msg.req_id = 9938U;
    msg.status = 33U;
    msg.info.assign("UADTHMHVHBPYIPDQUVBIVARDPJWRDVIAUNCOXLBXGNNBMSXJEGKCBDWZQRQCG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsStatus msg;
    msg.setTimeStamp(0.9700004809298522);
    msg.setSource(46803U);
    msg.setSourceEntity(14U);
    msg.setDestination(50482U);
    msg.setDestinationEntity(181U);
    msg.req_id = 48737U;
    msg.status = 83U;
    msg.info.assign("AAOLDSFPIANLLXWIHMIRYXGFHDOPWMIWKXUSNGXEEJTDPJSRELCHKWZRKMOOOIKMRATUXWENGYAUGYZDILYJYQHPZAISMDWPRXFQFCRLBONZZEVCSTYVFOZWWWYZROCNQMDPQKLXRHUGFZYJJDVVHVUAGAZJNVBJRFUUTGGUVQTJPTBPEHIMSBUBTQNWQSAFQKZBXKHTBDBNJS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsStatus msg;
    msg.setTimeStamp(0.3031774159795376);
    msg.setSource(48849U);
    msg.setSourceEntity(171U);
    msg.setDestination(40038U);
    msg.setDestinationEntity(147U);
    msg.req_id = 29193U;
    msg.status = 2U;
    msg.info.assign("FLDZIBKMKTSYZDVWGYYXOBKDTPMGTPWIVWINSRBLJPZXXMOJIOOCEXQZMMCGJNUCPJDNGWZLABIS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VtolState msg;
    msg.setTimeStamp(0.3722281057643666);
    msg.setSource(9181U);
    msg.setSourceEntity(108U);
    msg.setDestination(50567U);
    msg.setDestinationEntity(188U);
    msg.state = 117U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VtolState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VtolState msg;
    msg.setTimeStamp(0.8397206366974667);
    msg.setSource(28411U);
    msg.setSourceEntity(219U);
    msg.setDestination(36322U);
    msg.setDestinationEntity(59U);
    msg.state = 236U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VtolState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VtolState msg;
    msg.setTimeStamp(0.7781263862955358);
    msg.setSource(53102U);
    msg.setSourceEntity(66U);
    msg.setDestination(18189U);
    msg.setDestinationEntity(84U);
    msg.state = 80U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VtolState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ArmingState msg;
    msg.setTimeStamp(0.0043346424679037154);
    msg.setSource(29640U);
    msg.setSourceEntity(226U);
    msg.setDestination(15981U);
    msg.setDestinationEntity(234U);
    msg.state = 244U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ArmingState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ArmingState msg;
    msg.setTimeStamp(0.509499014757319);
    msg.setSource(27830U);
    msg.setSourceEntity(161U);
    msg.setDestination(51205U);
    msg.setDestinationEntity(88U);
    msg.state = 182U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ArmingState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ArmingState msg;
    msg.setTimeStamp(0.8970490472845599);
    msg.setSource(23207U);
    msg.setSourceEntity(26U);
    msg.setDestination(3356U);
    msg.setDestinationEntity(112U);
    msg.state = 250U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ArmingState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPRequest msg;
    msg.setTimeStamp(0.24100091571256455);
    msg.setSource(24657U);
    msg.setSourceEntity(120U);
    msg.setDestination(29602U);
    msg.setDestinationEntity(111U);
    msg.req_id = 3808U;
    msg.destination.assign("OJEIVPFVJVAMMLNGUODXGOGHKWZNDIWTVHRNKNDPRMEUDOFJEMSSBUULGVLVTNAKJYSQYDVAZKRLLBVVALCTEFCXJRAYXBPOGNDAZPHHSIRCOHTOCSNGLPFTYIJYGJKBPAXBZMWDAIEKHMZKIMCKLJTWCOBXPJURPAEDQFEYCDWLMZHFUEQYSQWUDIARTYBEUMCSQZCUFKLFZBRTFBNHUQITPZFGXWYHKOQNQSXQNGIZG");
    msg.timeout = 0.182523628161686;
    IMC::AdmmPath tmp_msg_0;
    tmp_msg_0.mmsi = 45;
    msg.msg_data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPRequest msg;
    msg.setTimeStamp(0.3213719761947915);
    msg.setSource(3749U);
    msg.setSourceEntity(74U);
    msg.setDestination(32247U);
    msg.setDestinationEntity(141U);
    msg.req_id = 8933U;
    msg.destination.assign("VGTVMKDZSGULMPCTDONYBIMWLBFZWTJRJKCVJBYCZAUGVPJXPSFJSFYPARZSVNWECEWZLHKMOEUULAGRVSNCDCDPEHXOKQNYTDAHQTZZAIEECSSOKQPCYMQMFFQIXYOLJHWZUFIJJFTXGRZHWMPRFXABQGMKKNBDNZKIARTQMCRVWAGVLFMOOUINIBLXBDTNBVHLKLWPXSRBIAXXPODHWBEQ");
    msg.timeout = 0.8430277992830895;
    IMC::CommRestriction tmp_msg_0;
    tmp_msg_0.restriction = 152U;
    tmp_msg_0.reason.assign("CCBFOLNJPYJJEHXTFKAYSWRRUSNUEBHZLLBTFCXDQPXUZGPSNXWYJXGQTQWQKNCOVSCBTCPJVIZDKAFXU");
    msg.msg_data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPRequest msg;
    msg.setTimeStamp(0.7691124862459386);
    msg.setSource(6806U);
    msg.setSourceEntity(42U);
    msg.setDestination(15299U);
    msg.setDestinationEntity(254U);
    msg.req_id = 57765U;
    msg.destination.assign("FKOZVSIJIMYPLUXKEGYGTEODOTXHINFVPEIGRWBCQQNHVRQESVMSARCRLMXBRXLXDKBAUEWYOYMOULFTYHDPSFMFYAOLNIHBDKAKPQZZPDJLFAMUEBNCKVIHTXEULOWRRTWTWOYSNHKITVNGGJANXCIZXGOSVLDRCANJMQRBPTZVUQHJPCWLZXRWEXFUDJTSFBHQJQKABKBSZMVUYPPMFEKYUIQFJCZNHCDZPEMGGOGJYUVSWZAGHTC");
    msg.timeout = 0.3512007048800725;
    IMC::Rows tmp_msg_0;
    tmp_msg_0.timeout = 22383U;
    tmp_msg_0.lat = 0.19350862363901777;
    tmp_msg_0.lon = 0.6210995692041886;
    tmp_msg_0.z = 0.3572458835097667;
    tmp_msg_0.z_units = 45U;
    tmp_msg_0.speed = 0.01443238986490214;
    tmp_msg_0.speed_units = 98U;
    tmp_msg_0.bearing = 0.5342636721470833;
    tmp_msg_0.cross_angle = 0.09445389869285226;
    tmp_msg_0.width = 0.7977106263648727;
    tmp_msg_0.length = 0.2596877834858563;
    tmp_msg_0.hstep = 0.0672717806833647;
    tmp_msg_0.coff = 92U;
    tmp_msg_0.alternation = 231U;
    tmp_msg_0.flags = 228U;
    tmp_msg_0.custom.assign("NDQUWXLRGROANAGVFEAYHTTZTHNEWCOKRRZXSQJLLFVZEBSZQQSMCCSHYNIDPINBVEKPGPAPTBKWZPDAULNDWFURXFBELPMJUUCVUKEJFGXBWOOZDRWUQQHFJZIAOHATNIKVNYEAXQFMIWJGCMMUYSBLSRIWGBOCEDJMKSMLTHHWRSPAVIVERDHYWJUPYTTDBZUJLVPMXKIOIXCSQYYGOCXSOAOFHTLKGXBMQVCGGJIZDNZE");
    msg.msg_data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPStatus msg;
    msg.setTimeStamp(0.9554282188051887);
    msg.setSource(42357U);
    msg.setSourceEntity(93U);
    msg.setDestination(12989U);
    msg.setDestinationEntity(41U);
    msg.req_id = 48701U;
    msg.status = 156U;
    msg.info.assign("BMVTAPUGAMBCRVTHCOGKDMYWNRSSBMKPZILXIZSTSOYGQGGLCIEIXRNPCUWFLGUZJJTQPVZRBUJHYUPZAPLHERBLNTVZQVDUBVAMODCJQFKEUKJBDRJTOYKRFAUQRQYIWHLNFFOKAUCMSFQNKRXYEATOKXNMEERFMELPJATGGWXBJCNBHWXBOTXNHXIDFSGCXEYDKKLQCNIVZXVMSOAWZQYFIPZDMSUVHDIOYHEOHDWPTSVYWLWG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPStatus msg;
    msg.setTimeStamp(0.15377102834323708);
    msg.setSource(55182U);
    msg.setSourceEntity(200U);
    msg.setDestination(65478U);
    msg.setDestinationEntity(64U);
    msg.req_id = 43565U;
    msg.status = 73U;
    msg.info.assign("SQNIVPIIQXJPMNFTUSEMHQLHZPKKTFKYCDHQWGCXYZOPFLRQLLWSEUPQAJVWKHUASAROIZVUWEBKTBEOSTWWOPNTGLBJBJYRDGOFQCAZHPTUGERZSTNEVMSYFYQSJAYSXDRIHOBKDFHWAZFRHQAZFDNRLNGJOPJECGZBCTVUQUVTDYMAIEFCAIRKCWVXMXGJJAEMYDWYLPNMEYNTGCXXRXNMHBMKZKLGL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPStatus msg;
    msg.setTimeStamp(0.09156578002753524);
    msg.setSource(37189U);
    msg.setSourceEntity(89U);
    msg.setDestination(55312U);
    msg.setDestinationEntity(209U);
    msg.req_id = 65415U;
    msg.status = 91U;
    msg.info.assign("BUAGHTUFYCEAJOCRXAHUMEOFGBPAXISPSZMXURIXIDFMLVC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AssetReport msg;
    msg.setTimeStamp(0.6812683341388556);
    msg.setSource(29160U);
    msg.setSourceEntity(133U);
    msg.setDestination(62146U);
    msg.setDestinationEntity(219U);
    msg.name.assign("CKOWVZBKIDDMGMWCNVTLQJNHXKRQBEIEMSNMTAESKDKTLWDVXRZEGVXIWNCMCPLKLGZRGSLRDQPRUBQTNFXOUSAFTDHCEPEABFCFJOSAYSUHFSNDWIOBPXXQMGOZVUJPQGLHTLNYYHNGXTYVMYLYMBZPTYNSZPUMQVFLRZJWZHAAFMXRTOOUSHIJRWIHQGKPVDKZOJIWAABJKCXIFALCKNIJEYHVRRUZUEY");
    msg.report_time = 0.035884027468292334;
    msg.medium = 73U;
    msg.lat = 0.4751269794402937;
    msg.lon = 0.4327907578287391;
    msg.depth = 0.5503694715926094;
    msg.alt = 0.32277295287743424;
    msg.sog = 0.11052584800425402;
    msg.cog = 0.3601850493098998;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AssetReport #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AssetReport msg;
    msg.setTimeStamp(0.9238803212435632);
    msg.setSource(19015U);
    msg.setSourceEntity(97U);
    msg.setDestination(55494U);
    msg.setDestinationEntity(107U);
    msg.name.assign("VMALOGZXEFOOUGDNGEAETIMZOJFZAURSWYEBTGDMLCZVIIUSAWOWWNLBFMXKHJXBMXRHZHHNFQKNWHCYSRPFFTBJVCZPFATVNNHDQGQPFVQTVDSEAHUMOAWPKOFGIIRCUUVHAKOIPYJKYBDKVRNMAWGTJTSCMQXCQYYFEYPLEKTBZSZDYCBDCIJBXRZEORPUJBISILVLK");
    msg.report_time = 0.99471009665964;
    msg.medium = 172U;
    msg.lat = 0.6088299296350079;
    msg.lon = 0.3390767500401788;
    msg.depth = 0.7106865092626886;
    msg.alt = 0.914582708954434;
    msg.sog = 0.8514354179201181;
    msg.cog = 0.25027627823387033;
    IMC::GroupStreamVelocity tmp_msg_0;
    tmp_msg_0.x = 0.6257701618460527;
    tmp_msg_0.y = 0.3753459769741794;
    tmp_msg_0.z = 0.852171617181586;
    msg.msgs.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AssetReport #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AssetReport msg;
    msg.setTimeStamp(0.8593031432113737);
    msg.setSource(23062U);
    msg.setSourceEntity(62U);
    msg.setDestination(47950U);
    msg.setDestinationEntity(104U);
    msg.name.assign("RKWXVNKXKNJENAZGTJAPUMCZQGWJJZOGESPXGMLNYRFBSADZUKLMYCAYBNVMAZERIIIDEWZKLFXOTHMQS");
    msg.report_time = 0.18892842284132183;
    msg.medium = 108U;
    msg.lat = 0.09140957597345656;
    msg.lon = 0.07020200537423704;
    msg.depth = 0.22635641769750114;
    msg.alt = 0.9464901252237127;
    msg.sog = 0.9894839332119983;
    msg.cog = 0.47645429207936807;
    IMC::StateReport tmp_msg_0;
    tmp_msg_0.stime = 1443430617U;
    tmp_msg_0.latitude = 0.543454295497514;
    tmp_msg_0.longitude = 0.9924738652342495;
    tmp_msg_0.altitude = 14231U;
    tmp_msg_0.depth = 23351U;
    tmp_msg_0.heading = 28165U;
    tmp_msg_0.speed = 17249;
    tmp_msg_0.fuel = -114;
    tmp_msg_0.exec_state = -1;
    tmp_msg_0.plan_checksum = 49116U;
    msg.msgs.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AssetReport #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Abort msg;
    msg.setTimeStamp(0.6947310157412927);
    msg.setSource(44008U);
    msg.setSourceEntity(238U);
    msg.setDestination(33801U);
    msg.setDestinationEntity(112U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Abort #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Abort msg;
    msg.setTimeStamp(0.8701388251774193);
    msg.setSource(34446U);
    msg.setSourceEntity(91U);
    msg.setDestination(4888U);
    msg.setDestinationEntity(244U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Abort #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Abort msg;
    msg.setTimeStamp(0.8640003478739721);
    msg.setSource(42971U);
    msg.setSourceEntity(92U);
    msg.setDestination(38862U);
    msg.setDestinationEntity(5U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Abort #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanSpecification msg;
    msg.setTimeStamp(0.18179287184350257);
    msg.setSource(58654U);
    msg.setSourceEntity(198U);
    msg.setDestination(31514U);
    msg.setDestinationEntity(240U);
    msg.plan_id.assign("FHAYNMFJOCJKNTUXKZTFIJZZRQZMVOCSRQPLJEIVRTYKRBHUXGCWDCOTWFSQXPWXODICIONMEQYGHHLMLBVGAWUBPZODIJLNNTEQMQLGLZJZFNAJKFDUENOPBKXQC");
    msg.description.assign("FXIBURIGKTVFBSTESVYWTZNPWJXGSLAXVCEJTSSFGMAKMYPDXMFPRWQDMWKOTKOYPQIXVQECFDPCEPKHTMEQM");
    msg.vnamespace.assign("TDWOAVESIXIDUQLKFFLUFIAVSEWMOQHQSINBYLPEESTCJXXZGAZBUTMEOPUBOUJMRCNKMHSNECLRHBYACURYQPLLXKGMTUVFXNSQWCLJCNRMINEJKPGUALNVMTVDNGYDHMWWFUOGAIOSJQXPBBOXQDV");
    msg.start_man_id.assign("PYCTBNJRRLIBRTCBJUTFGLIADQWOQLGZJNDIKCNNEZHTDVFMTZQUAVYRVPMO");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("QPSLUWNEJRLNWMYGFOEWBAFFQNTQAVUUKSTLUVAVVGDZRGGYYJOXKZGTTTJALAAWMMFQZPUBNQHJMUSLVNLBYORVPMCHDIUAXCJYOIQKXQNCOKCYCSIVGOKROKGDHEHXYHLQZEWRLZRWEKBTPVEHHAUABBMQTBHXENWSKXMIFKSXCEEMADLGIYMUWWFYRNZPGSXXOVPTPVCRDDDBPNDZJHI");
    IMC::Launch tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 682U;
    tmp_tmp_msg_0_0.lat = 0.17126062732484215;
    tmp_tmp_msg_0_0.lon = 0.08380697724516184;
    tmp_tmp_msg_0_0.z = 0.8646224677332564;
    tmp_tmp_msg_0_0.z_units = 3U;
    tmp_tmp_msg_0_0.speed = 0.9687563772571282;
    tmp_tmp_msg_0_0.speed_units = 231U;
    tmp_tmp_msg_0_0.custom.assign("BSNGUWHPBTAMEJOSEEWHYDLJDYOASJZMQIZOIGCRTPDUH");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::YoYo tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.timeout = 64161U;
    tmp_tmp_msg_0_1.lat = 0.6661836554623729;
    tmp_tmp_msg_0_1.lon = 0.7732257699770495;
    tmp_tmp_msg_0_1.z = 0.3435802297557601;
    tmp_tmp_msg_0_1.z_units = 191U;
    tmp_tmp_msg_0_1.amplitude = 0.38137417075088653;
    tmp_tmp_msg_0_1.pitch = 0.38176350899290523;
    tmp_tmp_msg_0_1.speed = 0.2435686298723475;
    tmp_tmp_msg_0_1.speed_units = 46U;
    tmp_tmp_msg_0_1.custom.assign("KYTCNZMJUUCJLPTOHEHTKPRUQTANJKNEBZXXSXGBIFSOPDBBCBVILDLMSDFJMTCRVQXUYQNPDEUZDOQTMJEEQTYPCITAAXYKSUWYJHRSMXGHFSRZQQYGJEARXUSJMPPZLFFGVWIKHLVAOVEUNFNFFZGQKRRWDTDI");
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("JCXKUDZNSTMBMQVNRMEORWVDLZBRMPXFXEPZJWEWESUFSLAWBVISSKPXPXYXZUVDHNIDLCRMZYOXRUEYQQGLBTLCIAWDEFOEIWKBKTATMPJAHMTJUQSNCVXGVDWNGPHFLFDJAKNIYLCXBYMLXKAWBPNYCTZHHYRFGBBAUUWFGQRSZGJYIKGTVIJYLQVJHDC");
    tmp_msg_1.dest_man.assign("ESWCSJPWMFJPKPJVXATPCYJVTSLTIEFUTQHUYYLBAGKYSBNHICXICNGXALUBMRUKOHQMVXOFMRPSWHBCPZNXTIUFQQHFSNICFFXDIGNSDLKUMZSDZJLINELLEOZVOIGTJVAODDHUJHKJARWQUYDYMQDWCKLWLTVDFXGNZMZAPXLMCZNBGVPUNPKRRRBYPEYOKTQARWEMMRVHUTFSOHICKXYCJ");
    tmp_msg_1.conditions.assign("OWWEIVTINHBWCVZWGSGZEPKAIGBWRXOQHOPTVSSCPRDTUQBELTORJYWMNOBLEWKPOOXZGMFCTMTJUNPGAINMFKEHZVLYDLSQMJEXPXNBRQSOBYXGDPUHHCYHYYKVGKXRAVJUEHXPCVKZQBAUNFRGSAAEQFZHNBPLVCRJDRMVQSSMUDINYYLUSOHACFUB");
    IMC::UsblAnglesExtended tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.target.assign("CGCQWMFYYDZEFMRXRYDHLCPVVHZKOFAXMYGKGWTSHVXHCQBOGTIIUGYUKPNNBPBHYJRULNJOFFBIFZISNSQLUEDHLILJASWHTCNDXGMSAUWUUELJEQLZJAELUVNKWEELWCEPLDZQDIVJVIGEHCRTDPZXRWSOFWSWADAYOVOAXBUCYMZNYQRBPQPDJYBMSUIMTKHZXTTNHJXPANFOVQKKBRZATDPOAVEOCBSMRZTPBGQMOMFTFRNVKKI");
    tmp_tmp_msg_1_0.lbearing = 0.4346410323723293;
    tmp_tmp_msg_1_0.lelevation = 0.2439445345818403;
    tmp_tmp_msg_1_0.bearing = 0.667604038784357;
    tmp_tmp_msg_1_0.elevation = 0.6736696701796864;
    tmp_tmp_msg_1_0.phi = 0.11745212007179628;
    tmp_tmp_msg_1_0.theta = 0.9863324570675417;
    tmp_tmp_msg_1_0.psi = 0.7259724162926458;
    tmp_tmp_msg_1_0.accuracy = 0.8414516080318432;
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);
    IMC::ExternalNavData tmp_msg_2;
    IMC::EstimatedState tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.lat = 0.08423652485885347;
    tmp_tmp_msg_2_0.lon = 0.4074804264931773;
    tmp_tmp_msg_2_0.height = 0.7246515470785944;
    tmp_tmp_msg_2_0.x = 0.1280386073731743;
    tmp_tmp_msg_2_0.y = 0.7050796587816764;
    tmp_tmp_msg_2_0.z = 0.018615381410834964;
    tmp_tmp_msg_2_0.phi = 0.3927590349699478;
    tmp_tmp_msg_2_0.theta = 0.2210327580306921;
    tmp_tmp_msg_2_0.psi = 0.9552217432127937;
    tmp_tmp_msg_2_0.u = 0.5776121422447079;
    tmp_tmp_msg_2_0.v = 0.36149557134614885;
    tmp_tmp_msg_2_0.w = 0.1696072359839107;
    tmp_tmp_msg_2_0.vx = 0.38240722147954964;
    tmp_tmp_msg_2_0.vy = 0.5624257732265981;
    tmp_tmp_msg_2_0.vz = 0.6507106844450499;
    tmp_tmp_msg_2_0.p = 0.3589126853940042;
    tmp_tmp_msg_2_0.q = 0.6468815873162028;
    tmp_tmp_msg_2_0.r = 0.1758581458001247;
    tmp_tmp_msg_2_0.depth = 0.925238667039089;
    tmp_tmp_msg_2_0.alt = 0.35164855882044144;
    tmp_msg_2.state.set(tmp_tmp_msg_2_0);
    tmp_msg_2.type = 122U;
    msg.start_actions.push_back(tmp_msg_2);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanSpecification #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanSpecification msg;
    msg.setTimeStamp(0.8438270308899015);
    msg.setSource(13978U);
    msg.setSourceEntity(73U);
    msg.setDestination(65116U);
    msg.setDestinationEntity(62U);
    msg.plan_id.assign("NJSPLEAKSNDBVTQMWIGSQJALEDYHZRQWNKSOTBWSARCGMKVAILRXADLCUOXIAKKFJWQLMPWHYTBAUQQTCUMYXZCANIGHNCBOBQYXDWXFIFEPEPSXEKACUTIHXSBTKCRPVGDVGEUDEVCTFFPVIPNMELZYRTPKXOYDSLZWOZMJDRJFTQIRLFHNBHO");
    msg.description.assign("FPZXKPSPUPNUECEWPHYSTGGJBEOYGHWVKTBCVYIMPWGGMIKWIRYBCHEJDALILQIBGVXOMQGXFVLUQYBNKHHIFTAHKFNRJJNGPLUCXYGEOLEHZVOBDSFAABJSRALTCUDRZDOAPQNOTTLOTABINYAYQXKRNHGSZNTYSRPXQJICWCJJKDUTKXWFNZCOXKRZOUXQKEQYFBCD");
    msg.vnamespace.assign("QKUTYJAWCGPVSEGNWYQPXXFIIWANDNAQOSXGHHLWDTECZMSMEDVBKLIZUMOAKOXCEVTSNBLVFCBEQJQAGHBFVEKJVREFYVAIGKHNJBBGONZAOIMKJIDYXLPQWQOCWZUTEDKRYNJCOWIBRGOCLIWHJQCMTZGRVXMNRXRUBULJRRBFDHVXDZLHUPSSXUVTOFZDEKYZIUPPFASZIMYRZMRFDKGL");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("ROQNCSLKZJNGLDQHYFMURZTZICOVHNJZSCFOLDCAMIHALSGSLTSTDEHZABSMJHPQRSTKF");
    tmp_msg_0.value.assign("FRHJQJUKMDXLQFYSVHBNTDLVE");
    tmp_msg_0.type = 127U;
    tmp_msg_0.access = 202U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("GAWPHSAMVFLBKNJVBYXCYTBWLPTCRJYGJ");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("SLHVTLTSKTNFJZMUSLTKETLCCZEBKDZYUWWKCNLNXUXNAJHXMWWUBJJIFPOTVVAFDPGNDOAHIMWGGCFUGWICQNEEXKCKOAJLYDROWFUMGIAMRJOI");
    tmp_msg_1.dest_man.assign("XQXKZUYPRLDBFBFGZUHCXWFMVNPHUCSRGBYXOMRNFMJEPQDTUTEJWWJWQVHGCEFEEZIGMZCTYCNDUXMPIVHSSYVASOMJAVZGKCEWN");
    tmp_msg_1.conditions.assign("ZYTMXLCRDDDRJSQCWRONFKRMGQNXZXCYHJVOGTHVIMBTUMFLNPUCWBKXPDGULFFBTWNSLTPPAHZKCAIAYKDDBUJLMPUIJSYNMSTXWDXVILWKNJAPYLBEEORQXEAWFGTUWNNRBCEOFHOQHWKJJAUUZZ");
    IMC::FormationControlParams tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.action = 9U;
    tmp_tmp_msg_1_0.lon_gain = 0.47657534288215786;
    tmp_tmp_msg_1_0.lat_gain = 0.6862374869456996;
    tmp_tmp_msg_1_0.bond_thick = 0.24604499715830486;
    tmp_tmp_msg_1_0.lead_gain = 0.5908239997005761;
    tmp_tmp_msg_1_0.deconfl_gain = 0.65756569252275;
    tmp_tmp_msg_1_0.accel_switch_gain = 0.6244199212203664;
    tmp_tmp_msg_1_0.safe_dist = 0.7471275952736453;
    tmp_tmp_msg_1_0.deconflict_offset = 0.8759144590677423;
    tmp_tmp_msg_1_0.accel_safe_margin = 0.6425814061904346;
    tmp_tmp_msg_1_0.accel_lim_x = 0.6448612759705329;
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);
    IMC::GpioStateGet tmp_msg_2;
    tmp_msg_2.name.assign("WCGJJOAPUPNKRYPNMJBDOFFFNPFKQIYYBTMFR");
    msg.start_actions.push_back(tmp_msg_2);
    IMC::PathControlState tmp_msg_3;
    tmp_msg_3.path_ref = 855280400U;
    tmp_msg_3.start_lat = 0.8458417055756259;
    tmp_msg_3.start_lon = 0.440956293781093;
    tmp_msg_3.start_z = 0.12051509371977365;
    tmp_msg_3.start_z_units = 146U;
    tmp_msg_3.end_lat = 0.4758884701201037;
    tmp_msg_3.end_lon = 0.9342929161436799;
    tmp_msg_3.end_z = 0.664397811071784;
    tmp_msg_3.end_z_units = 164U;
    tmp_msg_3.lradius = 0.8965642421175335;
    tmp_msg_3.flags = 12U;
    tmp_msg_3.x = 0.8093843609232418;
    tmp_msg_3.y = 0.7311573078799444;
    tmp_msg_3.z = 0.13373534584849345;
    tmp_msg_3.vx = 0.8394826783335613;
    tmp_msg_3.vy = 0.9206449086051249;
    tmp_msg_3.vz = 0.32963988803457034;
    tmp_msg_3.course_error = 0.7617117866441188;
    tmp_msg_3.eta = 35577U;
    msg.end_actions.push_back(tmp_msg_3);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanSpecification #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanSpecification msg;
    msg.setTimeStamp(0.8560904585274757);
    msg.setSource(18204U);
    msg.setSourceEntity(201U);
    msg.setDestination(40729U);
    msg.setDestinationEntity(151U);
    msg.plan_id.assign("FGOOTUDQOLIDWNEQNTOJSAQMGQLKYVXFIBYJUPWCZAVBMWRUOPEMQSMTGNLOGQSANSSXINPQOEZVFJGAIALKRRTHWKLZFJEAXRZJGGVMXHZASEVLYVTZCFJWKECFOHDWSNNMMPJKJBBCAWUIJDSBNCPCYYIUJFKRBGRL");
    msg.description.assign("YJHEWMNNDIMIEFGAPUQTKFLTVVBZUHALLDPWDFRGEKRZVPGXZUYOBGASGWSGWKZZDOAUXDTKVPMOKWNDFBILUUHNZYUXJBKJSWYSWHYQYYANFDBDKFIJXUAOEGMXEJYQNCEMH");
    msg.vnamespace.assign("GFWGUNEABTHJPBBWFBRVNFDCQGNRYMLXTDZRKJUOUPNMIYQWJIVXYPCVOKVTYEUTOKWAPBVLUKOTYCSRRSIQLTIEWIDHVDBAUHFEJAKRJXKXZSZQZBKPVHMTPOROXEUUWKHSRPUTNLNFKGIDLDYSDCAGTHQOLZUMEBDECNJZKFFDLMEAMMJSWIVNQWIMMQ");
    msg.start_man_id.assign("GSSCTXJRFQDAKILPITHLIAZERIWULVDXBTBJGRPDQJUEDPRVQZBFRGKPMWWJEOFEKLFNOFCXPLGCENBODWYAWATXKSBTTOIZJGQDOZTFECGDUEAXHRZLOGYGMYHXQPWPJVKMHRVYVNECLZAZEMXNPFYCCGSJMFISAPYHRRVUNXNHHQPIIBYLXDVYYJZAALUKUBMZKOQJGUCMNVDLSINECOTYHQBQSWWTSSMDVMKOKHCWUUFVT");
    IMC::ManeuverControlState tmp_msg_0;
    tmp_msg_0.state = 237U;
    tmp_msg_0.eta = 40704U;
    tmp_msg_0.info.assign("DULUQKXJNXJEFCWKHKVNZRKYQJBLDGTRCQGUNZVYSEHJCXLMVWAAMQGDMDOAIWUERFSBPQVMGTOJRTHQDBWFIHUZHPSJCMJHZRLXBFPMLKOOEKSXUKOFWPNMEWO");
    msg.end_actions.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanSpecification #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanManeuver msg;
    msg.setTimeStamp(0.8650197495075639);
    msg.setSource(54366U);
    msg.setSourceEntity(227U);
    msg.setDestination(9586U);
    msg.setDestinationEntity(63U);
    msg.maneuver_id.assign("DBUFSLKVSWRSYUZIPHTBAOCDGYMGBRUNKRCRVGOHRUDSZJAHNACNT");
    IMC::Teleoperation tmp_msg_0;
    tmp_msg_0.custom.assign("RPRNKQZBMGACWXHZZGCAUXECUCVM");
    msg.data.set(tmp_msg_0);
    IMC::Pressure tmp_msg_1;
    tmp_msg_1.value = 0.5264946228536306;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::UsblAngles tmp_msg_2;
    tmp_msg_2.target = 2415U;
    tmp_msg_2.bearing = 0.7724677804093941;
    tmp_msg_2.elevation = 0.07393752997961167;
    msg.end_actions.push_back(tmp_msg_2);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanManeuver msg;
    msg.setTimeStamp(0.26420745681685665);
    msg.setSource(30460U);
    msg.setSourceEntity(55U);
    msg.setDestination(26444U);
    msg.setDestinationEntity(61U);
    msg.maneuver_id.assign("MVBEQQZWNUEUMYWHOANABJXKSQ");
    IMC::Alignment tmp_msg_0;
    tmp_msg_0.timeout = 32167U;
    tmp_msg_0.lat = 0.0945412976722293;
    tmp_msg_0.lon = 0.3249900054961974;
    tmp_msg_0.speed = 0.2147132918662461;
    tmp_msg_0.speed_units = 92U;
    tmp_msg_0.custom.assign("JSADECZBMGFPUUXBHHZGQXPTOEBYKWIQPLLKAZIDUSJROGGGNVMLTDOVMNKLPTGSMTHRRFAKFWCXFYJMOTMREAXFBNKTOYXTYYQCWGLVFGORBSIWEQOCOXI");
    msg.data.set(tmp_msg_0);
    IMC::Depth tmp_msg_1;
    tmp_msg_1.value = 0.8232266802826163;
    msg.end_actions.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanManeuver msg;
    msg.setTimeStamp(0.6510816707491878);
    msg.setSource(40480U);
    msg.setSourceEntity(66U);
    msg.setDestination(24964U);
    msg.setDestinationEntity(85U);
    msg.maneuver_id.assign("WXHEPHAFTMJTIQKENVHJNYKPMZICDZIJDSFLSFTFCBXMUVBXEIYUDYCRFWOYUCWMJNBFMJLELRWUUHPWTLEOIYGYSNDIRUAJIECZQWLXGRBGFSLTKCETGXWTCRZP");
    IMC::Loiter tmp_msg_0;
    tmp_msg_0.timeout = 22199U;
    tmp_msg_0.lat = 0.710782441482999;
    tmp_msg_0.lon = 0.8317381542011406;
    tmp_msg_0.z = 0.36495343492426413;
    tmp_msg_0.z_units = 73U;
    tmp_msg_0.duration = 27232U;
    tmp_msg_0.speed = 0.486281054393612;
    tmp_msg_0.speed_units = 161U;
    tmp_msg_0.type = 46U;
    tmp_msg_0.radius = 0.9434995292183186;
    tmp_msg_0.length = 0.10992795627127183;
    tmp_msg_0.bearing = 0.617460034332366;
    tmp_msg_0.direction = 136U;
    tmp_msg_0.custom.assign("JFUGLBDRKFAEFPXOOACNGYHVWJEJHCLMCTJQNSCTMIVNBFHGNEHDDGPXUWLBUEOFXJQCZFDETYRAXTRDZIVTWSTMSKSYDNGCWVUOJWKYGBTUKNXDIWVILRBBBGAKUYAPYGAEZPRGURFHKSZAWTU");
    msg.data.set(tmp_msg_0);
    IMC::GpsFix tmp_msg_1;
    tmp_msg_1.validity = 58840U;
    tmp_msg_1.type = 109U;
    tmp_msg_1.utc_year = 10216U;
    tmp_msg_1.utc_month = 189U;
    tmp_msg_1.utc_day = 44U;
    tmp_msg_1.utc_time = 0.021105578719145313;
    tmp_msg_1.lat = 0.8416925091848455;
    tmp_msg_1.lon = 0.2551161918822834;
    tmp_msg_1.height = 0.7847690261933892;
    tmp_msg_1.satellites = 45U;
    tmp_msg_1.cog = 0.4638915695766328;
    tmp_msg_1.sog = 0.12339361605073373;
    tmp_msg_1.hdop = 0.5532109871542018;
    tmp_msg_1.vdop = 0.7595433852876378;
    tmp_msg_1.hacc = 0.10278087401941516;
    tmp_msg_1.vacc = 0.01372391329203837;
    msg.end_actions.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanTransition msg;
    msg.setTimeStamp(0.5975242542351393);
    msg.setSource(23596U);
    msg.setSourceEntity(43U);
    msg.setDestination(36403U);
    msg.setDestinationEntity(72U);
    msg.source_man.assign("STUVAISUYAQPTP");
    msg.dest_man.assign("TMHDFTYZXJNHHDYJCXKVZHUTJXAOPGTWEDCEDLOHIWKAVHVZOFSTKFAHDZYTFIZSNZBVPOWEDOF");
    msg.conditions.assign("HBLEJSVHZTGBNXRKVYCNGIIZSUOHDLFOMDVTLRXKHDVIRXWBAEPJMPGUCXEFVHVCNMRHJWMUOEBAQDULKCZCINVPFEHROGQMMJESGXPAWXPJPWOGCVJYMQURW");
    IMC::AnnounceService tmp_msg_0;
    tmp_msg_0.service.assign("SEANQNQIPSSNMHPRBMJUGDBHEKDSJAHOCPIWWHFXMVUNOWIFOBTGDRCBBWUYGBNESWGLUWZJKRXTLVYOAVEJYZRJIHRZFNGCLQVIVTXKPEGMNKIUFRUTMCXPBOHTPASKYEFYAJJQFDXDF");
    tmp_msg_0.service_type = 148U;
    msg.actions.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanTransition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanTransition msg;
    msg.setTimeStamp(0.21972570348434017);
    msg.setSource(37983U);
    msg.setSourceEntity(183U);
    msg.setDestination(60705U);
    msg.setDestinationEntity(91U);
    msg.source_man.assign("PBRQQKSIWAJNUWZFPTVQTDWZYAFGYEMQLJMGYRMLSGFONIQXVJOQJGJOBKRSAFFXZPPDKFHVARLRHUIYNFCIETHJXWPRLOEBZYHALPLAYNLYUMBBUVWHVZIO");
    msg.dest_man.assign("ZWLPGMZLFRRETHKIGTUVRRUBTSYBYSAZKISFSLGEPRCNHBYLWCHNRTFGYYGDWMNFHPRQWPDOZCHJHQQOUWTIVTIHLQEMJXYDRMAWKESJUOGPGKRNJOAAMFWGVJAYUPBDKMJTAKCNBZXLHNBASJCXYFLFGXOIDAVOCWUXVEWDQBVESCCXIDPMFSPNUCMSDMRVPKNCZFNIVXDTEZBOQWOZXZXBLQIKKUTQVHFKXDHI");
    msg.conditions.assign("IYPHZBHDPLGVJZMXPWNTSDERHTTECKXGUWLBGXTACVWCJHJGAOWYUJMODZSHMJFJYRRXZGXQCCKMUSQWNVEUNBHQWSXCCSNLMMIUAQGLBKGBQDHQUYMANKZRTPGYZQGOOXFSIIYBOCUOSOPFDLKVWUULNKKZEVXZKMYSXOEFOPFTSTNYHHTEIRAIIFRFAWMTQOJBLRJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanTransition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanTransition msg;
    msg.setTimeStamp(0.6057626114900818);
    msg.setSource(25471U);
    msg.setSourceEntity(123U);
    msg.setDestination(33805U);
    msg.setDestinationEntity(241U);
    msg.source_man.assign("GJNUWVZTSRHUFDFGQMLWELCQFXXJGMBHANUGPCAZOLVRRRJKZNSMZLVPGTXCQIYWUESQFKDGYLHFAMTMCHWVBLPKYFOQHKGURXHSYQYIZTPARSZTNDJOQDUCWJSVKDAWQUOXTKTJSUPEIDMRSWYUKVMFBHXXRHGIHBNCSJKDXZVNEAIZCBKQLTIADFIYWNLZFGREINMXMPBDCAXBEABDPMPJNEBKRVTBCGYOP");
    msg.dest_man.assign("RDOMIXLVNDSUGVWVAMIOIUTSQSLBXLMPNBDTAZEJFYZZONKFGYRJFCUTNRDZQUCHKTBKGCRYHLRBWBUNATYUBVDWTKEEXJHPDWYACAYZGIKRDJHLPKFUJOLZSPUCOTAGCJUZNLTGBPVMWZXVXQQVHISTLMWSYKQSMNGMQQLYCMEOQWJHFXRUIISEZBPAIJVDEIWNTPGXNLSPWBQZRVC");
    msg.conditions.assign("OXWIEVLEHHUILCDRXPBUZZXGBRMFJLYXXHOYWEVQKJYZKHMZIRTISGEFWT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanTransition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControl msg;
    msg.setTimeStamp(0.8064019019046397);
    msg.setSource(43532U);
    msg.setSourceEntity(69U);
    msg.setDestination(2554U);
    msg.setDestinationEntity(127U);
    msg.command = 187U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("QFHOOJMQQSXBGKCWVZVAMOTKHAU");
    tmp_msg_0.description.assign("XNVHOXIPCGQYXLGYWOUUBUTLUWCKMRSXKRGMBJEIMPXLOSBINYLYTHJSQWVDTFRBBOIKFGRTQLQCQTYVDROTJDRFHEOIWUHVQYIQZKFIVPBPVCFYZKDIEVUXOPAFHYGCKPNXWFAACVZGSJJBRELCDRVRZPFSBAZ");
    tmp_msg_0.vnamespace.assign("DHQJUTEDIOHRMMLZGGFGYASIXFGJJXANSGVOPHZYYTNNPCNRNUWZFBEOPZXOCPOCSHROLQLJSMWYKANJFAWTBFYARVPTBSYVDUXUPNPRIKLQLEYZXRSNVCKKDIWDMKGNCQRLPJKLKQRMLULIJRCGUATUEVEJJSIUMAZARGHBGBPWXDMZXFWQIXWFFXZDSHNSHBQDJMTXVWCWHAZVBZEEMSUOQFEDKHAF");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("DTAWUKGHCOAVQDUMIRBETJLVPMCYSJHLDSQXQJJEUQDWLWOQINJRKDUOTCHBEMVAMWPBGASUQFSDYZTTRVIZPIYIKZBCXBRWXKQDEVULBMWGGOYNIBZPIHHXNFSVYYSVMWENDJXQRWTHMSBKGYCOLMUSCNZOGIRPNHFCEZVFVKAZDMATESTUHNUV");
    tmp_tmp_msg_0_0.value.assign("OZGTECHAYYRIMTSOWHIPQAJGZFWPTKDDUERRQRNONUEVOABZYQHTMIJVVSVJFUDSGFOVRWMZKBPRCARBVQMKWGLJJKNMGTIXLVMESWCCAQYOAMPILPOSUWRFNCDQYEXKBZXUJEFDSIELSOATJOHFOJTXHDPCEGEQKYYNIIHPZQNHLTLBBZWLLZBVNDBUMWDKIUXCAAGLUXHYFYFURCKGNRJXMNVNEMWICZVDBKFQTGZ");
    tmp_tmp_msg_0_0.type = 95U;
    tmp_tmp_msg_0_0.access = 187U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("LIZYVCSZEMUIDIPWOVTYGUMAHRWZBN");
    msg.plan.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControl msg;
    msg.setTimeStamp(0.9081576917463067);
    msg.setSource(42320U);
    msg.setSourceEntity(165U);
    msg.setDestination(26431U);
    msg.setDestinationEntity(28U);
    msg.command = 76U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("OWMKLKETJPWVHVPBICQHYAXNVSJYAOIOVNWBSGQCUKBEWXSUSCMKDITXNEUXBAUBUBRZQJFFSVRZW");
    tmp_msg_0.description.assign("XKSDWAKNUDATLSBMYLCHDQSNIUZWMJKRZFSVSHDUFTYCQCWAGLAVMQOSTKUBTUSYXCHYMPTHRPUOQJHGPFEOIQYZIUENOGPJIVOMZZXBJVPQCKZBVEEVQTTDLIQFNMDQGFNIKWDO");
    tmp_msg_0.vnamespace.assign("ZEBRORATDGKPYGMBNCJYSMOEEEZEDDISNBAIHJXX");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("PRFTFNHWSSGRPOVREVMVTYDPTRLCZOCHRXJHOKFTCFBGEASOCTZFIIAKIZPMBXCAHSFDIABMVNXJLDGGNKMKUNNIHQWJUXLPPXRKRAZIHYIPDOVCMVQGDYSOYGAKBFHJCEOIMDJLMUQKWTSEDFBJJRQMLFWZXWGSVECGPSAQELHQBXZQXT");
    tmp_tmp_msg_0_0.value.assign("TTWQYTKKCXNIEYGVXIVHYZRAIYVFMCTDBWZDQZEOYQKFUJJTCWFITGDPNCVCBKHWJGCDHPSLFGQCENUUKSHEGZQZISLOGUYXMITASHJVLYGLYVZXUJRAIALMXQQBBXRBUOROLVBLNSPCUSOOJAPGHAZHRJBPWPWKAWWTNXNRQFXEZFURNPKLI");
    tmp_tmp_msg_0_0.type = 127U;
    tmp_tmp_msg_0_0.access = 208U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("VMXXBQQAVVPJENTWBISRAONSYAOPDVHDOWWIVBJ");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("IGBVLFBJDPDTJXUNDNIGHBAFEKQKIAJKQTPBSGNSXKTCTMHZLZKAMOERYDHLPLCKMVWRSBIJYYINOQBYSAXFZVCXRMYSARUOHYCRWQHUPZCNLPVIMQUDFEKZLJFLBCGIJXQPTRDWJTDZWPHKBOUMUIXEMYUC");
    IMC::YoYo tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeout = 2374U;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.06209083270612137;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.7332604879227427;
    tmp_tmp_tmp_msg_0_1_0.z = 0.54424673231843;
    tmp_tmp_tmp_msg_0_1_0.z_units = 159U;
    tmp_tmp_tmp_msg_0_1_0.amplitude = 0.21944247857588672;
    tmp_tmp_tmp_msg_0_1_0.pitch = 0.5577089778863406;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.10340340222031674;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 116U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("SHADFXOMCBMIQVNHICHWPCCVGNTTPUDVMWPYZUWIHVDOXTPNYJLBBCMDEXZJFCWWAFIMUHOBOOBFJEJZPEIBVQQYXQDUKSWWNYE");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::AcousticSystems tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.list.assign("RCRXORIAGZTHQBISUXGPZJCDEBCDJDCVYIXXSAKGRC");
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    msg.plan.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControl msg;
    msg.setTimeStamp(0.7094063741597998);
    msg.setSource(22827U);
    msg.setSourceEntity(152U);
    msg.setDestination(14861U);
    msg.setDestinationEntity(2U);
    msg.command = 202U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("JTMUTWPSODSIEGKXZAKOVSVLHCQMWCRYRKBBZVOPYZRHEVMCTOXJFUVEJVJZPKVCSXEOWXDQMYGBBBFBZCSJNIRYLNUWTWGGZZMMIPZDRXBUIMYWQQTICJTOFCPTLOCPOALNTRJGFSUNIC");
    tmp_msg_0.description.assign("MDNZAHBAWLCKKSIDMGUWLUQOUVAHTDFQFVGPJGFOEUJEQYVHPGKMMUBOQZCGBOMWCSATAAELGPRYLQWZSDHUABSSHDPKZXYPTDLNIVQYEXHLIDQRBPTZHBSJRXHIDNKIKMDTEJEFOVGSJFCYLTFCJRMSSWIASRKMLLWQWVJHOEYYVTKNNTZNKOAIJNPMUCOGYXCHVEBXKZLXOZFBBFTJPMJRCUWEVCNQX");
    tmp_msg_0.vnamespace.assign("GNKRISKHYUOUZFYLMLWUBAXIOAMXARRPCFWKQLNQKBWEGATDYSMWGFSJHHHZVQPFEWNCDABXUFVPXOPDBIJKNYOEILZXOITGIWGGENTQGIJPDCAQSJEJDQXZXTSCNKAJUENTZTBSVSCJPZFCFOCKRQIATNMVWYYYSNRQCVHNHWDHOQLOXSMXZMKHUPYPEHDCGLOMYBCKEFAYPIDPUJUQSVRTHLBXMGVFJZIMURBMWUZORDGEBFKVEJV");
    tmp_msg_0.start_man_id.assign("PKCNTDMWZTJRAELWOTCPQKTYNTLFFDERUYJVSBFAGFAXYVJNVSFGXMWRFFNAEVPTYMGQBXRGHPGSAWKIQUTB");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("JNCUEARMLOLKAIYAEEEYUWLUNTKBAQFUFEZYIXLQIDCHOIAEMCWZXZMMJZWSXVRHWPAWZMIFSODGXBPQCNYIAKAUDEBH");
    IMC::FollowTrajectory tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 58397U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.6064004587634424;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.18831850616401147;
    tmp_tmp_tmp_msg_0_0_0.z = 0.8909592964112802;
    tmp_tmp_tmp_msg_0_0_0.z_units = 17U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.5170347232245774;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 232U;
    IMC::TrajectoryPoint tmp_tmp_tmp_tmp_msg_0_0_0_0;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.x = 0.4111484769066721;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.y = 0.622719983899175;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.z = 0.09634392043145512;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.t = 0.09546197108722054;
    tmp_tmp_tmp_msg_0_0_0.points.push_back(tmp_tmp_tmp_tmp_msg_0_0_0_0);
    tmp_tmp_tmp_msg_0_0_0.custom.assign("DWCTGKBMSXTAJINTRUUHBQABIZEJIXPKQKCPC");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::EstimatedFreq tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.value = 0.5075816497976386;
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("WWEZXKIRHROPPVDSQBBLZFEULRGHXCNUMCOOSASDAVDVDAPTYYKWDKXKJLDLEGHJMGUBPCVVEOGDMLXZPZL");
    tmp_tmp_msg_0_1.dest_man.assign("RCGTUIXUVOZRKIBAPZDJFYICMDWKOFMOUEJVFALEPPOIVNWSUIYDUNTKAGTYHSTQDBGHRYIWQAGMCTXVJLWTLQDGQFCEFJEHCHRRLQKHDGBVZFJZNOKZJHKJERVSPHCVOEYNKSPZEMFRZNGNELTOXKBYXPUXUVXGPQUANOMLWPTCECVXPWQLIYUBITFSBZQMKCYARXBOHDBHLJWWSYWMZRSRGPSIVNXTMIJYSDCBHAQSWAFMAQLDOKLMANUXJZ");
    tmp_tmp_msg_0_1.conditions.assign("HGJUGWBBAGVBJVSBTVWDSPGYAARSEGLFXMAGXTWMULYHIOZ");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    msg.plan.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControlState msg;
    msg.setTimeStamp(0.5645949112080737);
    msg.setSource(32388U);
    msg.setSourceEntity(228U);
    msg.setDestination(53556U);
    msg.setDestinationEntity(113U);
    msg.state = 130U;
    msg.plan_id.assign("EXNXQRQFKDYVOEAVLTSSIXNNNIYOOJWJUJURDYJQVVMCIPBHQHIYMKDHOSGZZOITPNHCQAGIODOUCMROMAHGWYPUGNMUKBERQMTIILVPBWELKAHWLTDZSRBKQAFFHFCRSXWSLSOZKGEPXQYUTPOYKTRIYTLKXYZZPGLUFCEJTENXBZHCGA");
    msg.comm_level = 164U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControlState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControlState msg;
    msg.setTimeStamp(0.6557386444355094);
    msg.setSource(24418U);
    msg.setSourceEntity(225U);
    msg.setDestination(11279U);
    msg.setDestinationEntity(48U);
    msg.state = 214U;
    msg.plan_id.assign("NJNNCXTXDFVSKGLASFBOBRDSWDGVPMDJQYEBBISCK");
    msg.comm_level = 118U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControlState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControlState msg;
    msg.setTimeStamp(0.2004428358987025);
    msg.setSource(61979U);
    msg.setSourceEntity(189U);
    msg.setDestination(32153U);
    msg.setDestinationEntity(236U);
    msg.state = 79U;
    msg.plan_id.assign("VNNRHNSESMVORDMPASZKXUBGVMEJHRQINXQBKRYIOUGLOJZFLYDTQ");
    msg.comm_level = 221U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControlState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDB msg;
    msg.setTimeStamp(0.6956562397842112);
    msg.setSource(2881U);
    msg.setSourceEntity(220U);
    msg.setDestination(56851U);
    msg.setDestinationEntity(226U);
    msg.type = 155U;
    msg.op = 53U;
    msg.request_id = 48176U;
    msg.plan_id.assign("JUBCQKTDFQQAYCTJWPNVDCGSYASXEFKUCCXAEPZJEFAFZUTQNEGBFPTYKGTRBTXSVATVVERTDDMJLXZRONHBDRXUUJIZJIRCGWKRYVRZXPMFBINVWYLKPSGHVGSALPUYDHSPHQTWMCLMYDWUAWZINRJEOOQJWWGUCMRNMDFIQPSSHHCOJVRXZLFQGEQKIHLZDLEBOZONJIKEBDVNIANUMICB");
    IMC::HistoricTelemetry tmp_msg_0;
    tmp_msg_0.altitude = 0.24688524598169648;
    tmp_msg_0.roll = 20829U;
    tmp_msg_0.pitch = 1714U;
    tmp_msg_0.yaw = 54056U;
    tmp_msg_0.speed = -8741;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("IJFLWMHUPDLWLRPQPSELAIFSRRLPRKAGCQFSVDOANVVMQRESZNVAGYMYWLHBAPZFNWCYOZIGYGAXMHZAUHJNVVSCWCUEGUBKBDKZJTWWEEUKOADIQEZKPMNISEFNVHQMXJFCS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDB #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDB msg;
    msg.setTimeStamp(0.8080491545972348);
    msg.setSource(37541U);
    msg.setSourceEntity(216U);
    msg.setDestination(45272U);
    msg.setDestinationEntity(6U);
    msg.type = 77U;
    msg.op = 234U;
    msg.request_id = 63304U;
    msg.plan_id.assign("SDFXJFRQDBZKLTZHPHYPCYQPHMJTQPOAHAIFNLLSXECKKDJZOJFAOYMRBDVJLROYGRAWCQVZVAITHVYVNZCTNTAMXZVUFLYROKRFSCXIPEQUFFHBGECKEODITHIJMDEBGENHSLMLUIOEBDSVWRPYOQZNAIWNGRPGGMAWBJGWUZKUEUROFXFCNYLSXSWYSVN");
    IMC::HomePosition tmp_msg_0;
    tmp_msg_0.op = 78U;
    tmp_msg_0.lat = 0.5148026967317846;
    tmp_msg_0.lon = 0.0334182401460672;
    tmp_msg_0.height = 0.7428839641745982;
    tmp_msg_0.depth = 0.019962163955282164;
    tmp_msg_0.alt = 0.5710901342979559;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("UATTYZLDUGDHPUAQPNPCFKMWBDXRLFRSBMOEGEHRZBQMFJTVGEPWM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDB #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDB msg;
    msg.setTimeStamp(0.744053860574449);
    msg.setSource(1712U);
    msg.setSourceEntity(79U);
    msg.setDestination(52748U);
    msg.setDestinationEntity(75U);
    msg.type = 173U;
    msg.op = 191U;
    msg.request_id = 21896U;
    msg.plan_id.assign("SOCCXTAMHZHBLCODCFFXUDWYKAKNTHPARQJJRINKSXUXJBFRBBGOZZFDBDHKNMVMGYQZELYFJFGCIWBPNVYGJKUBVPRHYINDHYGMCSVNJPATYUVFOPRWWDSIMNQQKCTEPUPRPHWLCVCXQNXTOBZUVUSXPXLGFFSF");
    IMC::Phycoerythrin tmp_msg_0;
    tmp_msg_0.value = 0.017989685157524193;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("SGWEFGMBULYJCOCPYOROOMVCFFKFKHNEQTQSWZMRABRUDYZPFABUQUMSMYOXNHKPRZGMFAZJRHQVVGBQABODACKRCLITPEKJNTLEAQAPWNDGPXQCPQEEGDYBRMLDIEFKNGYMZWDGLDWYSUYXTTFDOJHHOBCUNIXSPVJJAOIUBZVXIITZYUPLNIZLVKLJSHXDETHXBIGXSTEKKMTGIAYSHESIWLXOKSJNFHVVXAUCUFLMCWRWJR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDB #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBState msg;
    msg.setTimeStamp(0.44921069045226036);
    msg.setSource(64692U);
    msg.setSourceEntity(56U);
    msg.setDestination(34703U);
    msg.setDestinationEntity(188U);
    msg.plan_count = 366U;
    msg.plan_size = 2822481293U;
    msg.change_time = 0.6763337116075055;
    msg.change_sid = 44817U;
    msg.change_sname.assign("SYGNHAFPIMRDJBCVFANGAFTLQNMPTGNMNIKIKXMJDSDBOBYPIUKQEGXDRFCJNNREZEUGLKCIYWSHHXBKKZCCOQMOHOTHFEPELUSPDLJVQUCGDIETIILOJURMDUHAXNSJLGTYAFWWLNJQCKCYCLTHUSDTVPDPFTXXMJBZVHNWKOEOH");
    const signed char tmp_msg_0[] = {-68, 32, 113, 15, -12, -100, 117, -118, 102, -114, 87, -121, -2, -119, -98, -76, -30, 35, 50, -37, -49, 59, 58, -46, -118, -16, -101, -93, 77, -112, -83, -10, 31, 72, -117, 60, -60, -8, -25, 76, 46, 22, -20, 89, 1, -110, -17, 36, -100, -96, -26, 31, 50, 107, 12, -125, 54, 38, 62, 2, -124, -34, -113, 53, 58, 103, 57, -47, 84, -39, -34, -116, -41, -88, -118, 114, -84, 42, 80, -19, 98, 105, -56, -23, 41, 40, -120, 64, -112, -70, 8, 30, 5, -114, -23, -89, 54, -67, 87, 54, -57, -110, -81, -92, 54, 5, 81, 124, -94, 46, 9, 32, 39, -117, -39, 9, -91, -9, -93, 67, -21, -71, -41, 66, 121, 40, -10, -88, 105, -68, -69, -89, 39, 101, -63, -67, -37, 118, -119, 73, -107, -80, -65, -29, 42, 34, -60, -8, -1, -84, 21};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBState msg;
    msg.setTimeStamp(0.051415836055148434);
    msg.setSource(46687U);
    msg.setSourceEntity(231U);
    msg.setDestination(19261U);
    msg.setDestinationEntity(116U);
    msg.plan_count = 15644U;
    msg.plan_size = 102413746U;
    msg.change_time = 0.7787518488761537;
    msg.change_sid = 24116U;
    msg.change_sname.assign("WIISOFUMJRNST");
    const signed char tmp_msg_0[] = {-6, 59, -4, 19, -92, 74, 106, 64, -89, -52, -55, -36, -10, 48, 12, 105, -125, -51};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBState msg;
    msg.setTimeStamp(0.07700525958796278);
    msg.setSource(59927U);
    msg.setSourceEntity(249U);
    msg.setDestination(23433U);
    msg.setDestinationEntity(242U);
    msg.plan_count = 60778U;
    msg.plan_size = 1880059879U;
    msg.change_time = 0.19185419560023353;
    msg.change_sid = 14579U;
    msg.change_sname.assign("LRFYUNNEQPUPGDXPBSOUSLTOAIGKKVXCTJSIRREUPUWWVRZTGLQECVMGCNFHSDBXYXMFEYVZBGMKMUWCPSKNKUOWCSLKHNPGQVTOMZIMAJRQAJFNUBEVRYMAQQZKDCOROOHKXIWPCZHJHGCTCNJZUQIWHAGPIDFBDZKFIEZLLSV");
    const signed char tmp_msg_0[] = {-70, 59, -101, -73, 15, -66, 54, 61, -115, 31, -81, -62, -10, -40, -37, 121, 114, -84, -51, 107, 64, 37, 24, -108, 58, 115, -64, -6, -117, 89, -44, 63, -72, -25, -18, -59, -4, -34, 111, 22, -75, 63, -126, 72, 9, 65, -45, -3, -104, -66, -16, -64, 113, 59, 43, 12, -83, -37, 37, 16, -23, -5, -96, -76, 21, -115, 12, 25, -65, 10, 108, -5, 91, 112, -64, -69, 48, -22, -11, 49, -62, -62, 47, 19, 75, 101, 7, 17, -78, 27, 107, 80, -102, 79, 78, 44, 108, -114, 98, 103, 113, -88, -23, -118, -73, 48, 65, -103, 79, 121, -102, -31, 97, 46, 34, 105, -61, 116, 45, 120, 12, 11, -65, -63};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBInformation msg;
    msg.setTimeStamp(0.21363271294469288);
    msg.setSource(39089U);
    msg.setSourceEntity(254U);
    msg.setDestination(20822U);
    msg.setDestinationEntity(181U);
    msg.plan_id.assign("GQKELXJSDGUZHLCPCEGPTPXAYLYELKPZLZRDXTTKFAERYBJMJOAWDCJZQNYBYRQRLQKWMXMYBTWUNXVRMFACVZSNLZHQIBCKVHYZGSUFNZVDAFGEMQUVVYIKILFGWMUCQGIAKLORWMDPQVUTYTLVFOSJRNWFXZTCUIPBNXGFBCIRKFYPTIM");
    msg.plan_size = 41012U;
    msg.change_time = 0.1806197264241991;
    msg.change_sid = 12820U;
    msg.change_sname.assign("ZPWWPFXLBVJBMTRGUNSDUXMWRYQHZZAPNNIHMSYGDTRCRHAANLJKLDQAAZYRCXTHCGMBIIJCVFQNPELXMVCHWEMKVUZLCIJQVDIGXGLUDWNUPYYTOBFBTRGJPYQFYWDFFJVDCZRTTQPXXBBUOKPPELIHGAIGUSEZYWEOEZSKOOUHOHWFEARIIALVYKQEJTXQZNSNVCOCWQKBJAWTLPKDYFNSVRDKESKCQHUTOD");
    const signed char tmp_msg_0[] = {19, -100, -113, -18, -63, -13, -116, -123, 2, 98, -115, -92, 110, 126, -87, 3, 7, -94, 108, -40, -104, 113, 92, 107, -66, -49, -29, 57, 40, -6, -22, 76, 116, 67, 118, -24, -5, -13, 114, -75, -96, -5, -26, -124, 45, 30, -75, -86, 115, -25, -103, 80, 48, -63, 6, -10, 72, -98, 45, 3, -84, 25, 59, -70, -112, -43, 44, -69, 91, 44, 82, 114, -22, -82, -35, -74, 57, 78, -83, -37, 16, 8, 55, 4, 37, -99, 55, 7, -99, 35, -80, 100, 61, 51, -21, -32, 58, -36, -113, -62, 40, 123, 70, 24, 68, -10, -59, -29, 26, -92, 114, 73, 20, -117, -118, 72, 10, 69, -5, 79, 119, -122, 55, -97, -120, 11, 31, 92, 98, 119, -112, 13, 74, 119, 107, 102, 76, 35, 18, 94, 17, 122, -127, 18, 58, -70, -8, -85, -47, -119, -11, 113, -34, -24, 26, -51, 12, -78, -111, -80, -7, -115, 106, 19, -81, -85, -89, -67, 83, -87, -7, 53, -88, -91, -84, 59, 15, 116, 93, 109, -53, -70, -16, -87, 123, 41, -41, 53, 97, 68, -31, -49, 111, -100, -120, -56, 47, 11};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBInformation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBInformation msg;
    msg.setTimeStamp(0.8858014300934292);
    msg.setSource(56497U);
    msg.setSourceEntity(155U);
    msg.setDestination(40519U);
    msg.setDestinationEntity(251U);
    msg.plan_id.assign("RDIEQMXTIQHWJUMIMILXTLBBKAFZKJWAMWAYWCMESJALGBZZFAUJFBOTSKNHLCHDOUWOJKVSAZZYALYLEVRUAEVMKDFFS");
    msg.plan_size = 37642U;
    msg.change_time = 0.12758266785407923;
    msg.change_sid = 5534U;
    msg.change_sname.assign("OWSIRTHYOZPUJHXSSEWFSCEZMICZEBJAXVLSUDEYPPKETFIYTJHTSUUWLDZYKDKTFUBNWGBBJLKMBGHFODHNOLMCFKKYMWWKXQANLDCSXCANNRKIXWCVGHCDLMULPZQYVNYQMDTAVKFTJCAHFMJUUJIXQBINFONOWGHDQTZVZLOQVEDWZGRROMZTCBYQIGERZXJLAUGIOBVJRSYNHQAESRBARVAIGFPEX");
    const signed char tmp_msg_0[] = {24, 74, -38, 43, 8, -111, -5, 33, -67, 17, 58, 38, -51, 55, -128, -75, -63, 44, 52, 108, -87, -63, -44, -20, -26, 25, -128, 64, -59, -50, -68, -123, -82, -21, -64, 29, 49, -113, -49, -84, 70, 57, -20, -80, 101, 63, 122, -59, 30, -95, 89, 12, -85, -19, 88, 29, 56, 34, 70, -41, -16, 55, 107, 45, -114, -111, 15, -60, -107, -2, -77, 7, -86, -90, -22, 54, -112, -36, -50, 2, -123, -99, -18, 56, 65, 57, 40, -104, 5, 102, -10, 3, 42, 21, 79, 105, -82, -93, 12, -12, 117, 25, 99, 32, -31, 36, -65, -98, -87, -118, 79, -17, 59, 109, -123, -15, -126, -70, 102, 41, -128, 79, 46, 76, -18, 62, 104, 124, -7, -26, 61, 81, -80, -115, 89, -116, 47, 90, 21, 1, 19, 45, 112, -111, -41, 122, -84, -91, -47, 95, 30, -12, 114, -81, 113, -6, -55, 83, -87, 99, 71, -100, -22, -115, -100, -100, -5, -4, 73, -19, -52, -78, 23, 23, -119, 84, -52, 69, -40, -2, -58, -35, 49, -8, -88, -78, -18, 25, 40, -59, 1, 74, -100, -10, -14, 99, -46, -6, 49, 89, 101, -91, -124, 16, -44, -104, 3, -93, -96, 115, 110, -83, 115, -37, -39};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBInformation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBInformation msg;
    msg.setTimeStamp(0.48084718201504406);
    msg.setSource(42122U);
    msg.setSourceEntity(24U);
    msg.setDestination(12174U);
    msg.setDestinationEntity(115U);
    msg.plan_id.assign("MSABAYVTJJILVKPLPHHCBGYDQHWHWBBUOEDUVRY");
    msg.plan_size = 53473U;
    msg.change_time = 0.8716213395476456;
    msg.change_sid = 21984U;
    msg.change_sname.assign("YERVABSWHAGEKQXFQFYIANPTFMUUMJTMLXSDGIRHVWIQPEVBKSPVBEOWAZYJANGPCQDKJDFKHAUWNTRQUTEBUQPXPNJCFZDLVXIBIUAZRSXUPBMYVOMFQSLAWTIFSRJGBYHURZRZODLLQOPXDVHXWWGAYCPKKODIRHNOCFBKPGZLEDMIITOVSJSERDCNCGKTXYMQWKHGYULSDFGBZHNQLNHWEMGHEJNMTZWXTRENCXSVTUACOMCCZIYLOJFZJB");
    const signed char tmp_msg_0[] = {-104, 91, 48, 60, 16, -42, 104, -91, 10, 60, 62, -47, 94, 126, 2, 23, -96, 95, 44, -47, 45, -26, 90, 66, -17, -100, -115, 63, 10, 113, 110, 2, -91, 18, -63, -117, 55, -83, 6, -113, 93, 49, 22, 126, -83, 63, 72, 65, 119, -127, -18, 43, -52, 13, 27, 8, -44, -81, 20, -3, 82, 46, -127, 60, -76, -91, -64, 123, 62, 111, 114, -85, 66, 31, 99, 98, -7, 125, 97, -31, 69, 92, 41, -19, 79, -102, 97, 25, 84, -9, 118, -11, -6, -119, 89, 46, -110, -51, 62, 101, -51, 69, -65, 125, 11, 92, 9, 18, 15, -23, -46, 123, 17, 25, 58, -82, 97, 22, -49, 65, 110, 15, -120, -91, 108, -82, -66, 40, -67, -9, 18, 74, -31, -69, -5, 88, -74, -71, -80, -113, -81, -38, -62, -73, 93, 44, -95, 64, -59, -11, -124};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBInformation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControl msg;
    msg.setTimeStamp(0.2749281869946947);
    msg.setSource(54536U);
    msg.setSourceEntity(4U);
    msg.setDestination(56774U);
    msg.setDestinationEntity(16U);
    msg.type = 158U;
    msg.op = 103U;
    msg.request_id = 27914U;
    msg.plan_id.assign("XEZNYFYNZOVBYXMLOVFOBKGEOPTKQJTIB");
    msg.flags = 3572U;
    IMC::SoiState tmp_msg_0;
    tmp_msg_0.state = 201U;
    tmp_msg_0.plan_id = 43974U;
    tmp_msg_0.wpt_id = 91U;
    tmp_msg_0.settings_chk = 61300U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("FDXGHKEYKVOTPQAUROSNBSMMVLTNRFOETUZOPNOELYXUCTUPREYHSBLLWOUVAQIWQJMXLQCLWZCEHVUSJIZZLAPFFDWCGLPRPCPHGGFBJZUDWJWGZAYVCZYQFTIGKYJZWYAORDFEFHDUMQVKQMUKZBCMPTEMXKVINCRXJRPXIVGMJYSTNDSWKHSTCNEGJNTXIMJNOSYRAEBBXWBZCWDQUYDQHBKDIEXODKSABNMTL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControl msg;
    msg.setTimeStamp(0.4380835768222263);
    msg.setSource(50776U);
    msg.setSourceEntity(93U);
    msg.setDestination(63439U);
    msg.setDestinationEntity(157U);
    msg.type = 120U;
    msg.op = 20U;
    msg.request_id = 44868U;
    msg.plan_id.assign("QJJRJSJWPPTKUDPHJNTLDORLIYQPYHMMFOPNBBCVRFQIELBYGEAIXALLGTVKMWENLKELUCDOFGXNVAWCCAHFQAPIZVNRNJREX");
    msg.flags = 29134U;
    IMC::UamTxFrame tmp_msg_0;
    tmp_msg_0.seq = 7867U;
    tmp_msg_0.sys_dst.assign("ZDHQLECKZYFGBKAHLYNKMTYXERABBZIJWCMOGRKWPGXQQPOFTWDJNCUUEMDBYBTVSAOTZOTVEXXLPRLCNQ");
    tmp_msg_0.flags = 32U;
    const signed char tmp_tmp_msg_0_0[] = {40, 92, 57, 95, -94, -39, 87, 71, 65, 56, 11, 33, -103, -45, 37, 0, 121, 76, -111, -85, -61, -81, 93, -17, 50, -28, -2, -83, -103, 58, -108, -27, 91, 7, -66, -42, -31, -97, 97, -84, -58, -19, 6, -76, 119, -4, -24, -15, -103, 114, 122, -42, -41, 56, 42, -91, -19, -125};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("RCXFTEZFPODMTNNBFSCDMLKHYWNVIZMAHMVNIPIAFHAUYEKMRDSBDWORKKEHCENPNKGHGJYLYBHJETZUSBOGJLZXTZBGIVAQULQOBVAGKWJSFTISCFSCVOIEEWVAYDUUWWGNSJVCRRHJMMTPOIGCQMAEZZWRGJPACZEENSPFOVQQXFGIRTKXQYFJLPAXXYUPHRLPRJOWMLHBGZVBWDFDKKKCWYMTBNCXLXXTXPOOQRIBVY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControl msg;
    msg.setTimeStamp(0.7744236981062764);
    msg.setSource(44828U);
    msg.setSourceEntity(160U);
    msg.setDestination(18682U);
    msg.setDestinationEntity(113U);
    msg.type = 122U;
    msg.op = 23U;
    msg.request_id = 60114U;
    msg.plan_id.assign("VSDFRQELNGGKWRGWYYANUBJWWZFABPYIVRUKHCUVFXOLUTPYOTQOTZOEZANTMDTIIGVQPPVUSBIQHBHHTFBVDJBAEFZMNRQUGMQMWCFKXKSBSZZCUHKMWDLTTSQNNZHVGLMEAJCQIKDU");
    msg.flags = 27055U;
    IMC::MonitorEntityState tmp_msg_0;
    tmp_msg_0.command = 8U;
    tmp_msg_0.entities.assign("OYQBMKVZSWIY");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("DWVGNBBAUTEHKGJBIBENCHDZDTTMRCOHOUXENZCJVPTUNBFQERAYFVW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControlState msg;
    msg.setTimeStamp(0.5663063847726036);
    msg.setSource(41005U);
    msg.setSourceEntity(217U);
    msg.setDestination(45919U);
    msg.setDestinationEntity(159U);
    msg.state = 8U;
    msg.plan_id.assign("IVHJYDBQKWTIUGGPSLIRGXSQPOQKWNFQIBLBDJTCWEDCUPGBYYQDXRDHCMTMWVGUSVMWVDCLHKFURSYIIOCTZKJCZDUPLHAPONHJXTGXTNRLNGEXRXZKWTUTJMUZOLEYQFMFHZPNKSKJLPXRGHOQNDOQHBAALREENLPVIESZFV");
    msg.plan_eta = 1676778817;
    msg.plan_progress = 0.12484908018472385;
    msg.man_id.assign("BBSFNUWUXAKWCIORFKNRYNEBZFQWBPYMEOJPMGTPBJHYEJENGESYWPSQSKOUVDUOWJJZXAZNPQYMDETGDCSWISLWLAKMTLILYGQDIOJXMIRKXCTQVKKPLRQFPZQUXXCOARBAOZNFDVPYFFVHVRTTZPZQILTKEZVBAGIHBHGNNFVLRGDPRMBMJASUCVHOCYCMAIEGIDWUF");
    msg.man_type = 54188U;
    msg.man_eta = 246684567;
    msg.last_outcome = 139U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControlState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControlState msg;
    msg.setTimeStamp(0.8994437252163686);
    msg.setSource(6268U);
    msg.setSourceEntity(191U);
    msg.setDestination(27132U);
    msg.setDestinationEntity(86U);
    msg.state = 126U;
    msg.plan_id.assign("DCRUTVQKCNOQRBVQRYRNLTXIGWOEJWTEACDJXELZJWVBZPUWXOQHXFGBTZEOGCLGNVLFZCEQPWUSRYIMEOOZQQFULSHHQJVXMKBARPJSLSBIDWTLYEDKJFKDTFPSCCVAURYJOCYBIS");
    msg.plan_eta = 729070816;
    msg.plan_progress = 0.8706114417617743;
    msg.man_id.assign("PQDKEKANDOIZNLUVEFKMTMTIKBXATKWUKNFBEXHQZOXSCULNMHAFHQTPAOJBLRWTYPHNVRFRTSGBDTVKGJOVISWCIXZNGKSWWGUZULGYDIVWYDEDLUHBBCGZIPEJMJMYZWVPTUUHG");
    msg.man_type = 4103U;
    msg.man_eta = -638104414;
    msg.last_outcome = 48U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControlState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControlState msg;
    msg.setTimeStamp(0.36276770309697204);
    msg.setSource(33153U);
    msg.setSourceEntity(150U);
    msg.setDestination(65056U);
    msg.setDestinationEntity(179U);
    msg.state = 155U;
    msg.plan_id.assign("MHDZRGODYBHWKZAOWVHNDMMXXLCYHWFLSRNNLHEUGSFKUJOWIXHRREEIVPJLGDMDXWR");
    msg.plan_eta = -1153695887;
    msg.plan_progress = 0.8911686932308706;
    msg.man_id.assign("BYCDHWZXWHSGMERTCSUTFLZEEGDFXNVFSPXNARTVKBKJCMIRVKLNOSKUKXHIKSOCVJGRXJNOBKITPWDAWSRMODMIHAQNFMPVLXBGGAKMCKBYLFDNEJCLHEDQQSXTAYOIEZVGSQBRKIGTVIWBLXISOATDUMYYJPYRVFFMUNHPQEDZGZPUHJWQUOVCDIEWZSMQJFTUYUGPLRMAPLWRZHJTZOOQCZAHVJ");
    msg.man_type = 39518U;
    msg.man_eta = -1141734421;
    msg.last_outcome = 190U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControlState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanVariable msg;
    msg.setTimeStamp(0.3283100543483578);
    msg.setSource(10497U);
    msg.setSourceEntity(51U);
    msg.setDestination(38331U);
    msg.setDestinationEntity(39U);
    msg.name.assign("IGVDCZWUXHOCNBUDKDYXTHFHYRZQBTJKEDVWQFNFCHWXIWSWEJYHULXBMCMOOMPYQETUGYFVBCRAPUUZVIDYGQVGGINKZBTSWMTHBYRUBPMJSSZNXLXHDMOIPEHOQRLEZMAMRSMRIVOIALRAEDZLQA");
    msg.value.assign("MRYOIEVLKGJNBPYTTRICADNBSAQAKCTINNOMOWGYDOVWKBDQQUVBHSONENFIJQFLIVFZADPSCGJFMSJYPGMDMFXXPWEPFXGTVZQSUDZJVKPFEDAMHJTNTMVHQECROJWUKIC");
    msg.type = 17U;
    msg.access = 113U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanVariable #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanVariable msg;
    msg.setTimeStamp(0.8728209963417279);
    msg.setSource(55006U);
    msg.setSourceEntity(105U);
    msg.setDestination(63270U);
    msg.setDestinationEntity(81U);
    msg.name.assign("ARCSQGMKPONTOSZTRDUTSRDJTKPYIGMZQKOXKDIOAGWPQ");
    msg.value.assign("XKINEXVOISZLXLVUBGQQSVVMVJLYOXRARANZEUWIOGDSCXBMWLSNDIUTJLBPRPGZHKNTOMROHFQRFWGGWWZJFPTABANLPHIYHOLESO");
    msg.type = 106U;
    msg.access = 50U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanVariable #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanVariable msg;
    msg.setTimeStamp(0.3476481959347514);
    msg.setSource(179U);
    msg.setSourceEntity(214U);
    msg.setDestination(43094U);
    msg.setDestinationEntity(100U);
    msg.name.assign("GYSFQKDBATEDYPENVILXVTKECOVXMSMVIYOFZWUGZXZILKJKIZXEQWHWXSKBAGPKUPTJNEIUCBHMJMISEZLPPUTFMZSAOLMUCARTLNYRYKZUVGGUHMJPWOJRQULMLXMFHEVPFBYIINRHBBFERSUKGTDRJFHTVKXWIIBOQRNAGNHPZWCAYDZPWDVCCDFSVNCDQCBJUADBTOAONYETDXFO");
    msg.value.assign("UMQRDFTXWVGZEDZSYOQBBPSGLDAFUCSPYAWPQAKJLXKHGKSMGPR");
    msg.type = 42U;
    msg.access = 208U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanVariable #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanGeneration msg;
    msg.setTimeStamp(0.2774127619559372);
    msg.setSource(38161U);
    msg.setSourceEntity(44U);
    msg.setDestination(46190U);
    msg.setDestinationEntity(142U);
    msg.cmd = 28U;
    msg.op = 46U;
    msg.plan_id.assign("PCBOYCXTAGZEBGEKIHZMBFCDNQMBSEWYLERYKQSFLTDDVAJZVEABOIBZGWXHGRPKXDRGOOHXNSXHZERRTBWLPHLQCFVONVTWHNHIXPOKIEARBHKWLFDUQDESRQL");
    msg.params.assign("LHUQQUDPUJBHMHYFIZMKZVTRCLXMFUNDXCNEJCDVQSWOISIEZSWWKOAEOBLCPDYHRSRCWTZHPESZNVPUPFRASTPIUTKLMTBBGKNNRZCXFLJVSZOIQBFRAAWOANVDNVALXQKMOWJGFEHJYQLMKIWFGVFY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanGeneration #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanGeneration msg;
    msg.setTimeStamp(0.2543326026046415);
    msg.setSource(24068U);
    msg.setSourceEntity(145U);
    msg.setDestination(8985U);
    msg.setDestinationEntity(145U);
    msg.cmd = 98U;
    msg.op = 230U;
    msg.plan_id.assign("HFVDUKMPLUWCDGNJSYKZXJKXOOSYXLWZERMUADIZAMVCRCLHITJZQPTJVYFZGYBKRMXNSIWQGGVOZKXMUVCETXLVKPLKDFDGNSAFXRZWDBVUUNQJEMERFPYPPELBQYPXEYROGBMYWJHIHQKZVQMTBDQNEXTFWNLGBAAANROEEIFPSIIHBYCJLBRRHBRCZMWQHALNUTFSQWDOXSAMSIHNDVOWVQJPNASKOTTHLUOCFWPOUSYGUIGGJJBZCA");
    msg.params.assign("DCVXXVXCTSUTPJGLIDZOTZLRWXZVRYBEEJBXEQTIZBBBVQLWRLFCDHVGUEENQBPNOFWDSDMTKSZKGENCPDQQHFLWHRJJJNGJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanGeneration #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanGeneration msg;
    msg.setTimeStamp(0.029891147838050358);
    msg.setSource(37338U);
    msg.setSourceEntity(127U);
    msg.setDestination(25040U);
    msg.setDestinationEntity(33U);
    msg.cmd = 231U;
    msg.op = 89U;
    msg.plan_id.assign("ZETUBIMXFXVPUJSRMLPNDIVEASSCXBQFAPDDBULFXWIJSLGNAFBECGRULOWWZK");
    msg.params.assign("DQMDENBZQXVSWRNVABGBUPWZZGAUIRPWMWOMIEFXNNWBHCYCLHIXVXDCBKDENAYKPBJECTSQGPTHHXUXTSMFEKYTWDHZCTILLJNFYFSKYHVYANZFYOLOGSOZGTKPUHXVUWCWPIQRQGBPBDEMRALVPULKVHAIRVNIKQRTAHWED");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanGeneration #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeaderState msg;
    msg.setTimeStamp(0.6016998188388033);
    msg.setSource(57700U);
    msg.setSourceEntity(216U);
    msg.setDestination(22211U);
    msg.setDestinationEntity(152U);
    msg.group_name.assign("CJXOTYUHQIWBEHJDRTOUFDLJXWKOMNODWKIDBAWGHCIALGWPSTPFANKZUBMNJRBYYCJESMXMCORYGBZZQVFOLYCASZEWOSATUGXDLVQLRNHWGKGKJMWGFWKCQLADERPQPHNGAEIGICSQZRFZHFTXGYDYOAKPPEFVWEZHSNXVVHXMYMNUM");
    msg.op = 80U;
    msg.lat = 0.14397959348578604;
    msg.lon = 0.6690632342962904;
    msg.height = 0.7880205100187656;
    msg.x = 0.2512360686688432;
    msg.y = 0.6922137772781535;
    msg.z = 0.877742281266843;
    msg.phi = 0.5373859299033538;
    msg.theta = 0.3184010961216617;
    msg.psi = 0.01301479551797935;
    msg.vx = 0.2730623209140344;
    msg.vy = 0.8047887931523553;
    msg.vz = 0.5131311163182103;
    msg.p = 0.4167983872457335;
    msg.q = 0.8830338102425105;
    msg.r = 0.17075683555754984;
    msg.svx = 0.6813278413907216;
    msg.svy = 0.8376523548075628;
    msg.svz = 0.29554630383884484;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeaderState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeaderState msg;
    msg.setTimeStamp(0.22585874184898536);
    msg.setSource(23466U);
    msg.setSourceEntity(149U);
    msg.setDestination(59250U);
    msg.setDestinationEntity(251U);
    msg.group_name.assign("PPVRTEDGIAHHEZROETFXZZXMXWJMYBSNJDYOSYFSUOHXGCPNYCDGMVYKXFEAFQQNZIIWTBAAWYSSEPPYZIEOKZTQIE");
    msg.op = 42U;
    msg.lat = 0.7634190822843925;
    msg.lon = 0.7442904587828603;
    msg.height = 0.8078192496163704;
    msg.x = 0.4214863260804943;
    msg.y = 0.2664355168528282;
    msg.z = 0.9473227973679949;
    msg.phi = 0.3222278708273627;
    msg.theta = 0.17991582299412034;
    msg.psi = 0.17220038599308074;
    msg.vx = 0.3070116760897562;
    msg.vy = 0.1267063722285583;
    msg.vz = 0.1961749288934752;
    msg.p = 0.7435633480223619;
    msg.q = 0.22447952347520872;
    msg.r = 0.29907772282266476;
    msg.svx = 0.1193719036711377;
    msg.svy = 0.09490349882577853;
    msg.svz = 0.6322086928891808;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeaderState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeaderState msg;
    msg.setTimeStamp(0.09211042994428409);
    msg.setSource(12533U);
    msg.setSourceEntity(241U);
    msg.setDestination(58055U);
    msg.setDestinationEntity(213U);
    msg.group_name.assign("NBMHFBDREDKHPTZEAQKNLLHORPIHUBIKLRHXYBRPGJGULJWGEVKNMTYGAXKWSWAZDKZBYORERXYMEWQVVPRTBFQABFSFADHOCBZQTOMTODOJNJEQYWOEPUINCKUGLXNLWDKQUQIJSZEHJCAPRTJZWSUDCQFUCYOOEASECTYFTPPVJDWIFPIVYXKDMSZVRGXZGYRAGMMJILGMSCVNZCHMHAKAXVSXFCBHUDINXQTUWOTZFLUNPCFNXQILJMS");
    msg.op = 153U;
    msg.lat = 0.9321061714500836;
    msg.lon = 0.8710822298464043;
    msg.height = 0.6099676298093586;
    msg.x = 0.4061471694001112;
    msg.y = 0.3897316444514656;
    msg.z = 0.9250752325817568;
    msg.phi = 0.7453880623740856;
    msg.theta = 0.4457225252887703;
    msg.psi = 0.6458502907847048;
    msg.vx = 0.29903876801028084;
    msg.vy = 0.9016710559743535;
    msg.vz = 0.39846093025066587;
    msg.p = 0.5674512368794369;
    msg.q = 0.21327261323097602;
    msg.r = 0.8860919170700926;
    msg.svx = 0.01614280015803038;
    msg.svy = 0.47079607254270617;
    msg.svz = 0.1523302852410332;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeaderState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanStatistics msg;
    msg.setTimeStamp(0.930525150772556);
    msg.setSource(4229U);
    msg.setSourceEntity(240U);
    msg.setDestination(23979U);
    msg.setDestinationEntity(11U);
    msg.plan_id.assign("RQHAODZXGEHEXYVHBSVAAZFMYDYE");
    msg.type = 240U;
    msg.properties = 77U;
    msg.durations.assign("QXSXPHWZGVYZQJAGNMMYLTPCRDMRIGXTJIPOUMPSSHLFHXEKDBVXGXEIDWULCONJALCIVFMTBHNYEPRFPOVWOISUWIBMKZZVNHPECSJBHEFSEGWFFMLJKZOCCSNQBTCQFZDHDJKPCWRFIDVACZYQSNDBGZARNKANKPAGDSUGHYYLQBBUEUVIYHEQQWUNLVATRHDTJOOWUVPYOKUIAEOKXNRRQJTUYSARJGTGERFLVZBKTBXWADZTMC");
    msg.distances.assign("EOTTJSTAOMPCBXCOMIP");
    msg.actions.assign("HMAWBBNXVZXXVTAMIFHCNLRNWLQRFBULOEAZSRUAPWCBCFXATINZXDQZVTYMFTCHKZXFVAISIGCJUDEWOUTIQPPCBDJWLUDGPANUXQWLHCQCJOSDQJAIOMJRYYRNOOQKPMYNSTNLLMDBJQEBSYWYTZQGYFSGIJKHBKMVREVHMVEUHZUWISUCVKIGBVYLPZOHFTOOEADFTSAUKQXTOGP");
    msg.fuel.assign("QIRUUWOCSSGAXKNCQMPFLWAAVQUAELTJZNIKBGBHZECFXHORRYGL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanStatistics #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanStatistics msg;
    msg.setTimeStamp(0.9639054857982372);
    msg.setSource(28864U);
    msg.setSourceEntity(206U);
    msg.setDestination(45713U);
    msg.setDestinationEntity(194U);
    msg.plan_id.assign("STVXFCDMWCNNDEHRJGDEBILLRVSLTWRZANIIVKNMNSCPJQMITHJNYQEBHAMZUOUSGMUJXZEHICZOPDXCYBSVPHMWXKDK");
    msg.type = 148U;
    msg.properties = 21U;
    msg.durations.assign("MAUIDIBQAEBVCYCZGSNEYFQWQIZROKONVYDAGLWSQISRKLQETSPMLGLCIHFNPFNDOMULEVKNVUHWTUZCRUTUJXKDENRBJNJZLOCYLHF");
    msg.distances.assign("CCGYQBDEHTSTFRQBSSTXZXZSSFBYHJJYLIPMPATCQQJTM");
    msg.actions.assign("OUFTEYFHLRQVYXDECQMDKUDYJWANBLPZVPXKIATXUTOEPHAFEXBFIGNQGTDTUTHQFDLBMMKNZIOPZRSSUCCWEKRJGRTDKHMQOQIGBLCAFHLSAIOWXNAXWUSMWHOAJENTGVYYOSBUKOVZVXHPCGYECJUPGBILQJ");
    msg.fuel.assign("TQPBCDFDVRWPRROZQSETOVUSBOABRFTVYAJIYORGSAQLNRNAXNLEJGLYNGWRSIAKGDFADUVVTJBILRUKCPXVXYETSTOMKDZTZYKUEYSFKKTXENKIOTMWEYZMGXDQZYHCCHZFWQOOTJWAPHWSBMBAMMSMPICZWLIGZFPVULHEADKMOLOECECXISQMFIHICGXBKBCUWURYIPEUDHDJHHMFLSXVNLHKLCNGND");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanStatistics #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanStatistics msg;
    msg.setTimeStamp(0.3757634464258153);
    msg.setSource(16700U);
    msg.setSourceEntity(230U);
    msg.setDestination(62077U);
    msg.setDestinationEntity(242U);
    msg.plan_id.assign("RQLMPYXGAJAZXGVDMZTQSTGDGWQTMNALNOVFZGCKAEIVZRAQDSVLLRLEOPDQKYMWCTDTDNJUHFAWUGUFSPYEGDMWFCFCXUQNQECQNNMCZHLOWPXPWPFXTIUVGUD");
    msg.type = 230U;
    msg.properties = 11U;
    msg.durations.assign("ECNVXSZBLNDURQUIPIYJCEIMWOFKWHZETAIFHXSGEUAGRVRATAAPWKLBNXYGJNKQZTVXIGYCRMPEMVDJGKYMKJZBYHWMSRCTRBSSFGHNHOVWKMDAYCNDCJOPWHPZQEFQONLVCZOJXRQLCNSTMXBFEZQQSLWLDGCUUBPQQLOBHPAMTEUJGXUFKMIPABRXPZFOXGAMECEKADSRUYKFDYDTUKJHLOGSNIWDJH");
    msg.distances.assign("OSSXJDGJNFENLZXYUPYHALMMEDLLSNRCEUJCWYCMWAIFFCOEYZTGHEARGUGCRQ");
    msg.actions.assign("FLDWVXDUTXNGDQYVZKXTLLOSQBYIPKXUXYZKHFUISXZFBIOHFIBUJTJKVZSBWDMSOYEREVDJORCJELKSJSBAZMFQAKUWPYJZACWGHAGIPBWDVIPWRNNCMTBCVQDQJCCNESYMPCIS");
    msg.fuel.assign("DOSYAKUNPEUDHFYAWNFOIREQLRNJZQKOEYDUJXJBGSJJUDRHJWUGZMEFCACFGMYGQXPFMRNPXXEHZJR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanStatistics #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportedState msg;
    msg.setTimeStamp(0.7142155598959123);
    msg.setSource(35943U);
    msg.setSourceEntity(25U);
    msg.setDestination(54487U);
    msg.setDestinationEntity(239U);
    msg.lat = 0.5696134737697349;
    msg.lon = 0.6829841159124419;
    msg.depth = 0.3244742047514161;
    msg.roll = 0.24162122729939983;
    msg.pitch = 0.3749541066385689;
    msg.yaw = 0.387314268812201;
    msg.rcp_time = 0.5965796803220836;
    msg.sid.assign("NVTAZGGSFWILIZJNNQPYUKFQEHSWFHOOLGQFYATEQNACHYZOZHOLGPDBVAXTOULMSDQKIXKFQCOPSJODMJSXTEVBVQBUQBNZXTBCHKCIBFKZAPBKFQ");
    msg.s_type = 88U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportedState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportedState msg;
    msg.setTimeStamp(0.2675825843464298);
    msg.setSource(17496U);
    msg.setSourceEntity(141U);
    msg.setDestination(17080U);
    msg.setDestinationEntity(86U);
    msg.lat = 0.7867512234015526;
    msg.lon = 0.8170117596784405;
    msg.depth = 0.17151753558738292;
    msg.roll = 0.69951999710355;
    msg.pitch = 0.386857149324791;
    msg.yaw = 0.11248818410865513;
    msg.rcp_time = 0.7887533966883958;
    msg.sid.assign("WYJZDETHNPKXCGWQKZRIAGCEXSOWAHGXYMJSYFOPZXQKQBTFYNTORWPBER");
    msg.s_type = 236U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportedState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportedState msg;
    msg.setTimeStamp(0.47036766884696657);
    msg.setSource(1678U);
    msg.setSourceEntity(125U);
    msg.setDestination(59214U);
    msg.setDestinationEntity(31U);
    msg.lat = 0.2684737435848168;
    msg.lon = 0.5117248539945095;
    msg.depth = 0.3207044119898722;
    msg.roll = 0.4241993367696677;
    msg.pitch = 0.8407032852000382;
    msg.yaw = 0.6469700650891904;
    msg.rcp_time = 0.3727974005446094;
    msg.sid.assign("YMIMSCCZLOQNTQAYKOFIASNNPAYTKVBIVARBHUDJIWAEBJSCDWEMOQZWKLSNBWMKKJDCKNELFSXXTXMHUQHZPVJEPOMLYRSIFEMRQZPQPSKVIABZIUQLPFBGJHUVUQZNPYXEGBBMCWFQWBUDQOXDYXWHJIFDSGLICTXVAJIYYOUEYGZZHTSKMGGLGWTNTHJDLASFHGFJRTFHODCKUXZRAAGLLUUDVVFRJWPCRORWPH");
    msg.s_type = 193U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportedState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteSensorInfo msg;
    msg.setTimeStamp(0.6942294955197703);
    msg.setSource(47558U);
    msg.setSourceEntity(207U);
    msg.setDestination(50711U);
    msg.setDestinationEntity(226U);
    msg.id.assign("YOYYVMJERGPBMVMOBAIFUWQKFCONQNCXZSNASZLOIBIGXAQSKOWTIMNKEFWQUSBLTCTHJAMCNMUJIPOUEGZLBECOSJHDIDTTRVMZMUAZSRVAJPVUTVCTCHQCHGARNWBSBPUHBYWTJOPYEOZSMKSKVUNXFGZHHDGKDJIFFXPML");
    msg.sensor_class.assign("ILFHJDSXTNLLGYADLDOHPCEBWXDXSWHWLSNVHKYTVSTHMQNULGXRNBIOTKPYJWAQBEEEZCMPVUYOIWXFEOAQWQRQZABLPUOMSVESWMUYOPMJDFYLAWVDKGVACUTCJOTVXBIXLUZYMRBONQWZOAMJSIKSDYYGYRFNGFXTCZWPJISHMHZJEMKGGKNEKQISVNRHVZTBREPQFX");
    msg.lat = 0.5252627944608442;
    msg.lon = 0.8809812083992827;
    msg.alt = 0.7610312239655266;
    msg.heading = 0.09871997201206861;
    msg.data.assign("TYQWTEPTXQSSYYPXHHETHMGBAATAPQFGPQWDMLYOWVEEOREFNUCGUMCBLUVWSRRTCRYHIKGCXNIZFFEFJEHCFWGZXVURE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteSensorInfo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteSensorInfo msg;
    msg.setTimeStamp(0.6681255255396747);
    msg.setSource(46355U);
    msg.setSourceEntity(180U);
    msg.setDestination(37688U);
    msg.setDestinationEntity(210U);
    msg.id.assign("OOUQYJBRWTKDCZZOUIWEXXEVRZTPNARNIBBQSQUCVLFCONXSYTTZOAGBEQJQORMJVLXCFATBRGSJQKLRUARLGCUHABLMYJIYZDJDWWJBHZARXMKIUXPVNFATHHCWPNMGVZESXJLHCVVFWSMJKKNGSTGMKFPWYPKFRDQLCSUNWXKKHRCOYPZXBJFLIASHZMMFVIUYEGTIPITWNYFFDDQUTQPDZANL");
    msg.sensor_class.assign("STDLEAQZWFVNTBFTONJXHTPXARYFYWDLJPQUJMYCCEPPPGAMRAIKWVHGPMQOMZSHYEOGMKSCNJOXHINEVCPIWXUWQDNEDOJLAMSLWTFIFRVAWPWUUUZSBXDTTOALCJJPSHFDLBRXRXTISZBSKMCXNZIZPGHZWYHGDMIYKBTQBUUYGRHKBKKVWLVBNFLVCLKUUD");
    msg.lat = 0.5589444530070726;
    msg.lon = 0.423241349954243;
    msg.alt = 0.513466503075272;
    msg.heading = 0.6001463602389775;
    msg.data.assign("CPHQINZRJOPCRTNIIYHKDEGQBCGSODUHGUBWRZMLBEXXVHH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteSensorInfo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteSensorInfo msg;
    msg.setTimeStamp(0.3371078039358748);
    msg.setSource(13249U);
    msg.setSourceEntity(43U);
    msg.setDestination(32556U);
    msg.setDestinationEntity(40U);
    msg.id.assign("TDOYJWVAGSPIZXHNCAYONXTCCVYKRWHYVHDHCDFBLKDZZRCSUDINDK");
    msg.sensor_class.assign("OITWOTVGFHRBJNINBYZDNZVXJCRMXKMQPWKBYHQJSRLTDAXT");
    msg.lat = 0.869481479570459;
    msg.lon = 0.5578861912286402;
    msg.alt = 0.5211507369383667;
    msg.heading = 0.8685444335721632;
    msg.data.assign("VAOYLFRDFRPVMZHEXWXHXZBZDFLXXSZKAJJEWSDKRZSQRJHFWACHFDWSGSOGRXZBFVCGWPTWQLRCMLGNOXLIXPNIMUNTAYPCOKIKMMCGCEWXQCFKRYQTMJQDYYTXUCEWTIMJZUTBLUVGVTEAKYRWNVDGVBPPUTPVIDSHNASEN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteSensorInfo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Map msg;
    msg.setTimeStamp(0.8259525585659153);
    msg.setSource(33829U);
    msg.setSourceEntity(160U);
    msg.setDestination(6333U);
    msg.setDestinationEntity(170U);
    msg.id.assign("XFKSLTHYREXQRKJJNSNBDUCZHVTTOKFQGSCWOVOCRFPGUTYZIZNVJTEOPFORLMMEPSIJVLWXHOGUBQLCWCIANHGFHAIPBAXJABTUMLEMDEMRBYCPZLOIOSXULGWFSIMEWLCXCZPURWAJOXHADGATLVWKDKIHYFQDIFMSGGOVKZEZWADWURNSECNJVNHPPRXAJSCEHJYZQSYDUNBBWBFZQGQYRVEJQIFQUVNKZKNDKYTTMXIVMYMRDUXGQPLBY");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("DVNFMBLSXLOMTYZIVOCMZFXAQMJTKZVTJPUDCKSEWAIH");
    tmp_msg_0.feature_type = 181U;
    tmp_msg_0.rgb_red = 80U;
    tmp_msg_0.rgb_green = 183U;
    tmp_msg_0.rgb_blue = 42U;
    msg.features.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Map #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Map msg;
    msg.setTimeStamp(0.723980950765692);
    msg.setSource(2465U);
    msg.setSourceEntity(127U);
    msg.setDestination(40220U);
    msg.setDestinationEntity(215U);
    msg.id.assign("OFOOEMDCFSGFWNCGJXDKCUMPGIJXSYFRHQSTZTFQGNKGNITJEZKXVNFDCVDJTEGSOBZUXQABUQUYKAJOSSLVQPCSAVKOBIXPLWPHQBVJOBIJKRENPMIOSKQPITHPQVUMXKRVMIZUYHERFBLUYQWGLWDLABRWWGUYCIFDJITNKMDG");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("CINBMOEDRCVGLESGKVTHPVNFWHKLZTXIGIOSQXDXPXQUJUYZAUFXEJMAPRWDNOEUWOBOCWNEAPMJEXFVQZVYGZLDKPHIBFJOYLKEPDRUTBFMGHRIRISNMYKEGMMCDUKLFZJCICHKQQHSRYNZVMLSXAWQOGKATJIZOJSZWURMPUFBHRTAKDYXTBDCQHCHVJJENLZKSAUBJRQLWVLICAWTSUQFXPGAHMAYNG");
    tmp_msg_0.feature_type = 58U;
    tmp_msg_0.rgb_red = 4U;
    tmp_msg_0.rgb_green = 252U;
    tmp_msg_0.rgb_blue = 156U;
    msg.features.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Map #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Map msg;
    msg.setTimeStamp(0.08723887516640239);
    msg.setSource(2666U);
    msg.setSourceEntity(132U);
    msg.setDestination(78U);
    msg.setDestinationEntity(51U);
    msg.id.assign("DQIVBLKVJWEYXALWM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Map #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapFeature msg;
    msg.setTimeStamp(0.7732167011880737);
    msg.setSource(6963U);
    msg.setSourceEntity(98U);
    msg.setDestination(61645U);
    msg.setDestinationEntity(101U);
    msg.id.assign("BPPNYMAEIDQVDJEIDSZMLYLNGYNVEYNVKMKBGITWXJJSKVTTXZKUG");
    msg.feature_type = 110U;
    msg.rgb_red = 192U;
    msg.rgb_green = 51U;
    msg.rgb_blue = 164U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.8268637220267714;
    tmp_msg_0.lon = 0.5914906386133164;
    tmp_msg_0.alt = 0.42126435031860743;
    msg.feature.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapFeature #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapFeature msg;
    msg.setTimeStamp(0.41826649196979715);
    msg.setSource(32498U);
    msg.setSourceEntity(122U);
    msg.setDestination(30310U);
    msg.setDestinationEntity(135U);
    msg.id.assign("YDVRAKHRIJHNKWZUVCQVGMGJXKVVFFQEOKGCQCDUVRWYVZZBTLVSJALJNOEQHROSNMNWSOZGSORXDWODFBAWMMFHJXFFDHQKJSEESVOLFNNWNARRSQHWHLZDXZTKDBYWUUAXYXFXUPBONLIMCPUMTPBWANEPLKTQAGXOHIYGTHPUDQGJTLOCEKPAJIWMTEPPIVJEEITUF");
    msg.feature_type = 44U;
    msg.rgb_red = 155U;
    msg.rgb_green = 119U;
    msg.rgb_blue = 165U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapFeature #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapFeature msg;
    msg.setTimeStamp(0.5507167838874557);
    msg.setSource(51336U);
    msg.setSourceEntity(212U);
    msg.setDestination(30249U);
    msg.setDestinationEntity(92U);
    msg.id.assign("MYVPBMHONXWGGJIYEVHPUFKVEZNGQRQJVCIFVWQYDTUVZMDEVDLACFRTIKTGANDJPFFHRIFMSBGQZ");
    msg.feature_type = 131U;
    msg.rgb_red = 86U;
    msg.rgb_green = 242U;
    msg.rgb_blue = 177U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapFeature #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapPoint msg;
    msg.setTimeStamp(0.7926146437840437);
    msg.setSource(11361U);
    msg.setSourceEntity(198U);
    msg.setDestination(39095U);
    msg.setDestinationEntity(203U);
    msg.lat = 0.5765867886467989;
    msg.lon = 0.9839955110354066;
    msg.alt = 0.4851245641714801;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapPoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapPoint msg;
    msg.setTimeStamp(0.10772742111049793);
    msg.setSource(29052U);
    msg.setSourceEntity(228U);
    msg.setDestination(53660U);
    msg.setDestinationEntity(212U);
    msg.lat = 0.26851677079250214;
    msg.lon = 0.32621744010007225;
    msg.alt = 0.22116281063266552;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapPoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapPoint msg;
    msg.setTimeStamp(0.6065361590544981);
    msg.setSource(49386U);
    msg.setSourceEntity(152U);
    msg.setDestination(14297U);
    msg.setDestinationEntity(173U);
    msg.lat = 0.5518714577022322;
    msg.lon = 0.17976309346085417;
    msg.alt = 0.2789945894959762;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapPoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CcuEvent msg;
    msg.setTimeStamp(0.7399739101888119);
    msg.setSource(59445U);
    msg.setSourceEntity(234U);
    msg.setDestination(46901U);
    msg.setDestinationEntity(56U);
    msg.type = 29U;
    msg.id.assign("ZLJFNRIYEYXRVRDUOYKWTQTOILKYHULBZKDBEXADEFSSVJGJFAYACCPCWWPDBMBLIAAKPVACSJVKGRVTCHKSHYZPZZWTDQIEYUUPOGJQRFQUPANTJBCMFBDUJLRIPKS");
    IMC::CommsRelay tmp_msg_0;
    tmp_msg_0.lat = 0.3305099888690354;
    tmp_msg_0.lon = 0.6194796376416644;
    tmp_msg_0.speed = 0.19379280359879958;
    tmp_msg_0.speed_units = 93U;
    tmp_msg_0.duration = 56679U;
    tmp_msg_0.sys_a = 34797U;
    tmp_msg_0.sys_b = 36360U;
    tmp_msg_0.move_threshold = 0.13782678126348824;
    msg.arg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CcuEvent #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CcuEvent msg;
    msg.setTimeStamp(0.8973670414362321);
    msg.setSource(18877U);
    msg.setSourceEntity(139U);
    msg.setDestination(27452U);
    msg.setDestinationEntity(218U);
    msg.type = 200U;
    msg.id.assign("XRXYYRUDILTCDGJVARHDZEGMSPAPGSQEOOKQVAUUEZTKKSVRNMRHJQPXWWUNLWTFIORIEEHZTNKTBYYBYMENGPLOQZGNDBCDMVXEDOFBGHWFVANZDVAVUKEJSWFPNDFTDHTMQSHZJRJNLVMTLMJPPXLZJWYSBDZQSICOSBCGZICWPQWCMBPGHCSUNZJIOVPBUWEHWTMCGJHERQACONORGYYIIKFLQTKCUFXOVLUFAMR");
    IMC::IridiumMsgTx tmp_msg_0;
    tmp_msg_0.req_id = 36875U;
    tmp_msg_0.ttl = 54307U;
    tmp_msg_0.destination.assign("LXQSHDZZZPKUPXQVILOYCVHDRPEJBQWODOFXKLXBAGXLKIVDJIGMRWUQZYTCEYAEIALTNSBNKTMFMXPXTUFCWBKIFZSTOGJ");
    const signed char tmp_tmp_msg_0_0[] = {89, -35, 123, -43, -72, 29, -107, 63, 89, -109, -14, 28, 25, -58, 119, 103, 2, 84, 116, -82, -88, -68, -116, -57, 4, -81, 99, 50, 112, 108, 96, 8, -81, -73, 29, 11, -85, 7, -122, 89, -23, -63, -115, 87, 20, 107, -97, -112, 98};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CcuEvent #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CcuEvent msg;
    msg.setTimeStamp(0.275341882995622);
    msg.setSource(12418U);
    msg.setSourceEntity(45U);
    msg.setDestination(61141U);
    msg.setDestinationEntity(53U);
    msg.type = 148U;
    msg.id.assign("ZYKGFWEUNPZOBSCFMBKVVARAINXUVQNGSFIIPVHRUTKEAJO");
    IMC::AcousticMessage tmp_msg_0;
    IMC::DesiredVelocity tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.u = 0.7754930975795169;
    tmp_tmp_msg_0_0.v = 0.16129616701596516;
    tmp_tmp_msg_0_0.w = 0.8144209215487944;
    tmp_tmp_msg_0_0.p = 0.9949029429339205;
    tmp_tmp_msg_0_0.q = 0.5232418148706466;
    tmp_tmp_msg_0_0.r = 0.19861486851866672;
    tmp_tmp_msg_0_0.flags = 152U;
    tmp_msg_0.message.set(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CcuEvent #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AisInfo msg;
    msg.setTimeStamp(0.7815071998116866);
    msg.setSource(4726U);
    msg.setSourceEntity(142U);
    msg.setDestination(40125U);
    msg.setDestinationEntity(38U);
    msg.msg_type.assign("JFRMLUSBRWJBZCCHTEMTWDOMLDKKGUKHWPOVKXLUZCQPFZRNIJGUCWLDJIOXKPLJJSRPDDOYSSAKFLVQDABKEVWMHPTJZWUHGCIZTJECNPRIRODQQZTRLFDTHSMXLKHJINMVYQH");
    msg.sensor_class.assign("URGLWBOLXCZXIQQNNPRFPLHGUOFPWAKCGTMLJUAOSHFSGXVRIZYVNABRVB");
    msg.mmsi.assign("WLHFIKCKSSLJGJVJTLGUHLOGMNIGXFFMGSYKYFVTBHFYAWNRNHGUFDREDWZFJRTRZIBQDMOFKAKZYCOQSHCMQDEUVWY");
    msg.callsign.assign("URUGFUVSMGCGNRVRGTPXNBZUUAMQBXHJHPTEHUTFVLVZIKQZKEYSSWQHDFEYJIGBMBEOERJKAKGLDHMDYFMSHBOCPTVJAXSGQBAQMPIGLNLTXVBZDZLOEOWSJXVCBXGCNDGCWSDLTUNMVFQLFRKSIUMA");
    msg.name.assign("RPISKTSRCRXRUCFULZPCSNRVHNMVAGMMEKPNMSWIBTADDCYRHHUBVZPUSXNZTEDKFRFVEUTEXAZDLFILACIXQKVDTMTQWTSHBWYFRU");
    msg.nav_status = 181U;
    msg.type_and_cargo = 154U;
    msg.lat = 0.8563513770609963;
    msg.lon = 0.15437285475685703;
    msg.course = 0.5686923070994626;
    msg.speed = 0.45636760432649726;
    msg.dist = 0.6417335880105818;
    msg.a = 0.12723263373734295;
    msg.b = 0.6920975410154749;
    msg.c = 0.9461655982683367;
    msg.d = 0.12421301913043048;
    msg.draught = 0.639033267201557;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AisInfo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AisInfo msg;
    msg.setTimeStamp(0.19354874837824132);
    msg.setSource(21270U);
    msg.setSourceEntity(100U);
    msg.setDestination(1336U);
    msg.setDestinationEntity(226U);
    msg.msg_type.assign("HXVJDHBXCEQCZYEIZANMBHETDEAKWWLUADLODCIPZBQNCYRFGDWRRMKAMTTYBGESVKXSFSZBOPYHFTQSINUKDUEXTUAUGTPZVIGUBORPZKDKLJJWFDZSMBIIVLEESLVJQQGQECATCFYTVGOSSHSGMXBCUOLLRNUVJZVHN");
    msg.sensor_class.assign("TBNWHZYQKNKTTQPGNEZALNMMWHDRVST");
    msg.mmsi.assign("RTQFBOWEBPPIEBBFIJVOUZGLFCOVJVWZLHSVJDMADBFRYZVSZHTVBONQKWQQXXCTPERRDONVWMKNJRUTHTPRSYUSHNGQNEMWIJIKIKJJGZCTADHOJKIOUFHKCHCKRPFKSBAPMVFCJAXEYLEYXWEKLARRGICINMNUDTUGWUOAGCHXWMWXTPEGMLDSZQXLXYLQTAMGARLABHCOTUHLFPZPIO");
    msg.callsign.assign("FGZRQTLPNEICXEQWRJFUCTMFZSBXGONGESCZOZHRSGTYHOKAKDYIRZXONEXVMQIPULFWKKYUVTODAXPYTCGLZCVUYIBOPGUZFASLJBXWDMBRMJFLQNVPAKLPWMEMVPUFTKNULJHEJCOJZIIHHTJYRSGT");
    msg.name.assign("KXOSTTHJUXXHRZCGRRDOQSEYIVCJTQXFFDMJIFQZFRIOJPQMLKDWLFCFUUUNBFHRWVTHKAEPQENUMSLPCNMMJYNRWMWGAGPLMKWWPVVHGXCOTDGHVBJTWAAGPRVIETMLKBONEYGHVYQEXHWYLIZBEVXNO");
    msg.nav_status = 128U;
    msg.type_and_cargo = 253U;
    msg.lat = 0.8549040219454064;
    msg.lon = 0.3070274479013958;
    msg.course = 0.931012101414439;
    msg.speed = 0.34621318806565304;
    msg.dist = 0.20184672259809744;
    msg.a = 0.23127581359216542;
    msg.b = 0.6423265746054511;
    msg.c = 0.8745193456805017;
    msg.d = 0.5491679246076067;
    msg.draught = 0.4568397236884332;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AisInfo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AisInfo msg;
    msg.setTimeStamp(0.9064588586333225);
    msg.setSource(12967U);
    msg.setSourceEntity(2U);
    msg.setDestination(12085U);
    msg.setDestinationEntity(47U);
    msg.msg_type.assign("BLMKBWGWOFROWJRZLIDNMMDWWTGJTNAARBPRXVEJLFJCNZPBATDOSCQUIYJUZEA");
    msg.sensor_class.assign("ZASTPVSHXUZHAIZTHUUWMNPZFDGBSE");
    msg.mmsi.assign("QSLPHWUFIKKCCDFJVSAUNBPNXOSNXAZDEOEOUPYMOJRUUIQZFUSRGBXATFZBXDWQNGMKSROLCRJDARSYWGQQOLQWQKEMEHYIXRJEIGQRTEGMXLNOFUNURFCXKCMFICLYDFZBVALPXGNYHSWHVIGJNFMFLSBJKBVCAJTXHWBSLDHMVZYUPAPTTBBYYGCJKVPORHCGDEAVZTWWKJQMTKTVHZOZHPPLWZBNEQWK");
    msg.callsign.assign("HMQFQPNRJAFUEUTQUVKSVBWFMPFQWDSBMSEAXGQYCNSZZKRRDVNWPEWYI");
    msg.name.assign("EEPKZYDGJEQSLTQEXEOJOCHRPWPNOUDRZQTTEXTFKUSDQPSGSVMAXFKCUFAYJVBNOTXRGZEDYMOTONWCOAFMHQKDBQCOTLDJWYRDRKQIUHJIIASJIMNBXRUOPGMWVUANYCUGRUKKQLFBAZHBCSQWJOHLAUZGMIJBLJNXXVVFPVWPRSDGEZHGZZYAMRXGCABVNCRZDFZSHTXWWBMIEELPIMWBBPNVVSHYML");
    msg.nav_status = 229U;
    msg.type_and_cargo = 111U;
    msg.lat = 0.6853625939894329;
    msg.lon = 0.5041473310701895;
    msg.course = 0.5437415747717514;
    msg.speed = 0.3052502204744293;
    msg.dist = 0.17508989575469291;
    msg.a = 0.7450014528550015;
    msg.b = 0.729471828355602;
    msg.c = 0.19770649577352717;
    msg.d = 0.5809405102166648;
    msg.draught = 0.04824469273533538;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AisInfo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleLinks msg;
    msg.setTimeStamp(0.5751588531255142);
    msg.setSource(10768U);
    msg.setSourceEntity(46U);
    msg.setDestination(5363U);
    msg.setDestinationEntity(93U);
    msg.localname.assign("WYVVKLIHOVABAORQXLXRVNYFLORRCUPINPTEHKDBSBPXURGZDQVVETWQTUTIYVHMPCZSLOWAWQFINCGXXBKBTWRQAJNHZVZGVIRMTHQQFHOMAUMGUELXDJGGBBPUSENSSOTSPCIBEMXZJKEVHWLQDWASXFZOXSSWIMDYMDRSYTMEW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleLinks #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleLinks msg;
    msg.setTimeStamp(0.9534833142273389);
    msg.setSource(37090U);
    msg.setSourceEntity(246U);
    msg.setDestination(49645U);
    msg.setDestinationEntity(43U);
    msg.localname.assign("RZAVUWQSZFOEZDSYWVGNEPWVRROUW");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("XCJNBDJEONMSUXWRRHAVKSEQBWJVGXNCFLIFTCHLKWXFYKZFFZJGYQMMNOPDPCLHMWOZRZKHAUPXPNOIHBZAMBYBVVQERMMQDWZRABEBXHCBRIZOXGYVTLELEJYDMQGGSUJEQKZETVRRVHSZWSSEUIGPJ");
    tmp_msg_0.sys_type = 158U;
    tmp_msg_0.owner = 5081U;
    tmp_msg_0.lat = 0.1911475579516354;
    tmp_msg_0.lon = 0.34111253308392187;
    tmp_msg_0.height = 0.9726129664125556;
    tmp_msg_0.services.assign("EVQZQEAOSOPZLEADVHCDUVCBBGHGXWZVKVJSBYNGWZZHPWMHBETTSQMSAQUMJCU");
    msg.links.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleLinks #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleLinks msg;
    msg.setTimeStamp(0.6367648123393367);
    msg.setSource(19535U);
    msg.setSourceEntity(171U);
    msg.setDestination(55441U);
    msg.setDestinationEntity(233U);
    msg.localname.assign("ELUDXPTVUTSNOKRTMQBXJDPFJBSRTLCLOBTOANVSRXGUUVDPEWJHEOAKNUKJVGELGWAODQVGYPJAOUSFVMETMWAPYFTBZOHGWQSMCJMVXEYARSKHCXEIDDBPMNFAUQPJZIOQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleLinks #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexObservation msg;
    msg.setTimeStamp(0.9046432020394742);
    msg.setSource(52499U);
    msg.setSourceEntity(250U);
    msg.setDestination(26682U);
    msg.setDestinationEntity(149U);
    msg.timeline.assign("PRTNIKZTVHCDIMPDBJCKEWTGMSHBLGYJJNLWIUPLADCLUGPNNARFDOPYRMHAHSTDOLCRQAAEBBFCQYSIIYXIKOFLKTFKDPWCWFGVWFZWMCLBQCIZYTBQQFNORDZNGJNPEXYEELZNBSJEGUVPXOSSXUHQTKKCHVUEBVAJKFGUAWMDIZXSQJMFHXDHRWUXXGUGAKSSMCNYGBJEORMRXVKHQZZBYQ");
    msg.predicate.assign("RXUBQAMPOKEZTOJWBFVWFKKQBSMEKLKFNQQZQTCJDCDNYCJORZIGRWYLWUUDSAAWANRXOLLHJSSCEQDHERYBVKNTXDPGKIPUMXBWEGRF");
    msg.attributes.assign("HQXHPAWJWMOKLJYHYBIRDCDKU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexObservation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexObservation msg;
    msg.setTimeStamp(0.4738221512577254);
    msg.setSource(58536U);
    msg.setSourceEntity(12U);
    msg.setDestination(52264U);
    msg.setDestinationEntity(89U);
    msg.timeline.assign("AOQXRYBWXMOQLMKANDNTUQKEMMSNBXYRGZXKTTODRWUVSBLQELXFUNLIIVRLHADGFWHBPPYAWTFKHIMNHMIVHNJPREHMPFSAQSCFRUQTJWIUCCPOTVXJNDRNVEIKBRGOEUVZJWFT");
    msg.predicate.assign("JRUYNQBYSJXIZMGUQZHXJYVUOPTIRQSPUJDJRIZIAJCKWPRZSXLHUVCEMNWUMGFLNIOLZITBBGCDPKGWWACITVRJWFCHPYRFZEBBKDGSPIWDFRBECXSAQBUHKUBPODLMVXDVOOLPHEXETYXFDRPTAQTVFHCWTJEDHCHMVXKGDNURGLSHJEDUKLTVLNOSAKMIEITFPKYFZAOOHRKCOAW");
    msg.attributes.assign("BLICJWYKUTAFPWJQRBFUDOCDSKOXTOOVTLTTBGPQPEPMPIGYTRXUOGLQJADSOFADXZSALWWHKKNLEKHYOKGGNLIFIBRXHZYOECNDUKWPRXBHQTHJTXEASKARQJLZNYCSZEYVVWCCOPKZEDTIFSNAVWRGIMNIAMYLIAQUVMFESFYJRUJVXCSVXOUNWZESJEXBDHL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexObservation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexObservation msg;
    msg.setTimeStamp(0.7170500985917021);
    msg.setSource(32846U);
    msg.setSourceEntity(129U);
    msg.setDestination(52143U);
    msg.setDestinationEntity(202U);
    msg.timeline.assign("QNWMZTSQVGHFBOIYNVTAUVMSUKZAKCEDMMEDRWUXOHHNDYIXLIQIHLPRVHJJCJNXUBORHZYPZBDWTEDVWQ");
    msg.predicate.assign("OQJWMYMABTIGWTNNJUSHID");
    msg.attributes.assign("PIFMQMJRRKBMWHPLROAOTSIFHIWPUHASBHKYVLWGGLYELTFFEVMICPQYYZJWASIGBNCCSNORDNTTCXBTHEJMVQAFEZLWGRRONMNVAWQJHEFKPNXFIKOIZCVDEXHBVOSKCKLCUVDDQQSEBZMYBUZSNKPCSMMOUKIKNPUTWGJAXJRFTATUZNXOBFDKYWYZUJQDNXEABYXMHOQDJJLWOQXZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexObservation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexCommand msg;
    msg.setTimeStamp(0.4022407966898771);
    msg.setSource(56702U);
    msg.setSourceEntity(204U);
    msg.setDestination(64686U);
    msg.setDestinationEntity(254U);
    msg.command = 121U;
    msg.goal_id.assign("JLUWMSEOLSMJDWVRSJECCMLKLUIBQFUMVPARNICFETQEQEMWXWEZEHAOWPDSFHRUKNOZAJKCXKYBDHVIUHJYTPTEPGTFHCHNGHPZGVDCLPNTSNEHSKAABLGVFYJMKCZBUOGIQFUMYQXSYDKQQRWOPTETFZSOVRVMILJYDXNADZGCLDOXIWXQMQJUYOX");
    msg.goal_xml.assign("FLVNLKTVLOQSGZUQJSHXCPXADJXDNDCBLTMEHYNJPBLGASXLNVGVBTHYHYMZOSHQVFTIPDOHZETNCFRADGOCJRBHVTRSKSKWSRUFFDCPIMOIEQMAKOWTQLNJDENTYAFZAFFJJMUHRCPKUISWXA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexCommand #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexCommand msg;
    msg.setTimeStamp(0.4893005372016139);
    msg.setSource(35622U);
    msg.setSourceEntity(184U);
    msg.setDestination(58249U);
    msg.setDestinationEntity(97U);
    msg.command = 164U;
    msg.goal_id.assign("OWZMEJDJHNYRLNLEQIUMAFQATAWFGPEOBWYJXTLIYAWHZKLPRVMEROQTFBYTXMVOKDFZOENDAQVPBABIPGWNKQAGVHCYMEWOHSZDPMJBUPWRBNSGLHFJCCBDCTDGITOMFJJCFPZOEYDRJAAGNCU");
    msg.goal_xml.assign("EFPCPKTFDPRCGOEJNCYNOLCHIFTJSOFTZARRENSKCZZITKHVYOLXAGUQARKYSK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexCommand #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexCommand msg;
    msg.setTimeStamp(0.8497760639395876);
    msg.setSource(18576U);
    msg.setSourceEntity(41U);
    msg.setDestination(38077U);
    msg.setDestinationEntity(140U);
    msg.command = 5U;
    msg.goal_id.assign("JKSKGLUFMZKDACXNJERBWSOZPYYOKHPQJUTDFUMIEDOLUAEYJAQPWVZKPBMPXRVRIFZFHFQMYEGSRFVPBGFAAJDWCHLKUDTXCDCCMBHIUSVYLVMORUTYEZGEYZNILFVAJVADRTSJXTCSDXBGQCQEOSGLZQHBKDIEGINNRQTMK");
    msg.goal_xml.assign("HDHAJMQRVZNWN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexCommand #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexOperation msg;
    msg.setTimeStamp(0.7294328243051665);
    msg.setSource(22749U);
    msg.setSourceEntity(64U);
    msg.setDestination(60052U);
    msg.setDestinationEntity(216U);
    msg.op = 224U;
    msg.goal_id.assign("GSCVXJAABPWONYNLOHXZDHHBXEECB");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("VVNUWYETDCYCEMUECEWQFIFZNADJPXMAOXSZMOHIARTWYDOGVSJVSQYSSLHPWDYBHGNTDAWNDIZNYPMZKBDKBMKOOBPLECPUPFZICGQWSGLFVFEMRKXQBHJXJNJTVLSCTKBPMTZSKVGTVFMIRSTHBXUWADIEQKHSGRUYTWJGQKEYYXOOGJHLPVLERCCYLVNODPUCFHFZZIJIFXUXMNEQADPKZZLCTGIQJ");
    tmp_msg_0.predicate.assign("BCNEEIQJADUKHOMXEFMQXHDHIVAMBLA");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("HFKAGQGOKTLBKQNSAWEUUOPXFLFYVKOPXYYIELTHZTMZGSHXPPDXZEIAOHYBARVDWNITFMXYRDIQQDYFJERNENFPFLDXWQMABILCBERVWAODJMHKNSKQWQKFVUNTDB");
    tmp_tmp_msg_0_0.attr_type = 156U;
    tmp_tmp_msg_0_0.min.assign("MYFSHLRZFWFAKJPTLEPVLBMROCPSKIDNJWIOLJWCVODFXOUBEQRBEYXHIMLJJZTKUGUPXYGHURTYVEGMQDHNDKKMSNOVWVFETWIDYGRBTTCQYODOLCWVAQMWUAGRECXMAJCTBMDXKVUKCXMZEGAVKNJMTZJ");
    tmp_tmp_msg_0_0.max.assign("PVQPRCJEEHZBMFCFOVJZXWAFZNZNQAXDVQLEHYAIRNWPEZQMWTQARVWRDBPECNXNUOMYRMTSJKSDTTALEK");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
    msg.token.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexOperation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexOperation msg;
    msg.setTimeStamp(0.9711630885594023);
    msg.setSource(36369U);
    msg.setSourceEntity(89U);
    msg.setDestination(35868U);
    msg.setDestinationEntity(9U);
    msg.op = 57U;
    msg.goal_id.assign("MYEFIVVWLWYDVBSZLLONFVIHAPGUSCBAQO");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("KXGFQFZUHXMNDUHTKPOXBKDWIYUMFJKSWNMZELBWN");
    tmp_msg_0.predicate.assign("BVZDDZHJQZVMNLZIWUVIMAWFXISFTWPGJQSMFBJZEJXYWMHXLLCRDPQXHUQORRPOPOYLBLNGQKJBKWGYDZQSPNUXOFQCWYRDFBGNEFKLMHHADGOWXITSNZJUDVUKHTCLEUFKOGTHVKOBUVCEBANISRADDYNEFTPCMHAZKMPZDATSGFPKUAGOSQLEVECVNPLRYOMCQSTEXWZRJIAIJAVHXPCKQSFJCMXOTBWYIBKWUTLRECVHAE");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("BTSBFDETVAHPPDJRTUURCPBCJTVACPOOZAYVFVDDWXXOMIKKTPCDJGYWVASWFSEJHJWIDXMLUY");
    tmp_tmp_msg_0_0.attr_type = 243U;
    tmp_tmp_msg_0_0.min.assign("EHKPXXVBYRDMDLIUJSGBHMKYNKZKIXDNWIQVIATARFLDRWDWSUEABZMTVCSLKAISDGWAHVWXBIJOPFWPFOXDRISYQGLWPBGRAPJUNJUIEHYNCGSCKXTZSWJCNFPTKUPOBUYCGOXQDRTWWZQYMEQTJTPHXQHUZMTZFCPMQRCQCMJ");
    tmp_tmp_msg_0_0.max.assign("UGBPTFQNCTKYSGHWAQXAJNZABSCZEPWFZRZVCFJUJELISNJYSIEWZTSLRQMWSVTHPBCHPMKTRHGSDTDQVGXLEANHEGRMQTBACDZKCAGNGYGDFWIMLOEZUHPXKLMWQOVVBSUOKEIRLUIJJWOKFQADFUKDFSUCNLYBCNOUYXXBVXMIKRPI");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
    msg.token.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexOperation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexOperation msg;
    msg.setTimeStamp(0.224783964850639);
    msg.setSource(15479U);
    msg.setSourceEntity(218U);
    msg.setDestination(2187U);
    msg.setDestinationEntity(164U);
    msg.op = 214U;
    msg.goal_id.assign("BWGNOSBKUXHHVLQYCVBCNTUFEPASYQRZRXZJGRWIYKIEHNTPLFUSFUDCRKWNOVLYQXOTKDXILEGFQGMLVYHLTDUTASYPKCEWFKZOIONWUIUFGJMXNXZRTTAUHTRRKMKMFJMYIHCEVTLVYFHBXZ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("XDDSZJKOJCOSZPKYWQMPLRIKJOWMJPVGQXZFSDFHGQUIKRJRSFFCMVXQYURVMXBLEWBXJCLOMIICKYXIVGCFKSWXHBOFJADTOKTPPRGHBQQLCWTDUSMTY");
    tmp_msg_0.predicate.assign("CXUFKUOIYRZGGZPIDTNJHOXLMDXVRAXILOSFROEDTSMPJCUPPWGHMEVNWMAQTWKZIBQWSBRXYUVAHRWTFWKDICHKNKDOILSMEEVLGCTWAJZUUDONNTAQYOHSJDPXHLXOLFOSJNHCDEPQBBHRTECNTZGKSYHRQQULIQJYVMFNKPAXXVDAUNOPPJTSMVIDB");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("NVTVSSGGSMZYOFWTNLDNOZIRQWCKLGITOEKGTFHSA");
    tmp_tmp_msg_0_0.attr_type = 78U;
    tmp_tmp_msg_0_0.min.assign("YCJRDCYXLTWIMGFXDUECUNNREVEXAGLLXQXEPNKRLHYIVEMZSLONCGPKHNISMOBOOZBBDASTLHTBIVOQKRCWIWTXFPCUJUQNYVCYRPJNIPTSOWWRQEWGJSMFJCJUVDLVHYAMEGBAQXLTFJJKWDXMEVIOHCZYOQTMVDIHHBHZDHBRAGWASWPMKPSPAUUFZSDYZNBGQZVSBKFZGTWMITXQSFOHFA");
    tmp_tmp_msg_0_0.max.assign("HXTOIHEEEMKCGAYFRNSGZBPWLALMLFALFAELNKPSNPTEDZBUAIXRCOKZTJDUMCNCQFMBKTPSYMLZWYM");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
    msg.token.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexOperation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexAttribute msg;
    msg.setTimeStamp(0.9732266953620013);
    msg.setSource(2634U);
    msg.setSourceEntity(252U);
    msg.setDestination(39608U);
    msg.setDestinationEntity(240U);
    msg.name.assign("EOJBURUMFSBN");
    msg.attr_type = 94U;
    msg.min.assign("ELVDWNPGQDFLTUMYKZMRWTRTNTNPXPSFTNHVPQBNYSABFZWNVUUIYDAEAJCNBAFJFZYE");
    msg.max.assign("NLBGDRGSFYFCHYSVEOKVWFUSGXXIUFFAVUMXDWTKHTBZSSENLTOZVTHFNABFPNTZTJYUCGLNYQSNICNDPYBBCMZXRRKFGDAMNJKIQCVMPHWUAZVRLJLCHOORSBKSNKWZPWQVIOMZDTLCWQUXLMEEMMGOBXODESQMVTIJJCJIVQJRBYJIHZNDXMOJEWVYEXDBWZCFAJPDWAYLPWXYDIRHAKEPBPQIHA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexAttribute #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexAttribute msg;
    msg.setTimeStamp(0.2065340592938606);
    msg.setSource(703U);
    msg.setSourceEntity(121U);
    msg.setDestination(18061U);
    msg.setDestinationEntity(245U);
    msg.name.assign("TYQHQMLXEBG");
    msg.attr_type = 156U;
    msg.min.assign("XBQCYPUQYFOEGWWOELETRCBPAQIJEYNOQRGAJWQFCGHLGNHDCFTFKZJKGIWMADBWVQRKYTLSPMXONFIASYMCQEKAJKSQSWURLLCRBOFDQGUAKZAWDINDDULMJIWPSJNJGERROGOVHOHQLDUXGYKZTMJNNFVBXTOACGTLVVAUPYZBTVZXUCBKXWYCDLPUXTSDVUSZIHNIHRHXBEPJRYZMRAPIBEMIFNVUEHOBJDNXEISVX");
    msg.max.assign("OZRIRXCMDPQNWOEFKCEPZOUHAUCHTWKKLACIUDCMMXXMDJHHUMALUXFYUQWSZENHCWYSBPZALGANIWTMVAJKIQDMSHCNEVDYVRJLEFZJCIIGNGGRZFLERPGORBLBSJHEY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexAttribute #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexAttribute msg;
    msg.setTimeStamp(0.4765201335376248);
    msg.setSource(687U);
    msg.setSourceEntity(169U);
    msg.setDestination(14229U);
    msg.setDestinationEntity(136U);
    msg.name.assign("YBCIBJYSMEVDDXHAZOZCGZWTZQMTPUJULSMLJLBFVEOGAWOHQEKWSXXVGPKACCSMQPMITCXAXEUFHYYFWCBRYDMRIQNVEPWEKDTJGPYNIAFSUDMETVRLJRDVUBUVHGQESKINAWBECZPIFYQTRJCNLSGWBKBMXZPNLPSPAKOIAFGHFNOPHMJSRTDO");
    msg.attr_type = 86U;
    msg.min.assign("RUMENDJPZWXBPTVLSLCZBIKCQVZNTYXKRITSABWBZUIIGCPUWLBKYRRDBSXJURGTPJVSWRERCTDOOKVAEENQCLCEVFHJXFKBXMZUFOAXVAXOIQAVQZSBDFAOYKWARYOGOMIMWMEZPMPEHHDEGJGGNYZRMYWOJKLQYNKTLMHKHFTSLZXSNJCWBIHHFFQQVWWDUJEPSMGJGPCMAONYNUGRVYXHQOPVTGZELTIK");
    msg.max.assign("FDKKPLKDROBNCZNPAFZYYFGQRPXUYYTOKSWAAPRHJPFUGCSHEERLFFM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexAttribute #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexToken msg;
    msg.setTimeStamp(0.5775610442254178);
    msg.setSource(4239U);
    msg.setSourceEntity(10U);
    msg.setDestination(35923U);
    msg.setDestinationEntity(120U);
    msg.timeline.assign("LPVNDLWZTNFLQDCVVQUPTGBLCXXHWEHOWOKRSABUYJGRARBZEHDFRUSHNLOZSLDSQTWJQWRAAULIMSGHECJSVHGBKMOMKWXCNGTIUXGREQIGVRKJNSADVTXWCKPTAUDUHKOQRJEMCBFKFUOTFYZWBDZENEHZOTNZJ");
    msg.predicate.assign("HYKMAXPBKGGJLDRMOMJWICBPFTYKPKDGQUBAOOCMIVFJIQHIULOEKKCPMERIRLUDNEWLLVRUGVYDZQSLBZOJCRWUVOPYRYFB");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("RHMNSXKTGIOBQGHTNVSVFKSVGKWNLTSVUXZBKTHOFWAHUNZRPCWEAJTYDNTSMVITZFXOCFASRKOLCUVQYEDSCYLZUHJCSJDDZJVXOGBWUYAOPAIMTPWBZILOCDYOEYR");
    tmp_msg_0.attr_type = 40U;
    tmp_msg_0.min.assign("KBYFNKKVICLIIOFVRUYQVLUSAOGZBXXNQJJNGPSQUOREZBWPJFJQJHZKCZTPQGBWHOCBFDVREVFUDOMTEKJSZTFOQASOIFXBPYQESVNRWMMCKWCRXIHHBTHQEVNLFNDOUMTYXYYZWPLTJQGEAWLNBULJCQWEDVGPXZINIRCECSLUGKKWVGAFPGADX");
    tmp_msg_0.max.assign("SNAGTORXUITMAOSXEYOGWZNDRJXPTMOBQCIQHSVBMVGGXZPJFFYNVUBPHDLJALPKJENIUTCZPSBGYXWKWVBIFTBIUKFOANDUMYLQAZCDJOVRHHNVUYWKSJWMEWHURTMRZVILLYYQASEGCISTHMLFGUOXZZHPLDWNKVJXPNPE");
    msg.attributes.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexToken #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexToken msg;
    msg.setTimeStamp(0.2937014570500246);
    msg.setSource(41718U);
    msg.setSourceEntity(194U);
    msg.setDestination(36068U);
    msg.setDestinationEntity(60U);
    msg.timeline.assign("BKSBTTSMREGZASQWGQDEJMRSYLFCGDGWPFVKKYROKRILJBDPXYXPCWPIEQAZGFUNNZHENBRXGAHFTPXZOUYVOIEZGNEMYQRQCJLBBCWS");
    msg.predicate.assign("XKLWUDETEIMQVNVSOOPZTWFTYXUBZRXBBJPLFWTUPCGWGJYNXORSMKMQZQBFOLQRLJLAUTKXAFEIDJTMAXHJFMKDHVQLUTOSZQEDBQGVPIHDAONYKWHFPXJHPGEUIWFEYLMMSCIIGHZXCCMHGFWAUAVFDNZUHKVKERCABGIDSJERAWSSHVVPGV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexToken #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexToken msg;
    msg.setTimeStamp(0.2163825510417281);
    msg.setSource(59507U);
    msg.setSourceEntity(245U);
    msg.setDestination(48082U);
    msg.setDestinationEntity(216U);
    msg.timeline.assign("MKQFMTTYWIZVDIASQDDWLXAOLJZZPSENQUCRYKQJODKPFRANAFTIXFUEEEXYMJMFNIUNVXJDCRBBELLQYPVJCUNHGPGQKILZNHHBPBGBKOCEKUWKOKZKWHTSHT");
    msg.predicate.assign("SKRLTQONMEFMKGFVYPBWXXJVXHWLPKONQARULATESDOVQNVCCHBJUGCFCZXMIHONNYSYNEETRMWKCOZEFJZROZLPWEJHUCJEGTCOMTNBDVIUQMYIPSBIWABGPNGIITKYQHPDYSZFIAPJDUUFFHTPCVNKSSV");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("CJYMRIZRLBZGQZFRHFQUMRTIZNNRXPKMUODJONWDASPSMKTTUPIFHYCKYCXIBBHKGRXRLUQQPMFSRQWTWVA");
    tmp_msg_0.attr_type = 24U;
    tmp_msg_0.min.assign("PFRPYTVNGHDKMJLWRAEAVSQZLHWQIMPJMHQXNIRGFQWREZDNQKBWKBORNKOFSSCCSDNORUMJMOQZIVBCZBJTXSXVIVXDCLJFBFXIYYHCPEYHPBKNULIGODRKJRZPXAHTEZMOMDMWSNUMIUYITWVGTLRAEADCQPUUQSGAAZEVGFFYXKTGHXIOZBKDDU");
    tmp_msg_0.max.assign("QJGWNSMNKNRECEZODFXTLJHKRQHTNRMAYEVCNRBWOJPWFPNXAMGXGVBMCYJDUXYKPBFKVXVZAGCFSYQODLXGBUGCXWNLDDQAMBKQPPGTKCRUTHKSBIUAVKSULQZNIOYLOARZRQEEVLTANJZWDBSAXVCFXJEJOSYIIPDOQGGBRHTUSJCMZIEPHYGYURLCWFPQFIIOOSIVJIWKEHTMPYQTMALEZOUUFDIPAHHEBZTZDLSWKVUFMWDCBYRVNTMXHH");
    msg.attributes.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexToken #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexPlan msg;
    msg.setTimeStamp(0.22118047268221208);
    msg.setSource(30883U);
    msg.setSourceEntity(153U);
    msg.setDestination(45821U);
    msg.setDestinationEntity(240U);
    msg.reactor.assign("CHPIGPNEWALMLXJCKJNOGAWYSINEXBFZCPZTXSNRJLHNLDKLCKTNYWRQIKZMKSKDZCKFVOECRPUKAZNPQVSFBTGTXHYRNHJIGVJIQWVBGVVTMONIROBBBGDEUUDWQUJ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("UNHLWLOPJFZOWADRE");
    tmp_msg_0.predicate.assign("SYCRXAGKEMZFOTMUYJYJKNHUWSLMUBGVLXBWXHTQKTABUQOTMNZBEQPXZDHGCLNGMAMH");
    msg.tokens.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexPlan #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexPlan msg;
    msg.setTimeStamp(0.45921240633339344);
    msg.setSource(4884U);
    msg.setSourceEntity(62U);
    msg.setDestination(21924U);
    msg.setDestinationEntity(203U);
    msg.reactor.assign("PUNMBLTAPHPUGIKGZBMIVDSWXTOTHDLAMQYCACOXECEXWCJEWZNVFOBPGBSAZCMRXJZTNRJBJPSKBMGQLBEVDGJPNKIITGESULJFBOQSLTAXZMKRSUFDCPTTVUNYFMEITHVFXANHWEPVIKJCJYHXHVWFYQDYWSCDSQLJNDRW");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("MNSMRAEBZFQKDCXJLAEEWQLQEKMLGWDFCADAYJENLPOKTUVFRTSGQUYPPXUPUHOKIUXILWJAEZLNGMOPGP");
    tmp_msg_0.predicate.assign("ROVAOYWLJQHODQQOAHCRMKRLNDGCPCDWCZESDTOJCSYKRLXZMLMPTZQBWEMIWFOJAAKGMPVXNUAXSNFMDFJUWUEZVNBHOEJTVELAECYNTPXQHXPYGSTUPJBVAZVUQWTNOVVBSGER");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("JOFDWPGYGHULVKZQIUZDXGAPZNMHKAQNRRSWEEEJYIPTOYQRQIQPKTSYEUEATVKTPXICQMZEBBWYCCJOWPLXBRHFJPUVUCEMDSGEBLRGZONOJQREZXCNHQ");
    tmp_tmp_msg_0_0.attr_type = 169U;
    tmp_tmp_msg_0_0.min.assign("JBLQYJPGFTEYYRGURYEKZAABPZMGHOFZPPFKAKWXRPODKAREUIJNDQYHLINJSQCKEMXQIFFNHEPRMMSHCMKBTGQNTJVLHPVOMMRNYDOEFCPYKZOHUQBUVJOLETQGJXTTCWGYBDBDKCXIDJKJXYZLTSXUWPUCJAKMFXVDFISXFCGPWOICSONVZAAVIYBQANXRUNXMEILGNLSHHRSZUWETOWBETQUSCWDVGAQWLARZUVDZLH");
    tmp_tmp_msg_0_0.max.assign("AZNNXQLDTWORNCHVTEKMGRCIJSZEQEWTJOZOLRKIDLUSJUKWLNHJBINRDXJEOQPOAHLYMIGBNVSWUNLCPGRNGMYGTUHVVOQFMXLHYTIBIFLBIPGUJPFMWIVJEBEEKMDVHZUYZPFQQVPSIEOYJHVQQTDKSPZCMFWPVXCGZABDZRDRYHFPX");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
    msg.tokens.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexPlan #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexPlan msg;
    msg.setTimeStamp(0.21143710978429842);
    msg.setSource(44637U);
    msg.setSourceEntity(14U);
    msg.setDestination(40703U);
    msg.setDestinationEntity(220U);
    msg.reactor.assign("KKYRSYTHKAHVBJWVWRWDYFCTNYLFHIDDBSJMAQSDLBKYBQQPHUKPUBQKZCCMRFPENIVRZZAEXANOCDDNJPWKDOAZUAIOBQGVSLMZIXWOVNCMUYELGOXEJYBGCFYHKMYMJIPLETGJLOFTCPIRNXZBIRSZXAZQUJKIQJRQNPYKGGSUND");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexPlan #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Event msg;
    msg.setTimeStamp(0.798441519327782);
    msg.setSource(11788U);
    msg.setSourceEntity(6U);
    msg.setDestination(41388U);
    msg.setDestinationEntity(61U);
    msg.topic.assign("NONHPZQHQQDDWINRMAUFGMKIRIRJXLEVHGDPWYFVTABOMFNJQUNPOOUYUZCZPBMQLCETIQXTBDTWEPWZSAOIATVFBSSZSJBVMGYIFNLAYIGSSQCBKCCBLCJUDRPLJUVAVZWJHPWUNCEDMAZFOLKXEXYIHQRQSPFNJTOLCDYGYHQBYADXRFZKEWKFMCLKUWWTGXZIGVWYYFHDMGCKRLJOROEURNKNIGSPZEUSPXLMHHVBETJBDGSXKRX");
    msg.data.assign("TFNPQGLOQDOCCVGMDMCWPAUHKYLPKTAAFIVHQNUBUKRGZJAOMTGYMSCJWWVIYFNCDIJPQSDNZVJRBKQONWSRCWCBVX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Event #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Event msg;
    msg.setTimeStamp(0.528691919576291);
    msg.setSource(40683U);
    msg.setSourceEntity(123U);
    msg.setDestination(18697U);
    msg.setDestinationEntity(200U);
    msg.topic.assign("XWYOABCAWPRNFBETQHSHHKGOCNPOELYPHQCHEQGAYXIYOJWNIMNEWAQUJFUDPMKVYXENNSTMBZBIKCWTHRDVHGZDBZSTMOFFDHYTLERENKIXUIHEKFMZLJVVWOLCIITZPZCJNGLMDEKYKJSSQPRRZAAUTBFXPFBSWRPNGULEQTWFQJLKFZQGGSZRVJGUBOMQASUGRGHZWPWIJLYDXXVCJUVJCATUOQRYSV");
    msg.data.assign("IXXSMCOLGINDHN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Event #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Event msg;
    msg.setTimeStamp(0.4200711110600822);
    msg.setSource(60406U);
    msg.setSourceEntity(87U);
    msg.setDestination(26439U);
    msg.setDestinationEntity(57U);
    msg.topic.assign("ONAQQWHCDVMPBAJKZFIBNTHELMDRMRSBZLHSIBONXVIACNGPGJLQ");
    msg.data.assign("ETJMRTHPBMALW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Event #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedImage msg;
    msg.setTimeStamp(0.5766051957566548);
    msg.setSource(37839U);
    msg.setSourceEntity(48U);
    msg.setDestination(42534U);
    msg.setDestinationEntity(150U);
    msg.frameid = 92U;
    const signed char tmp_msg_0[] = {-63, -112, 5, -114, -9, -30, -64, 21, -12, -110, -21, 117, 7, 50, -107, 38, 41, 106, 107, -120, -109, -42, -123, 69, -50, -105, -117, -47, 74, -27, 78, -100, -11, 115, -30, 58, 50, 88, -107, -112, -67, 44, 123, -107, -118, -53, 66, 87, 63, 104, -11, 96, 74, 65, -78, 41, 116, -19, 95, 14, 39, -32, -87, -7, -90, 96, 31, 6, 73, -111, -52, 9, 104};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedImage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedImage msg;
    msg.setTimeStamp(0.29740839242039163);
    msg.setSource(56447U);
    msg.setSourceEntity(251U);
    msg.setDestination(56677U);
    msg.setDestinationEntity(124U);
    msg.frameid = 237U;
    const signed char tmp_msg_0[] = {-37, -68, -46, -58, 123, -10, 48, -7, 89, -39, 48, 89, 34, 118, -12, 31, -56, -27, -99, 58, 20, -89, -44, 18, -91, 43, 120, -93, -98, -25, -86, 85, -6, -87, -115, 23, 94, -124, -81, -67, -27, -115, -44, -101, -42, -55, -21, 9, -26, -116, 15, 106, -103, -26, -94, 44, 73, -45, 20, 9, 113, -50, -37, -113, 24, 27, 101, 90, 100, 91, 116, -42, 105, -117, 93, 86, 81, -122, -119, -86, -51, -41, -21, 32, -110, 97, 92, 119, 50, 4, 19, -55, -107, 103, -3, -120, 126, 111, 99, -25, -125, 90, 111, -56, 106, 115, 27, 76, -3, -11, -96, -34, -81, -15, 8, 96, 54, -75, 77, -12, -77, 22, -126, -91, -54, 5, -11, 40, 8, 86, -44, -50, 107, 114, -118, 8, 31, 73, 46, -128, 68, 23, -116, 75, -88, 24, -36, -65, 48, 105, 20, -43, -23, -11, -105, -52, -81, 89, -91, -56, -38, -47, 76, 28, -98, 94, -69, 2, -112, -37, 85};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedImage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedImage msg;
    msg.setTimeStamp(0.2475893079293141);
    msg.setSource(42261U);
    msg.setSourceEntity(202U);
    msg.setDestination(32175U);
    msg.setDestinationEntity(70U);
    msg.frameid = 100U;
    const signed char tmp_msg_0[] = {96, 17, 61, -55, -39, 99, -42, 92, 11, -114, 93, -70, 38, -88, -4, 74, -37, 38, 8, -49, 115, -44, 114, -77, 34, -68, -34, -25, -116, 117, 104, -51, -59, 77, 43, 33, 76, -10, -9, -39, -35, 105, -74, 84, -34, -58, 30, -80, -22, -90, 20, -50, 110, 107, -118, -43, -93, -70, -56, 86, -65, 18, -27, -5, 106, -47, 111, 23, 1, 53, 64, -56, -112, 70, 60, 12, 85, -100, -84, -3, 96, -39, -123, 26, 116, -126, -51, -94, -37, -65, 83, 89, 78, -28, -114, 117, -77, 26, -93, -125, -92, 104, -39, -74, 21, 100, -73, -51, 14, 89, 25, 27, 38, -8, -86, -11, -109, 92, -83, 99, 16, -44, 75, 102, 50, -47, 42, 5, 67, -106, -8, -63, -101, 29, -41, -60, -9, -46, -47, -11, 59, -97, 92, 118, 103, -65, -117, -128, -102, 32, -58, -114, 77, 45, -22, 113, 14, 1, -31, 86, -35, 17, 68, -100, -67, 83, 122, -4, -7, 101, -116, -48, 111, -107, 123, 84, 94, -13, -118, -125, 36, -40, -128, -51, -3, -44, 56, -49, -45, 108, -16, 69, -7, -4, 15, 115, -73, 20, 90, -36, 34, -6, 15, 56, 115, 73, 95, 83, -12, 14, -108, -124, -64, -44};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedImage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTxSettings msg;
    msg.setTimeStamp(0.43685038963458733);
    msg.setSource(28727U);
    msg.setSourceEntity(72U);
    msg.setDestination(18256U);
    msg.setDestinationEntity(43U);
    msg.fps = 211U;
    msg.quality = 77U;
    msg.reps = 147U;
    msg.tsize = 96U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTxSettings #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTxSettings msg;
    msg.setTimeStamp(0.5842927179892392);
    msg.setSource(16349U);
    msg.setSourceEntity(134U);
    msg.setDestination(18832U);
    msg.setDestinationEntity(58U);
    msg.fps = 88U;
    msg.quality = 79U;
    msg.reps = 162U;
    msg.tsize = 101U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTxSettings #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTxSettings msg;
    msg.setTimeStamp(0.7731666766618501);
    msg.setSource(30855U);
    msg.setSourceEntity(238U);
    msg.setDestination(11817U);
    msg.setDestinationEntity(190U);
    msg.fps = 61U;
    msg.quality = 67U;
    msg.reps = 151U;
    msg.tsize = 12U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTxSettings #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteState msg;
    msg.setTimeStamp(0.7501259765093354);
    msg.setSource(59021U);
    msg.setSourceEntity(176U);
    msg.setDestination(27168U);
    msg.setDestinationEntity(12U);
    msg.lat = 0.5052745459049751;
    msg.lon = 0.8565967164767331;
    msg.depth = 142U;
    msg.speed = 0.5539043248034965;
    msg.psi = 0.5206764523761827;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteState msg;
    msg.setTimeStamp(0.611902544640473);
    msg.setSource(27696U);
    msg.setSourceEntity(226U);
    msg.setDestination(29055U);
    msg.setDestinationEntity(186U);
    msg.lat = 0.799634336128785;
    msg.lon = 0.4927845163963287;
    msg.depth = 173U;
    msg.speed = 0.16923420503017006;
    msg.psi = 0.9099938559974752;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteState msg;
    msg.setTimeStamp(0.4358233248921243);
    msg.setSource(12740U);
    msg.setSourceEntity(55U);
    msg.setDestination(21142U);
    msg.setDestinationEntity(4U);
    msg.lat = 0.004817568650835602;
    msg.lon = 0.8701764182024995;
    msg.depth = 111U;
    msg.speed = 0.9828501092818475;
    msg.psi = 0.9252579372102245;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Target msg;
    msg.setTimeStamp(0.13131446313771145);
    msg.setSource(28007U);
    msg.setSourceEntity(50U);
    msg.setDestination(227U);
    msg.setDestinationEntity(14U);
    msg.label.assign("DDCXEHMYEXQKZVOHHPVADYHUMCSWTEVIHYSFMPYUIQVEONRDTXRFFBRWFZDONWTEBWDHUZNYEMTCSAQIGOUCRQNZSCKKKIAVCJIBBJPJOKXLICFQIZRAMEMRVGCPHEBM");
    msg.lat = 0.1896047960432553;
    msg.lon = 0.8230755353847745;
    msg.z = 0.012827769026880875;
    msg.z_units = 207U;
    msg.cog = 0.31183388745961993;
    msg.sog = 0.21911203155404957;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Target #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Target msg;
    msg.setTimeStamp(0.0930369825106695);
    msg.setSource(63636U);
    msg.setSourceEntity(218U);
    msg.setDestination(4153U);
    msg.setDestinationEntity(216U);
    msg.label.assign("UZIKXIRPBBTBOVMUFDJEKHNSWLNCCCMTNEHAKGLKXADPCHWTPRHKEFYWEFUEWHLNJIFOUYQTZMXCPOJQAQGFIYOJIRQRPTQSTLCWHSYRQMKGUNDNFUDXVRYYUPLPJUOAPOSFWIVQMDXXTABJZMYDKOJLADFGSIQJZMJKSFBXVZFMDIGSITEGZWPBTOZRGMUDQZHSVHSBYETHBIWEVARALR");
    msg.lat = 0.4519740709609861;
    msg.lon = 0.8631073376033022;
    msg.z = 0.08905652827060184;
    msg.z_units = 113U;
    msg.cog = 0.30082390971171213;
    msg.sog = 0.825684935838283;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Target #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Target msg;
    msg.setTimeStamp(0.4335159095862424);
    msg.setSource(53649U);
    msg.setSourceEntity(140U);
    msg.setDestination(14332U);
    msg.setDestinationEntity(190U);
    msg.label.assign("EEWAVVTBVXZIQXOPOGM");
    msg.lat = 0.9199452990968038;
    msg.lon = 0.4644489595892438;
    msg.z = 0.7700447416891267;
    msg.z_units = 153U;
    msg.cog = 0.11219389302026617;
    msg.sog = 0.23403821575125217;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Target #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameter msg;
    msg.setTimeStamp(0.04780943914566138);
    msg.setSource(39957U);
    msg.setSourceEntity(213U);
    msg.setDestination(49333U);
    msg.setDestinationEntity(105U);
    msg.name.assign("WSIOTDIMXMBUYOSYWNQVSONDHKFUECLPAJPNYAKCZTOWHZSFKCGQNIOFCXRNUUGEN");
    msg.value.assign("YIATHOPLNYBNMHUOFPXMRWJIORHQBMDNPUEPXHFSZJHKLWTCRYFLUWHZJKQJBNVSTEIOPAMGWLGALQMUTACSQQXWFFYMSRBXDNQGDPGGSBLDVXQVJVAAZTRUKIZDSXJZNXBUVNIWRDPCOKXFELTVEZHKIOTZOUBAENIFVONNMDRYXPYJWRQKETEPCHRYPSUWLVVWFWEGZFVISGQEZUCCDAMIBMZLQKJURIOCCJYFA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameter msg;
    msg.setTimeStamp(0.348010295388821);
    msg.setSource(34922U);
    msg.setSourceEntity(60U);
    msg.setDestination(6239U);
    msg.setDestinationEntity(112U);
    msg.name.assign("XWFWGQXRKWMBFNSVOHBUTZOPZAPCOPVFDXIBJMKACBSWWZTLRUMRWRSSUGNIJM");
    msg.value.assign("ZKQJYNZJAVGNESLUTRNVDKQSRMFNBHJMVCIYFGEYFTLOZMAYWJXLQWQBIJGOXQZRIZUVHWMXYIRFVSCHATAJEWMNHTKBOJWUACATSOG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameter msg;
    msg.setTimeStamp(0.022393288715700788);
    msg.setSource(52654U);
    msg.setSourceEntity(12U);
    msg.setDestination(30663U);
    msg.setDestinationEntity(131U);
    msg.name.assign("ZKNHFOKXENSSTLRJYPLRBLUJIDYMGGJVMMBAYKNXJNBEDNJKPIJWLTRHDSIQXFDTVGHYGMTAECSAAPFPPWMBCRMTPZWJNIOZVOVWNUEEEXDBJBEYANLKQJNLOXGAOWUXQOIILDRYRHFDGZCWQWQHUOCCVYHZUTTVVUSICFKXYQETKODKQFFIHMSFZRBSLCGYZBRMN");
    msg.value.assign("ZBAXVEWQEVPUROPEVXGQLJBGXQWISWWMJUSDORQVGAMZBIIHYREJSTTVUPWNYUHLGYWABFPTUNIAXVTBHXJJGEGPJUQGJMNIDNLSMCHKFFYLTXH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameters msg;
    msg.setTimeStamp(0.7641355858794827);
    msg.setSource(47115U);
    msg.setSourceEntity(223U);
    msg.setDestination(18235U);
    msg.setDestinationEntity(26U);
    msg.name.assign("ICLLRSSAKABHAEGJIITMBLFMTAHAWEVVGDDGCTMKLUNAJVDEWUBJVPPOSEW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameters msg;
    msg.setTimeStamp(0.028047025932647518);
    msg.setSource(35661U);
    msg.setSourceEntity(47U);
    msg.setDestination(42326U);
    msg.setDestinationEntity(163U);
    msg.name.assign("FYSGFUJMRASPCOHTJDJTXYLQWQOBUEGNMAPMPDFGQRTNXIKRDVKWRVXOOZNTLHJECJIXQUSCDKAWQLCSDQMJEILTNONNLSCINQZEEKUUZZMEAZMFQJDHNPYSXJGIFXVSUOKFAHBICCGLVWSAKZLWOBWGLOZTIKHZZCDVLWFPLBBKYPQFVRWXUXSTBMBHVAGICVRGYDQJZDSTNIYHODYBUHUPVCWAGOAMUHPKWXYGEJRYHMV");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("WDIEAYNCEQXYEPFPLRNOLTKSRPAIHPERNJDMARVOJXKNVYQZDTAZKJUBWBZLKUJJMHUWBTVJEXVBAVRWQMRW");
    tmp_msg_0.value.assign("JKROUUENHDNVAQDPLGZVAKIZGHKKAHFFJRTTENPFYX");
    msg.params.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameters msg;
    msg.setTimeStamp(0.15940761869915931);
    msg.setSource(61390U);
    msg.setSourceEntity(24U);
    msg.setDestination(36224U);
    msg.setDestinationEntity(228U);
    msg.name.assign("ADAFNOIUSUKZGPHRTZBMBNXYYTYWKSTAUZOTNZLWABHMCKBWNEFJLCXJQFCMTZRLWHDJKLQRVMGTXKHCPDBSERGONPIQNM");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("PCLQNJLTDNNQATOHMUVJPSXQVPPQVMBRFTOBOX");
    tmp_msg_0.value.assign("MFHBZWSHERDMWPZLBUXBTGHJKYGORQUMZJAGRCLKGNWPXGWHUXBTOJEKULXCOVQKFITQCVZHHUTAVYKMOZHPNRZNPSFOEJEMSLOANTLUDYELFNGNIJBQIWSCLJKYXRFDQIGYNCBERHXVSLUPZBPPGRVTMSHW");
    msg.params.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityParameters msg;
    msg.setTimeStamp(0.5836729765616402);
    msg.setSource(33614U);
    msg.setSourceEntity(66U);
    msg.setDestination(11518U);
    msg.setDestinationEntity(220U);
    msg.name.assign("YDYTIHELWPQIRJOYQAQQURDWJATFGAPOQ");
    msg.visibility.assign("ZATJUIWSGPGEAVQXZCSPHBPUVKBNYRPMHEKNZUPCPJJCQQQZYVAXUNUPQANXLSCRMKVMGDZUBWPCWENLWDKUSXYXMAKTTYLLIVRGHYHWJFUYMETVJBGLFZTJVDKOFWSWRIMUNLVZXBAMCHFNGTORREOZMHJLIHYKODOOIYOQILMTOVIIWRAFPSGJWBISAUKFVGENX");
    msg.scope.assign("MNJYQBSVIXJCICHQBXJBTJRZHEPWVHMWRGFTNZVTZXQKXMLQIONSNAITKFMNLXIRGHVGLAQYGSAFBFDBRJLWEOJXMUKQDROWYVHFTXSETYSUCPALFQELVPAGIYWSEBTBMGGFNHTIURCKNKYLCQVDMKHUMNSAWWLAPEDHMWGOPEROWDBKCELAVCHAD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityParameters msg;
    msg.setTimeStamp(0.8799137309970533);
    msg.setSource(60254U);
    msg.setSourceEntity(246U);
    msg.setDestination(63613U);
    msg.setDestinationEntity(151U);
    msg.name.assign("GKEDDCEHUTGKCXOHAEBDJCHLVTBODCQWRBTYUEQWIJNNYPXHRTWNZUSGPHJRZKFAAEYLXYWZIFVQHECHFOSROZINFLKOJLGYBRKVQSXZINMPNIOMWAVJZSTBIGQCLJDSKHSDMKXQYWFC");
    msg.visibility.assign("KZXJYVADCBVWTCCQXKZIANPGNGEKSVNDKOIKIXGHQRAXSUDWNVFYUHFKCKYGMDWORIBDEXVEGTLBUZPSSFDGCLWQWNQWSTSDMXQKCRCLREFDPQBUQGVRIN");
    msg.scope.assign("XPIRJEULGZHLRAVCUGVNHLXXJZGPKJHAGIXISOBLHZPYFTESATQCLGJXRORIYKDUTFNNTRBWWECLWUOGZHZOPSZDJBGPKPBAMOZDMQWCDAPVNSBVIOCDFEKTRCQETQKUYMMGAFQSXQAMSXARLHLKENQSWPBKENSTMWNBZVKDAQZVVGUTFPJOICXJUJVGHHUYOYMSFRFMEDQNAPVO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityParameters msg;
    msg.setTimeStamp(0.38389890327080145);
    msg.setSource(55204U);
    msg.setSourceEntity(244U);
    msg.setDestination(39052U);
    msg.setDestinationEntity(191U);
    msg.name.assign("WZECYLZCVPXSRWFCPCJPELCQDQIMWWDJTWUZHGGKONNSITGHIJWUQEFKOQBPMLHANGAYRRAQTTWEBIKVIUOUYKVZNCZLVSEWZLMKGFPLIIUSQRDDXPDRJXIZVJAOYJCSSLETMHJBUYUVYINFBYXMXANQRSQ");
    msg.visibility.assign("MGTWGPRNKDLZLXWJJGFEDBVUJXJOJHCVSDODDMOPONWLBFKVJYTQSSKZIUDSRMVMNIERHTCQUVISFQSBRDYBBKVRDBZHUPEFEAZZUQCAYBVIXHOAZUXCOAQEWYUVNCK");
    msg.scope.assign("AMDLHBVLKSZYUTWWKNANPJVQRUXVJJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetEntityParameters msg;
    msg.setTimeStamp(0.25469176714845854);
    msg.setSource(49048U);
    msg.setSourceEntity(163U);
    msg.setDestination(48171U);
    msg.setDestinationEntity(30U);
    msg.name.assign("YZTAPWIGTMCCIOIEFELWFUHHSPAQRCLJCLHRGVKANDGVTBRSXNUKRLMYJBTFQFPMEBYIJQWQXASPAPAXNJCUFMCMJGPSNZBDZHXDWCIRHUDNVMWQKRFTUUZYXWDNISZFEQCOYZVUOANIATARZMWWEQPLGYUPGVXRDDOFMKEZBVHGCDBJYJYIZKYH");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("LJMPCOKGZRAKCRQVRPFJIVLQEDYVHNMCEFWNJDDHXGOISDBPEAMULGMGKWXSSEOKMLXNUKBYZTWSYCBBBUUTTVROMRAOWEVNAOVZWEQAAGPTRTDCJMHRFLWJAGPZKCOJBXIGBR");
    tmp_msg_0.value.assign("YKXUXCNTRVRYGIETEDVAERVSIGHZGUGHVPEFSZPBFAUJJNGFMFAMMISMZVOKXITDDGORTLWULMIFRTUBVUONHVQQKEJPKAHQDURHJSLTRZJHYBLMXBWWJCSLHXQWFADRHSAJMYNLEOWCCDTABPTSKXXNB");
    msg.params.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetEntityParameters msg;
    msg.setTimeStamp(0.5188323097274332);
    msg.setSource(30242U);
    msg.setSourceEntity(236U);
    msg.setDestination(55343U);
    msg.setDestinationEntity(154U);
    msg.name.assign("YUYUMNAMXSABMKVOUVNJIUKAOOZDCSIXBIZUPMBIFCMJEPNBJCQWKRYDAUMDYXJQRHWWFQGICJWNBYCTSIIWLHLHLVAHORTMHPDEKVGANSVJVUPODGHRREEUPQHGKPWXKDONGWKNCIBTLXFYYLWAEEPLZSUYWTPQBGHZGRQRHZDQPKQEVCFAXURNVSNFXCSOPLAFSJHEYEBLBSOTXRJQGDVMRMFWBZGONQJC");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("WZOKGTNVFSEKLCPQWOPHOVTVTETXJUZBONJAMNGIWIJDBIMRYSCXRYPXEIOCKGSYJTFEFNAOMCIBWUDSVRFDQSHHEAIVBJD");
    tmp_msg_0.value.assign("EDSNIQRLSARGRUYAUV");
    msg.params.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetEntityParameters msg;
    msg.setTimeStamp(0.5822054946272924);
    msg.setSource(57965U);
    msg.setSourceEntity(120U);
    msg.setDestination(31179U);
    msg.setDestinationEntity(181U);
    msg.name.assign("JIBKNOWEDQWULMGVEXGOCNFAHSNOLGGSSNTCPOCCQEIHHZQKHHMRXJBGKXLVFMOYNHAINVTXXBHWBJTMG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SaveEntityParameters msg;
    msg.setTimeStamp(0.30193487841167177);
    msg.setSource(50349U);
    msg.setSourceEntity(103U);
    msg.setDestination(9134U);
    msg.setDestinationEntity(107U);
    msg.name.assign("FWXDKNJYYMZZEHXBKEMSOHOUQXZFECZRUZZIRIJBPKJSQKOWLNHNYGUHTRJTPCFOHPVNXZXQVRRUEIWQENFOCQKMCRSPZIHYWFVKCSMLKJDPBKAWWRD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SaveEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SaveEntityParameters msg;
    msg.setTimeStamp(0.7201555821735534);
    msg.setSource(12810U);
    msg.setSourceEntity(170U);
    msg.setDestination(58198U);
    msg.setDestinationEntity(85U);
    msg.name.assign("HPBHCLQHJBUUVIWHFNUQGODPSICSJATZX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SaveEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SaveEntityParameters msg;
    msg.setTimeStamp(0.48773888113926733);
    msg.setSource(22064U);
    msg.setSourceEntity(96U);
    msg.setDestination(42956U);
    msg.setDestinationEntity(247U);
    msg.name.assign("NFBPJLPIGQXOYUAHRDZKYAKQPMCRQNQSIBEPJQWYVAXPCOFPUMJVNFBVBOJYMCHMRZMJSVTNTSRQXXMZOTYHHVHBOCY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SaveEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CreateSession msg;
    msg.setTimeStamp(0.4222339314615082);
    msg.setSource(53370U);
    msg.setSourceEntity(117U);
    msg.setDestination(4846U);
    msg.setDestinationEntity(242U);
    msg.timeout = 2604708189U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CreateSession #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CreateSession msg;
    msg.setTimeStamp(0.4053279665922912);
    msg.setSource(49192U);
    msg.setSourceEntity(8U);
    msg.setDestination(50720U);
    msg.setDestinationEntity(107U);
    msg.timeout = 4065230667U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CreateSession #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CreateSession msg;
    msg.setTimeStamp(0.13240348180666217);
    msg.setSource(1238U);
    msg.setSourceEntity(42U);
    msg.setDestination(62346U);
    msg.setDestinationEntity(206U);
    msg.timeout = 2167314562U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CreateSession #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CloseSession msg;
    msg.setTimeStamp(0.5902079582786115);
    msg.setSource(2650U);
    msg.setSourceEntity(148U);
    msg.setDestination(44308U);
    msg.setDestinationEntity(224U);
    msg.sessid = 3621077631U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CloseSession #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CloseSession msg;
    msg.setTimeStamp(0.27180715108700726);
    msg.setSource(23729U);
    msg.setSourceEntity(225U);
    msg.setDestination(42382U);
    msg.setDestinationEntity(26U);
    msg.sessid = 1724851895U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CloseSession #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CloseSession msg;
    msg.setTimeStamp(0.21316140675384254);
    msg.setSource(52965U);
    msg.setSourceEntity(250U);
    msg.setDestination(44428U);
    msg.setDestinationEntity(118U);
    msg.sessid = 1849984914U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CloseSession #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionSubscription msg;
    msg.setTimeStamp(0.3554146065659627);
    msg.setSource(42544U);
    msg.setSourceEntity(213U);
    msg.setDestination(62884U);
    msg.setDestinationEntity(180U);
    msg.sessid = 1554381263U;
    msg.messages.assign("XIASOWCPEXMQEVBXGCLMWGSOCPAHRKRFZFLODKDIXVYXUHJUIFWXTVQAIDFCVSVTRHTZNSHUUVPNDQYBRNTWMZXSDTDGFDBVCQYENMNKWGWYUEQESDRGMXDWZCIJQSSULTYPVYJDLUWASEIOLVMPAARZUMBPQHKWGXBLMHLFJGNCKPZTZMWQMKLBLVKTIEGAJYBQINAOPHFCZLAKRKTOPINAYOOYHSEQEZPZHFRBGOGJCUBJROFJCH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionSubscription #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionSubscription msg;
    msg.setTimeStamp(0.7303635123639984);
    msg.setSource(16851U);
    msg.setSourceEntity(137U);
    msg.setDestination(38296U);
    msg.setDestinationEntity(252U);
    msg.sessid = 717143829U;
    msg.messages.assign("LSAHHUPHPMVTIECOQSUVDMVPRJERGYFPNZEIMTGPFCKROIVCXQRUVNQUCCYTBVTLQEMZBKGFAXXHSAGRNKVDYYCHSBNLVBIDSULQRFFRAYWZTFOJRUKEWODRMAJMOSSQMEJAOKYIBNWFEHQMGETDWDWAFZVMBQXJCULNHACQDNOZLLBUHMEJPILZAGXZKUEIDTPXGFGOJWWXKIHDKF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionSubscription #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionSubscription msg;
    msg.setTimeStamp(0.6307091500949112);
    msg.setSource(9947U);
    msg.setSourceEntity(223U);
    msg.setDestination(53897U);
    msg.setDestinationEntity(44U);
    msg.sessid = 3613225725U;
    msg.messages.assign("UOGDRCKBAZOGQEADIRDFQCICLJFVVQHVZSACGSOTXRPWVTOYHUMPEBPKKEKQXLRBYMMYYBBSOHDJRCNNZNLUTVDSWEIDVPYVFUXNTJQWGINWARJXAXONFEHORAGRUQSMFWCYFZQRWRSMAIOZFMXPQBCJZYXZZJQKUITIHXOUFTINEDSKZA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionSubscription #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionKeepAlive msg;
    msg.setTimeStamp(0.7195273160662343);
    msg.setSource(28587U);
    msg.setSourceEntity(114U);
    msg.setDestination(25460U);
    msg.setDestinationEntity(223U);
    msg.sessid = 1944482490U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionKeepAlive #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionKeepAlive msg;
    msg.setTimeStamp(0.23563673271322083);
    msg.setSource(45645U);
    msg.setSourceEntity(215U);
    msg.setDestination(27299U);
    msg.setDestinationEntity(85U);
    msg.sessid = 1562981321U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionKeepAlive #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionKeepAlive msg;
    msg.setTimeStamp(0.06936961435419631);
    msg.setSource(59469U);
    msg.setSourceEntity(244U);
    msg.setDestination(35753U);
    msg.setDestinationEntity(170U);
    msg.sessid = 594347902U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionKeepAlive #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionStatus msg;
    msg.setTimeStamp(0.3388081987863655);
    msg.setSource(48136U);
    msg.setSourceEntity(185U);
    msg.setDestination(21491U);
    msg.setDestinationEntity(54U);
    msg.sessid = 128880227U;
    msg.status = 250U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionStatus msg;
    msg.setTimeStamp(0.1178063889019696);
    msg.setSource(38238U);
    msg.setSourceEntity(58U);
    msg.setDestination(26188U);
    msg.setDestinationEntity(40U);
    msg.sessid = 2658839343U;
    msg.status = 6U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionStatus msg;
    msg.setTimeStamp(0.902427022519487);
    msg.setSource(31566U);
    msg.setSourceEntity(184U);
    msg.setDestination(39856U);
    msg.setDestinationEntity(136U);
    msg.sessid = 1223561908U;
    msg.status = 182U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PushEntityParameters msg;
    msg.setTimeStamp(0.840835364242074);
    msg.setSource(50675U);
    msg.setSourceEntity(105U);
    msg.setDestination(15398U);
    msg.setDestinationEntity(184U);
    msg.name.assign("DFSXMURHTCPODHUUWBG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PushEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PushEntityParameters msg;
    msg.setTimeStamp(0.19476149104351348);
    msg.setSource(27077U);
    msg.setSourceEntity(148U);
    msg.setDestination(44558U);
    msg.setDestinationEntity(148U);
    msg.name.assign("WEQQKJUCHMBZMONNSUASWHYGHZNXDVYBBIWBQQORIPIKLVCXALYWBWIDGMZQSQDGFNQEQRYIAXXAGMVRXRJFVMFARZMEXHLZKLHELOTCLFTJYPWSXPEFQUFESCRWFZMIPTTUOKDACRKSPHUZGVBETEEVSHDHTPZVGMIYWLNYIPDCFSGOBBJSUSVRA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PushEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PushEntityParameters msg;
    msg.setTimeStamp(0.563378285076844);
    msg.setSource(40458U);
    msg.setSourceEntity(31U);
    msg.setDestination(43994U);
    msg.setDestinationEntity(121U);
    msg.name.assign("BYVENOKHQFKSHGCAUXPQWDXZUEKXTHDORJTWLJYFAARMBCXAFSWS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PushEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopEntityParameters msg;
    msg.setTimeStamp(0.8398131518225657);
    msg.setSource(711U);
    msg.setSourceEntity(219U);
    msg.setDestination(43901U);
    msg.setDestinationEntity(169U);
    msg.name.assign("JQGSPLIHEHQJJRZPDCCNNWOQLVCIXSYGDFAAVUAQUKCIHOBYRUIAXLPDOKRSXRLTMJBCYGJWOFKSDDGKAEFMESQKGRHJDWXTISXDMMTBQBSEWGVIEZZPZHNPCWDN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopEntityParameters msg;
    msg.setTimeStamp(0.3482508920800481);
    msg.setSource(4413U);
    msg.setSourceEntity(25U);
    msg.setDestination(19599U);
    msg.setDestinationEntity(4U);
    msg.name.assign("CSMWZEUQGFJZKNRQEQNRBRKHIAPCWPLSGFRLMCZDLFNXKUISGSVDPQTCASDFCMD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopEntityParameters msg;
    msg.setTimeStamp(0.8213789777501844);
    msg.setSource(6705U);
    msg.setSourceEntity(90U);
    msg.setDestination(9286U);
    msg.setDestinationEntity(241U);
    msg.name.assign("WDXXYJHDJGIOIPZRDCOWBAQSQQJUKAVYEGTZCRQCNBZGIVYPZNANEZXACWPRBTRUMSNQEZNDHMNBSBKYMVHVVCRLLGKSHUDJTETWIYLGAMCFVSFMVOELTQGMXJZRAAGCCKBSDJPGWJLOMDREVHUWOM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IoEvent msg;
    msg.setTimeStamp(0.8645453318919994);
    msg.setSource(51828U);
    msg.setSourceEntity(222U);
    msg.setDestination(5067U);
    msg.setDestinationEntity(131U);
    msg.type = 12U;
    msg.error.assign("GBOCNPDJMFTCPDFVDIOQUXPBAKFAKDSZUMAICVNVFNDNVWKRTJOBYTPEDESEYBZCHVPXFWWLAKWMYSEICRIDFRUBERGWKJASJZNEYBJYSJGFJIVSOMEMCXPPAEIGHIHWNUZBGKMOHBCSPRVQGKTHOAAQKLTWAHL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IoEvent #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IoEvent msg;
    msg.setTimeStamp(0.14940187782832615);
    msg.setSource(53835U);
    msg.setSourceEntity(154U);
    msg.setDestination(9747U);
    msg.setDestinationEntity(25U);
    msg.type = 202U;
    msg.error.assign("UYWOLJEJIYWXCSWJPQUTPIXDCQNGFLANYQJIXNUEGRSNMFWRFRSIMHCDYGZBVIQLHTLTCCPSHZPFKPOQIMJDDOAMGFLSPBGUEEKOREPXKJKXVZODJSLTRQAOZVMWEXHTGKXCZDEYBPFHQQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IoEvent #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IoEvent msg;
    msg.setTimeStamp(0.6822516821090951);
    msg.setSource(60348U);
    msg.setSourceEntity(143U);
    msg.setDestination(59491U);
    msg.setDestinationEntity(95U);
    msg.type = 124U;
    msg.error.assign("UXTQPRDJEPKBHGNCRGDMQTKBFWEDMVOAYQFUEICYVDWGQWMJUVOYXYTDMAREITZLHCHPVITBIQJCXBUDJXHGXNP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IoEvent #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxFrame msg;
    msg.setTimeStamp(0.9505925684322645);
    msg.setSource(32031U);
    msg.setSourceEntity(86U);
    msg.setDestination(14683U);
    msg.setDestinationEntity(27U);
    msg.seq = 25314U;
    msg.sys_dst.assign("QEEHBWBTHYXRUENNHDUFCTJSXYDNDPMZDVOSNLVLZGYFYVORCCHZSJWRTVUJCKSXNDFAZJVKQYQLWIAKVJUDGBMPQDDTUNLNARKKBXYSWJWQMCMOOBUXGN");
    msg.flags = 210U;
    const signed char tmp_msg_0[] = {117, -69, 7, 123, 83, -33, 71, -5, -124, -118, 57, 70, -124, 102, 40, 55, -4, 11, 99, -17, -75, -116, 48, 60, -93, 99, 87, -112, -86, 46, -7, 48, -32, -32, -7, 52, -72, -24, 36, -8, -56, -14, 118, -33, -7, -81, -23, -86, -118, -24, 68, 76, -97, -61, 60, -85, 39, -112, -50, -114, 72, 36, 95, 119, -55, -37, 16, -3, 88, 106, 11, 108, -78, -4, 94, 117, 70, 102, 102, 18, 81, 28, 52, 60, 76, 25, -111, -17, -55, 22, 29, 106, -110, 121, 3, 103, 67, -97, 95, 86, -7, -52, -80, 116, 10, -97, -11, -38, 126, -63, -10, -72, 34, 117, -15, -11, 48, -21, -30};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxFrame #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxFrame msg;
    msg.setTimeStamp(0.5691258489270536);
    msg.setSource(52919U);
    msg.setSourceEntity(38U);
    msg.setDestination(56723U);
    msg.setDestinationEntity(174U);
    msg.seq = 3426U;
    msg.sys_dst.assign("FDESZYLSNVYLPPFQXSWXVHHNOUXXHGYOXRJJNG");
    msg.flags = 2U;
    const signed char tmp_msg_0[] = {18, 25, 68, -59, -116, 72, -82, -35, -59, -104, 59, -121, -9, 26, 78, 116, 32, 72, 0, -112, 79, 62, 90, 79, -25, -32, -113, 4, -64, 116, 71, 46, 8, -87, 100, -107, 22, -112, 54, -75, -26, -30, -16, 54, 94, 42, -59, 56, -42, 74, 58, -104, 28, -54, 121, -14, -84, 4, 50, 62, -70, 124, 33, 42, -38, 59, 45, 17, 70, -127, -123, -9, -75, 51, -103, 57, 20, -73, -117, -105, 81, -71, -107, -85, 74, -55, 58, 102, -70, 8, 85, -78, 11, -49, -102, 86, -51, 92, -13, 52, 106, 17, -84, -30, 15, -5, 107, 66, 82, -68, 49, -70, -69, 2, 95, -42, 98, -36, -6, -124, -75, -57, -34, 55, 42, 80, -38, 25, 5, -56, -54, -22, 40, -119, 6, 49, 87, -45, 25, 37, 79, -75, -40, 20, 99, 62, -104, 62, 19, 43, 51, 19, -11, -49, -20, -42, -123, -72, -19, 29, -78, -66, 73, 72};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxFrame #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxFrame msg;
    msg.setTimeStamp(0.6161302535663269);
    msg.setSource(34834U);
    msg.setSourceEntity(50U);
    msg.setDestination(1034U);
    msg.setDestinationEntity(104U);
    msg.seq = 25349U;
    msg.sys_dst.assign("DGCPCZNDCEHODJNUZLLSNRYFULUCTS");
    msg.flags = 87U;
    const signed char tmp_msg_0[] = {9, -2, -41, -66, -51, 126, -95, 50, 57, -20, 105, 37, 27, 118, -13, -105, -82, -27, 126, -49, -71, -41, -12, 95, -33, 2, -4, -46, 117, -67, -67, 5, 64, -44, 23, -49, 125, -45, 29, -16, 86, 71, 118, -87, 77, -93, -6, -1, -75, -8, 81, -47, 116, -43, -96, -2, 22, -46, -62, -38, 43, 52, 67, 75, 50, 14, -74, -89, 85, -90, 45, 55, -35, -128, 1, 116, -97, -60, 29, 40, 16, -91, 120, 38, 54, -58, 86, -123, 19, 85, -37, -71, 8, 32, -12, -106, 108, 14, -69, 112, 55, -35, 50, -75, -85, 57, 10, 102, 62, -21, 110, 42, -17, -83, -96, -23, 59, -1, 47, -91, -56, -64, 22, 29, 100, 16, -3, 14, 87, 93, -35, 71, -108, 55, -89, -81, -83, -53, 28, 87, -68, -116, 20, -85, -56, 93, 101, -71, 11, 110, 88, -110, 124, 106, 19, 53, -86, 40, 85, -78, 35, -107, 75, 33, -68, -95, 8, -112, -27, -67, 104, -80, 56, 32, 64, 60, 71, -110, 52, 58, -72, -119, 98, 17, -107, -57, -19, -9, 70, 24, 0, -85, -102, 13, 74, -83, 2, -34, -18, 75, 12, -58, 14, 67, -20, -98, -58, -8, 83, 116, -24, -108, -105, -53, 5, 50, 14, 126, 119, 9, 55, 0, 110, -105, 19, -9, 118, -9, 125, -5, -72, 5, 17, -120, 48, 95, 53, -35, -64};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxFrame #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxFrame msg;
    msg.setTimeStamp(0.17887334297823432);
    msg.setSource(20847U);
    msg.setSourceEntity(12U);
    msg.setDestination(1565U);
    msg.setDestinationEntity(32U);
    msg.sys_src.assign("BOUZLGQVEMIEVJVMQRXBVOYUMGYJJ");
    msg.sys_dst.assign("MXZDONNXLYGSVLCIVEUJHKVFVBJCFDVJOWPZIAAPBWEFAXDMOHBOKJBUKTUACLGSHSPPPUSTOHIAJRDVTPMSRSEAVCGNBYAFOIETWTAMSGELRHFUEXQZWDXCYMTRDNSOKHFFYRIGGYVHBLLQBYYVFKPCNNQBPGDMYLKCIUMDWTLRFUQZZNKKLQIJCETTMWSYEIOQXDCZGQMU");
    msg.flags = 139U;
    const signed char tmp_msg_0[] = {-105, -26, 45, -99, -3, 81, -72, -41, -96, -96, -78, 57, 72, 81, 20, 67, 102, 12, -24, 29, -108, -61, 118, 120, -83, -120, -121, 65, 23, 8, -5, 37};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxFrame #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxFrame msg;
    msg.setTimeStamp(0.3498828374592342);
    msg.setSource(47325U);
    msg.setSourceEntity(26U);
    msg.setDestination(30874U);
    msg.setDestinationEntity(172U);
    msg.sys_src.assign("HNKNBGXZRHMWGVMNHIANUOIVTRRRKPRAOJVUFZATLYJYTPTEIUWQYDOTVGLPDQOEVBTOKWGNLAKLLVGOKQIJHCFLZWBWMZHMPGMYQXWSCKPCDKVWPTJPIJGSYJUZJUXEAMBVURFRSXJQWIHQWBQFCMEFZZHWFFXCEGSDSLVDENPRBYNHJBGXOSDYBDNECEKDYG");
    msg.sys_dst.assign("XKJHXKPKGVGUFPBVXWOLPSIHVQIDFHXTIBXQNMCGKRUVZUNTJJVXMSIRWIHSYNQRVLAKTEGAYDFYFDZUICQORMOXHYETNITNMEKOLITUCNUICXRRUHONALFTARNZJAJURLGPBODQYWBDZSMQLULKYBMECCDZ");
    msg.flags = 56U;
    const signed char tmp_msg_0[] = {-109, -22, 61, 64, 101, 63, -48, -35, 105, 8, -90, -57, -32, 52, 0, -19, 61, 20, -68, -78, -32, 62, -88, -75, 71, 46, 85, 0, 65, 56};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxFrame #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxFrame msg;
    msg.setTimeStamp(0.3091070379710581);
    msg.setSource(62911U);
    msg.setSourceEntity(128U);
    msg.setDestination(13711U);
    msg.setDestinationEntity(118U);
    msg.sys_src.assign("VCXXSIZGEKPUVDUMGMLKEJBQLGQFACSORGTEEWPMFQLJUHZEYCYBNGDSADTPIHOIJPWBYOJISUYHLWRDKTOZFWXRRENQZBAK");
    msg.sys_dst.assign("ARNHGDXETPZMKLNIHKHSDLSBCHGYOLUUHYMYYYTBYLAPEJJOXACWVUKUJPCKETJETNPCFPMXSGQCTBRRCKRUNMQEDPDBATOHEOVHSW");
    msg.flags = 39U;
    const signed char tmp_msg_0[] = {-89, 38, 9, 17, -116, -67, -119, -14, -51, 32, -37, 59, 8, 13, 69, -58, -21, -28, -120, -91, -15, 95, 77, 23, 106, -80, 82, 26, 74, -80, 90, -32, -27, 9, -6, -83, 20, 33, 58, -103, 76, 59, -67, 67, -109, -89, -55, -28, -106, -15, -97, -76, -91, -20, -9, 9, -71, 24, 27, 88, -37, -84, -127, 100, 92, 10, 124, -70, -114, -62, 20, -65, -40, -72, -5, 43, -35, 62, 53, -27, -42, -123, 76, 53, -108, -52, 36, 47, 8, 42, -34};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxFrame #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxStatus msg;
    msg.setTimeStamp(0.8952049890577559);
    msg.setSource(1479U);
    msg.setSourceEntity(23U);
    msg.setDestination(2080U);
    msg.setDestinationEntity(85U);
    msg.seq = 7546U;
    msg.value = 147U;
    msg.error.assign("KZWWJXPZYPSMWVZQXBNKJTYGOIGJTPIACNYNBIOMGGBGYHYEMBNLXRQBVAFKQALQYQLJIDOLRFVZDWTNWPL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxStatus msg;
    msg.setTimeStamp(0.859252090222131);
    msg.setSource(46207U);
    msg.setSourceEntity(0U);
    msg.setDestination(6624U);
    msg.setDestinationEntity(77U);
    msg.seq = 17109U;
    msg.value = 194U;
    msg.error.assign("TKPXYSNCBAXCLBLHVXHPSTCEZYISCKRPDOMXHOSHCYETDCOGDMMNKBBLQILQKEFYFRKEVDVAGCVOYHZNTHRTQHWIEPAKTMUHRWIQRQBMDOSNBWZVQTDHSYNPXEOWGDNSZQAIJAKKFIWVJIBKWULJFXVULRLDITPJEFGJGYXLYMARPZFUNAPUZIWRVRFYUXZCBWZWTADOSJDMGEUVQCBU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxStatus msg;
    msg.setTimeStamp(0.4869518625103949);
    msg.setSource(62038U);
    msg.setSourceEntity(29U);
    msg.setDestination(40195U);
    msg.setDestinationEntity(199U);
    msg.seq = 59198U;
    msg.value = 177U;
    msg.error.assign("RFEMUPIQOULFLJQSQAAVXKIJFONMMVUWWBDXGMKLKLABJCDZPGVTQTMHOIQSFIPCDPZCULWRVHHHSANZKBPCFBBWIVQPZLQDXLGNJVMPZTJUHDRKULDEYWZYZCYIYGDEQQGTTODFAPOCO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxRange msg;
    msg.setTimeStamp(0.6963896698398152);
    msg.setSource(42366U);
    msg.setSourceEntity(98U);
    msg.setDestination(1740U);
    msg.setDestinationEntity(81U);
    msg.seq = 7578U;
    msg.sys.assign("DRHTSKHISFSZVJJBGRKTZAZSYBPVHBQJJNLLSCIRMOPXEFIFWQGOZCYAEBAPYKUMDFOYWHJJFTLKOOYCRANSCSQEQYDZULXEMVBXIDCCQWXVOIDJNMNRWHFGBHLXHYWZWSZMWXPROCLWPQNUDFQUBGDLABPZTXEXYWRZEMKIUVUFANSELIPUKJYKFMUUVINTFCASJUIGQQVNKEGO");
    msg.value = 0.26734422003421643;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxRange #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxRange msg;
    msg.setTimeStamp(0.229349780093971);
    msg.setSource(22383U);
    msg.setSourceEntity(38U);
    msg.setDestination(63838U);
    msg.setDestinationEntity(234U);
    msg.seq = 58655U;
    msg.sys.assign("KVBKESZPDOQBTTIZYALFOWKMWDZFCYZORFBULJNNONQZCUBOQJPMCDTRESLCVITBVSCJEISCEBQQMSJSRXIDKAHWXTXRTCGMFGAYXUGRAUXLNQLQXK");
    msg.value = 0.6184916866129508;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxRange #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxRange msg;
    msg.setTimeStamp(0.43731249713931075);
    msg.setSource(29690U);
    msg.setSourceEntity(186U);
    msg.setDestination(24971U);
    msg.setDestinationEntity(2U);
    msg.seq = 6638U;
    msg.sys.assign("XAKKJTVHYROWZTNKWLPAHCQNSXQKSLFSVEGJHNXFLBRISIIVQOHDBZLTJXBGOVRYBKFSEMPSRQJIETXYJRPTNJDCCWFHADYGLAZWMPWZGQCMWEVVLARVYEUGNDPT");
    msg.value = 0.639835908371308;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxRange #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxRange msg;
    msg.setTimeStamp(0.17942578646567775);
    msg.setSource(6992U);
    msg.setSourceEntity(193U);
    msg.setDestination(54823U);
    msg.setDestinationEntity(3U);
    msg.seq = 49723U;
    msg.sys_dst.assign("TEGOBPDSJSZDHXBLNMFBYZZPSXVRVQKHOTUWEMMKHLQAWZCNPEMDKPFAOGSHUKMFTWWAGXT");
    msg.timeout = 0.03155698324077205;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxRange #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxRange msg;
    msg.setTimeStamp(0.47039883019632145);
    msg.setSource(32352U);
    msg.setSourceEntity(165U);
    msg.setDestination(12957U);
    msg.setDestinationEntity(78U);
    msg.seq = 38264U;
    msg.sys_dst.assign("KHWNSGOFITYQTYRPFRSHRNTQIYUJYVUMZHMFCOXAQTUWDDIXHJATHMQLAHKQZMROEBXXROZGYRWTSTZCLTESFYC");
    msg.timeout = 0.7424952929900038;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxRange #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxRange msg;
    msg.setTimeStamp(0.4871185109283763);
    msg.setSource(53447U);
    msg.setSourceEntity(1U);
    msg.setDestination(25312U);
    msg.setDestinationEntity(184U);
    msg.seq = 65254U;
    msg.sys_dst.assign("DFCUSELRGMO");
    msg.timeout = 0.6452295203787646;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxRange #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormCtrlParam msg;
    msg.setTimeStamp(0.2154472283517641);
    msg.setSource(24442U);
    msg.setSourceEntity(132U);
    msg.setDestination(8566U);
    msg.setDestinationEntity(97U);
    msg.action = 142U;
    msg.longain = 0.12069864202691616;
    msg.latgain = 0.2717276781011654;
    msg.bondthick = 4242896476U;
    msg.leadgain = 0.04994042775514318;
    msg.deconflgain = 0.6886713434182915;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormCtrlParam #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormCtrlParam msg;
    msg.setTimeStamp(0.9810425311254283);
    msg.setSource(49575U);
    msg.setSourceEntity(186U);
    msg.setDestination(4344U);
    msg.setDestinationEntity(251U);
    msg.action = 215U;
    msg.longain = 0.6924843115720846;
    msg.latgain = 0.4145242593045204;
    msg.bondthick = 365506395U;
    msg.leadgain = 0.9382979558524189;
    msg.deconflgain = 0.9344057436353046;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormCtrlParam #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormCtrlParam msg;
    msg.setTimeStamp(0.9521104918195028);
    msg.setSource(29368U);
    msg.setSourceEntity(218U);
    msg.setDestination(14245U);
    msg.setDestinationEntity(29U);
    msg.action = 216U;
    msg.longain = 0.678888981866582;
    msg.latgain = 0.34271782279065843;
    msg.bondthick = 790853275U;
    msg.leadgain = 0.4753294200208995;
    msg.deconflgain = 0.21020039218487085;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormCtrlParam #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEval msg;
    msg.setTimeStamp(0.11130121792250014);
    msg.setSource(11303U);
    msg.setSourceEntity(89U);
    msg.setDestination(11507U);
    msg.setDestinationEntity(74U);
    msg.err_mean = 0.9689873699704821;
    msg.dist_min_abs = 0.14069304797466797;
    msg.dist_min_mean = 0.3450497182563692;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEval #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEval msg;
    msg.setTimeStamp(0.08915729769027214);
    msg.setSource(46973U);
    msg.setSourceEntity(162U);
    msg.setDestination(33843U);
    msg.setDestinationEntity(249U);
    msg.err_mean = 0.3960083927078448;
    msg.dist_min_abs = 0.5837929902012399;
    msg.dist_min_mean = 0.17861509364970718;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEval #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEval msg;
    msg.setTimeStamp(0.8482139387353708);
    msg.setSource(12724U);
    msg.setSourceEntity(218U);
    msg.setDestination(45161U);
    msg.setDestinationEntity(149U);
    msg.err_mean = 0.22813223167113073;
    msg.dist_min_abs = 0.3469825068949314;
    msg.dist_min_mean = 0.1844910232474526;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEval #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationControlParams msg;
    msg.setTimeStamp(0.6168246398113832);
    msg.setSource(13761U);
    msg.setSourceEntity(230U);
    msg.setDestination(65065U);
    msg.setDestinationEntity(126U);
    msg.action = 174U;
    msg.lon_gain = 0.3683953067830563;
    msg.lat_gain = 0.8422317702860037;
    msg.bond_thick = 0.43483980540391676;
    msg.lead_gain = 0.455057529908804;
    msg.deconfl_gain = 0.20566445383548237;
    msg.accel_switch_gain = 0.2058696280158141;
    msg.safe_dist = 0.4952989491111792;
    msg.deconflict_offset = 0.42620530181093497;
    msg.accel_safe_margin = 0.02313628693829295;
    msg.accel_lim_x = 0.7970539335423725;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationControlParams #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationControlParams msg;
    msg.setTimeStamp(0.7628589079232211);
    msg.setSource(2017U);
    msg.setSourceEntity(146U);
    msg.setDestination(49788U);
    msg.setDestinationEntity(191U);
    msg.action = 80U;
    msg.lon_gain = 0.2231851880461766;
    msg.lat_gain = 0.02257384196581247;
    msg.bond_thick = 0.7754396718080878;
    msg.lead_gain = 0.949618732416338;
    msg.deconfl_gain = 0.551090412887832;
    msg.accel_switch_gain = 0.06256412438649972;
    msg.safe_dist = 0.06065492154977703;
    msg.deconflict_offset = 0.15249830383907426;
    msg.accel_safe_margin = 0.033245802047078166;
    msg.accel_lim_x = 0.3148203077263376;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationControlParams #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationControlParams msg;
    msg.setTimeStamp(0.08497274367663732);
    msg.setSource(21021U);
    msg.setSourceEntity(19U);
    msg.setDestination(4611U);
    msg.setDestinationEntity(200U);
    msg.action = 144U;
    msg.lon_gain = 0.6340864810289584;
    msg.lat_gain = 0.8242280956167383;
    msg.bond_thick = 0.3654338430642722;
    msg.lead_gain = 0.9715528689795455;
    msg.deconfl_gain = 0.16680181991797627;
    msg.accel_switch_gain = 0.7346087334512684;
    msg.safe_dist = 0.35667029832144026;
    msg.deconflict_offset = 0.5450852297608176;
    msg.accel_safe_margin = 0.915995953111303;
    msg.accel_lim_x = 0.3510933421605147;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationControlParams #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEvaluation msg;
    msg.setTimeStamp(0.695604194874399);
    msg.setSource(8604U);
    msg.setSourceEntity(230U);
    msg.setDestination(63111U);
    msg.setDestinationEntity(22U);
    msg.type = 49U;
    msg.op = 215U;
    msg.err_mean = 0.854074695060005;
    msg.dist_min_abs = 0.9908138859457284;
    msg.dist_min_mean = 0.7605562612133836;
    msg.roll_rate_mean = 0.5702853737256395;
    msg.time = 0.16098275426244768;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 247U;
    tmp_msg_0.lon_gain = 0.06913482244864022;
    tmp_msg_0.lat_gain = 0.32776803659316167;
    tmp_msg_0.bond_thick = 0.9151759722898904;
    tmp_msg_0.lead_gain = 0.7467018210890803;
    tmp_msg_0.deconfl_gain = 0.7480328768286642;
    tmp_msg_0.accel_switch_gain = 0.9985899194344362;
    tmp_msg_0.safe_dist = 0.5497893572619011;
    tmp_msg_0.deconflict_offset = 0.6298689035961252;
    tmp_msg_0.accel_safe_margin = 0.8831581335993547;
    tmp_msg_0.accel_lim_x = 0.8781571271553539;
    msg.controlparams.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEvaluation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEvaluation msg;
    msg.setTimeStamp(0.24701208148471132);
    msg.setSource(37078U);
    msg.setSourceEntity(126U);
    msg.setDestination(12638U);
    msg.setDestinationEntity(205U);
    msg.type = 185U;
    msg.op = 219U;
    msg.err_mean = 0.029278518151923838;
    msg.dist_min_abs = 0.04592722308413133;
    msg.dist_min_mean = 0.7015234993185806;
    msg.roll_rate_mean = 0.4928595420052708;
    msg.time = 0.02677158496800458;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 120U;
    tmp_msg_0.lon_gain = 0.3867317126654187;
    tmp_msg_0.lat_gain = 0.830975605992178;
    tmp_msg_0.bond_thick = 0.8892343553362898;
    tmp_msg_0.lead_gain = 0.8627341613808437;
    tmp_msg_0.deconfl_gain = 0.7538448661446846;
    tmp_msg_0.accel_switch_gain = 0.8691879269643491;
    tmp_msg_0.safe_dist = 0.7803270250428067;
    tmp_msg_0.deconflict_offset = 0.1747046972708376;
    tmp_msg_0.accel_safe_margin = 0.13778123152149324;
    tmp_msg_0.accel_lim_x = 0.9169428934736167;
    msg.controlparams.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEvaluation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEvaluation msg;
    msg.setTimeStamp(0.5990874451043458);
    msg.setSource(59277U);
    msg.setSourceEntity(207U);
    msg.setDestination(37810U);
    msg.setDestinationEntity(228U);
    msg.type = 151U;
    msg.op = 38U;
    msg.err_mean = 0.5621160835055063;
    msg.dist_min_abs = 0.8739916022781512;
    msg.dist_min_mean = 0.46828255537197216;
    msg.roll_rate_mean = 0.5641552221368737;
    msg.time = 0.9256575940482603;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 72U;
    tmp_msg_0.lon_gain = 0.916104566669031;
    tmp_msg_0.lat_gain = 0.6818530977060641;
    tmp_msg_0.bond_thick = 0.9897534138079165;
    tmp_msg_0.lead_gain = 0.9248813952247217;
    tmp_msg_0.deconfl_gain = 0.1478101352402632;
    tmp_msg_0.accel_switch_gain = 0.9806133012148248;
    tmp_msg_0.safe_dist = 0.8148082706679337;
    tmp_msg_0.deconflict_offset = 0.348092923431924;
    tmp_msg_0.accel_safe_margin = 0.5512399217522641;
    tmp_msg_0.accel_lim_x = 0.1530050683660339;
    msg.controlparams.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEvaluation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiWaypoint msg;
    msg.setTimeStamp(0.325877121419089);
    msg.setSource(46003U);
    msg.setSourceEntity(186U);
    msg.setDestination(49547U);
    msg.setDestinationEntity(61U);
    msg.lat = 0.01218325581855717;
    msg.lon = 0.7952082375285052;
    msg.eta = 2707086567U;
    msg.duration = 23705U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiWaypoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiWaypoint msg;
    msg.setTimeStamp(0.12666978735365675);
    msg.setSource(3074U);
    msg.setSourceEntity(40U);
    msg.setDestination(51232U);
    msg.setDestinationEntity(211U);
    msg.lat = 0.9712847448368154;
    msg.lon = 0.8851933964185749;
    msg.eta = 541255877U;
    msg.duration = 49467U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiWaypoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiWaypoint msg;
    msg.setTimeStamp(0.9136860371691055);
    msg.setSource(52958U);
    msg.setSourceEntity(22U);
    msg.setDestination(41633U);
    msg.setDestinationEntity(217U);
    msg.lat = 0.7504335922118731;
    msg.lon = 0.9690903116306638;
    msg.eta = 1304867301U;
    msg.duration = 33412U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiWaypoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiPlan msg;
    msg.setTimeStamp(0.8956129212273866);
    msg.setSource(49602U);
    msg.setSourceEntity(105U);
    msg.setDestination(47658U);
    msg.setDestinationEntity(7U);
    msg.plan_id = 61169U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiPlan #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiPlan msg;
    msg.setTimeStamp(0.6148928880756352);
    msg.setSource(31291U);
    msg.setSourceEntity(113U);
    msg.setDestination(1535U);
    msg.setDestinationEntity(134U);
    msg.plan_id = 22887U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiPlan #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiPlan msg;
    msg.setTimeStamp(0.15805530474547713);
    msg.setSource(10951U);
    msg.setSourceEntity(18U);
    msg.setDestination(4596U);
    msg.setDestinationEntity(82U);
    msg.plan_id = 41977U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiPlan #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiCommand msg;
    msg.setTimeStamp(0.4918374607075462);
    msg.setSource(19480U);
    msg.setSourceEntity(63U);
    msg.setDestination(17346U);
    msg.setDestinationEntity(5U);
    msg.type = 91U;
    msg.command = 164U;
    msg.settings.assign("WEVEMJLNXXCBPMDFLGQZZUIVOKXAPEIFTHCSMRNOCDZAOPIGUXNRWITFCLEG");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 21521U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.9478281260257427;
    tmp_tmp_msg_0_0.lon = 0.902902863008843;
    tmp_tmp_msg_0_0.eta = 3611922840U;
    tmp_tmp_msg_0_0.duration = 47741U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("BKKITVIOPVMJPUMMDTBCYUILULXWUBCOCRMNRMFKDAPZFXVCLIXGWQQJWSXLKCGBENFLRCMYQRTSAJVGTNFTAJSQEBTDVPWXWXWIISXBAAZZW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiCommand #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiCommand msg;
    msg.setTimeStamp(0.5012017889859579);
    msg.setSource(61769U);
    msg.setSourceEntity(234U);
    msg.setDestination(34413U);
    msg.setDestinationEntity(85U);
    msg.type = 97U;
    msg.command = 146U;
    msg.settings.assign("AWMGFAKFXXWHRDFPOUKRYKKVURFAIUTEEACHATXIINBGFXXOMMZMMZFWPHVZFNVEQYNCQWDZMQSGZUZETJTVIIF");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 20538U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.9697243871160633;
    tmp_tmp_msg_0_0.lon = 0.9437612190600001;
    tmp_tmp_msg_0_0.eta = 1803808696U;
    tmp_tmp_msg_0_0.duration = 62992U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("BMVNOEPUOABIWBKQUZNBHHLUOVCKYCZLUHWKYQLQCWUGFFBGUS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiCommand #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiCommand msg;
    msg.setTimeStamp(0.6293532102529927);
    msg.setSource(51284U);
    msg.setSourceEntity(78U);
    msg.setDestination(14456U);
    msg.setDestinationEntity(228U);
    msg.type = 185U;
    msg.command = 235U;
    msg.settings.assign("GAIRMZHIIJTHEKXRKSEFWZBYYXEFZLGLFELSVBLIRLKQZNBXQHYBXLSUYEGZMQTTRNYTQCUVVDAJQWPAOWLOTTVAVHCIWGRSQLYGPEFMTDIOMBJJQSOXCDSTDIMWPWFLSEOQGVMTURBBKCPFPPUMFXYUSWNNNJWCXPOSCDYOJKUKDQKDZFGOBVHFRFIDVQXZAJGDUZVINXMYJPOCJDUKPRAEYNUBK");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 57515U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("YEYZAHQBTYAIJRWLGTEFGCDQWIPJRXPTX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiCommand #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiState msg;
    msg.setTimeStamp(0.5733038469528658);
    msg.setSource(27640U);
    msg.setSourceEntity(89U);
    msg.setDestination(30688U);
    msg.setDestinationEntity(169U);
    msg.state = 130U;
    msg.plan_id = 17301U;
    msg.wpt_id = 23U;
    msg.settings_chk = 20877U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiState msg;
    msg.setTimeStamp(0.5819524000213987);
    msg.setSource(42431U);
    msg.setSourceEntity(13U);
    msg.setDestination(40290U);
    msg.setDestinationEntity(40U);
    msg.state = 179U;
    msg.plan_id = 3697U;
    msg.wpt_id = 72U;
    msg.settings_chk = 18679U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiState msg;
    msg.setTimeStamp(0.18127983876875364);
    msg.setSource(10309U);
    msg.setSourceEntity(111U);
    msg.setDestination(49207U);
    msg.setDestinationEntity(174U);
    msg.state = 76U;
    msg.plan_id = 51741U;
    msg.wpt_id = 157U;
    msg.settings_chk = 37436U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MessagePart msg;
    msg.setTimeStamp(0.2534339885338255);
    msg.setSource(25707U);
    msg.setSourceEntity(167U);
    msg.setDestination(46433U);
    msg.setDestinationEntity(16U);
    msg.uid = 58U;
    msg.frag_number = 33U;
    msg.num_frags = 41U;
    const signed char tmp_msg_0[] = {14, 86, 41, -14, 109, 117, 60, 60, -114, -112, 88, -85, 69, 5, 22, -14, -48, -88, -66, 18, 31, -24, 112, -29, -3, -39, -128, 70, 13, -47, -96, -70, -106, -20, 81, -91, 16, -14, -86, 7, -23, 51, 9, 76, 44, -5, 26, 112, -55, -62, -104, 125, -126, 13, 70, 97, -105, 124, -68, 28, -113, 89, -114, 110, 43, -127, 17, 101, -82, 77, -63, 117, 51, -119, 15, 120, 11, 5, -48, -123, -76, 86, -68, 89, 63, 113, -84, 115, -62, -80, -10, 61, -39, -45, -53, -60, 20, -50, -86, 58, -91, 3, -79, -15, -35, -76, -34, -27, 55, 93, -55, 20, -60, -127, -123, -119, -7, -15, 72, 123, -120, 73, -99, -61, -69, 53, 71, 32, 117, 17, 121, -46, -119, -54, -1, -9, 95, -60};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MessagePart #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MessagePart msg;
    msg.setTimeStamp(0.2771353635233267);
    msg.setSource(35972U);
    msg.setSourceEntity(58U);
    msg.setDestination(18834U);
    msg.setDestinationEntity(193U);
    msg.uid = 50U;
    msg.frag_number = 185U;
    msg.num_frags = 169U;
    const signed char tmp_msg_0[] = {90, 21, -49, 2, 94, -48, -27, -128, 42, 2, -81, 101, 92, 109, -128, -21, 107, -22, 96, 97, 32, -11, 118, -50, -79, -16, 105, -45, -86, 37, 87, 29, 114, -72, 109, 63, -17, -2, 108, 22, 96, 118, 72, 119, -79, -97, -111, -88, -110, -51, 30, 113, -24, -12, -46, -42, 40, -42, -110, -42, 98, 92, 5, 70, 38, 120, 118, 119, -19, -51, -22, 31, 59, 8, -12, -54, -86, -58, 75, -20, 109, 50, 24, 101, 59, 25, 115, -86, -76, -56, -113, -105, 10, -37, 36, 78, -20, -52, 87, 65, 109, -65, -47, -11, -116, -66, -124, -65, -110, -50, -110, -113, -3, 48, 22, 54, 57, 32, 6, -93, 27, 105, 51, 76, 78, 7, 78, -125, 77, 95, 118, -53, -72, 50, 47, -53, 38, -68, -14, -126, 19, -53, 56, 44, -35, -80, 6, 84};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MessagePart #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MessagePart msg;
    msg.setTimeStamp(0.43399735793160366);
    msg.setSource(33313U);
    msg.setSourceEntity(223U);
    msg.setDestination(7648U);
    msg.setDestinationEntity(234U);
    msg.uid = 13U;
    msg.frag_number = 122U;
    msg.num_frags = 123U;
    const signed char tmp_msg_0[] = {67, 96, -125, -45, 116, 28, 71, -26, -70, -12, -56, 111, -124, 62, 110, 105, -55, -23, 28, -103, -1, 77, -63, 119, -47, -49, -123, 18, 38, 31, 0, -51, -112, -57, -59, -12, -23, -72, 103, -62, 22, -51, 40, 91, -83, -122, 97, 41, -14, -52, -71, 124, -96, 41, 45, -36, -44, 85, 108, 29, -80, 36, -101, 49, -32, 89, -50, -43, 66, 8, 90, 18, -126, -100, -27, -6, -15, -73, 80, 20, -111, -14, -120, -60, -80, -23, -73, -119, -28, -118, 61, 40, -113, -105, 101, -17, -31, -98, -113, -67, -60, -117, -11, -105, -11, -86, 48, -41, 117, -30};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MessagePart #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NeptusBlob msg;
    msg.setTimeStamp(0.33653571391095805);
    msg.setSource(46791U);
    msg.setSourceEntity(251U);
    msg.setDestination(3158U);
    msg.setDestinationEntity(97U);
    msg.content_type.assign("BQMALPINIPHTJWYNXIIWZOKTNUPFSLKAJFZBGCJDQWHIAEDNRXMDMLRSDASXNVOEPLCWTSBWUNRXOEKRJXDCAWCLCYVDLZXEUYOIHTUSSKTMBZFAHGRPHUQHAWUDYCOBZBXKKREZQCYKBJPOMQZOQGFWRYTTFBJINLQNFMFJGPRIYEIUAGFRJGEWEBKHGAXVVOMCVFHH");
    const signed char tmp_msg_0[] = {-81, -91, 46, -55, -116, 61, -37, 38, 36, -78, -74, -2, -56, -109, 56, -75, -54, -100, 74, -36, 113, 95, -111, 56, -89, -45, -105, -86, -34, 7, -98, 51, 49, 91, -69, 95, -115, -26, 17, 100, 80, -83, 109, 98, 116, 0, -95, -96, -114, 46, -7, 38, 11, -40, 105, 120, -62, 18, 11, -121, 106, -69, -59, 118, 16, -22, -76, 39, -63, -111, -56, 68, 125, -51, 33, 126, 85, -98, -90, -104, -74, -87, -33, -9, -103, 45, 40, -27, 126, -22, -87, -121, 56, -99, 17, 17, -35, -8, -23, 22, -116, -46, -22, 115, -113, -19, -70, 78, 122, -19, -102, 72, 70, 82, -19, -97, -104, -112, -25, -20, 67, -54};
    msg.content.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NeptusBlob #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NeptusBlob msg;
    msg.setTimeStamp(0.8379383539441151);
    msg.setSource(41967U);
    msg.setSourceEntity(124U);
    msg.setDestination(6113U);
    msg.setDestinationEntity(62U);
    msg.content_type.assign("WQLWGDZBTEAKAFOXDERLAENWNUVXMNSBTAHHFSJGQPZHXEXBSGBPEWHWRDCGYSLYHCPLHGIDYMSDOQVSVJAYUNRDJFJEYJFBRZVKQRRTTQKIKCZTKQOU");
    const signed char tmp_msg_0[] = {-78, 36, 2, 109, 123, -103, 40, -41, -31, 102, 77, -42, -126, -72, 61, -71, 38, -124, -54, -77, 39, -47, -119, 49, -26, -8, -121, -94, 49, -7, -25, 31, 9, 36, 59, -93, 24, -44, -16, 32, -37, -47, -12, 34, -30, -92, -44, 51, -93, -105, 112, -75, -122, 75, -73, 12, -61, -26, 125, -125, -10, 28, -118, 59, 69, -83, 62};
    msg.content.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NeptusBlob #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NeptusBlob msg;
    msg.setTimeStamp(0.6708947359259199);
    msg.setSource(35711U);
    msg.setSourceEntity(217U);
    msg.setDestination(51550U);
    msg.setDestinationEntity(44U);
    msg.content_type.assign("KJVZVCOVDFVKYUCYRNRXKIYEIPJGAQMBJSECPFXFZKATJUSCZETAAPRZNQHGVNMUEDKXOBBHLEQWZXREHLGKYHSQRYMUGZHYAVHYBMASOCRSKGDLMYPHSBRTNTIWFCGRWISSFWKGTMSNQPQX");
    const signed char tmp_msg_0[] = {102, 107, 31, -14, 44, -124, -20, -120, -94, 87, 54, -5, -100, -75, -94, -34, -70, -50, 69, 94, -11, 35, 51, 11, -19, 28, -16, -13, -109, 40, 24, -64, -69, -44, 92, 123, 94, 104, -4, -37, 9, 118, 126, -10, -43, 12, 11, -51, -75, 76, 99, -87, -11, 119, -117, -30, -69, 59, 37, 0, 119, -57, 104, -96, 115, 17, 63, 116, 94, 6, 31, -39, 45, -87, 48, 72, -83, -25, 26, -88, -100, 4, 41, 46, -3, -127, 23, 124, -3, -96, 69, 34, 76, -87, -54, 71, -88, 99, -53, -12, -1, -40, 95, 66, 72, -42, -27, -31, 53, 89, 95, 108, -5, -20, 94, 17, 53, -72, 126, 69, -42, -88, 34, 119, 101, -23, 8, -3, 14, -127, -111, -34, -12, 106, 39, 74, -40, 43, -25, 70, 47, 89, 88, 47, 22, -48, -29, 117, 45, 20, 82, 0, -24, 39, -76, 67, 22, -3, 14, 41, 76, -36, 120, -122, 74, 68, 120, -103, 110, -111, -15, -23, 6, 55, 92, -47, -27, 35, -38, -74, -52, 2, -101, 57, 96, -61, -112, -2, 4, 17, 87, -80, -88, 75, 61, -75, 87, 50, 124, 60, 56, -4, -109, -31, -38, 98, 10, -97, -59};
    msg.content.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NeptusBlob #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Aborted msg;
    msg.setTimeStamp(0.6357763438869483);
    msg.setSource(43010U);
    msg.setSourceEntity(111U);
    msg.setDestination(21133U);
    msg.setDestinationEntity(89U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Aborted #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Aborted msg;
    msg.setTimeStamp(0.5500060662622742);
    msg.setSource(48050U);
    msg.setSourceEntity(229U);
    msg.setDestination(32171U);
    msg.setDestinationEntity(14U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Aborted #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Aborted msg;
    msg.setTimeStamp(0.9555012915973055);
    msg.setSource(26104U);
    msg.setSourceEntity(7U);
    msg.setDestination(47157U);
    msg.setDestinationEntity(50U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Aborted #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAngles msg;
    msg.setTimeStamp(0.5951048502494767);
    msg.setSource(7028U);
    msg.setSourceEntity(49U);
    msg.setDestination(63153U);
    msg.setDestinationEntity(58U);
    msg.target = 64166U;
    msg.bearing = 0.09794059375135022;
    msg.elevation = 0.7530965077669841;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAngles #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAngles msg;
    msg.setTimeStamp(0.6556781665983474);
    msg.setSource(6057U);
    msg.setSourceEntity(115U);
    msg.setDestination(14646U);
    msg.setDestinationEntity(163U);
    msg.target = 46714U;
    msg.bearing = 0.769653408779723;
    msg.elevation = 0.16946521302039497;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAngles #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAngles msg;
    msg.setTimeStamp(0.13040743551728495);
    msg.setSource(18329U);
    msg.setSourceEntity(3U);
    msg.setDestination(14352U);
    msg.setDestinationEntity(191U);
    msg.target = 5287U;
    msg.bearing = 0.09368221268593224;
    msg.elevation = 0.33479163619001095;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAngles #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPosition msg;
    msg.setTimeStamp(0.0899577769022114);
    msg.setSource(44470U);
    msg.setSourceEntity(75U);
    msg.setDestination(41257U);
    msg.setDestinationEntity(163U);
    msg.target = 38931U;
    msg.x = 0.8192653849788323;
    msg.y = 0.48055533936877737;
    msg.z = 0.5851979811030821;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPosition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPosition msg;
    msg.setTimeStamp(0.02984041951194827);
    msg.setSource(23173U);
    msg.setSourceEntity(194U);
    msg.setDestination(8647U);
    msg.setDestinationEntity(107U);
    msg.target = 6326U;
    msg.x = 0.07035653525181418;
    msg.y = 0.30567749286830226;
    msg.z = 0.37814112893284335;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPosition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPosition msg;
    msg.setTimeStamp(0.8425801600003705);
    msg.setSource(13853U);
    msg.setSourceEntity(131U);
    msg.setDestination(15827U);
    msg.setDestinationEntity(53U);
    msg.target = 47613U;
    msg.x = 0.057076867199693626;
    msg.y = 0.2116670976648638;
    msg.z = 0.5218707656826553;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPosition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFix msg;
    msg.setTimeStamp(0.047140968831244856);
    msg.setSource(55758U);
    msg.setSourceEntity(161U);
    msg.setDestination(64679U);
    msg.setDestinationEntity(199U);
    msg.target = 29352U;
    msg.lat = 0.7509032259906813;
    msg.lon = 0.5359655559554828;
    msg.z_units = 84U;
    msg.z = 0.1852379530790602;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFix #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFix msg;
    msg.setTimeStamp(0.17320080080292866);
    msg.setSource(61263U);
    msg.setSourceEntity(104U);
    msg.setDestination(28958U);
    msg.setDestinationEntity(236U);
    msg.target = 26711U;
    msg.lat = 0.07223722719130532;
    msg.lon = 0.29049012465521373;
    msg.z_units = 252U;
    msg.z = 0.024160818238094017;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFix #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFix msg;
    msg.setTimeStamp(0.09909370110518423);
    msg.setSource(53865U);
    msg.setSourceEntity(252U);
    msg.setDestination(31079U);
    msg.setDestinationEntity(244U);
    msg.target = 47125U;
    msg.lat = 0.8380455491548782;
    msg.lon = 0.14617160583030264;
    msg.z_units = 152U;
    msg.z = 0.05552663623207221;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFix #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ParametersXml msg;
    msg.setTimeStamp(0.13181080451176763);
    msg.setSource(11284U);
    msg.setSourceEntity(179U);
    msg.setDestination(41905U);
    msg.setDestinationEntity(67U);
    msg.locale.assign("HVYXIOZCROZWQLKUJTHTYSTIERZHUMDGUOKTSKMGFGCUKHJCWSLJVCYTJKLBKJIKVGLVDFAGQSWEGWUXXDEZNLFJVHPWBQHRUTEBMPREUJAFGKMIQOPSRQHFWPVDFIVISPNGMBYWMDDTOOLHTBAOPEOIYFUULTXPLNJWZFJNZVEGACRAGCQMCOYSRYBCUXAAZCENTSNBMBSBDAAOYMAPXQYIHKEINKXDBQV");
    const signed char tmp_msg_0[] = {25, -67, 108, 39, -14, 116, 122, 87, 14, 100, -86, -90, -82, -77, -107, 78, 41, -58, -128, -102, -64, 17, -104, 23, 121, -25, 44, 89, 95, -39, 63, -118, 111, -116, 69, -68, -104, 84, 83, -87, -52, 104, -32, 51, 61, -83, 44, -28, -99, -56, -48, -35, 105, 13, -124, -58, 71, -91, -112, -14, 107, -86, -105, 37, 108, -18, -85, -68, 16, 102, -94, 118, 95, 79, 31, 13, 50, 99, -98, -103, -80, -85, 64, 45, -55, -7, -66, -96, -6, 107, 117, -47, -38, -52, 10, -79, 89, -68, -110, 71, 93, -9, 53, -90, 97, -16, 66, -17, -36, 113, 123, -48, 72, 81, -105, -26, 121, 105, 101, -91, 73, 81, 85, 50, -55, 118, -117, 10, -98, 81, -38, 67, 49, 40, -31, 99, -95, -65, -119};
    msg.config.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ParametersXml #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ParametersXml msg;
    msg.setTimeStamp(0.7894898861520343);
    msg.setSource(59747U);
    msg.setSourceEntity(115U);
    msg.setDestination(42247U);
    msg.setDestinationEntity(224U);
    msg.locale.assign("VBHIOQWBMLLRAYNJRIP");
    const signed char tmp_msg_0[] = {10, 125, -84, -25, -104, -79, 114, -46, 95, 82, -98, -94, -118, 7, 116, 15, -33, 59, 84, -55, -25, -34, -128, 33, -2, 59, 47, 82, 115, -21, -67, -13, 95, -119, 88, 75, -91, -31, 80, 35, 35, 108, -93, 86, -7, -48, 102, -65, 33, 38, -6, -15, 84, 50, -36, -21, -105, 18, -81, 94, -90, -18, -22, -87, -70, -124, 65, -8, 32, -25, 73, -40, 18, 66, 89, 77, -88, -99, 30, 16, -82, -3, -98, 91, -95, 78, 112, 42, 82, -97, 113, -88, 23, -82, 57, 86, 32, -83, 9, -54, 64, 89, 22, 112, 86, 50, -60, -15, 53, 93, -105, 54, 9, 125, 4, -79, 35, -64, -24, 102, -107, -112, 105, -49, 36, 114, -23, -5, -103, -99, -78, 79, 73, -74, 78, 57, 18, 30, -30, -66, -53, 20, 103, 91, -4, 29, -87, -91, 31, 18, -19, -92, 7, -114, 15, -80, 65, -121, -33, 51, 113, -74, 93, -14, 2, 52, 12, 69, -84, 54, -107, 44, 67, 20, -92, -124, -102, 33, -69, -72, 105, 76, 27, -65, -55, -26, -67, 26, -117, -49, -20, 66, -30, -69, -49, -20, 17, 78, -62, 65, -92, -111, 17, 69, 68, 3, 0};
    msg.config.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ParametersXml #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ParametersXml msg;
    msg.setTimeStamp(0.44990830107415536);
    msg.setSource(32866U);
    msg.setSourceEntity(241U);
    msg.setDestination(34506U);
    msg.setDestinationEntity(145U);
    msg.locale.assign("RAEKFUVRRMHWGURRUTPODIRIKVXQWFZEMXJWQFUBHUSWBDMDOOJFXJOPLNFHGI");
    const signed char tmp_msg_0[] = {51, -78, 14, -121, 49, -68, 4, -55, 9, -3, -10, -44, 51, -69, -121, 24, -16, -18, 18, 90, -111, -98, -88, 39, -120, -99, 54, 57, 3, -76, -30, 21, 57, -12, 87, -1, 120, -73, -9, -85, -90, 116, -86, -19, -19, -105, 112, 36, 80, -21, 55, 65, 47, 23, 71, -33, 18, -11, 86, 36, 56, -51, 59, -44, -104, 87, -21, -10, 60, -83, -90, 24, -112, -59, 108, -22, -117, -65, 37, -1, -61, 3, 82, -43, -94, 14, -76, 78, 50, 71, -50, -40, 79, 87, 106, 2, -68, -13, -72, -88, 81, 15, 101, 112, 99, -20, 88, 96, 56, 65, 71, -70, 80, 39, -90, 20, 89, -21, 31, -126, 109, -117, 103, -25, 56, -47, -92, 43, -25, 31, 34};
    msg.config.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ParametersXml #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetParametersXml msg;
    msg.setTimeStamp(0.3609828631746892);
    msg.setSource(21222U);
    msg.setSourceEntity(87U);
    msg.setDestination(63639U);
    msg.setDestinationEntity(28U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetParametersXml #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetParametersXml msg;
    msg.setTimeStamp(0.4607046424794218);
    msg.setSource(8674U);
    msg.setSourceEntity(35U);
    msg.setDestination(30635U);
    msg.setDestinationEntity(215U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetParametersXml #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetParametersXml msg;
    msg.setTimeStamp(0.5511784157102203);
    msg.setSource(4284U);
    msg.setSourceEntity(207U);
    msg.setDestination(22129U);
    msg.setDestinationEntity(72U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetParametersXml #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetImageCoords msg;
    msg.setTimeStamp(0.1318851693711922);
    msg.setSource(51935U);
    msg.setSourceEntity(2U);
    msg.setDestination(23900U);
    msg.setDestinationEntity(168U);
    msg.camid = 38U;
    msg.x = 2787U;
    msg.y = 837U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetImageCoords #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetImageCoords msg;
    msg.setTimeStamp(0.1229848745703952);
    msg.setSource(33568U);
    msg.setSourceEntity(166U);
    msg.setDestination(51613U);
    msg.setDestinationEntity(77U);
    msg.camid = 244U;
    msg.x = 42277U;
    msg.y = 15256U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetImageCoords #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetImageCoords msg;
    msg.setTimeStamp(0.5783918782411855);
    msg.setSource(26882U);
    msg.setSourceEntity(103U);
    msg.setDestination(61187U);
    msg.setDestinationEntity(192U);
    msg.camid = 105U;
    msg.x = 16504U;
    msg.y = 48149U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetImageCoords #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetImageCoords msg;
    msg.setTimeStamp(0.7063528529121933);
    msg.setSource(22022U);
    msg.setSourceEntity(75U);
    msg.setDestination(39209U);
    msg.setDestinationEntity(240U);
    msg.camid = 8U;
    msg.x = 33785U;
    msg.y = 59311U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetImageCoords #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetImageCoords msg;
    msg.setTimeStamp(0.5270146432881766);
    msg.setSource(34601U);
    msg.setSourceEntity(150U);
    msg.setDestination(18275U);
    msg.setDestinationEntity(55U);
    msg.camid = 111U;
    msg.x = 53988U;
    msg.y = 51018U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetImageCoords #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetImageCoords msg;
    msg.setTimeStamp(0.9626013816114992);
    msg.setSource(58603U);
    msg.setSourceEntity(25U);
    msg.setDestination(20541U);
    msg.setDestinationEntity(0U);
    msg.camid = 87U;
    msg.x = 35041U;
    msg.y = 37298U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetImageCoords #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetWorldCoordinates msg;
    msg.setTimeStamp(0.773064197095165);
    msg.setSource(40685U);
    msg.setSourceEntity(117U);
    msg.setDestination(21181U);
    msg.setDestinationEntity(231U);
    msg.tracking = 79U;
    msg.lat = 0.8465520157209838;
    msg.lon = 0.8313701402683843;
    msg.x = 0.2338733128902707;
    msg.y = 0.328239431509025;
    msg.z = 0.9114979813993925;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetWorldCoordinates #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetWorldCoordinates msg;
    msg.setTimeStamp(0.7211265003313195);
    msg.setSource(798U);
    msg.setSourceEntity(134U);
    msg.setDestination(20878U);
    msg.setDestinationEntity(182U);
    msg.tracking = 170U;
    msg.lat = 0.4903567010517522;
    msg.lon = 0.4179386784417858;
    msg.x = 0.14972585592588006;
    msg.y = 0.46221752821503936;
    msg.z = 0.7373394263104612;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetWorldCoordinates #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetWorldCoordinates msg;
    msg.setTimeStamp(0.10684672748890345);
    msg.setSource(38456U);
    msg.setSourceEntity(49U);
    msg.setDestination(39179U);
    msg.setDestinationEntity(190U);
    msg.tracking = 76U;
    msg.lat = 0.5776559313714745;
    msg.lon = 0.21865025571747287;
    msg.x = 0.9205579393510114;
    msg.y = 0.5988307313550659;
    msg.z = 0.18847838765017244;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetWorldCoordinates #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAnglesExtended msg;
    msg.setTimeStamp(0.27754769220801123);
    msg.setSource(45330U);
    msg.setSourceEntity(251U);
    msg.setDestination(40024U);
    msg.setDestinationEntity(122U);
    msg.target.assign("RMBCKBVSAKXGEEHJEKMKYNDYRQOXFTLFFBSTRTJSPCWRMYDZTUIZBJQVPXSHLQHAUUGXWRAIIESOOOCWMZIZUDYQJWIYQJYJRRPAWACPNUCZYSKLTQNGXISMULCJYKTVLQLPANVIZNAFFEWRXHXHYJLVBDVANNEMOWSNGNOAUTZJCPFPFBKIVYTLVLOHKHPI");
    msg.lbearing = 0.5555876293576689;
    msg.lelevation = 0.1303996006246677;
    msg.bearing = 0.23793261489761897;
    msg.elevation = 0.6009482944486185;
    msg.phi = 0.007973166175573643;
    msg.theta = 0.8129316611105165;
    msg.psi = 0.9889982393651818;
    msg.accuracy = 0.7951782470374525;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAnglesExtended #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAnglesExtended msg;
    msg.setTimeStamp(0.024514709151780667);
    msg.setSource(40879U);
    msg.setSourceEntity(117U);
    msg.setDestination(38176U);
    msg.setDestinationEntity(169U);
    msg.target.assign("HXBQQVHGOHLORHEYJGWVQIEDAFSVOPINJAKZNNFKOANJELYCCCVOLIHQGVXMSHSGLBDMOGSJYUQMOIXRXWEKOTCUALUKQVFCUMSZMZVZFHKJLNEBHTWUJYXETSBKASEGPZPPJWLXOFGDCAKZQTINQVIXRLHBXAMFGMWDEMNRDMWDDWMXKUQTRIZYOUUTBBPCJARUZUBDTGRFYDRTPNYRNTWBQRLJIZFNA");
    msg.lbearing = 0.4592558264160267;
    msg.lelevation = 0.06404495514524167;
    msg.bearing = 0.6709675856069206;
    msg.elevation = 0.7236641911053842;
    msg.phi = 0.5137872249033419;
    msg.theta = 0.9560146585234477;
    msg.psi = 0.5736574500959708;
    msg.accuracy = 0.47354093320262114;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAnglesExtended #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAnglesExtended msg;
    msg.setTimeStamp(0.11784299533071252);
    msg.setSource(35550U);
    msg.setSourceEntity(98U);
    msg.setDestination(10895U);
    msg.setDestinationEntity(166U);
    msg.target.assign("DAYXMRJPSRUWZLDDAQAPHNTYXCCOIMXIQPIBUJWVOYUEHWXWZVBGLUXYSFCTWWHGBJQFXMLICGQVTQHDVMEHOMIRSXWFLSJEMVIANMTRDDCENIAUXRSLVFOUPNMKFANMFNQCBUKXCDTJYYDLEJSIZCMJGHKFPKPVFOJGZKWZECEATBIAJOPKYTKWGHTIYOOEHNZYADBELVLUVPSUDNREZZNBKHLBSZSZCRXYTK");
    msg.lbearing = 0.17389903639642867;
    msg.lelevation = 0.007416250993695361;
    msg.bearing = 0.8556951909910627;
    msg.elevation = 0.1283009803914169;
    msg.phi = 0.329497244288971;
    msg.theta = 0.9771165402747723;
    msg.psi = 0.0537819418897546;
    msg.accuracy = 0.30924862102766537;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAnglesExtended #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPositionExtended msg;
    msg.setTimeStamp(0.8141506518492369);
    msg.setSource(31430U);
    msg.setSourceEntity(119U);
    msg.setDestination(21503U);
    msg.setDestinationEntity(150U);
    msg.target.assign("RXZQQORUGPFBYYMGNNFAECWWWZZQYWBTYDKVMVJS");
    msg.x = 0.585542173872663;
    msg.y = 0.9656226633695609;
    msg.z = 0.323634678383136;
    msg.n = 0.2539100131465495;
    msg.e = 0.6185298139814825;
    msg.d = 0.909858345463959;
    msg.phi = 0.9731089182552324;
    msg.theta = 0.39587121462835184;
    msg.psi = 0.21367298594689654;
    msg.accuracy = 0.7975923084007849;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPositionExtended #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPositionExtended msg;
    msg.setTimeStamp(0.6377350270180575);
    msg.setSource(27826U);
    msg.setSourceEntity(66U);
    msg.setDestination(51585U);
    msg.setDestinationEntity(56U);
    msg.target.assign("RBOPNHOLKJYDJMMVFDIOTGPUGIJTNKFWBVIGOQBUIAHBWJCFWNVKNICCNBZFQHQTSGERAZNVJEDXHHPAGXLCLMLXVAQLYUT");
    msg.x = 0.7504706990193025;
    msg.y = 0.10079448779314704;
    msg.z = 0.6533986107465966;
    msg.n = 0.26107117699920546;
    msg.e = 0.9920145405839333;
    msg.d = 0.13172318071410183;
    msg.phi = 0.9026573107564463;
    msg.theta = 0.5071243811244055;
    msg.psi = 0.10861227858306033;
    msg.accuracy = 0.5607068471901365;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPositionExtended #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPositionExtended msg;
    msg.setTimeStamp(0.6272396795427393);
    msg.setSource(1802U);
    msg.setSourceEntity(201U);
    msg.setDestination(15021U);
    msg.setDestinationEntity(4U);
    msg.target.assign("MXNVSBYGWHDEHVNUIQKTDZIMUIMOOSEHSNWXYPUKQLQFQCPBLLLHISYTEADHQGEECXXXUFVAPRJRPCDKZDXYDUDZRMDAJZCDBESYGVWUWNNYGZFSQ");
    msg.x = 0.014368371552961334;
    msg.y = 0.9136032845575615;
    msg.z = 0.5390127702870928;
    msg.n = 0.4995976830574955;
    msg.e = 0.2180199737039452;
    msg.d = 0.654859638771009;
    msg.phi = 0.07405474658763633;
    msg.theta = 0.5051720740065376;
    msg.psi = 0.9715426181012022;
    msg.accuracy = 0.9080468848449191;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPositionExtended #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFixExtended msg;
    msg.setTimeStamp(0.8383339855417495);
    msg.setSource(23856U);
    msg.setSourceEntity(127U);
    msg.setDestination(43398U);
    msg.setDestinationEntity(182U);
    msg.target.assign("GLMQIYYCII");
    msg.lat = 0.9728254107960418;
    msg.lon = 0.3753724541097505;
    msg.z_units = 169U;
    msg.z = 0.7628323472984007;
    msg.accuracy = 0.28734414675054987;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFixExtended #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFixExtended msg;
    msg.setTimeStamp(0.8349028858089738);
    msg.setSource(57726U);
    msg.setSourceEntity(187U);
    msg.setDestination(32283U);
    msg.setDestinationEntity(234U);
    msg.target.assign("SMAEBEXTQCHWXLJLIFEUEZOLUAWRYIKPXYNVWWJHJHSKBHVVSBQXMTUWMFQRZZLMDIPDYUQJFRIXZZLGUGMOJTTLVXHJUSDNSU");
    msg.lat = 0.15105461605191706;
    msg.lon = 0.8198009082745878;
    msg.z_units = 153U;
    msg.z = 0.10419805286337747;
    msg.accuracy = 0.45323223321031636;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFixExtended #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFixExtended msg;
    msg.setTimeStamp(0.7057578118193185);
    msg.setSource(55875U);
    msg.setSourceEntity(8U);
    msg.setDestination(53700U);
    msg.setDestinationEntity(89U);
    msg.target.assign("CYKYQTEFXSRNJVQOXPHZAHTUYXAAPKZNIHNUYUILIDTDNCRSTTFCMXOHTUIQXBFWZLLCMGRXAGDNSLORFKLMZTWGPZBFWWNIQUUFDHPXGHVTNYIFOMPHGYDMV");
    msg.lat = 0.7768566398051976;
    msg.lon = 0.945743340506956;
    msg.z_units = 169U;
    msg.z = 0.442545717760098;
    msg.accuracy = 0.41649632787384516;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFixExtended #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblModem msg;
    msg.setTimeStamp(0.631329271613956);
    msg.setSource(21179U);
    msg.setSourceEntity(92U);
    msg.setDestination(22258U);
    msg.setDestinationEntity(14U);
    msg.name.assign("JZNSFMSZDXOYKWBVHTBVZSJXPCECSARAYPFRUMIDXPRLLJWKETDCJIRQYWMLHIXFYTEAQNDSVVMDJGRPGFCOIKOCDLWOBKEYNVLRPWEWLBJHXIZUUSTJLLNMXNBQUMD");
    msg.lat = 0.8204141035076556;
    msg.lon = 0.16985553620420057;
    msg.z = 0.9679269328834436;
    msg.z_units = 33U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblModem #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblModem msg;
    msg.setTimeStamp(0.13760430409093427);
    msg.setSource(51531U);
    msg.setSourceEntity(182U);
    msg.setDestination(42479U);
    msg.setDestinationEntity(62U);
    msg.name.assign("URJRHGFFYQGDSQXCZAJHGCJGZMUTSLNFDPXSRJDRR");
    msg.lat = 0.8950328953140442;
    msg.lon = 0.5542908619535118;
    msg.z = 0.7192560631936589;
    msg.z_units = 224U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblModem #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblModem msg;
    msg.setTimeStamp(0.46810038065012893);
    msg.setSource(55430U);
    msg.setSourceEntity(19U);
    msg.setDestination(2271U);
    msg.setDestinationEntity(221U);
    msg.name.assign("EXFRIIJMAAJINIMCFTLRQPKEESDGPVY");
    msg.lat = 0.9370882267499253;
    msg.lon = 0.7280313841877575;
    msg.z = 0.9472823209689487;
    msg.z_units = 48U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblModem #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblConfig msg;
    msg.setTimeStamp(0.2775714273266616);
    msg.setSource(34641U);
    msg.setSourceEntity(252U);
    msg.setDestination(46596U);
    msg.setDestinationEntity(249U);
    msg.op = 40U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("MAPTTBWMMRTCUCODFYNLUBEFWHKXTULSNYEPJZSVLCPIQRNESRBEXFFXUGKXHPOQDDKDQADXWVTYBJNCGZXJQXKTAQCOIDRSFVOGYUZLGFIOZBPARVQUTGZBPWZOEJPYCWFFHNVLCZWMYVKAHRNTHMIFMUKWDRMQNNCKGJPOJXKLVBOQUHSNJZKAIAVQPSDUVMMUHJDYBLLTIJC");
    tmp_msg_0.lat = 0.6987616768878577;
    tmp_msg_0.lon = 0.10073013388602936;
    tmp_msg_0.z = 0.7030071717182297;
    tmp_msg_0.z_units = 116U;
    msg.modems.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblConfig #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblConfig msg;
    msg.setTimeStamp(0.7485253746419321);
    msg.setSource(7621U);
    msg.setSourceEntity(142U);
    msg.setDestination(2958U);
    msg.setDestinationEntity(108U);
    msg.op = 54U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblConfig #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblConfig msg;
    msg.setTimeStamp(0.2551184280892378);
    msg.setSource(64873U);
    msg.setSourceEntity(223U);
    msg.setDestination(8047U);
    msg.setDestinationEntity(116U);
    msg.op = 56U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("PFILLJUBMSHJINZWPNWLIPCICWIDKPRTSR");
    tmp_msg_0.lat = 0.5222266355463829;
    tmp_msg_0.lon = 0.9502008697320216;
    tmp_msg_0.z = 0.8889170001432414;
    tmp_msg_0.z_units = 209U;
    msg.modems.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblConfig #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOrganicMatter msg;
    msg.setTimeStamp(0.9875612961891194);
    msg.setSource(12568U);
    msg.setSourceEntity(178U);
    msg.setDestination(43378U);
    msg.setDestinationEntity(22U);
    msg.value = 0.06197122828852508;
    msg.type = 136U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOrganicMatter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOrganicMatter msg;
    msg.setTimeStamp(0.11447775995017329);
    msg.setSource(34256U);
    msg.setSourceEntity(239U);
    msg.setDestination(18408U);
    msg.setDestinationEntity(23U);
    msg.value = 0.6003763075049928;
    msg.type = 122U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOrganicMatter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOrganicMatter msg;
    msg.setTimeStamp(0.4590432055742295);
    msg.setSource(25424U);
    msg.setSourceEntity(17U);
    msg.setDestination(62946U);
    msg.setDestinationEntity(242U);
    msg.value = 0.5537257658324591;
    msg.type = 218U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOrganicMatter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OpticalBackscatter msg;
    msg.setTimeStamp(0.02358690267056851);
    msg.setSource(47789U);
    msg.setSourceEntity(77U);
    msg.setDestination(32913U);
    msg.setDestinationEntity(32U);
    msg.value = 0.046964142858025526;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OpticalBackscatter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OpticalBackscatter msg;
    msg.setTimeStamp(0.43342128004267744);
    msg.setSource(45365U);
    msg.setSourceEntity(85U);
    msg.setDestination(46923U);
    msg.setDestinationEntity(99U);
    msg.value = 0.772616788033318;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OpticalBackscatter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OpticalBackscatter msg;
    msg.setTimeStamp(0.7653964630936335);
    msg.setSource(30958U);
    msg.setSourceEntity(251U);
    msg.setDestination(61611U);
    msg.setDestinationEntity(236U);
    msg.value = 0.8681782577743026;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OpticalBackscatter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Tachograph msg;
    msg.setTimeStamp(0.9483447281779167);
    msg.setSource(60372U);
    msg.setSourceEntity(2U);
    msg.setDestination(36465U);
    msg.setDestinationEntity(200U);
    msg.timestamp_last_service = 0.6874343383735679;
    msg.time_next_service = 0.4149493392205986;
    msg.time_motor_next_service = 0.14729286820135612;
    msg.time_idle_ground = 0.9160476090325552;
    msg.time_idle_air = 0.4075683106800475;
    msg.time_idle_water = 0.01632650189082052;
    msg.time_idle_underwater = 0.42482628483480067;
    msg.time_idle_unknown = 0.8466342951338862;
    msg.time_motor_ground = 0.06307996663386328;
    msg.time_motor_air = 0.06517473949178032;
    msg.time_motor_water = 0.71685833061091;
    msg.time_motor_underwater = 0.34042966354934434;
    msg.time_motor_unknown = 0.24639173361892874;
    msg.rpm_min = -10049;
    msg.rpm_max = 1513;
    msg.depth_max = 0.9465975106336074;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Tachograph #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Tachograph msg;
    msg.setTimeStamp(0.22482537183737517);
    msg.setSource(51064U);
    msg.setSourceEntity(32U);
    msg.setDestination(39925U);
    msg.setDestinationEntity(156U);
    msg.timestamp_last_service = 0.7081441303335317;
    msg.time_next_service = 0.3191871276405406;
    msg.time_motor_next_service = 0.9019591291430948;
    msg.time_idle_ground = 0.6729886149248712;
    msg.time_idle_air = 0.11510605043572641;
    msg.time_idle_water = 0.022252649698114246;
    msg.time_idle_underwater = 0.6156840726696479;
    msg.time_idle_unknown = 0.3674383734104103;
    msg.time_motor_ground = 0.28670470418171556;
    msg.time_motor_air = 0.9403619392664662;
    msg.time_motor_water = 0.6435468698808865;
    msg.time_motor_underwater = 0.9293104675629451;
    msg.time_motor_unknown = 0.511718781883777;
    msg.rpm_min = 22657;
    msg.rpm_max = 4467;
    msg.depth_max = 0.12129834666706563;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Tachograph #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Tachograph msg;
    msg.setTimeStamp(0.161250809890658);
    msg.setSource(41850U);
    msg.setSourceEntity(112U);
    msg.setDestination(2423U);
    msg.setDestinationEntity(213U);
    msg.timestamp_last_service = 0.9983551864862881;
    msg.time_next_service = 0.721855530729459;
    msg.time_motor_next_service = 0.747166936876087;
    msg.time_idle_ground = 0.8095385911915044;
    msg.time_idle_air = 0.2396111874561372;
    msg.time_idle_water = 0.40197515873746015;
    msg.time_idle_underwater = 0.32722043093246767;
    msg.time_idle_unknown = 0.1558507479744099;
    msg.time_motor_ground = 0.28823393902169236;
    msg.time_motor_air = 0.39026871742440694;
    msg.time_motor_water = 0.17038740087843118;
    msg.time_motor_underwater = 0.023112827310583284;
    msg.time_motor_unknown = 0.44720218470529993;
    msg.rpm_min = -23884;
    msg.rpm_max = 5067;
    msg.depth_max = 0.25278942113617675;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Tachograph #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ApmStatus msg;
    msg.setTimeStamp(0.0211916541688435);
    msg.setSource(35170U);
    msg.setSourceEntity(58U);
    msg.setDestination(46863U);
    msg.setDestinationEntity(156U);
    msg.severity = 197U;
    msg.text.assign("XDRNJFWXOPNYYROQRLSDKUQRZTBYSBLIQVQNAGZSHLWYEJXHWFHORVOAZDRYDXLINONUFQMWMPSCZKYIITNYXFAUWDBGTXYMJPFETUTDBLPGXRWSARKQQXAUKVRNUASCIHIEZCAGVLSSVPAEWEH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ApmStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ApmStatus msg;
    msg.setTimeStamp(0.637603314363058);
    msg.setSource(8331U);
    msg.setSourceEntity(206U);
    msg.setDestination(39325U);
    msg.setDestinationEntity(14U);
    msg.severity = 113U;
    msg.text.assign("EAHLAHUTZPKCXJBKDTHMNHABDLEGKFEZBCIRPQYNKJOWWUEZSIUWWFFSNZDEJQJWSDPDRQZVVMNYBJLUCTYWXMACQBNXXTFOSCVVDSEXSWYPQHAPPKRRRUROLZCMTREZIYOEIAKNAOYKJXXLGSUSWPOVGFFQQIDXMFJFNFIJDPPGQICRWRTLZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ApmStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ApmStatus msg;
    msg.setTimeStamp(0.06079209936900476);
    msg.setSource(26851U);
    msg.setSourceEntity(178U);
    msg.setDestination(1294U);
    msg.setDestinationEntity(97U);
    msg.severity = 7U;
    msg.text.assign("JNWALLZLXFGAIWWKAGDRAVDHPFONEEWNLJGCTSWSBZVPTDIKTKZLIMKSZQBMRBUFEBHNWUVXMQJSJEVASNRQOJDFCSMMHVKXZDPAOHQYKGHDQTKSMYQRDKSUQDMUMUFLCVYYZFZUFARSEHNGLIFTLVPKJJANNSEVCKXYAGQEOMBTNZETBHREWBRIZPVUFOCCCYRWJGTOWYZOIMGDBIH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ApmStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SadcReadings msg;
    msg.setTimeStamp(0.7070901042820902);
    msg.setSource(60415U);
    msg.setSourceEntity(59U);
    msg.setDestination(4573U);
    msg.setDestinationEntity(68U);
    msg.channel = -68;
    msg.value = 955104111;
    msg.gain = 244U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SadcReadings #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SadcReadings msg;
    msg.setTimeStamp(0.6142924527852464);
    msg.setSource(21175U);
    msg.setSourceEntity(206U);
    msg.setDestination(7519U);
    msg.setDestinationEntity(44U);
    msg.channel = -37;
    msg.value = 1339820876;
    msg.gain = 233U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SadcReadings #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SadcReadings msg;
    msg.setTimeStamp(0.5345925631316163);
    msg.setSource(46772U);
    msg.setSourceEntity(148U);
    msg.setDestination(30126U);
    msg.setDestinationEntity(218U);
    msg.channel = -12;
    msg.value = 739578264;
    msg.gain = 62U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SadcReadings #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DmsDetection msg;
    msg.setTimeStamp(0.37254196093970027);
    msg.setSource(29243U);
    msg.setSourceEntity(152U);
    msg.setDestination(30517U);
    msg.setDestinationEntity(231U);
    msg.ch01 = 0.0804043347395812;
    msg.ch02 = 0.549403311447142;
    msg.ch03 = 0.2837396589904926;
    msg.ch04 = 0.23402255331534016;
    msg.ch05 = 0.3218751386358999;
    msg.ch06 = 0.7719416928973826;
    msg.ch07 = 0.7322138732915882;
    msg.ch08 = 0.0684719012042625;
    msg.ch09 = 0.6699044875139826;
    msg.ch10 = 0.23654584489012742;
    msg.ch11 = 0.9777842304209733;
    msg.ch12 = 0.9355664628258085;
    msg.ch13 = 0.9121160332284649;
    msg.ch14 = 0.8731675543887545;
    msg.ch15 = 0.3425177382688728;
    msg.ch16 = 0.12436467644341853;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DmsDetection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DmsDetection msg;
    msg.setTimeStamp(0.28431523308374773);
    msg.setSource(34663U);
    msg.setSourceEntity(101U);
    msg.setDestination(33087U);
    msg.setDestinationEntity(122U);
    msg.ch01 = 0.5347298601686747;
    msg.ch02 = 0.13836577347052914;
    msg.ch03 = 0.34785016883505826;
    msg.ch04 = 0.7231269497665004;
    msg.ch05 = 0.0015839446215666353;
    msg.ch06 = 0.9578297356099524;
    msg.ch07 = 0.9474371494899548;
    msg.ch08 = 0.31834323954506893;
    msg.ch09 = 0.5301191660422501;
    msg.ch10 = 0.40681732538898197;
    msg.ch11 = 0.4371489877368544;
    msg.ch12 = 0.9802782579747474;
    msg.ch13 = 0.04879493585582273;
    msg.ch14 = 0.19480254192589552;
    msg.ch15 = 0.5156493291165077;
    msg.ch16 = 0.945819986263621;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DmsDetection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DmsDetection msg;
    msg.setTimeStamp(0.9449572884968592);
    msg.setSource(64312U);
    msg.setSourceEntity(240U);
    msg.setDestination(24131U);
    msg.setDestinationEntity(180U);
    msg.ch01 = 0.29204464438259614;
    msg.ch02 = 0.082254950054932;
    msg.ch03 = 0.6964663856941469;
    msg.ch04 = 0.3932628697478696;
    msg.ch05 = 0.27221838793800357;
    msg.ch06 = 0.7817645157851911;
    msg.ch07 = 0.5168929237178314;
    msg.ch08 = 0.6782427414265241;
    msg.ch09 = 0.3497755447425518;
    msg.ch10 = 0.11511223374510826;
    msg.ch11 = 0.9589251311995166;
    msg.ch12 = 0.45752161207173647;
    msg.ch13 = 0.3178807810382783;
    msg.ch14 = 0.8950195655864422;
    msg.ch15 = 0.8917219266120922;
    msg.ch16 = 0.7680286875386686;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DmsDetection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HomePosition msg;
    msg.setTimeStamp(0.08906518394307095);
    msg.setSource(49141U);
    msg.setSourceEntity(106U);
    msg.setDestination(39990U);
    msg.setDestinationEntity(143U);
    msg.op = 109U;
    msg.lat = 0.6230876441402291;
    msg.lon = 0.812884157218545;
    msg.height = 0.7981847073783127;
    msg.depth = 0.4547548953812066;
    msg.alt = 0.46632659038291946;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HomePosition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HomePosition msg;
    msg.setTimeStamp(0.5139162390313885);
    msg.setSource(32025U);
    msg.setSourceEntity(17U);
    msg.setDestination(28550U);
    msg.setDestinationEntity(199U);
    msg.op = 112U;
    msg.lat = 0.4720285992405513;
    msg.lon = 0.4604661458447771;
    msg.height = 0.9349752581699137;
    msg.depth = 0.6468001371793008;
    msg.alt = 0.415668432749702;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HomePosition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HomePosition msg;
    msg.setTimeStamp(0.4112534013655019);
    msg.setSource(32094U);
    msg.setSourceEntity(68U);
    msg.setDestination(23816U);
    msg.setDestinationEntity(157U);
    msg.op = 51U;
    msg.lat = 0.750121967163187;
    msg.lon = 0.2620543431569974;
    msg.height = 0.8749777136387681;
    msg.depth = 0.5704030103365018;
    msg.alt = 0.10560849764714397;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HomePosition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedFreq msg;
    msg.setTimeStamp(0.761560331266968);
    msg.setSource(25141U);
    msg.setSourceEntity(126U);
    msg.setDestination(25691U);
    msg.setDestinationEntity(162U);
    msg.value = 0.3600987821418544;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedFreq #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedFreq msg;
    msg.setTimeStamp(0.8238552592099277);
    msg.setSource(3274U);
    msg.setSourceEntity(171U);
    msg.setDestination(48104U);
    msg.setDestinationEntity(63U);
    msg.value = 0.5580880353571869;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedFreq #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedFreq msg;
    msg.setTimeStamp(0.12965191141672372);
    msg.setSource(56598U);
    msg.setSourceEntity(162U);
    msg.setDestination(43444U);
    msg.setDestinationEntity(117U);
    msg.value = 0.7600816202072849;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedFreq #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CollisionAvoidance msg;
    msg.setTimeStamp(0.7191572138031558);
    msg.setSource(39803U);
    msg.setSourceEntity(243U);
    msg.setDestination(48429U);
    msg.setDestinationEntity(29U);
    msg.mmsi.assign("VUQGWMXOZDKUDTTGMWNJOSCKXBPWFISVNYVUTEQRKBQITEUYZXTWELMRHQFXATBSZWDGAUOZBDWLZFYUMBPCDHECNEXXLFNBOICOSQB");
    msg.lat = 0.44555294520916666;
    msg.lon = 0.17149169981282886;
    msg.x = 0.25606809689288823;
    msg.y = 0.8625183720808726;
    msg.speed = 0.5388249531507091;
    msg.course = 0.6427378278974659;
    msg.dist = 0.10148240300758105;
    msg.length = 0.8478747922079218;
    msg.width = 0.6658273253780478;
    msg.o_vect = 0.17712005378264184;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CollisionAvoidance #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CollisionAvoidance msg;
    msg.setTimeStamp(0.19723671678506172);
    msg.setSource(26574U);
    msg.setSourceEntity(42U);
    msg.setDestination(18667U);
    msg.setDestinationEntity(105U);
    msg.mmsi.assign("IICCBWOJZBJFOFJPKAELQYZKPAD");
    msg.lat = 0.33700580559217796;
    msg.lon = 0.679465616226148;
    msg.x = 0.364954828073634;
    msg.y = 0.8837701613234485;
    msg.speed = 0.4740187747020844;
    msg.course = 0.7926621312565362;
    msg.dist = 0.1836620950434763;
    msg.length = 0.10284521488241194;
    msg.width = 0.5798888176673829;
    msg.o_vect = 0.9272411330202208;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CollisionAvoidance #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CollisionAvoidance msg;
    msg.setTimeStamp(0.9117905000756942);
    msg.setSource(243U);
    msg.setSourceEntity(5U);
    msg.setDestination(41590U);
    msg.setDestinationEntity(242U);
    msg.mmsi.assign("BYJXZWKAHGKSQWFLZNVDYCDKDLKAXYOHIASWMXGJTQEIHFGLAQRWPZEOSDZFZCJPVYBXIPVMMIZ");
    msg.lat = 0.7194412565280113;
    msg.lon = 0.8773334383914408;
    msg.x = 0.4306163394194369;
    msg.y = 0.026580554496896336;
    msg.speed = 0.6376417567865593;
    msg.course = 0.8632562864804196;
    msg.dist = 0.4396630733965554;
    msg.length = 0.6386589398957155;
    msg.width = 0.5913386946019351;
    msg.o_vect = 0.481563625843594;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CollisionAvoidance #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Heave msg;
    msg.setTimeStamp(0.26511393807870387);
    msg.setSource(1252U);
    msg.setSourceEntity(106U);
    msg.setDestination(15850U);
    msg.setDestinationEntity(10U);
    msg.value = 0.18627850724691286;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Heave #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Heave msg;
    msg.setTimeStamp(0.8443299536738809);
    msg.setSource(1079U);
    msg.setSourceEntity(224U);
    msg.setDestination(31454U);
    msg.setDestinationEntity(121U);
    msg.value = 0.1628347646179047;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Heave #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Heave msg;
    msg.setTimeStamp(0.6211612427891635);
    msg.setSource(24195U);
    msg.setSourceEntity(209U);
    msg.setDestination(16666U);
    msg.setDestinationEntity(87U);
    msg.value = 0.43755561073767546;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Heave #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DynObsVec msg;
    msg.setTimeStamp(0.7598486021603434);
    msg.setSource(54936U);
    msg.setSourceEntity(89U);
    msg.setDestination(49306U);
    msg.setDestinationEntity(51U);
    IMC::CollisionAvoidance tmp_msg_0;
    tmp_msg_0.mmsi.assign("NQROBMXCOGEKUUIETMCAAVRBBWDKNGWVQGTPUPRXMRY");
    tmp_msg_0.lat = 0.9181000372696365;
    tmp_msg_0.lon = 0.17687588346905103;
    tmp_msg_0.x = 0.44106671593852687;
    tmp_msg_0.y = 0.721049816147552;
    tmp_msg_0.speed = 0.2841640016342424;
    tmp_msg_0.course = 0.48771336861732884;
    tmp_msg_0.dist = 0.1503371098299905;
    tmp_msg_0.length = 0.25021779271128475;
    tmp_msg_0.width = 0.267493241537627;
    tmp_msg_0.o_vect = 0.6567526861694526;
    msg.obstacles.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DynObsVec #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DynObsVec msg;
    msg.setTimeStamp(0.9791653106216776);
    msg.setSource(21071U);
    msg.setSourceEntity(96U);
    msg.setDestination(31376U);
    msg.setDestinationEntity(21U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DynObsVec #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DynObsVec msg;
    msg.setTimeStamp(0.5745671420783911);
    msg.setSource(12563U);
    msg.setSourceEntity(32U);
    msg.setDestination(50568U);
    msg.setDestinationEntity(227U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DynObsVec #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NegotiationMsgLog msg;
    msg.setTimeStamp(0.8887992376506383);
    msg.setSource(51097U);
    msg.setSourceEntity(77U);
    msg.setDestination(13111U);
    msg.setDestinationEntity(141U);
    msg.mmsi.assign("YJAHIUKKOJUIPLRBZALYPIZHREMWJOPLFLHNTGRNFENVIVOCOIPBKCGMLMQGAVJDRGCGDQADDEWQPEMXGYHASZCUZAATNOVQJHSNRIKWCYNXAMNQYPFHVEQHNIBPCLPEOWZRFNCUTJKEULXMHKJXAQSVUBYXGZCMTKXNQZFTKVOYTBVFUSRYQ");
    msg.msg_in = 27U;
    msg.msg_out = 135U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NegotiationMsgLog #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NegotiationMsgLog msg;
    msg.setTimeStamp(0.7735528450596383);
    msg.setSource(8189U);
    msg.setSourceEntity(124U);
    msg.setDestination(46625U);
    msg.setDestinationEntity(148U);
    msg.mmsi.assign("TWOIYZJPCCBWOMFSNCODAMZZSEYEAKCVBBGYJEPFVENYHWVIUQWAYEFONKVMFLBMQRZFCESGHKYPGTRJFDOANDQRSTRRYQGDTWMLWJNMUJNPXAOAPUVMWTGTYCNUXLRAGREHXBFIQAPMMHKRZUXHZTBZGQIFXUCJJGEDPGSSJVP");
    msg.msg_in = 81U;
    msg.msg_out = 179U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NegotiationMsgLog #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NegotiationMsgLog msg;
    msg.setTimeStamp(0.822044526013491);
    msg.setSource(33543U);
    msg.setSourceEntity(104U);
    msg.setDestination(33323U);
    msg.setDestinationEntity(240U);
    msg.mmsi.assign("MWULWEWIPLMYHONXKJZSPFSLDGUNEOKDBTLECDCTOFZXGBHXFOKUNKZEMKTCOKHTHWSQJPDWESDEMHTHVGVWYUICCSYVCUTVCAJLDHSJLBZYAEDOGIISQPNQGSQPGFFYLLAJMOOAVSEBQIAITXPJRXVRMNNRBKPFCCBXRRMFBTAOHMQMXFNWGU");
    msg.msg_in = 22U;
    msg.msg_out = 164U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NegotiationMsgLog #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CurrentProfile msg;
    msg.setTimeStamp(0.09034970224113514);
    msg.setSource(54677U);
    msg.setSourceEntity(182U);
    msg.setDestination(29831U);
    msg.setDestinationEntity(179U);
    msg.nbeams = 8U;
    msg.ncells = 72U;
    msg.coord_sys = 132U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CurrentProfile #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CurrentProfile msg;
    msg.setTimeStamp(0.8087857740667308);
    msg.setSource(40306U);
    msg.setSourceEntity(164U);
    msg.setDestination(39211U);
    msg.setDestinationEntity(33U);
    msg.nbeams = 158U;
    msg.ncells = 156U;
    msg.coord_sys = 180U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CurrentProfile #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CurrentProfile msg;
    msg.setTimeStamp(0.9353761477492042);
    msg.setSource(4859U);
    msg.setSourceEntity(160U);
    msg.setDestination(48760U);
    msg.setDestinationEntity(86U);
    msg.nbeams = 103U;
    msg.ncells = 251U;
    msg.coord_sys = 31U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CurrentProfile #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CurrentProfileCell msg;
    msg.setTimeStamp(0.9855610491233026);
    msg.setSource(33670U);
    msg.setSourceEntity(23U);
    msg.setDestination(30230U);
    msg.setDestinationEntity(193U);
    msg.cell_position = 0.8001278110968909;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.6661025041422662;
    tmp_msg_0.amp = 0.43229514544846304;
    tmp_msg_0.cor = 43U;
    msg.beams.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CurrentProfileCell #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CurrentProfileCell msg;
    msg.setTimeStamp(0.15059656531609134);
    msg.setSource(13880U);
    msg.setSourceEntity(11U);
    msg.setDestination(47140U);
    msg.setDestinationEntity(113U);
    msg.cell_position = 0.716583844016142;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CurrentProfileCell #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CurrentProfileCell msg;
    msg.setTimeStamp(0.39588755627370664);
    msg.setSource(16207U);
    msg.setSourceEntity(98U);
    msg.setDestination(35719U);
    msg.setDestinationEntity(6U);
    msg.cell_position = 0.043623482855807416;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CurrentProfileCell #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ADCPBeam msg;
    msg.setTimeStamp(0.36699473141057526);
    msg.setSource(31993U);
    msg.setSourceEntity(63U);
    msg.setDestination(20991U);
    msg.setDestinationEntity(123U);
    msg.vel = 0.9878080891061098;
    msg.amp = 0.25595778849328565;
    msg.cor = 131U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ADCPBeam #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ADCPBeam msg;
    msg.setTimeStamp(0.5207070447851725);
    msg.setSource(65192U);
    msg.setSourceEntity(172U);
    msg.setDestination(44762U);
    msg.setDestinationEntity(190U);
    msg.vel = 0.12429869607669597;
    msg.amp = 0.6191783831401579;
    msg.cor = 83U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ADCPBeam #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ADCPBeam msg;
    msg.setTimeStamp(0.503244110071373);
    msg.setSource(49236U);
    msg.setSourceEntity(86U);
    msg.setDestination(28144U);
    msg.setDestinationEntity(52U);
    msg.vel = 0.9179976142089865;
    msg.amp = 0.8983140288388646;
    msg.cor = 181U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ADCPBeam #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpioState msg;
    msg.setTimeStamp(0.3482477841982623);
    msg.setSource(65010U);
    msg.setSourceEntity(171U);
    msg.setDestination(57934U);
    msg.setDestinationEntity(157U);
    msg.name.assign("MKDCITUOZNMFYAYAVVLERUNMCXNIVGUOCMEAZBSDQLIWMATEBKDQMNXRJWQZMKJEUPOPGHRSCOGCLPRAAIDJSLXYYPJUKBMFVARJQOGYPGFGF");
    msg.value = 15U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpioState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpioState msg;
    msg.setTimeStamp(0.6797272795859122);
    msg.setSource(45782U);
    msg.setSourceEntity(116U);
    msg.setDestination(15082U);
    msg.setDestinationEntity(215U);
    msg.name.assign("MFJLESRLQRBKRVFGWUDFVYWVSYXDEWIQZQHSHYKBOSESHWPIVLCHWAHGIJXDJM");
    msg.value = 186U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpioState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpioState msg;
    msg.setTimeStamp(0.34995744862752876);
    msg.setSource(12987U);
    msg.setSourceEntity(79U);
    msg.setDestination(49635U);
    msg.setDestinationEntity(17U);
    msg.name.assign("LYPRBBLFZZTEKBNMRBF");
    msg.value = 132U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpioState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpioStateGet msg;
    msg.setTimeStamp(0.47688677636987264);
    msg.setSource(46353U);
    msg.setSourceEntity(42U);
    msg.setDestination(20399U);
    msg.setDestinationEntity(204U);
    msg.name.assign("PDSETZDXLMGYJLMBFKZQCTESMPVYFUGWIAFIJYGDNGROLNVSUCCTIJMLOEOHLHUICHWJKHFABHJUZQTMPPAEREQNWKDURBENUOPBYINHZAWWXPRFJNIEYRWHYSOXZDCUAGNELOXJYWKKMSSLJFXBQWHRVPQCANHVZWYDXDVTVXBFKOZAQAXJDZMNHTLK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpioStateGet #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpioStateGet msg;
    msg.setTimeStamp(0.9695453424293298);
    msg.setSource(13188U);
    msg.setSourceEntity(203U);
    msg.setDestination(20830U);
    msg.setDestinationEntity(47U);
    msg.name.assign("OHWKXLKFHFEFGNQYWNLKYXZVYQQZSGBJMEOPCIDEFFWSEXWAVOKAIGUCCOQUHWMDKSWNAJYARCBMUICVNBKNVEKPRHHRINZUAHWXHJWFZTPIHXFJTTGSGUJZDIUDEYLYJREDZBXRJPTXBSENQQOPIVHBRTVDTMASSQXMBGSZPDISPGRYDTFUJWAORMYTLKLALAQHODFOXBGGMOCXEYFQMZLVPUQGUOJKZCBKCI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpioStateGet #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpioStateGet msg;
    msg.setTimeStamp(0.28058612460182963);
    msg.setSource(7455U);
    msg.setSourceEntity(5U);
    msg.setDestination(28883U);
    msg.setDestinationEntity(203U);
    msg.name.assign("EHJREZQGRNDUBANTPVSTWFPXPGNADXTQXDEICDBPFXMHMEPRIWNGESSHNWA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpioStateGet #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpioStateSet msg;
    msg.setTimeStamp(0.47597724286691057);
    msg.setSource(23087U);
    msg.setSourceEntity(193U);
    msg.setDestination(24585U);
    msg.setDestinationEntity(119U);
    msg.name.assign("BMDFPLLMWVEFDRZTTLYYXPRPLVKMXAZJOLCWEJJFNKQZHQJWUUADGOEYX");
    msg.value = 65U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpioStateSet #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpioStateSet msg;
    msg.setTimeStamp(0.27762139027827437);
    msg.setSource(25832U);
    msg.setSourceEntity(158U);
    msg.setDestination(27528U);
    msg.setDestinationEntity(176U);
    msg.name.assign("KUXLANNXFSYCICGUGTURNIMRKJFLWPEDFBJZSIKDTABDHJNDBSJSZNPQAMQGIRFVWNGULOKHCXPQMAAIPMJYFEBKIBUMADEVLJOLZAZTZMCPVSQAOIXHEXTLAZCHWBOGNOQRPWVVYHWBVPVOLJHKQWIOQLJNEWUEHRDFDIZFESRPUSUZDRPVEQGFMYIQTMORBB");
    msg.value = 10U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpioStateSet #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpioStateSet msg;
    msg.setTimeStamp(0.05842525531709286);
    msg.setSource(58111U);
    msg.setSourceEntity(34U);
    msg.setDestination(29069U);
    msg.setDestinationEntity(0U);
    msg.name.assign("RSOJRLFECCDJAIKYTEYIMMUBLRKEZUIIM");
    msg.value = 74U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpioStateSet #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ColoredDissolvedOrganicMatter msg;
    msg.setTimeStamp(0.9092206903264224);
    msg.setSource(22429U);
    msg.setSourceEntity(175U);
    msg.setDestination(2347U);
    msg.setDestinationEntity(0U);
    msg.value = 0.8864058120607119;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ColoredDissolvedOrganicMatter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ColoredDissolvedOrganicMatter msg;
    msg.setTimeStamp(0.984489643253465);
    msg.setSource(42170U);
    msg.setSourceEntity(147U);
    msg.setDestination(19288U);
    msg.setDestinationEntity(10U);
    msg.value = 0.6629069647076875;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ColoredDissolvedOrganicMatter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ColoredDissolvedOrganicMatter msg;
    msg.setTimeStamp(0.11770223236577604);
    msg.setSource(19830U);
    msg.setSourceEntity(237U);
    msg.setDestination(660U);
    msg.setDestinationEntity(100U);
    msg.value = 0.8905375029841388;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ColoredDissolvedOrganicMatter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FluorescentDissolvedOrganicMatter msg;
    msg.setTimeStamp(0.4820192685323047);
    msg.setSource(13354U);
    msg.setSourceEntity(248U);
    msg.setDestination(26609U);
    msg.setDestinationEntity(202U);
    msg.value = 0.08610733187509734;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FluorescentDissolvedOrganicMatter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FluorescentDissolvedOrganicMatter msg;
    msg.setTimeStamp(0.19218520678848872);
    msg.setSource(23010U);
    msg.setSourceEntity(162U);
    msg.setDestination(30875U);
    msg.setDestinationEntity(146U);
    msg.value = 0.17115496910489614;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FluorescentDissolvedOrganicMatter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FluorescentDissolvedOrganicMatter msg;
    msg.setTimeStamp(0.6209403879806585);
    msg.setSource(62483U);
    msg.setSourceEntity(22U);
    msg.setDestination(37269U);
    msg.setDestinationEntity(101U);
    msg.value = 0.977332275468518;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FluorescentDissolvedOrganicMatter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TotalMagIntensity msg;
    msg.setTimeStamp(0.08015117326250265);
    msg.setSource(19372U);
    msg.setSourceEntity(4U);
    msg.setDestination(6478U);
    msg.setDestinationEntity(138U);
    msg.value = 0.18166307267006;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TotalMagIntensity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TotalMagIntensity msg;
    msg.setTimeStamp(0.8365661654552295);
    msg.setSource(28914U);
    msg.setSourceEntity(143U);
    msg.setDestination(12644U);
    msg.setDestinationEntity(88U);
    msg.value = 0.8519403570104267;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TotalMagIntensity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TotalMagIntensity msg;
    msg.setTimeStamp(0.46374994244113243);
    msg.setSource(21558U);
    msg.setSourceEntity(215U);
    msg.setDestination(41928U);
    msg.setDestinationEntity(233U);
    msg.value = 0.47463797514180084;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TotalMagIntensity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommRestriction msg;
    msg.setTimeStamp(0.9752155198356506);
    msg.setSource(35964U);
    msg.setSourceEntity(238U);
    msg.setDestination(46448U);
    msg.setDestinationEntity(116U);
    msg.restriction = 60U;
    msg.reason.assign("BKPUWRWMVMVVXFBLEADTMRTNDSBVNZEKVUHZCTEOEDRRCVJDNQRONGOZCMJUGSJKHZLEO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommRestriction #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommRestriction msg;
    msg.setTimeStamp(0.4246960758199182);
    msg.setSource(35786U);
    msg.setSourceEntity(231U);
    msg.setDestination(32377U);
    msg.setDestinationEntity(163U);
    msg.restriction = 135U;
    msg.reason.assign("IJVLYZPXWMQQGVEDQCOMMEUSVVABICNCPGYQBYPPIWOQFQICJOAZGJTZBLVDMCXXDHSTAWBKEURNZTXFTUQBCSAGTFMUFQNNZBKEBUPMRAHHRLXJSSAYRJLCGFRWDXGKMKOUXOFLQWJGUC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommRestriction #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommRestriction msg;
    msg.setTimeStamp(0.14088871934021507);
    msg.setSource(61660U);
    msg.setSourceEntity(134U);
    msg.setDestination(35203U);
    msg.setDestinationEntity(97U);
    msg.restriction = 132U;
    msg.reason.assign("IOOCOZCPYVZEKAFWNFVBKZJTSSSRTFVTMSCEADWHKNUDHCRIUXKMMEBZLJQVDGNCJFYJIRJOEQFYAHTOCAOHGPQWZDIHMUAXSLBTSSCXPPPHJZYQQIWYANTRRHLWDXJGNIBQLUMGBSPAXXKPOFONGDPIEOKYZTIFJAHELRXFKCEGGDBGNW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommRestriction #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TBRFishTag msg;
    msg.setTimeStamp(0.5573732793775312);
    msg.setSource(42040U);
    msg.setSourceEntity(69U);
    msg.setDestination(29121U);
    msg.setDestinationEntity(81U);
    msg.serial_no = 1562900489U;
    msg.unix_timestamp = 2835147810U;
    msg.millis = 56251U;
    msg.trans_protocol = 71U;
    msg.trans_id = 758002015U;
    msg.trans_data = 26674U;
    msg.snr = 157U;
    msg.trans_freq = 155U;
    msg.recv_mem_addr = 26660U;
    msg.lat = 0.4994852023371841;
    msg.lon = 0.03514476801869071;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TBRFishTag #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TBRFishTag msg;
    msg.setTimeStamp(0.6040122136513009);
    msg.setSource(54919U);
    msg.setSourceEntity(34U);
    msg.setDestination(54128U);
    msg.setDestinationEntity(175U);
    msg.serial_no = 3287580923U;
    msg.unix_timestamp = 2394486285U;
    msg.millis = 13314U;
    msg.trans_protocol = 194U;
    msg.trans_id = 3996004126U;
    msg.trans_data = 7323U;
    msg.snr = 98U;
    msg.trans_freq = 175U;
    msg.recv_mem_addr = 8104U;
    msg.lat = 0.1532033764178734;
    msg.lon = 0.6395826600922612;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TBRFishTag #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TBRFishTag msg;
    msg.setTimeStamp(0.7556113197904206);
    msg.setSource(61559U);
    msg.setSourceEntity(90U);
    msg.setDestination(25743U);
    msg.setDestinationEntity(15U);
    msg.serial_no = 3154358858U;
    msg.unix_timestamp = 3677194893U;
    msg.millis = 52623U;
    msg.trans_protocol = 8U;
    msg.trans_id = 1496048643U;
    msg.trans_data = 42584U;
    msg.snr = 218U;
    msg.trans_freq = 53U;
    msg.recv_mem_addr = 29092U;
    msg.lat = 0.6787457059263937;
    msg.lon = 0.8815342530973286;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TBRFishTag #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TBRSensor msg;
    msg.setTimeStamp(0.3116074292824811);
    msg.setSource(55075U);
    msg.setSourceEntity(211U);
    msg.setDestination(23137U);
    msg.setDestinationEntity(70U);
    msg.serial_no = 2328440355U;
    msg.unix_timestamp = 65347537U;
    msg.temperature = 0.33976574927217085;
    msg.avg_noise_level = 50U;
    msg.peak_noise_level = 239U;
    msg.recv_listen_freq = 13U;
    msg.recv_mem_addr = 12065U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TBRSensor #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TBRSensor msg;
    msg.setTimeStamp(0.04531464455624834);
    msg.setSource(58743U);
    msg.setSourceEntity(144U);
    msg.setDestination(49123U);
    msg.setDestinationEntity(241U);
    msg.serial_no = 4038988021U;
    msg.unix_timestamp = 1979377982U;
    msg.temperature = 0.19963231641087187;
    msg.avg_noise_level = 144U;
    msg.peak_noise_level = 53U;
    msg.recv_listen_freq = 50U;
    msg.recv_mem_addr = 57461U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TBRSensor #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TBRSensor msg;
    msg.setTimeStamp(0.440263923044534);
    msg.setSource(37706U);
    msg.setSourceEntity(9U);
    msg.setDestination(50379U);
    msg.setDestinationEntity(151U);
    msg.serial_no = 1602250548U;
    msg.unix_timestamp = 3443177699U;
    msg.temperature = 0.16615796177295905;
    msg.avg_noise_level = 14U;
    msg.peak_noise_level = 234U;
    msg.recv_listen_freq = 74U;
    msg.recv_mem_addr = 25387U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TBRSensor #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanProbSpec msg;
    msg.setTimeStamp(0.8383130306768088);
    msg.setSource(30530U);
    msg.setSourceEntity(102U);
    msg.setDestination(1755U);
    msg.setDestinationEntity(32U);
    msg.vehicle = 964541783U;
    msg.problem_type = 252U;
    msg.start_lat = 0.28736703248443707;
    msg.start_lon = 0.3175742222865793;
    msg.end_lat = 0.3704291779581119;
    msg.end_lon = 0.14177415591267417;
    msg.speed = 0.797607686369515;
    msg.speed_units = 107U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.9349572025933591;
    tmp_msg_0.lon = 0.9283533946285994;
    msg.area.push_back(tmp_msg_0);
    msg.custom.assign("BHGWFMJEXAWIPFDNPOREZQLVPFVLIDNXSUWTIFVZWAFGLDDGCMPNQNEETGJROIUXKALUJWZEGDZQLKAXETZSOUHHOHHTGWBVNYSNMKVKJMPDKWGLKECPRYRCIRFBAJTTTOTNXCYQYJMXOHOVMVRJSBUPCRUTIZDZEAYUESHAXOBQFXWDBGDFPJZOIGLRVKURRLQMZFCHXQYMMDWB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanProbSpec #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanProbSpec msg;
    msg.setTimeStamp(0.753060306437273);
    msg.setSource(7734U);
    msg.setSourceEntity(69U);
    msg.setDestination(53399U);
    msg.setDestinationEntity(213U);
    msg.vehicle = 1076489311U;
    msg.problem_type = 14U;
    msg.start_lat = 0.4556744208721485;
    msg.start_lon = 0.8381297601037204;
    msg.end_lat = 0.4306802868189945;
    msg.end_lon = 0.6433653071650904;
    msg.speed = 0.6760337119064486;
    msg.speed_units = 251U;
    msg.custom.assign("XFTWNQEGGMEAYUHHZDQEVOLCJTAFPPXZCOHZTBGTBOIDOKKXSFRGPYNPJSUDAJLWSWIEDVLHVANRIXBMTFLZFFWVXUIXFLKKHDAMDSFVMYQOGLMYRXVCYUJCKAJYUSQZUJZRCDTZGYRKQJEQMKPPVHNNWIUIZMLAPXMBOQZQNERVTWFNRKNBOHDWSSCYGGQBCICECSUEWQLHRDIWBTHXFOJUVGCLBVNOEPIIWHKJBMRTSGYEABYDK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanProbSpec #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanProbSpec msg;
    msg.setTimeStamp(0.5354929313154158);
    msg.setSource(16809U);
    msg.setSourceEntity(185U);
    msg.setDestination(34276U);
    msg.setDestinationEntity(74U);
    msg.vehicle = 3147023587U;
    msg.problem_type = 78U;
    msg.start_lat = 0.37738235749163784;
    msg.start_lon = 0.1931636604317145;
    msg.end_lat = 0.12162992130498829;
    msg.end_lon = 0.023966853564871715;
    msg.speed = 0.6382233230952566;
    msg.speed_units = 33U;
    msg.custom.assign("GMPYLGGSFEDXBXDMRCCMVSYICYDTQQGPTAUZRLFHOOZJJLHPFIKPXVVUIUDTAENBBZUEYJXBUZSEMVTZIRDRONVFYNCPTJPKOWQIIWAXFOXW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanProbSpec #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::otterFormation msg;
    msg.setTimeStamp(0.043268337368599696);
    msg.setSource(7784U);
    msg.setSourceEntity(114U);
    msg.setDestination(30452U);
    msg.setDestinationEntity(5U);
    msg.minspeed = 0.9857079558454046;
    msg.maxspeed = 0.018285906752092962;
    msg.speed_units = 194U;
    msg.minradius = 0.6853471586413927;
    msg.maxradius = 0.9612040075570336;
    msg.target.assign("OAJOJRNEPLJUJIZAHZZMKWIIPVFQYDFFFTXHVXMTVKQWQNSFXTHRPUWSTQINIEJEFBMUFVLXZEEDCRQGPLLFKVORDLNNSHTPIWSGTWVHYIAXTYTEYXWBGRQTDCGCFEMQGCTDPRHUBNJMCMJZBBLXEQAKHBKUYDZWNGUCMXRSOZHOYWSHJAJEDKGGHLZBNBWOKUIKSMULSYCUCLOVOOURDBRPADYVMKKABQVXYPPLRZFMGJAZAXISYQEGVANIWD");
    msg.participants.assign("UYAWCBQLTLICQDLTSOPZYTTIQCIEZIIBFZAEJKRDUVRPMAEEDLDLNACSUBARMMTCQLPGGUHCEECSAHVKRQWMGYJYIPQHNXFJVHVPKVPGETAIKBEOKBXOCXNG");
    msg.custom.assign("WQZQXRZJOBEGQVGTXCOUABUPBASRJHSLVJPIPGTTBTYRFTWFNOQVSJSGEKFXNZTYZARKMGBDUEWFHHALWLEBKVKQKZUNNIDENXSZWFMYHFSOWXPBSDPKRYMGYXXWMVVSED");
    msg.msg_type = 236U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("otterFormation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::otterFormation msg;
    msg.setTimeStamp(0.5708212493812356);
    msg.setSource(56624U);
    msg.setSourceEntity(93U);
    msg.setDestination(48332U);
    msg.setDestinationEntity(144U);
    msg.minspeed = 0.43306207976135436;
    msg.maxspeed = 0.36937970835642997;
    msg.speed_units = 137U;
    msg.minradius = 0.48341120744457;
    msg.maxradius = 0.07425540070356318;
    msg.target.assign("XNGBWNXAPUHCJEOL");
    msg.participants.assign("FAAXRMJFYVSAVTNQLVJHZJCWZCRUBIUUYDUQERSMZHGXLSHPGKYFDXFTZENNFCNFWJSXKOIPJQZQCKQDGCCCXQBIMLP");
    msg.custom.assign("QXFNTDGOCGAIZRWOVFOUUYTNBNLIVXBQPSOPKMCHPFFRIEUCMTQYTLAOFRQIWBLRTQJLLHUARZRFCWCYCRKEWQWMQNUEIHJIKNXMZTDDJPAEMOMSSOYTKVKDIDHSJGWSREZCJE");
    msg.msg_type = 56U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("otterFormation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::otterFormation msg;
    msg.setTimeStamp(0.8624308494944217);
    msg.setSource(43929U);
    msg.setSourceEntity(139U);
    msg.setDestination(31794U);
    msg.setDestinationEntity(137U);
    msg.minspeed = 0.6199018965916698;
    msg.maxspeed = 0.3280067410647155;
    msg.speed_units = 21U;
    msg.minradius = 0.9189412487005711;
    msg.maxradius = 0.3898352069136839;
    msg.target.assign("JRWUXKNZFGLKLWDZOZIDEHJCYUDIAUQTRPZOFGGQXABUIVBVKMXNRDEHOIJWGHECRTKVHCOOUXIBWVYPWUVERYWABDTDHZIWOHY");
    msg.participants.assign("XZEEJYXAGCNCOLOFARREKTGHZBASUORPNUOLSLWGCDZRRTYODIFTMFUQPMUXKVSBVINZCKACDFEIBEKYVTLLZNHPVVXFAHSUWMBEHMECWQQHEBOCFIGXNYCZDCWJYDNYTBRKGBFOJUVVKAQIRHWSYMPASDHRB");
    msg.custom.assign("PTLICGPTXOTFQPESGNTOGVQUPMQJDTYFKRGBBZSZWKAGVEGCOASURWELTVYWNAWDBGFJHHIZKJOTUZAODXPSKQMNXSQKJMYLVDMQUJXYPALITFEZHKRWFLYNVCKGMTXFXAUBMLELXMBXRUVYMESLUVONWBCZVIMNQFLNWCSUHPODXNHJIRCGKZAQFJIOEAMQESFOSETYWWKODHVJUXSZCZPCIDADNDRHVYHKBYBIJIPACHFCNQYRRJBU");
    msg.msg_type = 66U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("otterFormation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AdmmPos msg;
    msg.setTimeStamp(0.33757810375061126);
    msg.setSource(10596U);
    msg.setSourceEntity(155U);
    msg.setDestination(11265U);
    msg.setDestinationEntity(240U);
    msg.lat = 0.08774501113170474;
    msg.lon = 0.49990965385276853;
    msg.course = 0.8548176788055197;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AdmmPos #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AdmmPos msg;
    msg.setTimeStamp(0.39577666947915346);
    msg.setSource(31959U);
    msg.setSourceEntity(221U);
    msg.setDestination(59149U);
    msg.setDestinationEntity(74U);
    msg.lat = 0.2196677171577135;
    msg.lon = 0.4912047205446767;
    msg.course = 0.4771556339464811;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AdmmPos #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AdmmPos msg;
    msg.setTimeStamp(0.06614439558274643);
    msg.setSource(11454U);
    msg.setSourceEntity(186U);
    msg.setDestination(49996U);
    msg.setDestinationEntity(253U);
    msg.lat = 0.3319279697102293;
    msg.lon = 0.20830301024625741;
    msg.course = 0.23953036543340478;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AdmmPos #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AdmmPath msg;
    msg.setTimeStamp(0.1363743015038975);
    msg.setSource(21167U);
    msg.setSourceEntity(92U);
    msg.setDestination(57982U);
    msg.setDestinationEntity(78U);
    msg.mmsi = 67;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AdmmPath #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AdmmPath msg;
    msg.setTimeStamp(0.3955414736947105);
    msg.setSource(1187U);
    msg.setSourceEntity(172U);
    msg.setDestination(2574U);
    msg.setDestinationEntity(188U);
    msg.mmsi = 38;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AdmmPath #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AdmmPath msg;
    msg.setTimeStamp(0.06430625892510233);
    msg.setSource(62784U);
    msg.setSourceEntity(97U);
    msg.setDestination(41851U);
    msg.setDestinationEntity(192U);
    IMC::AdmmPos tmp_msg_0;
    tmp_msg_0.lat = 0.11962862783095696;
    tmp_msg_0.lon = 0.22746006598037705;
    tmp_msg_0.course = 0.6794147985605178;
    msg.path_list.push_back(tmp_msg_0);
    msg.mmsi = -120;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AdmmPath #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NegotiationData msg;
    msg.setTimeStamp(0.2809253797304424);
    msg.setSource(18756U);
    msg.setSourceEntity(213U);
    msg.setDestination(24591U);
    msg.setDestinationEntity(125U);
    msg.mmsi = -91;
    msg.time_stamp = 0.34702013499387574;
    msg.lat = 0.22396522297433497;
    msg.lon = 0.04835769735056039;
    msg.nom_v = 0.1758221549210801;
    msg.wp_start_lat = 0.6990491428218201;
    msg.wp_start_lon = 0.4829605561040077;
    msg.wp_end_lat = 0.12096725730144142;
    msg.wp_end_lon = 0.5724136270881395;
    msg.is_starboard = -8;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NegotiationData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NegotiationData msg;
    msg.setTimeStamp(0.6292734278982001);
    msg.setSource(9463U);
    msg.setSourceEntity(3U);
    msg.setDestination(43270U);
    msg.setDestinationEntity(194U);
    msg.mmsi = -14;
    msg.time_stamp = 0.3831843866178912;
    msg.lat = 0.18071314884445155;
    msg.lon = 0.13891842342917082;
    msg.nom_v = 0.44583629930901747;
    IMC::AdmmPath tmp_msg_0;
    IMC::AdmmPos tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.17261207413259771;
    tmp_tmp_msg_0_0.lon = 0.8382283158675966;
    tmp_tmp_msg_0_0.course = 0.7068289853984635;
    tmp_msg_0.path_list.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.mmsi = 61;
    msg.pr_pos.push_back(tmp_msg_0);
    msg.wp_start_lat = 0.9121253418388416;
    msg.wp_start_lon = 0.16833181481839044;
    msg.wp_end_lat = 0.6910975430494761;
    msg.wp_end_lon = 0.41168789570983777;
    msg.is_starboard = -45;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NegotiationData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NegotiationData msg;
    msg.setTimeStamp(0.6784456800747971);
    msg.setSource(65507U);
    msg.setSourceEntity(25U);
    msg.setDestination(57875U);
    msg.setDestinationEntity(106U);
    msg.mmsi = -5;
    msg.time_stamp = 0.1320960646873559;
    msg.lat = 0.6384934317333536;
    msg.lon = 0.8988101147222618;
    msg.nom_v = 0.7172812914453149;
    IMC::AdmmPath tmp_msg_0;
    IMC::AdmmPos tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.7097829272348114;
    tmp_tmp_msg_0_0.lon = 0.8554542121433096;
    tmp_tmp_msg_0_0.course = 0.3924689261872326;
    tmp_msg_0.path_list.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.mmsi = 13;
    msg.pr_pos.push_back(tmp_msg_0);
    msg.wp_start_lat = 0.2258808526209457;
    msg.wp_start_lon = 0.07631617047895467;
    msg.wp_end_lat = 0.5665605576868196;
    msg.wp_end_lon = 0.19992014972682048;
    msg.is_starboard = 24;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NegotiationData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::alloc msg;
    msg.setTimeStamp(0.47827945413527784);
    msg.setSource(24964U);
    msg.setSourceEntity(105U);
    msg.setDestination(36424U);
    msg.setDestinationEntity(99U);
    msg.mmsi = -93;
    msg.iter = 38;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("alloc #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::alloc msg;
    msg.setTimeStamp(0.4726589325712264);
    msg.setSource(32674U);
    msg.setSourceEntity(105U);
    msg.setDestination(36636U);
    msg.setDestinationEntity(97U);
    IMC::Svec tmp_msg_0;
    IMC::Svec_value tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.40425547122716843;
    tmp_msg_0.s_vecs.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.id = -24;
    msg.s_vec_list.push_back(tmp_msg_0);
    msg.mmsi = -97;
    msg.iter = 50;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("alloc #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::alloc msg;
    msg.setTimeStamp(0.5057135692571025);
    msg.setSource(56760U);
    msg.setSourceEntity(139U);
    msg.setDestination(22244U);
    msg.setDestinationEntity(225U);
    IMC::Svec tmp_msg_0;
    IMC::Svec_value tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.02399408200239539;
    tmp_msg_0.s_vecs.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.id = 46;
    msg.s_vec_list.push_back(tmp_msg_0);
    msg.mmsi = 118;
    msg.iter = -94;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("alloc #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Svec msg;
    msg.setTimeStamp(0.49665525411958433);
    msg.setSource(63625U);
    msg.setSourceEntity(84U);
    msg.setDestination(32138U);
    msg.setDestinationEntity(119U);
    msg.id = 96;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Svec #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Svec msg;
    msg.setTimeStamp(0.35331717356150816);
    msg.setSource(20008U);
    msg.setSourceEntity(159U);
    msg.setDestination(44715U);
    msg.setDestinationEntity(5U);
    IMC::Svec_value tmp_msg_0;
    tmp_msg_0.value = 0.005209933401889577;
    msg.s_vecs.push_back(tmp_msg_0);
    msg.id = 50;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Svec #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Svec msg;
    msg.setTimeStamp(0.13130695844994822);
    msg.setSource(12009U);
    msg.setSourceEntity(251U);
    msg.setDestination(4693U);
    msg.setDestinationEntity(62U);
    IMC::Svec_value tmp_msg_0;
    tmp_msg_0.value = 0.1160471109866007;
    msg.s_vecs.push_back(tmp_msg_0);
    msg.id = -69;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Svec #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Svec_value msg;
    msg.setTimeStamp(0.3865807289573008);
    msg.setSource(62825U);
    msg.setSourceEntity(214U);
    msg.setDestination(2307U);
    msg.setDestinationEntity(118U);
    msg.value = 0.8128903419822568;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Svec_value #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Svec_value msg;
    msg.setTimeStamp(0.2715337847746828);
    msg.setSource(63549U);
    msg.setSourceEntity(131U);
    msg.setDestination(59607U);
    msg.setDestinationEntity(170U);
    msg.value = 0.7300619725059311;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Svec_value #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Svec_value msg;
    msg.setTimeStamp(0.833875659135142);
    msg.setSource(47106U);
    msg.setSourceEntity(124U);
    msg.setDestination(59843U);
    msg.setDestinationEntity(61U);
    msg.value = 0.751808616276127;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Svec_value #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  return test.getReturnValue();
}
