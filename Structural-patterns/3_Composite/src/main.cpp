#include <iostream>
#include <cstdlib>

#include "drawfield/drawfield.hpp"

#include "objects/circle/circle.hpp"
#include "objects/square/square.hpp"
#include "objects/compound/compound.hpp"

int main(void)
{
  using namespace Graphic;

  DrawField  field(50, 25, '.');
  field.printField(true);

  // Dot
  Objects::Dot      dot(0, 0);
  dot.draw(field, 'O');
  field.printField(true);

  // Square
  Objects::Square   square1(3, 5, 4);
  square1.draw(field, '&');
  field.printField(true);

  // Circle
  Objects::Circle   circle(-10, 0, 3);
  circle.draw(field, 'X');
  field.printField(true);

  // Compound with circle and square
  Objects::Compound compound;
  compound.addObject(
    std::unique_ptr<Objects::IObject>(new Objects::Circle(10, -3, 5)));
  compound.addObject(
    std::unique_ptr<Objects::IObject>(new Objects::Square(10, -3, 7)));

  compound.draw(field, '&');
  field.printField(true);

  field.clearField();
  compound.move(-8, 1);
  compound.draw(field, '&');
  field.printField(true);

  return 0;
}