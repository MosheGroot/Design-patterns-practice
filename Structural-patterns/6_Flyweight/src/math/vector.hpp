#pragma once

#include <array>

namespace Math
{

  struct Vector : public std::array<int, 3>
  {
    int x = this->operator[](0);
    int y = this->operator[](1);
    int z = this->operator[](2);

    Vector    operator+(const Vector& second) const;
    Vector&   operator+=(const Vector& second);

    Vector    operator-(const Vector& second) const;
    Vector&   operator-=(const Vector& second);

    Vector    operator*(int lambda) const;
    Vector&   operator*=(int lambda);

    Vector    operator/(int lambda) const;
    Vector&   operator/=(int lambda);
  }; //!struct Vector : public std::array<int, 3>

} //!namespace Math