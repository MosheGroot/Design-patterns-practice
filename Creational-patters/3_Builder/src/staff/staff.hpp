#pragma once

#include "../meal/meal.hpp"

namespace Restaurant
{

  class Staff final
  {
  public:

    static void   addBurger(Restaurant::Meal& meal);

    static void   addFrenchFries(Restaurant::Meal& meal);
    
    static void   addSalad(Restaurant::Meal& meal);

    static void   addToy(Restaurant::Meal& meal);

  }; //!class Staff final

} //!namespace Restaurant