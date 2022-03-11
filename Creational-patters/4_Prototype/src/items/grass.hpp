#pragma once

#include "./abase.hpp"

namespace Game::Items
{

  class Grass final : public Items::ABase
  {

  public:
    Grass(uint8_t amount)
      : ABase("Grass", amount)
    {}


    virtual const char *getPlacingSound() const override
    {
      return "*grass placing sound*";
    }


    virtual ABase*  clone() const override
    {
      return new Grass(*this);
    }

  }; //!class Grass final : public Items::ABase

} //!namespace Game::Items