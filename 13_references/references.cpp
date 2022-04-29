#include <iostream> 

int main()
{
 //References are used to create a copy of an existing variable. 
 
 int a = 3;
 int &b = a;
 
 std::cout << "The original value is " << a << std::endl;
 std::cout << "The copied value using reference is " << b << std::endl;

 //The '&' operator used to create references can also be used to access the memory address of a particular variable.
 
 std::cout << "Memory address of a is " << &a << std::endl;
 std::cout << "The value " << a << " stored in variable a, is stored in memory " << &a << std::endl;
 
 return 0;
}
