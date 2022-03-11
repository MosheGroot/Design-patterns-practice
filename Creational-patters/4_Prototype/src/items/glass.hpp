#pragma once

#include "./abase.hpp"

namespace Game::Items
{

  class Glass final : public Items::ABase
  {

  public:
    Glass(uint8_t amount)
      : ABase("Glass", amount)
    {}
    

    virtual const char *getPlacingSound() const override
    {
      return "*glass placing sound*";
    }


    virtual ABase*  clone() const override
    {
      return new Glass(*this);
    }

  }; //!class Glass final : public Items::ABase

} //!namespace Game::Items