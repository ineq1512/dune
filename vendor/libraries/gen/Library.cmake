file(GLOB DUNE_GEN_FILES
  vendor/libraries/gen/*.cpp)
set_source_files_properties(${DUNE_GEN_FILES}
  PROPERTIES COMPILE_FLAGS "${DUNE_CXX_FLAGS} ${DUNE_CXX_FLAGS_STRICT}")
  
list(APPEND DUNE_VENDOR_FILES ${DUNE_GEN_FILES})
