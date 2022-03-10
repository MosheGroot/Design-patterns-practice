#pragma once

#include "../base.hpp"

namespace Workers
{

  /* @brief Driver worker
  */
  class Driver final : public Workers::ABase
  {
  
  public:
    Driver(uint64_t worktime)
      : ABase("Driver", worktime)
    {}

  }; //!class Driver final

} //!namespace Workers