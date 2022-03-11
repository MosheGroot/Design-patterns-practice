#include "base.hpp"

#include <iostream>
#include <thread>

#include <algorithm>

#include "specializations/builder.hpp"
#include "specializations/doctor.hpp"
#include "specializations/driver.hpp"
#include "specializations/firefighter.hpp"

#include "../utils/timestamp/timestamp.hpp"

#define FMT_YELLOW  "\x1B[33m"
#define FMT_GREEN   "\x1B[32m"
#define FMT_DEFAULT "\x1B[m"

namespace Workers
{
  
  /// Logic
  void    Base::work(void) const
  {
    std::cout << "[" << Utils::getCurrentTimestamp() << "]: " 
      << this->job_name_ 
      << FMT_YELLOW << " started " << FMT_DEFAULT << "working." << std::endl;

    std::this_thread::sleep_for(this->worktime_);

    std::cout << "[" << Utils::getCurrentTimestamp() << "]: " 
      << this->job_name_ 
      << FMT_GREEN << " finished " << FMT_DEFAULT << "work."<< std::endl;
  }


  /// Factory method
  Base*  Base::applyWorker(const std::string_view job_name, uint64_t worktime)
  {
    // select
    if (job_name == "builder")
      return new Workers::Builder(worktime);
    if (job_name == "doctor")
      return new Workers::Doctor(worktime);
    if (job_name == "driver")
      return new Workers::Driver(worktime);
    if (job_name == "firefighter")
      return new Workers::Firefighter(worktime);

    // exception
    throw std::invalid_argument("applyWorker exception: such worker does not exist");
  }

} //!namespace Workers
