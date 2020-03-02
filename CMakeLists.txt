cmake_minimum_required(VERSION 2.8)
project(wbc2 CXX)
set(CMAKE_CXX_STANDARD 14)

set(THIRD_PARTY_DIR ${PROJECT_SOURCE_DIR}/third_party)

set(EIGEN3_INCLUDE_DIR ${THIRD_PARTY_DIR}/eigen-3.3.7)
include(${THIRD_PARTY_DIR}/yaml-cpp-0.6.3/build/yaml-cpp-config.cmake)

add_subdirectory(src)
add_subdirectory(test)
