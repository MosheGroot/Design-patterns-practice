#pragma once

#include <utility>


namespace Math
{

  class Size final : public std::pair<uint32_t, uint32_t>
  {
  public:
    uint32_t& x = this->first;
    uint32_t& y = this->second;
  };


} //!namespace Math