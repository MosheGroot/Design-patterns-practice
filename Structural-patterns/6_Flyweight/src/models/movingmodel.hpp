#pragma once

#include <memory>

#include "basicmodel.hpp"
#include "../math/vector.hpp"
#include "../math/point.hpp"

namespace Models
{

  class MovingModel
  {
  // Fields
  private:
    std::shared_ptr<BasicModel> model_;
    Math::Point                 pos_;


  // Constructors and destructor
  public:
    MovingModel(Math::Point pos, std::shared_ptr<BasicModel> model);

    MovingModel(const MovingModel& other) = default;

    ~MovingModel() = default;


  // Logic
  public:
    void  move(const Math::Vector& vec);

    void  display() const;

  }; //!class MovingModel

} //!namespace Models