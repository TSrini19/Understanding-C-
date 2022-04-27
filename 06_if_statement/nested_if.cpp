#include <iostream> 

int main()
{
 int a, val;
 
 std::cout << "Enter a value for a " << std::endl;
 std::cin >> a;
 
 std::cout << "Enter a value for val " << std::endl;
 std::cin >> val;
 
 if (a == val)
 {
  std::cout << "Inside nested if statement " << std::endl;
  
  if (a > 50)
  {
   std::cout << "Value of a is greater than 50 " << std::endl;
  }
  else if (a == 50)
  {
   std::cout << "Value of a is equal to 50 " << std::endl;
  }
  else
  {
   std::cout << "Value of a is less than 50 " << std::endl;
  } 
 } 
 else
 {
  std::cout << "Value of a is not equal to val " << std::endl;
 }

 return 0; 
}
