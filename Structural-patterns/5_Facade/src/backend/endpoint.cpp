#include "endpoint.hpp"

#include <iostream>

namespace Service::Backend
{

  /// Singleton
  Endpoint  Endpoint::instance_;


  /// Logic
  void    Endpoint::initLoginData(void)
  {
    db_ = std::shared_ptr<AuthDatabase>(
      new AuthDatabase(
        Endpoint::AuthData_FilePath
      )
    );
  }
  
  void    Endpoint::auth(const std::pair<std::string, std::string> auth_data)
  {
    if (!db_)
      initLoginData();

    if (!db_->auth(auth_data))
      throw std::invalid_argument("auth function: invalid login");
    
    std::cout << Messenger::createDefaultMessage(auth_data.first) << std::endl;
  }


  void    Endpoint::sendMessage(const std::string& login, const std::string& message)
  {
    std::cout << Messenger::createMessage(login, message) << std::endl;    
  }

} //!namespace Service::Backend