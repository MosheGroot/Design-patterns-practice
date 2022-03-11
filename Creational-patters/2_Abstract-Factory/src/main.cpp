#include <iostream>
#include <cstring>

#include "application/application.hpp"

#include "factories/unix.hpp"
#include "factories/windows.hpp"

int main(int argc, const char* argv[])
{
  // check arguments amount
  if (argc != 2)
  {
    std::cerr << "Invalid number of arguments!\n"
      "Please provide 'Unix' or 'Windows' option." << std::endl;
    return 1;
  }

  // exec app
  if (::strcmp(argv[1], "Unix") == 0)
  {
  
    using namespace App;
    Application app(new Factories::Unix());
    app.exec();
  
  }
  else if (::strcmp(argv[1], "Windows") == 0)
  {
    
    using namespace App;
    Application app(new Factories::Windows());
    app.exec();

  }
  else // error
  {
    std::cerr << "Invalid OS type!\n"
      "Please provide 'Unix' or 'Windows' option." << std::endl;
    return 2;
  }

  return 0;
}