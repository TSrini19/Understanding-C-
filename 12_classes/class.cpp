#include <iostream> 

//We define a class by specifying the keyword class followed by a name for the class.
class MathOperations
{
 //Here we define the access spcifier for the class. 
 public:
    int add(int a, int b)
    {
     std::cout << "The sum is " << a+b << std::endl;
     return a+b;
    }
    
    int sub(int a, int b)
    {
     std::cout << "The difference is " << a-b << std::endl;
     return a-b;
    }
    
    int multiply(int a, int b)
    {
     std::cout << "The product is " << a*b << std::endl;
     return a*b;
    }
    
    int divide(int a, int b)
    {
     std::cout << "The result after division is " << a/b << std::endl;
     return a/b;
    }
};

int main()
{
 int x,y;
 
 std::cout << "enter two numbers " << std::endl;
 std::cin >> x >> y;
 
 //Here we create an object called obj to access member functions from class MathOperations
 MathOperations obj;
 
 //using '.' we call the member functions inside the class MathOperations
 obj.add(x,y);
 obj.sub(x,y);
 obj.multiply(x,y);
 obj.divide(x,y);
 
 return 0;
}

