#include "encryption.hpp"

namespace DataProcessing::Decorators
{

  /// Constructor
  DataEncryptionDecorator::DataEncryptionDecorator(std::shared_ptr<DataSource> data)
    : DataSourceDecorator(data)
  {}



  /// Logic
  // general
  void          DataEncryptionDecorator::writeData(const std::string& data)
  {
    // debug
    std::cout << "\t// [DataEncryptionDecorator] Writting data : " << data << std::endl;
    
    // encrypt
    std::string encrypted = DataEncryptionDecorator::encryptData(data);
    
    // write
    wrappee_->writeData(encrypted);
  }


  std::string   DataEncryptionDecorator::readData() const
  {
    // decrypt
    std::string decrypted = DataEncryptionDecorator::decryptData(
      wrappee_->readData()
    );

    // debug
    std::cout << "\t// [DataEncryptionDecorator] Returning data : " << decrypted << std::endl;

    // return
    return decrypted;
  }


  // extra
  std::string    DataEncryptionDecorator::encryptData(std::string data)
  {
    for (auto& c : data)
      c += 3; // ROT3
    return data;
  }

  std::string    DataEncryptionDecorator::decryptData(std::string data)
  {
    for (auto& c : data)
      c -= 3; // ROT3
    return data;
  }

} //!namespace DataProcessing::Decorators
