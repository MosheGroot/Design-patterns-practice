## Prototype

Simple code with **Protorype** pattern applied to in-game `Items`.

`Items` contains in some `Inventory`:
* `Creative` inventory with "infinite" amount of items (its just returns `clone` of stored item)
* `Survival` inventory with simple storage and access to items


### Result

+ namespace `Game::Items` with:
  + abstract class `ABase`
  + class `Dirt : ABase`
  + class `Grass : ABase`
  + class `Glass : ABase`
  + class `Stone : ABase`
  + class `Wood : ABase`
+ namespace `Inventories` with:
  + class `Base`
  + class `Creative : Base`
  + class `Survival : Base`
+ `Creative` inventory contains all known items and returns clone of them on request (`getItemClone` function call)
+ `Survival` inventory contains added items and returns reference to specific on request (`accessItem` function call)

### Runtime

![2022-03-11 18-10-00](https://user-images.githubusercontent.com/44144647/157895293-2094e4e2-f3cd-4c57-a956-67b8fc93cbda.gif)


### Learned new
* Usage of **Prototype** pattern
* `decltype` keyword
