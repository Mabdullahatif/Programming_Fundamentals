//Description: This C++ code generates a Fibonacci series based on the user's input number. 
//It prompts the user to enter a number (n) to specify the size of the Fibonacci series. The code then 
//uses a for loop to generate the Fibonacci series. It starts with the first two numbers, num1=0 and 
//num2=1, and calculates the next number (nextnum) by adding the two previous numbers. The series is 
//printed in the format "0, 1, nextnum1, nextnum2, ...", where the number of terms in the series is 
//determined by the user's input number.
using namespace std;
#include <iostream>

int main(){
    int n,num1=0,num2=1,nextnum=0;
    cout<<"enter a number for your required series = ";
    cin>>n;
    cout<<"fibonacci series = ";
    for(int k=1;k<=n;++k){
        if(k==1){
            cout<<num1<<",";
        }
        if(k==2){
            cout<<num2<<",";
        }
        nextnum=num1+num2;
        num1=num2;
        num2=nextnum;
        
        cout<<nextnum<<",";
    }
    return 0;
}
