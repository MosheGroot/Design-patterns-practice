#include <iostream>

#include "delivery/manager.hpp"

int   main(void)
{
  // user items
  Items::Ball ball; ball.radius = 3;
  Items::Cube cube; cube.side = 100;

  // adapter
  Delivery::Manager manager;

  // delivery items
  Delivery::Box ball_box = manager.packItem(ball);
  Delivery::Box cube_box = manager.packItem(cube);

  std::cout << "Box with ball: "
            << ball_box.lenght << 'x'
            << ball_box.height << 'x'
            << ball_box.width << std::endl;

  std::cout << "Box with cube: "
            << cube_box.lenght << 'x'
            << cube_box.height << 'x'
            << cube_box.width << std::endl;

  return 0;
}