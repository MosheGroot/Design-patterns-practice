#pragma once

#include "../widgets/ibase.hpp"

namespace App::Factories
{

  class IFactory
  {

  public:
    virtual Widgets::IBase*   createWindow() const = 0;
    virtual Widgets::IBase*   createButton() const = 0;
    virtual Widgets::IBase*   createTextField() const = 0;

    virtual ~IFactory() {}

  }; //!class IFactory

} //!namespace App::Factories