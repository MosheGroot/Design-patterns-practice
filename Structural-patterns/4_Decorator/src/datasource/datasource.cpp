#include "datasource.hpp"

namespace DataProcessing
{

  /// Constructor
  DataSource::DataSource(const std::string_view data)
    : data_(data)
  {}


  /// Logic
  void        DataSource::writeData(const std::string& data)
  {
    std::cout << "\t// [DataSource] Writting data : " << data << std::endl;
    data_ = data;
  }

  std::string DataSource::readData(void) const
  {
    std::cout << "\t// [DataSource] Returning data : " << data_ << std::endl;
    return data_;
  }

} //!namespace DataProcessing
