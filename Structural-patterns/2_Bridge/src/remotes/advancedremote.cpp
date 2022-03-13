#include "advancedremote.hpp"

namespace Remotes
{

  void    AdvancedRemote::mute() const
  {
    if (!target_device_->isEnabled())
      return;

    target_device_->setVolume(0);
  }


  void    AdvancedRemote::turnOnMaxVolume() const
  {
    if (!target_device_->isEnabled())
      return;

    target_device_->setVolume(UINT8_MAX);
  }

} //!namespace Remotes