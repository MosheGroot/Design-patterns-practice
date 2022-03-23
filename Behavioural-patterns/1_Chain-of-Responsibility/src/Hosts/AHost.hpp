#pragma once

#include "../ARequestHandler/ARequestHandler.hpp"

#include <string>
#include <string_view>

namespace Web::Hosts
{

  class AHost : public ARequestHandler
  {
  // Fields
  private:
    std::string   ip_;


  // Constructor and destructor
  protected:
    AHost(const std::string_view ip);

  public:
    virtual ~AHost() = default;


  // Logic
    void                  setIpAddress(const std::string_view ip);

    const std::string&    getIpAddress(void) const;

  }; //class AHost : public ARequestHandler

} //!namespace Web::Hosts
