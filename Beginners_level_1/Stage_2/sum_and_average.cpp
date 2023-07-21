//Description: This C++ code calculates the sum and average of 10 numbers entered by the user. 
//It uses a while loop to prompt the user to enter a number 10 times. For each input number, 
//it adds the number to the variable Sum. After reading all 10 numbers, it calculates the average 
//by dividing the sum by 10. Finally, it displays the sum and average of the entered numbers.
#include <iostream>
using namespace std;
int main()
{
int Counter = 0;
double Number, Sum=0, average;
while (Counter < 10){
cout<<"Please Enter a Number ";
cin>> Number;
Sum+= Number;
Counter++;
}
average=Sum/Counter;
cout<<endl<<"Sum of the 10 numbers is "<<Sum<<endl<<"Average of the requird funtion is "<<average;
return 0;
}
