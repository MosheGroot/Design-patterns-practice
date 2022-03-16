#include "authdata.hpp"

#include <fstream>
#include <iostream> //< DEBUG
#include <algorithm>

namespace Service::Backend
{

  // Constructor
  AuthDatabase::AuthDatabase(const std::string& filename)
  {
    readDataFromFile(filename);
  }



  // Logic
  void    AuthDatabase::readDataFromFile(const std::string& filename)
  {
    std::ifstream fin(filename);

    if (!fin.is_open())
      throw std::invalid_argument("readDataFromFile exception: can't open file");

    std::string   line;
    while (std::getline(fin, line))
    {
      auto  splitted = AuthDatabase::splitByWhitespace(line);
      if (splitted.size() != 2)
        throw std::invalid_argument("readDataFromFile exception: invalid auth data file");
      this->addAuthData({splitted[0], splitted[1]});
    }
  }


  void    AuthDatabase::addAuthData(const std::pair<std::string, std::string>& auth_data)
  {
    if (!this->data_.insert(auth_data).second) // is inserted
      throw std::invalid_argument("addAuthData exception: login duplication");
  }


  void    AuthDatabase::deleteAuthData(const std::string& login)
  {
    if (!this->data_.erase(login))
      throw std::invalid_argument("addAuthData exception: login not found");
  }


  bool    AuthDatabase::auth(const std::pair<std::string, std::string>& auth_data)
  {
    auto it = this->data_.find(auth_data.first);

    if (it != this->data_.end() && it->second == auth_data.second)
      return true;

    return false;
  }


  // Utils
  std::vector<std::string>   AuthDatabase::splitByWhitespace(const std::string& line)
  {
    std::vector<std::string> out;

    auto begin_it = line.begin();
    while (begin_it != line.end())
    {
      auto end_it = std::find_if(begin_it, line.end(), 
        [] (char c) { return ::isspace(c); });

      out.push_back(std::string(begin_it, end_it));

      begin_it = std::find_if(end_it, line.end(),
        [] (char c) { return !::isspace(c); });
    }

    return out;
  }

} //!namespace Service