#pragma once

#include "base.hpp"

namespace Restaurant::Items
{

  class Salad final : public Items::Base
  {

  public:
    Salad(void)
      : Base("Salad")
    {}

  }; //!class Salad final : public Items::Base

} //!namespace Restaurant::Items
