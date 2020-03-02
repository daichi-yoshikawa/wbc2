#ifndef WBC2_ROBOT_YAML_PARSER_HPP_
#define WBC2_ROBOT_YAML_PARSER_HPP_

#include <string>

namespace wbc2
{
  namespace robot
  {

    class YAMLParser
    {
    public:
      explicit YAMLParser() = default;
      void load(const std::string& yaml_path);
    };

  }
}


#endif // WBC2_ROBOT_YAML_PARSER_HPP_
