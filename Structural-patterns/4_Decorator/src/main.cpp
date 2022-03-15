#include <iostream>

#include "datasource/datasource.hpp"
#include "decorators/source.hpp"
#include "decorators/encryption.hpp"
#include "decorators/compression.hpp"

void    testDataSource(std::shared_ptr<DataProcessing::DataSource>& ds,
                       const std::string& to_write)
{
  std::cout << "Writting: \x1b[36m" << to_write << "\x1b[m\n";
  ds->writeData(to_write);
  std::cout << "\nafter write:\n" << ds->readData() << std::endl;
}


int   main()
{
  using namespace DataProcessing;

  /// CLEAR DATA SOURCE
  std::cout << "\x1b[32m[CLEAR DataSource]\x1b[m\n";
  
  std::shared_ptr<DataSource>  source_data = std::shared_ptr<DataSource>(
    new DataSource()
  );

  testDataSource(source_data, "SOME DATA");




  /// SOURCE DECORATOR
  std::cout << "\n\n\x1b[32m[DataSourceDecorator]\x1b[m\n";
  
  std::shared_ptr<DataSource>   source_decorator = std::shared_ptr<DataSource>(
    new Decorators::DataSourceDecorator(
      source_data
    )
  );
  
  testDataSource(source_decorator, "ANOTHER DATA");
  


  /// ENCRYPTION DECORATOR
  std::cout << "\n\n\x1b[32m[DataEnctyptionDecorator]\x1b[m\n";
  
  std::shared_ptr<DataSource>   encryption_decorator = std::shared_ptr<DataSource>(
    new Decorators::DataEncryptionDecorator(
      source_decorator
    )
  );
  
  testDataSource(encryption_decorator, "SOME TEXT FOR ENCRYPTION");



  /// COMPRESSION DECORATOR
  std::cout << "\n\n\x1b[32m[DataCompressionDecorator]\x1b[m\n";
  
  std::shared_ptr<DataSource>   compression_decorator = std::shared_ptr<DataSource>(
    new Decorators::DataCompressionDecorator(
      encryption_decorator
    )
  );
  
  testDataSource(compression_decorator, "SOME TEXT FOR COMPRESSION AND ENCRYPTION");


  return 0;
}