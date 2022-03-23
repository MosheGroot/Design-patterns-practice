#pragma once

#include "../AHost.hpp"
#include "../../Network/Network.hpp"

#include <memory>

namespace Web::Hosts
{

  class Forwarder : public AHost
  {
  // Fields
  private:
    std::shared_ptr<AHost>   forward_host_;

  
  // Constructors and destructor
  public:
    Forwarder(const std::string_view forwarder_ip, std::shared_ptr<AHost> host);

    Forwarder(const std::string_view forwarder_ip);

    ~Forwarder() = default;


  // Logic
    virtual void  handleRequest(const Request& request) override;

    void          forwardTo(std::shared_ptr<AHost> host);
    
  }; //!class Forwarder final : public ARequestHandler

} //!namespace Web::Hosts
