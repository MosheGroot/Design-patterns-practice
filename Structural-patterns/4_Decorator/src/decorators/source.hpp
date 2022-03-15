#pragma once

#include "../datasource/datasource.hpp"

#include <memory>

namespace DataProcessing::Decorators
{

  class DataSourceDecorator : public DataSource
  {
  // Fields
  protected:
    std::shared_ptr<DataSource>  wrappee_;


  // Constructor and destructor
  public:
    DataSourceDecorator(std::shared_ptr<DataSource> data);

    virtual ~DataSourceDecorator() = default;


  // Logic
    virtual void          writeData(const std::string& data) override;
    
    virtual std::string   readData() const override;

  }; //class DataSourceDecorator
  
} //!namespace DataProcessing::Decorators