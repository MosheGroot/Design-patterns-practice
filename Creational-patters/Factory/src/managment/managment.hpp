#pragma once

#include <vector>
#include <memory>

#include "../workers/base.hpp"


namespace Managment
{

  typedef std::vector< std::shared_ptr< Workers::Base > >  workers_t;  //< vector of workers type 

  /* @brief Read config with various workers from `filename` file
  */
  workers_t  readConfig(const char *filename);


  /* @brief Start one workday of each worker in worker_t container
  */
  void  startWorkDay(workers_t& workers);

} //!namespace Managment