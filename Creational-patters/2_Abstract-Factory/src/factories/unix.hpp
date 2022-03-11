#pragma once

#include "ifactory.hpp"

#include "../widgets/unix/window.hpp"
#include "../widgets/unix/button.hpp"
#include "../widgets/unix/textfield.hpp"

namespace App::Factories
{

  class Unix final : public IFactory
  {
  
  public:
    virtual Widgets::IBase*   createWindow() const override
    {
      return new Widgets::Unix::Window();
    }
    
    virtual Widgets::IBase*   createButton() const override
    {
      return new Widgets::Unix::Button();
    }

    virtual Widgets::IBase*   createTextField() const override
    {
      return new Widgets::Unix::TextField();
    }
  
  }; //!class Unix final : public IFactory

} //!namespace App::Factories
