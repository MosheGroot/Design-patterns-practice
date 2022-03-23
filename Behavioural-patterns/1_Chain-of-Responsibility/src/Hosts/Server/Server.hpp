#pragma once

#include "../AHost.hpp"

namespace Web::Hosts
{

  class Server : public AHost
  {
  public:
    Server(const std::string_view server_ip);

    virtual void  handleRequest(const Request& request) override;

  }; //!class Server final : public ARequestHandler

} //!namespace Web::Hosts
