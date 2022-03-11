#pragma once

#include <string>

namespace Utils
{
  /* Get current timestamp (in "%Y-%m-%d %X" format by default)
  */
  std::string getCurrentTimestamp(const char *format="%Y-%m-%d %X");

}