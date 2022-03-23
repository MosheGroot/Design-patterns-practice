#include "Forwarder.hpp"

namespace Web::Hosts
{

  /// Constructors
  Forwarder::Forwarder(const std::string_view router_ip, std::shared_ptr<AHost> host)
    : AHost(router_ip), forward_host_(host)
  {}

  Forwarder::Forwarder(const std::string_view router_ip)
    : AHost(router_ip), forward_host_(nullptr)
  {}


  /// Logic
  void  Forwarder::handleRequest(const Request& request)
  {
    if (forward_host_)
      forward_host_->handleRequest(request);
  }

  void  Forwarder::forwardTo(std::shared_ptr<AHost> host)
  {
    this->forward_host_ = host;
  }

} //!namespace Web::Hosts
