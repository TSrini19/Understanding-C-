#include <iostream> 

int main()
{
 char c;
 
 std::cout << "Enter a alphabet from A to E as a block letter" << std::endl;
 std::cin >> c;
 
 //A switch statement consist of cases. If the input to a switch statement matches with a particular case, then that case will be executed.
 //The default case will be executed if non of the cases match with the input.
 //break statement will be used to exit a particular case after execution of that case.
 
 switch(c)
 {
  case 'A':
   std::cout << "case A " << std::endl;
   break;
   
  case 'B':
   std::cout << "case B " << std::endl;
   break;

  case 'C':
   std::cout << "case C " << std::endl;
   break;

  case 'D':
   std::cout << "case D " << std::endl;
   break;
 
  case 'E':
   std::cout << "case E " << std::endl;
   break;
  
  default:
   std::cout << "case not found for the user input. Executing the default case " << std::endl; 
   break;
  }
  
  std::cout << "Out of switch statement" << std::endl;
  
 return 0;
}
