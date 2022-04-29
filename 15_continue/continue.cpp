#include <iostream>

int main()
{
 int a;
 
 std::cout << "Enter a value between 0 and 9 " << std::endl;
 std::cin >> a;
 
 for(int i=0; i<9;i++)
 {
  if(i == a)
  {
   std::cout << "i is equal to " << a <<std::endl;
   std::cout << "Skipping the current iteration using continue" << std::endl;
   continue;
  }
  std::cout <<  "i is " << i << std::endl;
 }

 return 0;
}
