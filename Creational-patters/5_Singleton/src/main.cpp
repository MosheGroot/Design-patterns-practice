#include <algorithm>
#include <execution>

#include "logger/logger.hpp"

int   main(int argc, const char *argv[])
{
  std::for_each(
    std::execution::par_unseq,
    argv + 1, argv + argc, 
    [] (const char *msg) {
      auto logger = Utils::Logger::getInstance();

      logger->error(msg);
      logger->info(msg);
      logger->log(msg);
      logger->debug(msg);
    }
  );

  return 0;
}