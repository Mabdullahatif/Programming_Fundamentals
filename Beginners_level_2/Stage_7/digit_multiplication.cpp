//Description: This C++ code defines a function digitMul(int num) to calculate the multiplication of the 
//digits of a given number. The code then takes an integer input n from the user and calls the digitMul 
//function to calculate the multiplication of its digits. The result is then printed to the console.
#include<iostream>
using namespace std;
 

int digitMul(int num){
    int multiplication = 1;
    while (num != 0)
    {
     multiplication  =multiplication  * (num % 10);
        num = (num / 10);
    }
    return  multiplication  ;
}
 
int main()
{
    int n;
    cout<<"enter a number to get multiplication = ";
    cin>>n;
    cout<<"answer is = "<<
    digitMul(n);

}
 
