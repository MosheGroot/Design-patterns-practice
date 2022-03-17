#include <iostream>
#include <vector>
#include <algorithm>

#include "modelsfactory/factory.hpp"
#include "models/movingmodel.hpp"

void  simulation(std::string label, std::string type, std::string texture)
{
  // Model
  auto basic_model = Models::BasicModelsFactory::Instance.getModel(
    label, type, texture
  );

  // moving
  std::vector<Models::MovingModel> moving_models = {
    { {{0, 0, 0}}, basic_model },
    { {{0, 5, 1}}, basic_model },
    { {{6, 5, 1}}, basic_model },
    { {{0, 9, 1}}, basic_model },
    { {{3, 0, 2}}, basic_model }
  };
  
  std::for_each(moving_models.begin(), moving_models.end(),
    [](const Models::MovingModel& m) { m.display(); }
  );

  std::cout << "\n\n";

  moving_models[2].move({{1, 1, 1}});
  moving_models[4].move({{-3, 0, -2}});

  std::for_each(moving_models.begin(), moving_models.end(),
    [](const Models::MovingModel& m) { m.display(); }
  );
}

int   main()
{
  std::cout << "\x1B[1;32mSIMULATION 1\x1b[m\n" << std::endl;
  simulation("1", "2", "3");

  std::cout << "\n\n\x1B[1;32mSIMULATION 2\x1b[m\n" << std::endl;
  simulation("Nickname", "Player", "FBI1.png");

  return 0;
}