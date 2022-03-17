#pragma once

#include <string>

#include "../math/point.hpp"

namespace Models
{

  // forward declaring
  class BasicModelsFactory;


  class BasicModel
  {
  // Fields
  private:
    std::string   label_;
    std::string   type_;
    std::string   texture_;


  // Constructors and destructor
  public:
    BasicModel(const std::string label, const std::string& type, const std::string& texture);

    BasicModel(const BasicModel& other) = default;

    ~BasicModel() = default;


  // Logic
  public:  
    const std::string&    getLabel() const;
    const std::string&    getType() const;
    const std::string&    getTexture() const;

    void  display(const Math::Point& point) const;


  // Set support
  public:
    friend BasicModelsFactory;
  }; //!class BasicModel

} //!namespace Models