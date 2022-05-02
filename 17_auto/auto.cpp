#include <iostream>

//The typeinfo library will be used to identify the type of datatype a variable has. 
#include <typeinfo>


int main()
{
//keyword auto will automatically detect the type of dataype for a variable
 auto type_int = 10;
 auto type_float = 3.14;
 auto type_char = 'C';
 auto type_string = "Hello World";
 
 std::cout << "variable type_int is of type " << typeid(type_int).name() << std::endl;
 std::cout << "variable type_float is of type " << typeid(type_float).name() << std::endl;
 std::cout << "variable type_char is of type " << typeid(type_char).name() << std::endl;
 std::cout << "variable type_string is of type " << typeid(type_string).name() << std::endl;

 return 0;
}
