#pragma once

#include "../base.hpp"

namespace Workers
{

  /* @brief Doctor worker
  */
  class Doctor final : public Workers::Base
  {
  
  public:
    Doctor(uint64_t worktime)
      : Base("Doctor", worktime)
    {}

  }; //!class Doctor final

} //!namespace Workers
