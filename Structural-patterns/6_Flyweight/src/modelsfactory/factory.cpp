#include "factory.hpp"

namespace Models
{
  
  /// Singleton
  BasicModelsFactory  BasicModelsFactory::Instance;


  /// Logic

  BasicModelsFactory::model_ptr_t  BasicModelsFactory::getModel(const std::string label, const std::string& type, const std::string& texture)
  {
    Models::BasicModel  tmp(label, type, texture);
    auto it = models_set_.find(tmp);
    
    if (it == models_set_.end())
    {
      it = models_set_.insert(
        model_ptr_t(new BasicModel(label, type, texture))
      ).first;
    }

    return *it;
  }

} //!namespace Models