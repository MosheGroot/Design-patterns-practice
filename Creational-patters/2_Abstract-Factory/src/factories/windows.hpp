#pragma once

#include "ifactory.hpp"

#include "../widgets/windows/window.hpp"
#include "../widgets/windows/button.hpp"
#include "../widgets/windows/textfield.hpp"

namespace App::Factories
{

  class Windows final : public IFactory
  {
  
  public:
    virtual Widgets::IBase*   createWindow() const override
    {
      return new Widgets::Windows::Window();
    }
    
    virtual Widgets::IBase*   createButton() const override
    {
      return new Widgets::Windows::Button();
    }

    virtual Widgets::IBase*   createTextField() const override
    {
      return new Widgets::Windows::TextField();
    }
  
  }; //!class Windows final : public IFactory

} //!namespace App::Factories
