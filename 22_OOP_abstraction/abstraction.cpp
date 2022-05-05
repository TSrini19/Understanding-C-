#include <iostream>

class FindVolume
{
 private:
  int side;

 public:
  void define_side(int a)
  {
   side = a;
  }
  
  void compute_volume()
  {
  std::cout << "Volume of the cube is " << side * side * side << '\n' << std::endl;
  }
  
};

int main()
{
 FindVolume vol1;
 vol1.define_side(10);
 vol1.compute_volume();
 
 FindVolume vol2;
 vol2.define_side(19);
 vol2.compute_volume();
 
 FindVolume vol3;
 vol3.define_side(4);
 vol3.compute_volume();
 
 return 0;
}

