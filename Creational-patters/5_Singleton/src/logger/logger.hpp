#pragma once

#include <mutex>
#include <memory>

namespace Utils
{
  class Logger final
  {
  // Singleton 
  private:
    static std::mutex               print_mutex_;
    static std::mutex               instance_mutex_;
    static std::shared_ptr<Logger>  instance_;

    Logger() = default;

  public:
    static std::shared_ptr<Logger>  getInstance(void);


  // Logic
  public:
    void  error(const char* ptr);

    void  info(const char* msg);

    void  debug(const char* msg);

    void  log(const char* msg);

  private:
    void  printMsg(const char* ptr, const char* prompt, const char* colors, std::ostream& os);

  }; //!class Logger final
} //!namespace Utils
