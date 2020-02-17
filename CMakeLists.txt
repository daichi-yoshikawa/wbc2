cmake_minimum_required(VERSION 2.8)
project(wbc2 CXX)
set(CMAKE_CXX_STANDARD 14)

set(THIRD_PARTY_DIR ${PROJECT_SOURCE_DIR}/third_party)

set(EIGEN3_INCLUDE_DIR ${THIRD_PARTY_DIR}/eigen-3.3.7)
include(${THIRD_PARTY_DIR}/yaml-cpp-0.6.3/build/yaml-cpp-config.cmake)
set(GTEST_INCLUDE_DIR ${THIRD_PARTY_DIR}/googletest-1.10.0/googletest/include)
link_directories(${THIRD_PARTY_DIR}/googletest-1.10.0/build/lib)
set(GTEST_LIBRARIES gtest gtest_main)

#include(${THIRD_PARTY_DIR}/googletest-1.10.0/build/cmake_install.cmake)
#message(${GTEST_INCLUDE_DIR})

add_subdirectory(src)
add_subdirectory(test)
