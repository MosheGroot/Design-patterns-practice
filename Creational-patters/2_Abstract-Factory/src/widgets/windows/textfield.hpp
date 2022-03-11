#pragma once

#include "../ibase.hpp"

namespace App::Widgets::Windows
{

  class TextField final : public IBase
  {
    
  public:
    virtual void  draw(void) const override
    {
      std::cout << "draw Windows TextField" << std::endl;
    }

  }; //!class TextField final : public IBase
} //!namespace App::Widgets::Windows