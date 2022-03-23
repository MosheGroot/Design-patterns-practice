#include "AHost.hpp"

namespace Web::Hosts
{

  /// Constructor and destructor
  AHost::AHost(const std::string_view ip)
    : ip_(ip)
  {}


  /// Logic
  void                  AHost::setIpAddress(const std::string_view ip)
  {
    this->ip_ = ip;
  }

  const std::string&    AHost::getIpAddress(void) const
  {
    return this->ip_;
  }

} //!namespace Web::Hosts
