#include "compound.hpp"

namespace Graphic::Objects
{

  void  Compound::addObject(std::unique_ptr<IObject> obj)
  {
    objects_.emplace_back(std::move(obj));
  }


  void  Compound::move(int32_t x, int32_t y)
  {
    for (auto& obj : objects_)
      obj->move(x, y);
  }

  void  Compound::draw(DrawField& field, char c) const
  {
    for (auto& obj : objects_)
      obj->draw(field, c);
  }

} //!namespace Graphic::Objects
