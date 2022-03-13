#pragma once

#include "idevice.hpp"

namespace Devices
{
  class Radio final : public IDevice
  {
  private:
    bool    is_enabled_; //< enabled status
    uint8_t volume_;
    uint8_t channel_;

  public:

    virtual uint8_t   getVolume() const override;
    virtual void      setVolume(uint8_t vol) override;

    virtual uint16_t  getChannel() const override;
    virtual void      setChannel(uint16_t vol) override;

    virtual bool      isEnabled() const override;
    virtual void      enable() override;
    virtual void      disable() override;

    virtual void      listen() const override;

  }; //!class Radio final : public IDevice
} //!namespace Devices