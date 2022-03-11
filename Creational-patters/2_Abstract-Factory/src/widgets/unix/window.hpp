#pragma once

#include "../ibase.hpp"

namespace App::Widgets::Unix
{

  class Window final : public IBase
  {
    
  public:
    virtual void  draw(void) const override
    {
      std::cout << "draw Unix window" << std::endl;
    }

  }; //!class Window final : public IBase
} //!namespace App::Widgets::Unix