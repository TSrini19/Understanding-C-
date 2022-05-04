#include <iostream>

class Volume
{
public:
 int square_side;
 
 void compute_cube_volume()
 {
  std::cout << "Volume of cube is " << square_side * square_side * square_side << std::endl;
 }

};


int main()
{
Volume vol1;
vol1.square_side = 2;
vol1.compute_cube_volume();

Volume vol2;
vol2.square_side = 5;
vol2.compute_cube_volume();

return 0;

}
