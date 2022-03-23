#include "ARequestHandler.hpp"

namespace Web
{
  
  ARequestHandler::ARequestHandler(std::shared_ptr<ARequestHandler> success_handler)
    : successor_(success_handler)
  {}

  ARequestHandler::ARequestHandler()
    : successor_(nullptr)
  {}

} //!namespace Web
