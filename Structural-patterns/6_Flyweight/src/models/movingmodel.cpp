#include "movingmodel.hpp"

namespace Models
{

  /// Constructor 

  MovingModel::MovingModel(Math::Point pos, std::shared_ptr<BasicModel> model)
    : model_(std::move(model)), pos_(pos)
  {}



  /// Logic

  void  MovingModel::move(const Math::Vector& vec)
  {
    this->pos_ += vec;
  }

  void  MovingModel::display() const
  {
    this->model_->display(pos_);
  }

} //!namespace Models