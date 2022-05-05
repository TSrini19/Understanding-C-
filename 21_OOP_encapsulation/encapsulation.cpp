#include <iostream>
using std::string;

class StudentDetails
{
private:
 int RollNo;
 
public:
 string Name;

 void setRollNo(int rollno) //setter
 {
  RollNo = rollno;
 }
 
 int getRollNo() //getter
 {
  return RollNo;
 }
 
 void introduction()
 {
  std::cout << "Name: " << Name << std::endl;
  std::cout << "Roll Number: " << getRollNo() << '\n' << std::endl;
 } 
};

int main()
{
 StudentDetails student1;
 student1.Name = "Taarun";
 student1.setRollNo(10);
 student1.introduction();
 
 StudentDetails student2;
 student2.Name = "John";
 student2.setRollNo(15);
 student2.introduction();
 
 return 0;
}
