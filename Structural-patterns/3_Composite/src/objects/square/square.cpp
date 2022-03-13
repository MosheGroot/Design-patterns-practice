#include "square.hpp"

namespace Graphic::Objects
{
  
  Square::Square(int32_t x, int32_t y, uint32_t side)
  {
    int32_t halfside = side / 2;

    dots_.reserve(side * 4 - 4);

    // corners
    dots_.push_back({x - halfside, y - halfside});
    dots_.push_back({x - halfside, y + halfside});
    dots_.push_back({x + halfside, y - halfside});
    dots_.push_back({x + halfside, y + halfside});

    // top and bottom
    for (int32_t i = -halfside + 1; i < halfside; ++i)
    {
      dots_.push_back({x + i, y + halfside});
      dots_.push_back({x + i, y - halfside});
    }

    // left and right
    for (int32_t j = -halfside + 1; j < halfside; ++j)
    {
      dots_.push_back({x - halfside, y + j});
      dots_.push_back({x + halfside, y + j});
    }
  }


  void  Square::move(int32_t x, int32_t y)
  {
    for (auto& dot : dots_)
      dot.move(x, y);
  }


  void  Square::draw(DrawField& field, char c) const
  {
    for (auto& dot : dots_)
      dot.draw(field, c);
  }

} //!namespace Graphic::Objects