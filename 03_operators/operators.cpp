#include <iostream>

int main()
{
 //Define variables with integer datatype
 int a,b;
 int c,d;
 
 //Arithmetic operations
 std::cout << "Enter two numbers " << std::endl;
 std::cin >> a>>b ;
 
 std::cout << "The sum of " << a << " and " << b << " is " << a+b << std::endl;
 std::cout << "The difference of " << a << " and " << b << " is " << a-b << std::endl;
 std::cout << "The product of " << a << " and " << b << " is " << a*b << std::endl;
 std::cout << "The division of " << a << " and " << b << " is " << a/b << std::endl;
 std::cout << "The modulo of " << a << " and " << b << " is " << a%b << std::endl;
 
 //Compound operations
 std::cout << "Enter a value for c" << std::endl;
 std::cin >> c;
 c += 20;
 std::cout << "Compund addition " << c << std::endl;
 c -= 20;
 std::cout << "Compund subtraction " << c << std::endl;
 c *= 20;
 std::cout << "Compund multiplication " << c << std::endl; 
 c /= 20;
 std::cout << "Compund division " << c << std::endl;
 c %= 20;
 std::cout << "Compund modulo " << c << std::endl;
 
 //Increment/Decrement operations
 std::cout << "Enter a value for d " << std::endl;
 std::cin >> d;
 d++;
 std::cout << "post increment " << d << std::endl;
 d--;
 std::cout << "post decrement " << d << std::endl;
 ++d;
 std::cout << "pre increment " << d << std::endl;
 --d;
 std::cout << "pre increment " << d << std::endl;
 
 return 0;

}
 
