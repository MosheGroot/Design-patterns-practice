#pragma once

#include "./abase.hpp"

namespace Game::Items
{

  class Stone final : public Items::ABase
  {

  public:
    Stone(uint8_t amount)
      : ABase("Stone", amount)
    {}
    

    virtual const char *getPlacingSound() const override
    {
      return "*stone placing sound*";
    }


    virtual ABase*  clone() const override
    {
      return new Stone(*this);
    }

  }; //!class Stone final : public Items::ABase

} //!namespace Game::Items