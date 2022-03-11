#pragma once

#include "../ibase.hpp"

namespace App::Widgets::Windows
{

  class Window final : public IBase
  {

  public:
    virtual void  draw(void) const override
    {
      std::cout << "draw Windows window" << std::endl;
    }

  }; //!class Window final : public IBase
} //!namespace App::Widgets::Windows