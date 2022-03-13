#pragma once

#include <inttypes.h>

namespace Devices
{
  class IDevice
  {
  public:
    
    virtual uint8_t   getVolume() const = 0;
    virtual void      setVolume(uint8_t vol) = 0;

    virtual uint16_t  getChannel() const = 0;
    virtual void      setChannel(uint16_t vol) = 0;

    virtual bool      isEnabled() const = 0;
    virtual void      enable() = 0;
    virtual void      disable() = 0;

    virtual void      listen() const = 0;

  }; //!class IDevice
} //!namespace Devices
