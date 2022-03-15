#pragma once

#include <iostream>
#include <string>
#include <string_view>

namespace DataProcessing
{
  
  class DataSource
  {
  // Fields
  private:
    std::string   data_;


  // Constructors and destructor
  public:
    DataSource(const std::string_view data);

    DataSource(const DataSource& other) = default;

    DataSource() = default;

    virtual ~DataSource() = default;


  // Logic
    virtual void          writeData(const std::string& data);

    virtual std::string   readData() const;

  }; //!class DataSource final

} //!namespace DataProcessing