#include "circle.hpp"

#include <cmath>
#include <iostream>

namespace Graphic::Objects
{
  
  Circle::Circle(int32_t x, int32_t y, uint32_t r)
  {
    dots_.reserve(r * 2);

    double half_radius = r / 2 + 1;

    // top and bottom caps
    double py;
    for (double i = -half_radius; i <= half_radius; ++i)
    {
      py = ::sqrt(r * r - i * i);

      dots_.push_back({x + i, y + py});
      dots_.push_back({x + i, y - py});
    }

    // left and right caps
    double px;
    for (double j = -half_radius; j <= half_radius; ++j)
    {
      px = ::sqrt(r * r - j * j);

      dots_.push_back({x + px, y + j});
      dots_.push_back({x - px, y + j});
    }
  }

  void  Circle::move(int32_t x, int32_t y)
  {
    for (auto& dot : dots_)
      dot.move(x, y);
  }


  void  Circle::draw(DrawField& field, char c) const
  {
    for (auto& dot : dots_)
      dot.draw(field, c);
  }


} //!namespace Graphic::Objects