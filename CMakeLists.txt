cmake_minimum_required(VERSION 2.8)
project(wbc2 CXX)
set(CMAKE_CXX_STANDARD 14)

set(EIGEN3_INCLUDE_DIR ${PROJECT_SOURCE_DIR}/thirdparty/eigen-3.2.7)
include(ExternalProject)
include(thirdparty/yaml-cpp-0.6.3/yaml-cpp.pc.cmake)

add_subdirectory(src)
add_subdirectory(test)
