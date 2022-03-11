#include "staff.hpp"

#include "../meal/items/burger.hpp"
#include "../meal/items/frenchfries.hpp"
#include "../meal/items/salad.hpp"
#include "../meal/items/toy.hpp"

namespace Restaurant
{

  void   Staff::addBurger(Restaurant::Meal& meal)
  {
    meal.order.push_back(Items::Burger());
  }


  void   Staff::addFrenchFries(Restaurant::Meal& meal)
  {
    meal.order.push_back(Items::FrenchFries());
  }


  void   Staff::addSalad(Restaurant::Meal& meal)
  {
    meal.order.push_back(Items::Salad());
  }


  void   Staff::addToy(Restaurant::Meal& meal)
  {
    meal.order.push_back(Items::Toy());
  }


} //!namespace Restaurant