#include "source.hpp"

namespace DataProcessing::Decorators
{

  /// Constructor
  DataSourceDecorator::DataSourceDecorator(std::shared_ptr<DataSource> data)
    : wrappee_(data)
  {}


  /// Logic
  void          DataSourceDecorator::writeData(const std::string& data)
  {
    std::cout << "\t// [DataSourceDecorator] Writting data : " << data << std::endl;
    wrappee_->writeData(data);
  }
    
  std::string   DataSourceDecorator::readData() const
  {
    auto ret = wrappee_->readData();
    std::cout << "\t// [DataSourceDecorator] Returning data : " << ret << std::endl;
    return ret;
  }

} //!namespace DataProcessing::Decorators
