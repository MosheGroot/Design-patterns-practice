#pragma once

#include <inttypes.h>
#include <string>
#include <vector>

namespace Images
{
  
  class RawImage final
  {
  // Fields
  private:    
    uint32_t  w_;
    uint32_t  h_;

    char*     buffer_;
    
    char      filler_;

  // Constructors and destructor
  public:
    RawImage(uint32_t width, uint32_t height, char filler='.');

    RawImage() = delete;
  
    ~RawImage();


  // Logic
  public:
    void                clear();

    void                setPixel(uint32_t x, uint32_t y, char sym);

    std::vector<char>   getRaw() const;

  }; //!class RawImage final

} //!namespace Images
