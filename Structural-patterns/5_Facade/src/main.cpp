#include <iostream>

#include "client/client.hpp"

int   main(int argc, const char* argv[])
{
  if (argc != 3)
  {
    std::cerr << "Invalid number of arguments!\n"
                 "Please provide `login` and `password` for client"  << std::endl;
    return 1;
  }


  Service::Client client;
  if (!client.auth(argv[1], argv[2]))
    return 2;
  
  client.joinChat();

  return 0;
}