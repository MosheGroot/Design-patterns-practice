#pragma once

#include <string_view>
#include <string>

namespace Service::Backend::Messenger
{
  
  std::string      createDefaultMessage(const std::string& user);

  std::string      createMessage(const std::string& user, const std::string& text);

} //!namespace Service::Backend::Messenger