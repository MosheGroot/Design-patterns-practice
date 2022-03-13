#include "radio.hpp"

#include <iostream>

namespace Devices
{

  uint8_t   Radio::getVolume() const
  {
    return this->volume_;
  }

  void      Radio::setVolume(uint8_t vol)
  {
    this->volume_ = vol;
  }



  uint16_t  Radio::getChannel() const 
  {
    return this->channel_;
  }

  void      Radio::setChannel(uint16_t vol)
  {
    this->channel_ = vol;
  }



  bool      Radio::isEnabled() const
  {
    return this->is_enabled_;
  }

  void      Radio::enable()
  {
    this->is_enabled_ = true;
  }

  void      Radio::disable()
  {
    this->is_enabled_ = false;
  }



  void      Radio::listen() const
  {
    if (this->isEnabled())
    {
      std::cout << "*some radio sounds*\n"
                   "Current channel is " << this->getChannel() << ".0 FM\n"
                   "With volume level at " << static_cast<int>(this->getVolume());
    }
    else
    {
      std::cout << "*silence from the radio*";
    }
    std::cout << '\n' << std::endl;
  }

}