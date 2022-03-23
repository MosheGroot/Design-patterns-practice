#pragma once

#include "../AHost.hpp"
#include "../../Network/Network.hpp"

#include <memory>

namespace Web::Hosts
{

  class Router : public AHost
  {
  // Fields
  private:
    std::shared_ptr<Network>   routed_network_;

  
  // Constructors and destructor
  public:
    Router(const std::string_view router_ip, std::shared_ptr<Network> network);

    Router(const std::string_view router_ip);

    ~Router() = default;


  // Logic
    virtual void  handleRequest(const Request& request) override;

    void          route(std::shared_ptr<Network> network);
    
  }; //!class Router final : public ARequestHandler

} //!namespace Web::Hosts
