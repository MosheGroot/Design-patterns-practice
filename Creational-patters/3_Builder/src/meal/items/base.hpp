#pragma once

#include <string>
#include <string_view>

namespace Restaurant::Items
{

  class Base
  {
  // fields
  private:
    const std::string type_;

  // constructor and destructor
  protected:
    Base(const std::string_view type)
      : type_(type)
    {}

  public:
    virtual ~Base() {}

  // logic
    const std::string&  getType(void) { return this->type_; }

  };

} //!namespace Restaurant
