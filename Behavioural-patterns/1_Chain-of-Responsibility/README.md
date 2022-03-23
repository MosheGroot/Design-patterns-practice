## Chain of Responsibility

Little code with **Chain of Responsibility** pattern with `ARequestHandler` abstract class and many hosts classes, 
which can send the request to the next handler in the chain. 

### Result

There is next hierarchy:
* class `ARequestHandler`
* class `Network : ARequestHandler`
* class `Hosts::AHost : ARequestHandler`:
  * class `Server : AHost` (just printing request)
  * class `Forwarder : AHost` (is able to forward request to another host)
  * class `Router : AHost` (sending request to any host in the network)

### Runtime

![Screen Recording 2022-03-23 at 7 52 51 PM (1)](https://user-images.githubusercontent.com/44144647/159756327-7dd17cb6-d745-4bd8-98fb-a4ed3dc21978.gif)



### Learned new
* Usage of **Chain of Responsibility** pattern
