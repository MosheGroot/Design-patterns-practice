#pragma once

#include "../meal/meal.hpp"


namespace Restaurant
{

  class Cashier final
  {
  public:

    void  getHelp() const;

    Meal  order(int argc, const char* argv[]);

  }; //!class Cashier final

} //!namespace Restaurant
