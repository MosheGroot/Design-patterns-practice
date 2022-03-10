#pragma once

#include <vector>
#include <string>

namespace Utils
{

  /* @brief Split `source` string by `delim` char or sequence of `delim` chars
  */
  std::vector<std::string>  split(const std::string& source, char delim);

} //!namespace Utils