#pragma once

#include "./abase.hpp"

namespace Game::Items
{

  class Dirt final : public Items::ABase
  {

  public:
    Dirt(uint8_t amount)
      : ABase("Dirt", amount)
    {}
    
    
    virtual const char *getPlacingSound() const override
    {
      return "*dirt placing sound*";
    }


    virtual ABase*  clone() const override
    {
      return new Dirt(*this);
    }
    
  }; //!class Dirt final : public Items::ABase

} //!namespace Game::Items