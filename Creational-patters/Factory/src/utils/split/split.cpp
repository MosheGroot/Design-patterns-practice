#include "split.hpp"

namespace Utils
{
  
  std::vector<std::string>  split(const std::string& source, char delim)
  {
    std::vector<std::string> result;

    size_t s_start = 0;
    size_t s_end = source.find(delim);
    result.push_back(source.substr(s_start, s_end));

    while (s_end != std::string::npos)
    {
      s_start = s_end + 1;
      s_end = source.find(delim, s_start);
      if (s_end - s_start) // not empty
        result.push_back(source.substr(s_start, s_end - s_start));
    }

    return result;
  }

} //!namespace Utils