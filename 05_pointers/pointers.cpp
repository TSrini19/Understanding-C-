#include <iostream>

int main()
{
 float pi = 3.14;
 //pointer is defined as datatype*.
 // The address of the object pi will be stored in ptr. '&' is used to point the pointer to object pi.
 float* ptr = &pi;
 //We can fetch the object stored at a particular memory location by dereferencing.
 float a = *ptr;
 
 std::cout << "Value of pi is: " << pi << std::endl;
 std::cout << "The address at which pi is stored is: " << ptr << std::endl;
 std::cout << "The object stored at " << ptr << " is " << a << std::endl;
 
 return 0;
}

