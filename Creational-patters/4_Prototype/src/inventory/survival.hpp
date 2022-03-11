#pragma once

#include "./inventory.hpp"

namespace Game::Inventories
{
  class Survival final : public AInventory
  {
  public:
    Survival() = default;

    [[maybe_unused]]
    Items::ABase&   accessItem(const std::string& item_name) 
    {
      if (!this->container_.contains(item_name))
        throw std::invalid_argument("accessItem exception: such item doesn't exists");

      return *this->container_[item_name];
    }

  }; //!class Survival final : public AInventory
} //!namespace Game::Inventories
