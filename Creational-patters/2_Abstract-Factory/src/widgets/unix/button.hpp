#pragma once

#include "../ibase.hpp"

namespace App::Widgets::Unix
{

  class Button final : public IBase
  {
    
  public:
    virtual void  draw(void) const override
    {
      std::cout << "draw Unix button" << std::endl;
    }

  }; //!class Button final : public IBase
} //!namespace App::Widgets::Unix