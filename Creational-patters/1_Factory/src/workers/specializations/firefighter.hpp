#pragma once

#include "../base.hpp"

namespace Workers
{

  /* @brief Firefighter worker
  */
  class Firefighter final : public Workers::Base
  {
  
  public:
    Firefighter(uint64_t worktime)
      : Base("Firefighter", worktime)
    {}

  }; //!class Firefighter final

} //!namespace Workers