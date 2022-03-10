#pragma once

#include "../base.hpp"

namespace Workers
{

  /* @brief Firefighter worker
  */
  class Firefighter final : public Workers::ABase
  {
  
  public:
    Firefighter(uint64_t worktime)
      : ABase("Firefighter", worktime)
    {}

  }; //!class Firefighter final

} //!namespace Workers