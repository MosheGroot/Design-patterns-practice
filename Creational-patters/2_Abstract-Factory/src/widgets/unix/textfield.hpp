#pragma once

#include "../ibase.hpp"

namespace App::Widgets::Unix
{

  class TextField final : public IBase
  {
    
  public:
    virtual void  draw(void) const override
    {
      std::cout << "draw Unix TextField" << std::endl;
    }

  }; //!class TextField final : public IBase
} //!namespace App::Widgets::Unix