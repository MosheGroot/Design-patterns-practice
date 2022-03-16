#pragma once

#include <utility>
#include <map>
#include <vector>

namespace Service::Backend
{
  
  class AuthDatabase final
  {
  // Fields
  private:
    std::map<std::string, std::string>   data_;


  // Constructors and destructor
  public:
    AuthDatabase(const std::string& filename);

    AuthDatabase() = default;

    ~AuthDatabase() = default;


  // Logic
  public:
    void    readDataFromFile(const std::string& filename);


    void    addAuthData(const std::pair<std::string, std::string>& data);

    void    deleteAuthData(const std::string& login);


    bool    auth(const std::pair<std::string, std::string>& data);

  // Utils
  private:
    static std::vector<std::string>   splitByWhitespace(const std::string& line);

  }; //!class AuthDatabase final

} //!namespace Service