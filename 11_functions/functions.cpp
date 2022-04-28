#include <iostream>

int add(int a, int b)
{
 int c;
 c = a+b;
 return c;
}

int main()
{
 int x,y;
 int sum;

 std::cout << "Enter two numbers: " << std::endl;
 std::cin >> x >> y;
 
 sum = add(x,y);
 std::cout << "The sum of " << x << " and " << y << " is " << sum << std::endl;
 
 return 0;
 
}

