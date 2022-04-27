#include <iostream> 

int main()
{
 int val;
 
 // In do while loop, the statements inside the loop are executed first and later the condition is checked and verified. 
 do
 {
  std::cout << "Hello World " << val << std::endl;
  ++val;
 }while(val < 20);

 std::cout << "Out of do-while loop" << std::endl;
 
 return 0;
}
