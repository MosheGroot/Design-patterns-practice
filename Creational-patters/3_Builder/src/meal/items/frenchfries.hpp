#pragma once

#include "base.hpp"

namespace Restaurant::Items
{

  class FrenchFries final : public Items::Base
  {

  public:
    FrenchFries(void)
      : Base("FrenchFries")
    {}

  }; //!class FrenchFries final : public Items::Base

} //!namespace Restaurant::Items
