#include <iostream> 

class MathOperations
{
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
 
 MathOperations obj;
 
 obj.add(x,y);
 obj.sub(x,y);
 obj.multiply(x,y);
 obj.divide(x,y);
 
 return 0;
}

