#include "compression.hpp"

namespace DataProcessing::Decorators
{

  /// Constructor
  DataCompressionDecorator::DataCompressionDecorator(std::shared_ptr<DataSource> data)
    : DataSourceDecorator(data)
  {}



  /// Logic
  // general
  void          DataCompressionDecorator::writeData(const std::string& data)
  {
    // debug
    std::cout << "\t// [DataCompressionDecorator] Writting data : " << data << std::endl;
    
    // compress
    std::string compressed = DataCompressionDecorator::compressData(data);

    // write
    wrappee_->writeData(compressed);
  }


  std::string   DataCompressionDecorator::readData() const
  {
    // decompress
    std::string decrypted = DataCompressionDecorator::decompressData(
      wrappee_->readData()
    );

    // debug
    std::cout << "\t// [DataCompressionDecorator] Returning data : " << decrypted << std::endl;

    // return
    return decrypted;
  }


  // extra
  std::string    DataCompressionDecorator::compressData(std::string data)
  {
    return data + " [COMPRESSED!!!]";
  }

  std::string    DataCompressionDecorator::decompressData(std::string data)
  {
    return data.substr(0, data.find(" [COMPRESSED!!!]"));
  }

} //!namespace DataProcessing::Decorators
