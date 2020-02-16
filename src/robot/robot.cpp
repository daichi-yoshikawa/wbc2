#include <iostream>
#include "wbc2/robot/robot.hpp"


using namespace wbc2::robot;

Robot::Robot(const std::string& name)
  : name_(name)
{
  
}

void Robot::test()
{
  std::cout << "Hello, wbc2." << std::endl;
}
