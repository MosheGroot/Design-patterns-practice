#include "./logger.hpp"

#include <iostream>
#include <iomanip>

#include "../utils/timestamp.hpp"

namespace Utils
{
  // Signleton
  std::mutex              Logger::print_mutex_;
  std::mutex              Logger::instance_mutex_;
  std::shared_ptr<Logger> Logger::instance_(nullptr);

  std::shared_ptr<Logger> Logger::getInstance(void)
  {
    if (!Logger::instance_)
    {
      Logger::instance_mutex_.lock();
      if (!Logger::instance_)
        Logger::instance_ = std::shared_ptr<Logger>(new Logger());
      Logger::instance_mutex_.unlock();
    }

    return Logger::instance_;
  }

  // Logic
  void  Logger::error(const char* msg)
  {
    printMsg(msg, "ERROR", "\x1B[1;31m", std::cerr);
  }
  
  void  Logger::info(const char* msg)
  {
    printMsg(msg, "INFO", "\x1B[32m", std::cerr);
  }

  void  Logger::debug(const char* msg)
  {
    printMsg(msg, "DEBUG", "\x1B[33m", std::cerr);
  }

  void  Logger::log(const char* msg)
  {
    printMsg(msg, "LOG", "\x1B[249m", std::cerr);
  }


  void  Logger::printMsg(const char* msg, const char* prompt, const char* colors, std::ostream& os)
  {
    /// lock
    Logger::print_mutex_.lock();

    // timestamp
    os << "[" << Utils::getCurrentTimestamp() << "] ";

    // prompt
    if (colors)
      os << colors;

    if (prompt)
      os << '[' << std::setiosflags(std::ios_base::left)
        << std::setw(5) << prompt << "] ";

    if (colors)
      os << "\x1B[m";

    // message
    os << msg << std::endl;
  
    /// unlock
    Logger::print_mutex_.unlock();
  }


} //!namespace Utils