#pragma once

#include <array>
#include "vector.hpp"

namespace Math
{

  struct Point : public std::array<int, 3>
  {
    int x = this->operator[](0);
    int y = this->operator[](1);
    int z = this->operator[](2);

    Point   operator+(const Vector& vec) const;
    Point&  operator+=(const Vector& vec);

    Point   operator-(const Vector& vec) const;
    Point&  operator-=(const Vector& vec);
  }; //!struct Point : public std::array<int, 3>

} //!namespace Math