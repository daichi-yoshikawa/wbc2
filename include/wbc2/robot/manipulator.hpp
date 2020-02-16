#ifndef WBC2_ROBOT_MANIPULATOR_HPP_
#define WBC2_ROBOT_MANIPULATOR_HPP_

#include <memory>
#include <string>

#include "Eigen/Dense"

namespace wbc2
{
  namespace robot
  {

    class Manipulator
    {
    public:
      explicit Manipulator(const std::string& name);

    private:
      std::string name_;

      Eigen::Vector3d pos_;
    };

    using ManipulatorPtr = std::shared_ptr<Manipulator>;
    
  }
}

#endif // WBC2_ROBOT_MANIPULATOR_HPP_
