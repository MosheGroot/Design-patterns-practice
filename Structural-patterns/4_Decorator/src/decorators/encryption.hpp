#pragma once

#include "source.hpp"

#include <memory>

namespace DataProcessing::Decorators
{

  class DataEncryptionDecorator : public DataSourceDecorator
  {
  // Constructor and destructor
  public:
    DataEncryptionDecorator(std::shared_ptr<DataSource> data);

    virtual ~DataEncryptionDecorator() = default;


  /// Logic
  // general
    virtual void          writeData(const std::string& data) override;
    
    virtual std::string   readData() const override;

  // extra
    static std::string    encryptData(std::string data);

    static std::string    decryptData(std::string data);

  }; //class DataEncryptionDecorator
  
} //!namespace DataProcessing::Decorators