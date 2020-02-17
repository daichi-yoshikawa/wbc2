add_executable(test_wbc2 main.cpp)

target_include_directories(test_wbc2
  PUBLIC
  ${GTEST_INCLUDE_DIR}
)

target_link_libraries(test_wbc2 wbc2 ${GTEST_LIBRARIES})
