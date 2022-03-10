#pragma once

#include "../base.hpp"

namespace Workers
{

  /* @brief Doctor worker
  */
  class Doctor final : public Workers::ABase
  {
  
  public:
    Doctor(uint64_t worktime)
      : ABase("Doctor", worktime)
    {}

  }; //!class Doctor final

} //!namespace Workers
