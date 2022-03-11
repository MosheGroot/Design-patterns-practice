#pragma once

#include "../base.hpp"

namespace Workers
{

  /* @brief Driver worker
  */
  class Driver final : public Workers::Base
  {
  
  public:
    Driver(uint64_t worktime)
      : Base("Driver", worktime)
    {}

  }; //!class Driver final

} //!namespace Workers