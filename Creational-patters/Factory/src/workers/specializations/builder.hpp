#pragma once

#include "../base.hpp"

namespace Workers
{

  /* @brief Builder worker
  */
  class Builder final : public Workers::ABase
  {
  
  public:
    Builder(uint64_t worktime)
      : ABase("Builder", worktime)
    {}

  }; //!class Builder final

} //!namespace Workers
