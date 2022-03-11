#pragma once

#include "./inventory.hpp"

#include "../items/dirt.hpp"
#include "../items/glass.hpp"
#include "../items/grass.hpp"
#include "../items/stone.hpp"
#include "../items/wood.hpp"

namespace Game::Inventories
{
  class Creative final : public AInventory
  {
  public:
    Creative() 
    {
      this->addItem(new Items::Dirt(UINT8_MAX));
      this->addItem(new Items::Glass(UINT8_MAX));
      this->addItem(new Items::Grass(UINT8_MAX));
      this->addItem(new Items::Stone(UINT8_MAX));
      this->addItem(new Items::Wood(UINT8_MAX));
    }


    [[nodiscard]]
    Items::ABase*   getItemClone(const std::string& item_name) 
    {
      if (!this->container_.contains(item_name))
        throw std::invalid_argument("getItemClone exception: such item doesn't exists");

      return this->container_[item_name]->clone();
    }

  }; //!class Creative final : public AInventory
} //!namespace Game::Inventories
