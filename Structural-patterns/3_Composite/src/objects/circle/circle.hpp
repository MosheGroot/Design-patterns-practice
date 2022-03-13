#pragma once

#include "../iobject.hpp"
#include "../dot/dot.hpp"

#include <vector>

namespace Graphic::Objects
{

  class Circle final : public IObject
  {
  private:
    std::vector<Objects::Dot>   dots_;


  public:
    Circle(int32_t x, int32_t y, uint32_t r);

    ~Circle() = default;


    virtual void  move(int32_t x, int32_t y) override;

    virtual void  draw(DrawField& field, char c) const override;

  }; //!class Circle final : public IObject

} //!namespace Graphic::Objects