#ifndef WBC2_VERSION_HPP_
#define WBC2_VERSION_HPP_

#include <string>
#include <sstream>

namespace wbc2
{

  static const uint32_t VERSION_MAJOR = 0;
  static const uint32_t VERSION_MINOR = 0;
  static const uint32_t VERSION_REVISION = 1;

  static const std::string getVersion()
  {
    std::stringstream ss;
    ss << VERSION_MAJOR << '.' << VERSION_MINOR << '.' << VERSION_REVISION;
    return ss.str();
  }

}

#endif // WBC2_VERSION_HPP_
