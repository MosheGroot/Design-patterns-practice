#pragma once

#include "../ibase.hpp"

namespace App::Widgets::Windows
{

  class Button final : public IBase
  {

  public:
    virtual void  draw(void) const override
    {
      std::cout << "draw Windows button" << std::endl;
    }

  }; //!class Button final : public IBase
} //!namespace App::Widgets::Windows