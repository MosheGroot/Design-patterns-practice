#include "managment.hpp"

#include <execution>
#include <algorithm>

#include <iostream>
#include <fstream>
#include <cctype>
#include "../utils/split/split.hpp"

namespace Managment
{

  workers_t  readConfig(const char *filename)
  {
    workers_t workers;

    std::ifstream fin(filename);
    if (!fin.is_open())
      throw std::invalid_argument("readConfig exception: file not found");
    
    std::string line;
    while (std::getline(fin, line))
    {
      // empty lines
      if (line == "")
        continue;

      // tolower
      std::transform(line.begin(), line.end(), line.begin(),
        [](unsigned char c){ return std::tolower(c); });

      // split and check
      std::vector<std::string> splitted = Utils::split(line, ' ');
      if (splitted.size() != 2)
        throw std::invalid_argument("readConfig exception: invalid syntax of line `" + line + "`");

      // use factory method
      workers.push_back(std::shared_ptr<Workers::ABase>(
        Workers::ABase::applyWorker(splitted[0], std::stoull(splitted[1]))
      ));
    }

    return workers;
  }


  void  startWorkDay(workers_t& workers)
  {
    std::for_each(
      std::execution::par,
      workers.begin(), workers.end(),
      [] (std::shared_ptr< Workers::ABase > worker) { worker->work(); });
  }

} //!namespace Managment