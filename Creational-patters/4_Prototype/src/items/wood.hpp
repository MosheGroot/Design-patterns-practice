#pragma once

#include "./abase.hpp"

namespace Game::Items
{

  class Wood final : public Items::ABase
  {

  public:
    Wood(uint8_t amount)
      : ABase("Wood", amount)
    {}
    

    virtual const char *getPlacingSound() const override
    {
      return "*wood placing sound*";
    }


    virtual ABase*  clone() const override
    {
      return new Wood(*this);
    }

  }; //!class Wood final : public Items::ABase

} //!namespace Game::Items