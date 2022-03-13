#pragma once

#include "../iobject.hpp"

#include <vector>
#include <memory>

namespace Graphic::Objects
{

  class Compound final : public IObject
  {
  private:
    std::vector< std::unique_ptr<IObject> >  objects_;

  public:
    Compound() = default;

    ~Compound() = default;


    void          addObject(std::unique_ptr<IObject> obj);


    virtual void  move(int32_t x, int32_t y) override;

    virtual void  draw(DrawField& field, char c) const override;

  }; //!class Compound final : public IObject

} //!namespace Graphic::Objects