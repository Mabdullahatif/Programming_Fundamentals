//Description: This C++ code calculates the area and circumference of a circle based on the given radius. 
//It prompts the user to enter the radius of the circle and then calculates the area using the formula 
//"area = p * radius * radius" and the circumference using the formula "circumference = 2 * p * radius". 
//Finally, it displays the calculated area and circumference of the circle. 
//Note that the value of p is approximated to 3.1416 in this code.
using namespace std;
#include <iostream>

int main(){
  int circum,rad,area,pi=3.1416;
  cout<<"enter radius of a circle = ";
  cin>>rad;
  area=pi*rad*rad;
  circum=2*3.1416*rad;
  cout<<"area of a circle =  "<< area <<"\n"<<"circumference of a circle = "<<circum;
  

    return 0;
}
