## Composite

Little code with **Composite** pattern for emulating some paint editor. 

* Object compound contains objects.
* Object contains dots.
* Dots are the smallest object to draw.

Drawing object compound is followed by drawing inner objects, which is followed by dots drawing.


### Result

* class `Graphic::DrawField`
* namespace `Graphic::Objects`
  + class `IObject`
  + class `Dot : IObject`
  + class `Square : IObject`
  + class `Circle : IObject`
  + class `Compound : IObject`
* little `main.cpp` with demonstration of program work


### Runtime

![2022-03-13 23-25-37](https://user-images.githubusercontent.com/44144647/158078190-9ce199b9-9a0d-4582-b618-0bb97d793991.gif)


### Learned new
* Usage of **Composite** pattern
