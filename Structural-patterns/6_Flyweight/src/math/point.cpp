#include "point.hpp"

namespace Math
{

  
  Point   Point::operator+(const Vector& vec) const
  {
    Point p(*this);
    p += vec;
    return p;
  }

  Point&  Point::operator+=(const Vector& vec)
  {
    this->x += vec.x;
    this->y += vec.y;
    this->z += vec.z;
    return *this;
  }


  Point   Point::operator-(const Vector& vec) const
  {
    Point p(*this);
    p -= vec;
    return p;
  }

  Point&  Point::operator-=(const Vector& vec)
  {
    this->x -= vec.x;
    this->y -= vec.y;
    this->z -= vec.z;
    return *this;
  }


} //!namespace Math