#include <iostream>
using std::string;

class Phone
{
 public:
  string Brand = "Apple";
};

class Model : public Phone
{
 public:
  string Model = "Iphone 13";
};

int main()
{
 Model obj;
 std::cout << "Brand name is " << obj.Brand << std::endl;
 std::cout << "Model name is " << obj.Model << std::endl;
 
 return 0;
}
