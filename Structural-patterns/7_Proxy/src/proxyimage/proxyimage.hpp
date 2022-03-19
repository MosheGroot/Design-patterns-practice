#pragma once

#include "../rawimage/rawimage.hpp"

namespace Images
{
  
  class ProxyImage final
  {
  // Fields
  private:
    RawImage  *raw_;

    uint32_t  w_;
    uint32_t  h_;    
    char      filler_;


  // Constructors and destructor
  public:
    ProxyImage(uint32_t width, uint32_t height, char filler='.');

    ProxyImage();

    ~ProxyImage();


  // Logic
  private:
    void                checkImage();
    
  public:
    void                clear();

    void                setPixel(uint32_t x, uint32_t y, char sym);

    std::vector<char>   getRaw();

    std::string         getPrettyImage();    
  }; //!class ProxyImage final

} //!namespace Images
