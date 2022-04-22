#include <iostream>

int main()
{
//Here we define the four primitive datatypes
 int a;
 float b;
 char c;
 bool d = true;
 //The below chunk of code accepts input from user and display to the output stream
 std::cout << "Enter a int value" << std::endl;
 std::cin >> a;
 std::cout << "a is" << " " << a << " " << "and it is of type int" << std::endl;
 std::cout << "Enter a float value" << std::endl;
 std::cin >> b;
 std::cout << "b is" << " " << b << " " << "and it is of type float" << std::endl;
 std::cout << "Enter a char value" << std::endl;
 std::cin >> c;
 std::cout << "c is" << " " << c << " " << "and it is of type char" << std::endl;

 std::cout << "d is" << " " << d << " " << "and it is of type boolean" << std::endl;

 return 0;
}
 
