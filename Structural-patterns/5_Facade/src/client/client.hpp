#pragma once

#include <string>

#include "../backend/endpoint.hpp"

namespace Service
{

  class Client final
  {
  private:
    std::string   login_;

  public:
    bool    auth(const std::string& login, const std::string& password);

    void    joinChat(void);

  }; //!class Client final

} //!namespace Service