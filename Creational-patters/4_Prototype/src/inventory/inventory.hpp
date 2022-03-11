#pragma once

#include "../items/abase.hpp"

#include <map>
#include <string>
#include <string_view>
#include <algorithm>

namespace Game::Inventories
{

  class AInventory
  {
  // fields
  protected:
    std::map<std::string, Items::ABase *> container_;


  // constructor and destructor
    AInventory() {};

  public:
    virtual ~AInventory()
    {
      std::for_each(container_.begin(), container_.end(),
        [] (decltype(container_)::value_type& val) { delete val.second; } );
    }


  // logic
  public:
    void                    addItem(Items::ABase *item)
    {
      if (!item)
        throw std::invalid_argument("addItem exception: argument is null");

      if (container_.contains(item->getType()))
      {
        container_[item->getType()]->addAmount(item->getAmount());
        delete item;
      }
      else 
      {
        container_[item->getType()] = item;
      }
    }


  }; //!class Inventory final

} //!namespace Game::Inventories
