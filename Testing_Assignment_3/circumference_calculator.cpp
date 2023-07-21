//Description: This C++ code calculates the circumference of a circle based on the user's 
//input for the circle's radius. It prompts the user to enter the radius, then it uses the 
//formula C = 2 * p * r to calculate the circumference (C) where p (pi) is approximated to 3.14159. 
//Finally, it displays the calculated circumference.
#include<iostream>
using namespace std;
int main(){
    int C, r;
    double PI = 3.14159;
    cout << "Please enter the circle's radius: ";
    cin >> r;
    C = 2*PI*r;
    cout << "Circumference is " << C << endl;
    return 0;
}
