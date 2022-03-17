#pragma once

#include <set>
#include <memory>

#include "../models/basicmodel.hpp"

namespace Models
{

  class BasicModelsFactory final
  {
  // Singleton
  public:
    static BasicModelsFactory    Instance;

  private:
    BasicModelsFactory() = default;

  
  // Fields
  private:
    using model_ptr_t = std::shared_ptr<BasicModel>;
    
    struct Compare
    {
      using is_transparent = void;

      bool    operator()(const BasicModel& lhs, const model_ptr_t& rhs) const
      {
        if (lhs.type_ < rhs->type_)   return true;
        if (lhs.label_ < rhs->label_) return true;
        return lhs.texture_ < rhs->texture_;
      }

      bool    operator()(const model_ptr_t& lhs, const BasicModel& rhs) const
      {
        if (lhs->type_ < rhs.type_)   return true;
        if (lhs->label_ < rhs.label_) return true;
        return lhs->texture_ < rhs.texture_;
      }

      bool    operator()(const model_ptr_t& lhs, const model_ptr_t& rhs) const
      {
        if (lhs->type_ < rhs->type_)    return true;
        if (lhs->label_ < rhs->label_)  return true;
        return lhs->texture_ < rhs->texture_;
      }
    }; //class compare


    using models_set_t = std::set<model_ptr_t, Compare>;

    models_set_t   models_set_;


  // Logic
  public:
    model_ptr_t  getModel(const std::string label,
                           const std::string& type,
                           const std::string& texture);

  }; //!class Factory

} //!namespace Models