#include <iostream>

#include "devices/tv.hpp"
#include "devices/radio.hpp"

#include "remotes/basicremote.hpp"
#include "remotes/advancedremote.hpp"

void  testTv()
{
  // device
  auto tv = std::shared_ptr<Devices::IDevice>(new Devices::TV());

  // basic remote
  Remotes::BasicRemote basic_remote(tv);
  tv->listen();

  basic_remote.togglePower();
  tv->listen();
  
  basic_remote.channelUp();
  tv->listen();
  
  for (int i = 0; i < 10; i++)
    basic_remote.volumeUp();
  tv->listen();

  // advanced remote
  Remotes::AdvancedRemote advanced_remove(tv);
  advanced_remove.mute();
  tv->listen();
  
  advanced_remove.turnOnMaxVolume();
  tv->listen();
}

void  TestRadio()
{
  // device
  auto radio = std::shared_ptr<Devices::IDevice>(new Devices::Radio());


  // basic remote
  Remotes::BasicRemote basic_remote(radio);
  radio->listen();

  basic_remote.togglePower();
  radio->listen();
  
  basic_remote.channelUp();
  radio->listen();
  
  for (int i = 0; i < 10; i++)
    basic_remote.volumeUp();
  radio->listen();


  // advanced remote
  Remotes::AdvancedRemote advanced_remove(radio);
  advanced_remove.mute();
  radio->listen();
  
  advanced_remove.turnOnMaxVolume();
  radio->listen();
}


int   main(void)
{
  testTv();
  
  std::cout << "Please press enter to continue";
  std::getchar();

  TestRadio();

  return 0;
}