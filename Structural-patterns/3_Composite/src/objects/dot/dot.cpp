#include "dot.hpp"

#include <cmath>

namespace Graphic::Objects
{
  
  Dot::Dot(int32_t x, int32_t y)
    : x_(x), y_(y)
  {}

  Dot::Dot(double x, double y)
    : x_(::round(x)), y_(::round(y))
  {}

  void  Dot::move(int32_t x, int32_t y)
  {
    x_ += x;
    y_ += y;
  }

  void  Dot::draw(DrawField& field, char c) const
  {
    field.drawPoint(x_, y_, c);
  }

} //!namespace Graphic::Objects