#pragma once

#include "basicremote.hpp"

namespace Remotes
{
  class AdvancedRemote : public BasicRemote
  {
  // Logic
  public:
    void  mute() const ;

    void  turnOnMaxVolume() const;

  }; //!class AdvancedRemote
} //!namespace Remotes