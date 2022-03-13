#pragma once

#include <memory>

#include "../devices/idevice.hpp"

namespace Remotes
{
  class BasicRemote
  {
  // Fields
  public:
    typedef std::shared_ptr<Devices::IDevice>   ptr_type;

  protected:
    ptr_type    target_device_;


  // constructor and destructor
  public:

    BasicRemote(ptr_type& device);

    ~BasicRemote() = default;


  // Logic
  public:
    void  togglePower() const;
    
    void  volumeUp() const;
    void  volumeDown() const;

    void  channelUp() const;
    void  channelDown() const;

  }; //!class BasicRemote
} //!namespace Remotes