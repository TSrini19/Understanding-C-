#include <iostream>

class Side
{
//Any data inside the access specifier - protected is accessible to other classes through a concept called inheritance.  
 protected:
  int side;
};

class Volume : public Side
{
public:
  void compute_cube_volume(int dim)
  {
   side = dim;
   std::cout << "The volume of cube is " << side * side * side << std::endl;
  }
}; 

int main()
{
Volume vol1;
vol1.compute_cube_volume(10);

return 0;
}


