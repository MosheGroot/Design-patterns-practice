#include "./timestamp.hpp"

#include <chrono>  // chrono::system_clock
#include <ctime>   // localtime
#include <sstream> // stringstream
#include <iomanip> // put_time

namespace Utils
{
  
  std::string getCurrentTimestamp(const char *format)
  {
      auto now = std::chrono::system_clock::now();
      auto in_time_t = std::chrono::system_clock::to_time_t(now);

      std::stringstream ss;
      ss << std::put_time(std::localtime(&in_time_t), format);
      return ss.str();
  }

} //!namespace Utils