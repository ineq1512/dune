# Set the path to the ipopt include directory
set(IPOPT_INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/vendor/libraries/ipopt/include)
message(STATUS "IPOPT include directory: ${IPOPT_INCLUDE_DIR}")

# Set the path to the ipopt library directory
set(IPOPT_LIBRARY_DIR ${CMAKE_CURRENT_SOURCE_DIR}/vendor/libraries/ipopt/lib)
message(STATUS "IPOPT library directory: ${IPOPT_LIBRARY_DIR}")


# Add the ipopt include directory to the include path
include_directories(${IPOPT_INCLUDE_DIR})
message(STATUS "Include directories: ${CMAKE_INCLUDE_PATH}")

# Find all the library files in the ipopt library directory
file(GLOB IPOPT_LIBRARIES ${IPOPT_LIBRARY_DIR}/*.so)
message(STATUS "Found IPOPT libraries: ${IPOPT_LIBRARIES}")

# Append the ipopt libraries to the list of vendor libraries
list(APPEND DUNE_VENDOR_LIBRARIES ${IPOPT_LIBRARIES})
message(STATUS "Linked IPOPT libraries: ${DUNE_VENDOR_LIBRARIES}")

# Link the ipopt libraries to your target
# Assuming your main target is named 'dune'
#target_link_libraries(dune ${DUNE_VENDOR_LIBRARIES})


