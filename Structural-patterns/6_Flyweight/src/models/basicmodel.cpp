#include "basicmodel.hpp"

#include <iostream>

namespace Models
{
  /// Construtor
  
  BasicModel::BasicModel(const std::string label, const std::string& type, const std::string& texture)
    : label_(label), type_(type), texture_(texture)
  {}


  /// Logic

  const std::string&    BasicModel::getLabel() const { return this->label_; }
  const std::string&    BasicModel::getType() const { return this->type_; }
  const std::string&    BasicModel::getTexture() const { return this->texture_; }

  void  BasicModel::display(const Math::Point& point) const
  {
    std::cout << "Display <" << label_ 
              << "> model of type <" << type_ 
              << "> with texture <" << texture_ << ">\n"
              << "At position (" 
              << point.x << " ; " << point.y << " ; " << point.z << ")\n" 
              << std::endl;
  }

} //!namespace Models