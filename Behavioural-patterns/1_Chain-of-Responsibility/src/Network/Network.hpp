#pragma once

#include "../ARequestHandler/ARequestHandler.hpp"
#include "../Hosts/AHost.hpp"

#include <memory>
#include <vector>

namespace Web
{

  class Network final : public ARequestHandler
  {
  // Fields
  public:
    using host_ptr = std::shared_ptr<Hosts::AHost>;

  private:
    std::vector< host_ptr >  connected_hosts_;

  
  // Constructor and destructor
  public:
    Network() = default;
    
    ~Network() = default;


  // Logic
    virtual void  handleRequest(const Request& request) override;

    void       addHost(host_ptr host);

    host_ptr   getHost(const std::string_view ip);

  }; //class Network final : public ARequestHandler
} //!namespace Web