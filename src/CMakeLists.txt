add_library(wbc2
  SHARED
  robot/robot.cpp
  robot/manipulator.cpp
  controller/controller.cpp
)

target_include_directories(wbc2
  PUBLIC
  ${PROJECT_SOURCE_DIR}/include
  ${EIGEN3_INCLUDE_DIR}
)
