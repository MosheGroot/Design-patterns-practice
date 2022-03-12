#pragma once

#include "aitem.hpp"

namespace Items
{

  struct Cube final : public AItem
  {
    uint32_t   side; //<side in millimeters
  }; //!struct Cube

} //!namespace Items