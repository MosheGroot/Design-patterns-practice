#include "Router.hpp"

namespace Web::Hosts
{

  /// Constructors
  Router::Router(const std::string_view router_ip, std::shared_ptr<Network> network)
    : AHost(router_ip), routed_network_(network)
  {}

  Router::Router(const std::string_view router_ip)
    : AHost(router_ip), routed_network_(nullptr)
  {}


  /// Logic
  void  Router::handleRequest(const Request& request)
  {
    auto host = routed_network_->getHost(request.to);
    host->handleRequest(request);
  }

  void  Router::route(std::shared_ptr<Network> network)
  {
    this->routed_network_ = network;
  }

} //!namespace Web::Hosts
