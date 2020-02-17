add_library(wbc2
  robot/robot.cpp
  robot/manipulator.cpp
  controller/controller.cpp
)

target_include_directories(wbc2
  PUBLIC
  ${PROJECT_SOURCE_DIR}/include
  ${EIGEN3_INCLUDE_DIR}
  ${YAML_CPP_INCLUDE_DIR}
)

target_link_libraries(wbc2 ${YAML_CPP_LIBRARIES})
