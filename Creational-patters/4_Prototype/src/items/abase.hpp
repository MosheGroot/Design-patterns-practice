#pragma once

#include <string>
#include <iostream>

namespace Game::Items
{

  class ABase
  {
  // fields
  private:
    const std::string   type_;
    uint8_t             amount_;

  public:
    const std::string&  getType() const { return this->type_; }
    
    uint8_t             getAmount() const { return this->amount_; }
    void                addAmount(uint8_t amount) 
    {
      if (UINT8_MAX - this->amount_ < amount)
        this->amount_ = UINT8_MAX;
      else
        this->amount_ += amount;
    }
    
  // constructor and destructor
  protected:
    ABase(const std::string_view type, uint8_t amount)
      : type_(type), amount_(amount)
    {}

  public:
    virtual ~ABase() {}


  // prototype
    virtual ABase*  clone() const = 0;


  // logic
  private:
    virtual const char *getPlacingSound() const = 0;

  public:
    void  placeBlock(void)
    {
      if (this->amount_)
      {
        std::cout << this->getPlacingSound() << '\n';
        std::cout << this->type_ << " block was placed." << '\n';
        this->amount_ -= 1;
      }
      else
      {
        std::cout << "Not enought " << this->type_ << " blocks to place." << '\n';
      }

      std::cout << "Current blocks amount : " << static_cast<int>(this->amount_) << '\n' << std::endl;
    }
  
  }; //!class ABase
} //!namespace Game