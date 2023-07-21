//Description: This C++ code calculates the total surface area of a cuboid (rectangular prism) based on 
//the given length, breadth, and height. It prompts the user to enter the length, breadth, and height 
//of the cuboid. Then, it calculates the total surface area using the formula 
//"total_surface_area = 2 * (length * breadth) + 2 * (breadth * height) + 2 * (height * length)". 
//Finally, it displays the calculated total surface area of the cuboid.
using namespace std;
#include <iostream>

int main()
{
   int length,breadth,height,total;
   cout<<"enter length of a cuboid = ";
   cin>>length;
   cout<<"enter breadth of a cuboid = ";
   cin>>breadth;
   cout<<"enter height of a cuboid = ";
   cin>>height;
   total=2*(length*breadth)+2*(breadth*height)+(height*length);
   cout<<total;

    return 0;
}
