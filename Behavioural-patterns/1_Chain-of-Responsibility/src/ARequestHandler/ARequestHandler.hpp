#pragma once

#include <memory>
#include "../Request/Request.hpp"

namespace Web
{
  class ARequestHandler
  {
  // Fields
  protected:
    std::shared_ptr<ARequestHandler>  successor_;


  // Constructors and destructor
    ARequestHandler(std::shared_ptr<ARequestHandler> success_handler);

  public:
    ARequestHandler();

    virtual ~ARequestHandler() = default;


  // Logic
    virtual void  handleRequest(const Request& request) = 0;
    
  }; //!class ARequestHandler


} //!namespace Web