#pragma once

#include "../base.hpp"

namespace Workers
{

  /* @brief Builder worker
  */
  class Builder final : public Workers::Base
  {
  
  public:
    Builder(uint64_t worktime)
      : Base("Builder", worktime)
    {}

  }; //!class Builder final

} //!namespace Workers
