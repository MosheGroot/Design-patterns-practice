#include "basicremote.hpp"

namespace Remotes
{
  // Constructor
  BasicRemote::BasicRemote(BasicRemote::ptr_type& device)
    : target_device_(device)
  {}



  // Logic
  void  BasicRemote::togglePower() const
  {
    if (target_device_->isEnabled())
      target_device_->disable();
    else
      target_device_->enable();
  }
  

  void  BasicRemote::volumeUp() const
  {
    if (!target_device_->isEnabled())
      return;

    uint8_t current_level = target_device_->getVolume();
    if (current_level != UINT8_MAX)
      target_device_->setVolume(current_level + 1);
  }

  void  BasicRemote::volumeDown() const
  {
    if (!target_device_->isEnabled())
      return;

    uint8_t current_level = target_device_->getVolume();
    if (current_level != 0)
      target_device_->setVolume(current_level - 1);
  }


  void  BasicRemote::channelUp() const
  {
    if (!target_device_->isEnabled())
      return;

    target_device_->setChannel(target_device_->getChannel() + 1);
  }

  void  BasicRemote::channelDown() const
  {
    if (!target_device_->isEnabled())
      return;

    target_device_->setChannel(target_device_->getChannel() - 1);
  }

} //!namespace Remotes