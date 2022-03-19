#include "rawimage.hpp"

#include <cstring>

namespace Images
{

  /// Constructor and destructor

  RawImage::RawImage(uint32_t width, uint32_t height, char filler)
    : w_(width), h_(height), buffer_(new char[height * width]), filler_(filler)
  {
    std::memset(buffer_, filler_, w_ * h_);
  }

  RawImage::~RawImage()
  {
    delete[] buffer_;
  }


  /// Logic
  void                RawImage::clear()
  {
    std::memset(buffer_, filler_, w_ * h_);
  }


  void                RawImage::setPixel(uint32_t x, uint32_t y, char sym)
  {
    buffer_[y * w_ + x] = sym;
  }

  std::vector<char>   RawImage::getRaw() const
  {
    std::vector<char> output(buffer_, buffer_ + w_ * h_);

    return output;
  }

} //!namespace Images