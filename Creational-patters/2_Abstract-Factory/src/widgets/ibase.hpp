#pragma once

#include <iostream>

namespace App::Widgets
{

  class IBase
  {
  public:
    virtual void  draw() const = 0;

    virtual ~IBase() {}
  };

} //!namespace App::Widgets