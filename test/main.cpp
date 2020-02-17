#include <iostream>
#include <memory>

#include "wbc2/version.hpp"
#include "wbc2/robot/robot.hpp"
#include "wbc2/controller/controller.hpp"

using namespace wbc2::robot;
using namespace wbc2::ctrl;

int main(int argc, char** argv)
{
  std::cout << "Hello, c++ from test dir." << std::endl;
  std::cout << "WBC2 Version : " << wbc2::getVersion() << std::endl;

  RobotPtr robot = std::make_shared<Robot>("sample_arm");
  robot->test();

  return 0;
}
