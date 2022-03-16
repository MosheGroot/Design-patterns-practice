#pragma once

#include <memory>

#include "authdata/authdata.hpp"
#include "messenger/messenger.hpp"

namespace Service::Backend
{

  class Endpoint final
  {
  // Traits
  private:
    static constexpr const char*   AuthData_FilePath = "data/login-passwords.txt";

  // Fields
  private:
    std::shared_ptr<AuthDatabase>  db_ = NULL;

  // Singleton
  public:
    static Endpoint   instance_;


  // Constructor and destructor
  public:
    Endpoint() = default;

    ~Endpoint() = default;


  // Logic
    void    initLoginData(void);

    void    auth(const std::pair<std::string, std::string> auth_data);

    void    sendMessage(const std::string& login, const std::string& message);

  }; //!class Endpoint final

} //!namespace Service::Backend