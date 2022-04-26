#include <iostream>

int main()
{
 // This is array initialization. we define the array name followed by the number of elements using [] and the data to be stored in the array using {}
 int list[10] = {1,2,3,4,5,6,7,8,9,10};
 
 //We can access the array elements through indexing 
 //indexing starts from 0 followed by n-1, where n represents the total numebr of elements. 
 std::cout << "element at array's first index: " << list[0] << std::endl;
 std::cout << "element at array's fifth index: " << list[4] << std::endl;
 std::cout << "element at array's last index: " << list[9] << std::endl;
 
 //changing value of an array using index
 list[0] = 10;
 std::cout << "element at array's first index after changing: " << list[0] << std::endl;
 
 return 0;
}

