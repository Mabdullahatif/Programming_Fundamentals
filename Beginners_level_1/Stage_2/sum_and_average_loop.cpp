//Description: This C++ code calculates the sum and average of numbers entered by the user until a 
//non-positive number is entered. It prompts the user to enter numbers iteratively using a while loop. 
//The loop keeps running until the user enters a non-positive number (less than or equal to 0). 
//For each entered positive number, it adds the number to the variable Sum and increments the counter 
//variable n. After the loop finishes, it calculates the average by dividing the sum by the number 
//of positive entries (n). Finally, it displays the sum and average of the entered numbers.
#include <iostream>
using namespace std;
int main()
{
   double Number, Sum=0;
   cout<<"Please Enter Your Numbers and a non-positive number to terminate = ";
   cin>> Number;
    int n=1;
  while (Number > 0){
    Sum+= Number;
    cout<<"Please Enter a Number = ";
    cin>> Number;
    n++;
}
  cout<<endl<<"Sum of the numbers you entered is "<<Sum;
  cout<<endl<<"average of the numbers you entered "<< Sum/n;
return 0;
}
