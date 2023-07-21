//Description: This C++ code calculates the area of a rectangle based on the given width and breadth. 
//It prompts the user to enter the width and breadth of the rectangle, and then it calculates 
//the area using the formula "area = width * breadth". Finally, it displays the calculated area 
//of the rectangle.
using namespace std;
#include <iostream>

int main(){
  int area,wid,bread;
  cout<<"enter width = ";
  cin>>wid;
  cout<<"enter breadth = ";
  cin>>bread;
  area = wid * bread;
  cout<<area;

    return 0;
}
