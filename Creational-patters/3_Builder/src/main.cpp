#include <iostream>
#include <cstring>

#include "cashier/cashier.hpp"

int   main(int argc, const char* argv[])
{
  Restaurant::Cashier cashier;

  if (argc == 2 && ::strcmp(argv[1], "--help") == 0)
  {
    cashier.getHelp();
    return 0;
  }

  try
  {
    Restaurant::Meal  meal = cashier.order(argc - 1, argv + 1);

    std::cout << "My order:\n";
    std::for_each(meal.order.begin(), meal.order.end(), 
      [] (Restaurant::Items::Base& item) { 
        std::cout << '\t' << item.getType() << '\n';
      }
    );
    std::cout << std::flush;
  }
  catch(const std::exception& e)
  {
    std::cerr << e.what() << '\n';
  }
  
  

  return 0;
}