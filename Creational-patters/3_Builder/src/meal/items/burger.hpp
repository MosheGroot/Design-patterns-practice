#pragma once

#include "base.hpp"

namespace Restaurant::Items
{

  class Burger final : public Items::Base
  {

  public:
    Burger(void)
      : Base("Burger")
    {}

  }; //!class Burger final : public Items::Base

} //!namespace Restaurant::Items
