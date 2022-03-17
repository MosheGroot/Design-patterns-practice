#include "vector.hpp"

namespace Math
{

  
  Vector   Vector::operator+(const Vector& vec) const
  {
    Vector p(*this);
    p += vec;
    return p;
  }

  Vector&  Vector::operator+=(const Vector& vec)
  {
    this->x += vec.x;
    this->y += vec.y;
    this->z += vec.z;
    return *this;
  }


  Vector   Vector::operator-(const Vector& vec) const
  {
    Vector p(*this);
    p -= vec;
    return p;
  }

  Vector&  Vector::operator-=(const Vector& vec)
  {
    this->x -= vec.x;
    this->y -= vec.y;
    this->z -= vec.z;
    return *this;
  }


  Vector   Vector::operator*(int lambda) const
  {
    Vector p(*this);
    p *= lambda;
    return p;
  }

  Vector&  Vector::operator*=(int lambda)
  {
    this->x *= lambda;
    this->y *= lambda;
    this->z *= lambda;
    return *this;
  }


  Vector   Vector::operator/(int lambda) const
  {
    Vector p(*this);
    p /= lambda;
    return p;
  }

  Vector&  Vector::operator/=(int lambda)
  {
    this->x /= lambda;
    this->y /= lambda;
    this->z /= lambda;
    return *this;
  }

} //!namespace Math