#include "Network.hpp"

#include <algorithm>
#include <iostream>

namespace Web
{

  void                Network::addHost(host_ptr host)
  {
    connected_hosts_.push_back(host);
  }

  Network::host_ptr   Network::getHost(const std::string_view ip)
  {
    auto it = std::find_if(connected_hosts_.begin(), connected_hosts_.end(),
      [&](const Network::host_ptr& host) { 
        return host->getIpAddress() == ip; 
      }
    );
    if (it == connected_hosts_.end())
      throw std::exception();

    return *it;
  }

  /// Logic
  void  Network::handleRequest(const Request& request)
  {
    // UDP, but not implemented
    (void)request;
    std::cout << "*some request was missed in network*" << std::endl;
  }

} //!namespace Web