#include "messenger.hpp"

namespace Service::Backend::Messenger
{

  std::string      createDefaultMessage(const std::string& user)
  {
    return "Hello, " + user + "! Welcome to yours one-person char!";
  }

  std::string      createMessage(const std::string& user, const std::string& text)
  {
    return "[" + user + "] : " + text;
  }

} //!namespace Service::Backend
