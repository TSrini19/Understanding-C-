#include <iostream>

class Phone
{
 public:
  
  void phone_name()
  {
   std::cout << "Base choice of phone is Apple" << std::endl; 
  }
};

class OnePlus : public Phone
{
 public:
  void phone_name()
  {
   std::cout << "Chosen brand is oneplus" << std::endl;
  }
};

class Samsung : public Phone
{
 public:
  void phone_name()
  {
   std::cout << "Chosen brand is samsung" << std::endl;
  }
};

class Redmi : public Phone
{
 public:
  void phone_name()
  {
   std::cout << "Chosen brand is redmi" << std::endl;
  }
};

int main()
{
 Phone phone1;
 OnePlus phone2;
 Samsung phone3;
 Redmi phone4;
 
 phone1.phone_name();
 phone2.phone_name();
 phone3.phone_name();
 phone4.phone_name();
 
 return 0;
}
 
