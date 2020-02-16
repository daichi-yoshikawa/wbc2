#ifndef WBC2_CONTROLLER_CONTROLLER_HPP_
#define WBC2_CONTROLLER_CONTROLLER_HPP_

#include <memory>

namespace wbc2
{
  namespace ctrl
  {

    class Controller
    {
    public:
      explicit Controller();
    private:
    };

    using ControllerPtr = std::shared_ptr<Controller>;

  }
}

#endif // WBC2_CONTROLLER_CONTROLLER_HPP_
