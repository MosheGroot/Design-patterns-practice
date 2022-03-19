#include <iostream>
#include "proxyimage/proxyimage.hpp"

int   main(void)
{
  Images::ProxyImage  img(40, 15);

  std::cout << "*some long work*\n"
               "Press enter to continue" << std::endl;
  std::cin.get();

  img.setPixel(5, 10, 'X');
  img.setPixel(25, 13, 'O');

  for (int y = 2; y < 7; ++y)
    for (int x = 15; x < 35; ++x)
      img.setPixel(x, y, '%');

  std::cout << img.getPrettyImage() << std::endl;

  return 0;
}