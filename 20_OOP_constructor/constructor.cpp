#include <iostream>
using std::string;


class StudentDetails
{
public:
 string Name;
 string University;
 int Age;
 
 void introduction()
 {
  std::cout << "Name " << Name << std::endl;
  std::cout << "University " << University << std::endl;
  std::cout << "Age " << Age << "\n" << std::endl;
 }
 
 //A constructor is called whenever a object is created. The constructor's name and class name should always be the same.   
 StudentDetails(string name, string univ_name, int age)
 {
  Name = name;
  University = univ_name;
  Age = age;
 }
 
};

int main()
{
 StudentDetails student1 = StudentDetails("Taarun", "MIT", 20);
 student1.introduction();
 
 StudentDetails student2 = StudentDetails("Mike", "Stanford", 30);
 student2.introduction();
 
 return 0;
}
 
