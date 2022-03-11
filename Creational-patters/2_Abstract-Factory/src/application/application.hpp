#pragma once

#include <vector>
#include <algorithm>

#include "../factories/ifactory.hpp"
#include "../widgets/ibase.hpp"

namespace App
{

  class Application final
  {
  private:
    Factories::IFactory*  factory_;

  public:
    Application(Factories::IFactory* factory)
      : factory_(factory)
    {}

    ~Application()
    {
      delete this->factory_;
    }


    void exec(void)
    {
      // use factory
      std::vector<Widgets::IBase*> w = {
        this->factory_->createWindow(),
        this->factory_->createButton(),
        this->factory_->createTextField(),
        this->factory_->createTextField()
      };

      // draw
      std::for_each(w.begin(), w.end(),
        [] (Widgets::IBase* widget) { widget->draw(); });

      // clean up
      std::for_each(w.begin(), w.end(),
        [] (Widgets::IBase* widget) { delete widget; });
    }


  };

} //!namespace App