#pragma once

#include "./box.hpp"
#include "../items/aitem.hpp"
#include "../items/cube.hpp"
#include "../items/ball.hpp"

#include <exception>

namespace Delivery
{

  class Manager final
  {

  public:
    Box   packItem(const Items::AItem& item)
    {
      using namespace Items;

      if (const Cube* cube; (cube = dynamic_cast<const Cube*>(&item)))
      {
        auto s = cube->side;
        return {s, s, s};
      }
      else if (const Ball* ball; (ball = dynamic_cast<const Ball*>(&item)))
      {
        auto s = ball->radius * 2;
        return {s, s, s};
      }

      throw std::bad_typeid();
    }

  }; //!class Manager final

} //!namespace Delivery