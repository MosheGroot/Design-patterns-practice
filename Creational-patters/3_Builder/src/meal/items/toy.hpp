#pragma once

#include "base.hpp"

namespace Restaurant::Items
{

  class Toy final : public Items::Base
  {

  public:
    Toy(void)
      : Base("Toy")
    {}

  }; //!class Toy final : public Items::Base

} //!namespace Restaurant::Items
