#include "client.hpp"

#include <iostream>

namespace Service
{

  bool    Client::auth(const std::string& login, const std::string& password)
  {
    try
    {
      Backend::Endpoint::instance_.auth({login, password});
      this->login_ = login;
      return true;
    }
    catch(const std::exception& e)
    {
      std::cerr << "Invalid login :c" << std::endl;
      std::cerr << e.what() << std::endl;
      return false;
    }
  }

  void    Client::joinChat(void)
  {
    if (this->login_ == "")
    {
      std::cerr << "You are not logged in chat!" << std::endl;
    }

    while (true)
    {
      std::string msg;

      std::cout << "< " << std::flush;
      std::getline(std::cin, msg);

      Backend::Endpoint::instance_.sendMessage(this->login_, msg);
    }
  }

} //!namespace Service