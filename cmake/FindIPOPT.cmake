# find_path(IPOPT_INCLUDE_DIR NAMES IpIpoptApplication.hpp PATHS "/usr/local/include/coin-or/")

# find_library(IPOPT_LIBRARY NAMES ipopt PATHS "/usr/local/lib/")


# if(IPOPT_INCLUDE_DIR AND IPOPT_LIBRARY)
#   set(IPOPT_FOUND TRUE)
#   set(IPOPT_LIBRARIES ${IPOPT_LIBRARY})
#   set(IPOPT_INCLUDE_DIRS ${IPOPT_INCLUDE_DIR})
# else()
#   set(IPOPT_FOUND FALSE)
# endif()

# mark_as_advanced(IPOPT_INCLUDE_DIR IPOPT_LIBRARY)

######################################################################################
if(${DUNE_CPU_NAME} STREQUAL "x86")
    set(IPOPT_INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/vendor/libraries/ipopt_x86/include)
    message(STATUS "IPOPT include directory: ${IPOPT_INCLUDE_DIR}")

    # Set the path to the ipopt library directory
    set(IPOPT_LIBRARY_DIR ${CMAKE_CURRENT_SOURCE_DIR}/vendor/libraries/ipopt_x86/lib)
    message(STATUS "IPOPT library directory: ${IPOPT_LIBRARY_DIR}")


    # Add the ipopt include directory to the include path
    include_directories(${IPOPT_INCLUDE_DIR})
    message(STATUS "Include directories: ${CMAKE_INCLUDE_PATH}")

    # Find all the library files in the ipopt library directory
    file(GLOB IPOPT_LIBRARIES ${IPOPT_LIBRARY_DIR}/*.so)
    # file(GLOB IPOPT_LIBRARIES ${IPOPT_LIBRARY_DIR}/*.a)

    message(STATUS "Found IPOPT libraries: ${IPOPT_LIBRARIES}")
    list(APPEND DUNE_VENDOR_LIBRARIES ${IPOPT_LIBRARIES})
else()
    set(IPOPT_INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/vendor/libraries/ipopt/include)
    message(STATUS "IPOPT include directory: ${IPOPT_INCLUDE_DIR}")

    # Set the path to the ipopt library directory
    set(IPOPT_LIBRARY_DIR ${CMAKE_CURRENT_SOURCE_DIR}/vendor/libraries/ipopt/lib)
    message(STATUS "IPOPT library directory: ${IPOPT_LIBRARY_DIR}")
    # Add the ipopt include directory to the include path
    include_directories(${IPOPT_INCLUDE_DIR})
    message(STATUS "Include directories: ${CMAKE_INCLUDE_PATH}")
    # Find all the library files in the ipopt library directory
    file(GLOB IPOPT_LIBRARIES ${IPOPT_LIBRARY_DIR}/*.a)
    # Set the path to the MUMPS include directory
    set(MUMPS_INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/vendor/libraries/mumps/include)
    message(STATUS "MUMPS include directory: ${MUMPS_INCLUDE_DIR}")

    # Set the path to the MUMPS library directory
    set(MUMPS_LIBRARY_DIR ${CMAKE_CURRENT_SOURCE_DIR}/vendor/libraries/mumps/lib)
    message(STATUS "MUMPS library directory: ${MUMPS_LIBRARY_DIR}")
    # Find all the static library files in the MUMPS library directory
    file(GLOB MUMPS_LIBRARIES ${MUMPS_LIBRARY_DIR}/*.a)
    message(STATUS "Found MUMPS libraries: ${MUMPS_LIBRARIES}")

    # Set the path to the MUMPS include directory
    set(METIS_INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/vendor/libraries/metis/include)
    message(STATUS "METIS include directory: ${METIS_INCLUDE_DIR}")
    # Set the path to the MUMPS library directory
    set(METIS_LIBRARY_DIR ${CMAKE_CURRENT_SOURCE_DIR}/vendor/libraries/metis/lib)
    message(STATUS "METIS library directory: ${METIS_LIBRARY_DIR}")
    # Find all the static library files in the METIS library directory
    file(GLOB METIS_LIBRARIES ${METIS_LIBRARY_DIR}/*.a)
    message(STATUS "Found METIS libraries: ${METIS_LIBRARIES}")

    # Append the ipopt libraries to the list of vendor libraries
    list(APPEND DUNE_VENDOR_LIBRARIES ${IPOPT_LIBRARIES} ${MUMPS_LIBRARIES} ${METIS_LIBRARIES})
endif()
message(STATUS "Linked IPOPT libraries: ${DUNE_VENDOR_LIBRARIES}")

# Explicitly list the MUMPS libraries
# set(MUMPS_LIBS -ldmumps -lmumps_common -lpord -lscalapack -llapack -lblas -lpthread)