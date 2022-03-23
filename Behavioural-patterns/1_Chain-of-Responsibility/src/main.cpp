#include <iostream>
#include "Network/Network.hpp"
#include "Hosts/Router/Router.hpp"
#include "Hosts/Server/Server.hpp"
#include "Hosts/Forwarder/Forwarder.hpp"

using namespace Web;

Hosts::Router   setup_network(void)
{
  std::shared_ptr<Network>    network(new Network());
  
  network->addHost(Network::host_ptr(new Hosts::Server("2")));
  network->addHost(Network::host_ptr(new Hosts::Server("3")));
  network->addHost(Network::host_ptr(new Hosts::Forwarder("20", network->getHost("2"))));
  network->addHost(Network::host_ptr(new Hosts::Forwarder("30", network->getHost("3"))));

  return Hosts::Router("1", network);
}

int   main(void)
{
  auto  router = setup_network();
  
  router.handleRequest({"ONE", "2", "Message to server with ip {2}"});
  router.handleRequest({"TWO", "3", "Message to server with ip {3}"});
  router.handleRequest({"THREE", "20", "Message to forwarder with ip {20}"});
  router.handleRequest({"FOUR", "30", "Message to forwarder with ip {30}"});

  return 0;
}