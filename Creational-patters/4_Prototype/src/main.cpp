#include <iostream>

#include "inventory/creative.hpp"
#include "inventory/survival.hpp"

int   main()
{
  // creative infinite inventory
  Game::Inventories::Creative creative;
  
  // survival inventory with clones from creative inventory
  Game::Inventories::Survival survival;
  survival.addItem(creative.getItemClone("Grass"));
  survival.addItem(creative.getItemClone("Glass"));
  survival.addItem(creative.getItemClone("Stone"));
  survival.addItem(creative.getItemClone("Wood"));
  survival.addItem(creative.getItemClone("Dirt"));

  survival.accessItem("Grass").placeBlock();
  survival.accessItem("Grass").placeBlock();
  survival.accessItem("Stone").placeBlock();
  survival.accessItem("Wood").placeBlock();

  return 0;
}