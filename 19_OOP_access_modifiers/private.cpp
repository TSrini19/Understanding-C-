#include <iostream>

class Volume
{
//Any function or data member defined inside the class, under private, will only be accessible to members within that class.
 private:
        int dim;
 public:
       //In order to access members from the private specifier, we approach using call by reference. 
       void compute_cube_volume(int size)
       {
        dim = size;
        std::cout << "The volume of the cube is " << dim *dim * dim << std::endl;
       }
     
};

int main()
{
 Volume vol1, vol2, vol3;
 vol1.compute_cube_volume(5);
 vol2.compute_cube_volume(50);
 vol3.compute_cube_volume(99);

 return 0;
}
