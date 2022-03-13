#include "drawfield.hpp"

#include <cstring>
#include <iostream>

namespace Graphic
{

  // Constructors and destructor
  DrawField::DrawField(uint32_t x, uint32_t y, char filler)
    : buffer_(new char[x * y]), filler_char_(filler)
  {
    size_.x = x;
    size_.y = y;
    
    ::memset(buffer_, filler_char_, size_.x * size_.y);
  }

  DrawField::DrawField(const DrawField& other)
    : buffer_(new char[other.size_.x * other.size_.y]),
      filler_char_(other.filler_char_),
      size_(other.size_)
  {
    ::memcpy(buffer_, other.buffer_, other.size_.x * other.size_.y);
  }

  DrawField::~DrawField()
  {
    delete[] buffer_;
  }


  // Logic
  void    DrawField::drawPoint(int32_t x, int32_t y, char c)
  {
    static uint32_t x_shift = size_.x / 2;
    static uint32_t y_shift = size_.y / 2;

    // inverse y
    y *= -1;

    // shift
    x += x_shift;
    y += y_shift;

    if (x < 0 || x > static_cast<int32_t>(size_.x) || 
        y < 0 || y > static_cast<int32_t>(size_.y))
      return;

    buffer_[y * size_.x + x] = c;
  }


  void    DrawField::printField(bool interactive) const
  {
    if (interactive)
    {
      std::cout << "Press enter to print DrawField" << std::endl;
      ::getchar();
    }

    for (uint32_t j = 0; j < size_.y; ++j)
    {
      for (uint32_t i = 0; i < size_.x; ++i)
      {
        std::cout << buffer_[j * size_.x + i] << ' ';
      }
      std::cout << '\n';
    }

    std::cout << '\n' << std::flush;
  }


  void    DrawField::clearField()
  {
    ::memset(buffer_, filler_char_, size_.x * size_.y);
  }

} //!namespace Graphic