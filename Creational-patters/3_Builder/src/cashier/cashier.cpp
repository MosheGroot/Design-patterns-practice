#include <iostream>
#include <cstring>
#include <exception>

#include "./cashier.hpp"
#include "../staff/staff.hpp"

namespace Restaurant
{

  void  Cashier::getHelp() const
  {
    std::cout << "Welcome to our restaurant!\n"
      "By now you can order next items:\n"
      "\t* \"Burger\"\n"
      "\t* \"French fries\"\n"
      "\t* \"Salad\"\n"
      "or order all in one:\n"
      "\t* \"Kid's meal\"\n"
      "Please provide your order in program as arguments" << std::endl;
  }


  Meal  Cashier::order(int argc, const char* argv[])
  {
    Meal out_meal;

    for (int i = 0; i < argc; i++)
    {
      if (::strcmp(argv[i], "Kid's meal") == 0)
      {
        Staff::addBurger(out_meal);
        Staff::addFrenchFries(out_meal);
        Staff::addSalad(out_meal);
        Staff::addToy(out_meal);
      }
      else if (::strcmp(argv[i], "Burger") == 0)
        Staff::addBurger(out_meal);
      else if (::strcmp(argv[i], "French fries") == 0)
        Staff::addFrenchFries(out_meal);
      else if (::strcmp(argv[i], "Salad") == 0)
        Staff::addSalad(out_meal);
      else
        throw std::invalid_argument("order() exception: Invalid item type");
    }

    return out_meal;
  }


} //!namespace Restaurant