//Description: This C++ code calculates the calories burned based on the input number of minutes (i). 
//It prompts the user to enter the number of minutes (i) and then multiplies it by 3.6 to calculate the 
//calories burned (c). The code then displays the calculated calories burned. Note that the unit of 
//measurement for calories burned is not specified in the code, and it is assumed to be in calories 
//per minute (cal/min).
using namespace std;
#include <iostream>

int main()
{
   int i,c;
   double caloriesC_b;
   cin>>i;
   c=i*3.6;
   cout<<c;
   return 0;
   
   
}


