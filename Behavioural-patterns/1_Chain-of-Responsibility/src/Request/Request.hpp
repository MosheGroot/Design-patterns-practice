#pragma once

#include <string>

namespace Web
{

  struct Request final
  {
    
    std::string from; //< sender's ip
    std::string to;   //< reciever's ip
    std::string data; //< data

  }; //!struct Request final

} //!namespace Web
