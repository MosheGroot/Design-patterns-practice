#pragma once

#include "../iobject.hpp"
#include "../dot/dot.hpp"

#include <vector>

namespace Graphic::Objects
{

  class Square final : public IObject
  {
  private:
    std::vector<Objects::Dot>   dots_;


  public:
    Square(int32_t x, int32_t y, uint32_t side);

    ~Square() = default;


    virtual void  move(int32_t x, int32_t y) override;

    virtual void  draw(DrawField& field, char c) const override;


  }; //!class Square final : public IObject

} //!namespace Graphic::Objects