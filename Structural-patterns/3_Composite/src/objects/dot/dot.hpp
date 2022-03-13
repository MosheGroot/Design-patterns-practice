#pragma once

#include "../iobject.hpp"

namespace Graphic::Objects
{

  class Dot final : public IObject
  {
  private:
    int32_t x_;
    int32_t y_;

  public:
    Dot(int32_t x, int32_t y);
    
    Dot(double x, double y);

    ~Dot() = default;


    virtual void  move(int32_t x, int32_t y) override;

    virtual void  draw(DrawField& field, char c) const override;

  }; //!class Dot final : public IObject

} //!namespace Graphic::Objects