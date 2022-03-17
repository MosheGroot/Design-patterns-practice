## Flyweight

Little code with **Flyweight** pattern where `BasicModels` with "texture" and "model" is a flyweight, and `MovingModel` is a context for flyweight usage.

Also there is a factory of flyweights.

Example of program shows simple example of factory use and creating some context objects around one flyweight.


### Result

* namespace `Models`:
  + class `BasicModel`
  + class `MovingModel` -> `BasicModel` (contains pointer to some flyweight)
  + class `BasicModelsFactory` (with own comparator for using `BasicModel` in set)
* namespace `Math`: simple math objects like `Point` and `Vector`
* simple `main.cpp`

### Runtime

![Screen Recording 2022-03-17 at 7 16 15 PM (1)](https://user-images.githubusercontent.com/44144647/158847095-447f1ae7-977c-4e71-b10b-131632894ea9.gif)


### Learned new
* Usage of **Flyweight** pattern
