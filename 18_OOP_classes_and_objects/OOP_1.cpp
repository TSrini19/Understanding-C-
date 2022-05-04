#include <iostream>

using std::string;


class StudentDetails
{
public:
 string Name;
 string University_name;
 int RollNo;
};


int main()
{
 
 StudentDetails student1;
 student1.Name = "Jack";
 student1.University_name = "MIT";
 student1.RollNo = 01;
 
 StudentDetails student2;
 student2.Name = "Mike";
 student2.University_name = "Stanford";
 student2.RollNo = 10;
 
 std::cout << "Student Name " << student1.Name << std::endl;
 std::cout << "Student University Name " << student1.University_name << std::endl;
 std::cout << "Student Roll Number " << student1.RollNo << std::endl;
 
 std::cout << '\n' << std::endl;
 
 std::cout << "Student Name " << student2.Name << std::endl;
 std::cout << "Student University Name " << student2.University_name << std::endl;
 std::cout << "Student Roll Number " << student2.RollNo << std::endl;
 
 return 0;
 
}



