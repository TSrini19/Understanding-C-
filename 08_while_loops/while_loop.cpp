#include <iostream>

int main()
{
 int a;
 
 std::cout << "Enter a value for a " << std::endl;
 std::cin >> a;
 
 while(a < 10)
 { 
 std::cout << "Value of a is less than 10" << std::endl;
 a++;
 }
 std::cout << "Value of a is greater than or equal to 10" << std::endl;
 
 return 0;
}
