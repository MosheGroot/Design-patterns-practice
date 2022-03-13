#pragma once

#include <inttypes.h>
#include <utility>

#include "size.hpp"

namespace Graphic
{

  /* @brief Draw field with chars
  */
  class DrawField final
  {
  // Fields
  private:
    char*       buffer_;      //< field buffer
    char        filler_char_; //< filler char
    Math::Size  size_;        //< {x, y} size of field


  // Constructors and destructor
  public:
    /* @brief Create DrawField with {x, y} size (should be multiple of 2!)
              and specified filler character
    */
    DrawField(uint32_t x, uint32_t y, char filler);

    /* @brief Make copy of DrawField
    */
    DrawField(const DrawField& other);

    /* @brief Destructor of DrawField
    */
    ~DrawField();


  // Logic
  public:
    /* @brief Draw point by integer {x, y} with specified c
    */
    void    drawPoint(int32_t x, int32_t y, char c);

    /* @brief Print field to stdout
    */
    void    printField(bool interactive=false) const;

    /* @brief Reset draw field to default filler char
    */
    void    clearField(void);

  }; //!class DrawField

} //!namespace Graphic