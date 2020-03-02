cmake_minimum_required(VERSION 3.1)
project(WBC2 VERSION 0.1.0 LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 14)

### Project options
option(WBC2_BUILD_SHARED_LIBS "Build shared libraries" OFF)

### Third parties
set(THIRD_PARTY_DIR ${PROJECT_SOURCE_DIR}/third_party)
set(EIGEN3_INCLUDE_DIR ${THIRD_PARTY_DIR}/eigen-3.3.7)
include(${THIRD_PARTY_DIR}/yaml-cpp-0.6.3/build/yaml-cpp-config.cmake)

file(GLOB_RECURSE sources "src/[a-zA-Z]*.cpp")
file(GLOB_RECURSE test_sources "test/[a-zA-Z]*.cpp")

if(VERBOSE)
  message(STATUS "sources: ${sources}")
  message(STATUS "test_sources: ${test_sources}")
endif()

if (WBC2_BUILD_SHARED_LIBS)
  add_library(wbc2 SHARED ${sources})
else()
  add_library(wbc2 STATIC ${sources})
endif()

target_include_directories(wbc2
  PUBLIC ${PROJECT_SOURCE_DIR}/include
         ${EIGEN3_INCLUDE_DIR}
         ${YAML_CPP_INCLUDE_DIR}
)

target_link_libraries(wbc2 ${YAML_CPP_LIBRARIES})

set_target_properties(wbc2 PROPERTIES
  VERSION "{WBC2_VERSION}"
)

message(${YAML_CPP_LIBRARIES})

###
### Extras
###
add_subdirectory(test)
