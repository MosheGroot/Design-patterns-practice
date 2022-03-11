#pragma once

#include <vector>

#include "./items/base.hpp"

namespace Restaurant
{

  struct Meal final
  {

    std::vector<Items::Base>  order; //< vector of ordered items
  
  }; //!struct Meal final

} //!namespace Restaurant