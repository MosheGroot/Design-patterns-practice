#include "proxyimage.hpp"

#include <cstring>
#include <iostream>
namespace Images
{

  /// Constructor and destructor

  ProxyImage::ProxyImage(uint32_t width, uint32_t height, char filler)
    : raw_(nullptr), w_(width), h_(height), filler_(filler)
  {}


  ProxyImage::~ProxyImage()
  {
    delete raw_;
  }


  /// Logic
  void                ProxyImage::checkImage()
  {
    if (!raw_)
      raw_ = new RawImage(w_, h_, filler_);
  }

  void                ProxyImage::clear()
  {
    checkImage();
    raw_->clear();
  }


  void                ProxyImage::setPixel(uint32_t x, uint32_t y, char sym)
  {
    checkImage();
    raw_->setPixel(x, y, sym);
  }

  std::vector<char>   ProxyImage::getRaw()
  {
    checkImage();

    return raw_->getRaw();
  }

  std::string         ProxyImage::getPrettyImage()
  {
    checkImage();
    auto  raw_chars = raw_->getRaw();

    std::string output;
    output.reserve(w_ * h_ * 2 + h_);

    for (uint32_t y = 0; y < h_; ++y)
    {
      for (uint32_t x = 0; x < w_; ++x)
      {
        output.push_back(raw_chars[w_ * y + x]);
        output.push_back(' ');
      }
      output.back() = '\n';
    }

    return output;
  }


} //!namespace Images