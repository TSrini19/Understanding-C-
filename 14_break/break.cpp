#include <iostream>

int main()
{
 int a;
 
 std::cout << "Enter a value between 0 to 9 " << std::endl;
 std::cin >> a;
 
 for(int i=0; i <=9; i++)
 {
  if(i == a)
  {
  // If the value of i equals a, then the loop is terminated using the break statement. 
   std::cout << "i is equal to " << a << std::endl; 
   break;
  }
  std::cout << "i is " << i << std::endl;
 }
 
 std::cout << "Out of for loop" << std::endl;

 return 0;
}
