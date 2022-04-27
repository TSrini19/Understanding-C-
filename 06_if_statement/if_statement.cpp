#include <iostream>

int main()
{
 int a;
 
 std::cout << "Enter a value for a: " << std::endl;
 std::cin >> a;
 
 if (a > 20)
 {
  std::cout << " Value of a is greater than 20 " << std::endl;
 }
 else
 {
  std::cout << "Value of a is less than 20 " << std::endl;
 }
 
 return 0;
}
