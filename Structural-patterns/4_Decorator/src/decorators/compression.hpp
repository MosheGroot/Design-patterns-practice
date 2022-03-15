#pragma once

#include "source.hpp"

#include <memory>

namespace DataProcessing::Decorators
{

  class DataCompressionDecorator : public DataSourceDecorator
  {
  // Constructor and destructor
  public:
    DataCompressionDecorator(std::shared_ptr<DataSource> data);

    virtual ~DataCompressionDecorator() = default;


  /// Logic
  // general
    virtual void          writeData(const std::string& data) override;
    
    virtual std::string   readData() const override;

  // extra
    static std::string    compressData(std::string data);

    static std::string    decompressData(std::string data);

  }; //class DataCompressionDecorator
  
} //!namespace DataProcessing::Decorators