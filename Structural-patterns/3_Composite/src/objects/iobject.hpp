#pragma once 

#include <inttypes.h>
#include "../drawfield/drawfield.hpp"
namespace Graphic::Objects
{

  class IObject
  {
  public:
    virtual void  move(int32_t x, int32_t y) = 0;

    virtual void  draw(DrawField& field, char c) const = 0;

  }; //!class IObject

} //!namespace Graphic::Objects