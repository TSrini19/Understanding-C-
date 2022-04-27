#include <iostream>

int main()
{
 int a;
 
 std::cout << "Enter a value for a: " << std::endl;
 std::cin >> a;
 //syntax for 'for' loop is (initialization;condition;increment/decrement) 
 for(int i=0; i <= a; i++)
 { 
  std::cout <<"Hello World " << i << std::endl;
 }
 
 std::cout << "Out of for loop " << std::endl; 
 return 0;
}
