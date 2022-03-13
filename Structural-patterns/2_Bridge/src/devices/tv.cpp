#include "tv.hpp"

#include <iostream>

namespace Devices
{

  uint8_t   TV::getVolume() const
  {
    return this->volume_;
  }

  void      TV::setVolume(uint8_t vol)
  {
    this->volume_ = vol;
  }



  uint16_t  TV::getChannel() const 
  {
    return this->channel_;
  }

  void      TV::setChannel(uint16_t vol)
  {
    this->channel_ = vol;
  }



  bool      TV::isEnabled() const
  {
    return this->is_enabled_;
  }

  void      TV::enable()
  {
    this->is_enabled_ = true;
  }

  void      TV::disable()
  {
    this->is_enabled_ = false;
  }



  void      TV::listen() const
  {
    if (this->isEnabled())
    {
      std::cout << "*some TV sounds*\n"
                   "Current channel is " << this->getChannel() << "\n"
                   "With volume level at " << static_cast<int>(this->getVolume());
    }
    else
    {
      std::cout << "*silence from the TV*";
    }
      
    std::cout << '\n' << std::endl;
  }

}