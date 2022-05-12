#include <iostream>
using std::string;

int main()
{
 int Ticket;
 string msg = "Wait for some time";
 std::cout << "Enter ticker id" << std::endl;
 std::cin >> Ticket;
 
 try
 {
  if(Ticket < 20)
   {
    std::cout << "Seats blocked. Enjoy the show" << std::endl;
   }
   
  else
   {
    throw (msg);
   }
 
 }
 
 catch (...)
 {
  std::cout << "All seats booked" << std::endl;
 }
 
 return 0;
}
