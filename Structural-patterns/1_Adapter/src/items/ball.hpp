#pragma once

#include "aitem.hpp"

namespace Items
{

  struct Ball final : public AItem
  {
    uint32_t   radius; //<radius in millimeters
  }; //!struct Ball

} //!namespace Items