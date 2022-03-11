#include <iostream>

#include "managment/managment.hpp"

int   main(int argc, const char* argv[])
{
  // select config
  const char *config_path;
  if (argc == 1)
    config_path = "data/default.conf";
  else if (argc == 2)
    config_path = argv[1];
  else
  {
    std::cerr << "Invalid arguments, please provide path to config "
                 "or run without config for default" << std::endl;
    return 1;
  }


  // run
  try
  {
    using namespace Managment;

    workers_t workers = readConfig(config_path);
    startWorkDay(workers);
    
    return 0;
  }
  catch(const std::exception& e)
  {
    std::cerr << e.what() << std::endl;
    return 2;
  }

}
