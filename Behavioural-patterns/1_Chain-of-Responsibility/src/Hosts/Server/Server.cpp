#include "Server.hpp"

#include <iostream>

namespace Web::Hosts
{
  /// Constructor
  Server::Server(const std::string_view server_ip)
    : AHost(server_ip)
  {}


  /// Logic
  void  Server::handleRequest(const Request& request)
  {
    std::cout << "{{ SERVER WITH IP " << this->getIpAddress() << "}}\n"
              << "Request from [" << request.from 
              << "] with next data:\n{"
              << request.data << "}\n" 
              << std::endl;
  }

} //!namespace Web::Hosts
