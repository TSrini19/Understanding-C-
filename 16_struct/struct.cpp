#include <iostream>
#include <string>

struct Employee
{
  std::string Fname;
  std::string Lname;
  std::string Designation;
  int Empid;
};

int main()
{
 Employee Employee1;
 Employee1.Fname = "Jane";
 Employee1.Lname = "Doe";
 Employee1.Designation = "Software Engineer";
 Employee1.Empid = 01;
 
 Employee Employee2;
 Employee2.Fname = "Taarun";
 Employee2.Lname = "Srinivas";
 Employee2.Designation = "Robotics Engineer";
 Employee2.Empid = 02;
 
 std::cout << "First Name: " << Employee1.Fname << std::endl;
 std::cout << "Last Name: " << Employee1.Lname << std::endl; 
 std::cout << "Designation: " << Employee1.Designation << std::endl;
 std::cout << "Employee ID: " << Employee1.Empid << std::endl;

 std::cout << "\n" << std::endl;
 
 std::cout << "First Name: " << Employee2.Fname << std::endl;
 std::cout << "Last Name: " << Employee2.Lname << std::endl; 
 std::cout << "Designation: " << Employee2.Designation << std::endl;
 std::cout << "Employee ID: " << Employee2.Empid << std::endl;

 return 0;
}
