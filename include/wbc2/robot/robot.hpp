#ifndef WBC2_ROBOT_HPP_
#define WBC2_ROBOT_HPP_

#include <memory>
#include <string>
#include "wbc2/common/constants.hpp"
#include "wbc2/robot/manipulator.hpp"


namespace wbc2
{
  namespace robot
  {

    class Robot
    {
    public:
      explicit Robot(const std::string& name);
      void test();

    private:
      std::string name_ = wbc2::DEFAULT_ROBOT_NAME;
    };

    using RobotPtr = std::shared_ptr<Robot>;

  }
}

#endif // WBC2_ROBOT_HPP_
