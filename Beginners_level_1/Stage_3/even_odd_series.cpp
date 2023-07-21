//Description: This C++ code prints a series of even and odd numbers based on the user's input number. 
//It prompts the user to enter a number (Number). If the entered number is greater than 1, the code 
//generates a series of numbers using a for loop. It starts with an even number (2) and an odd number 
//(-5) and increments the even number by 2 and decrements the odd number by 5 for each iteration of 
//the loop. The series of numbers is printed in the format "+even odd even odd ...", where the number 
//of terms in the series is determined by the user's input number.
using namespace std;
#include <iostream>

int main()
{
    int Number;
    cout<<"enter your number = ";
    cin>>Number;
    if(Number>1){
        
        int odd=-5,even=2;
        
            for(int condition=1;condition<Number;condition+=2){
           
            cout<<"+"<<even<<" ";
            even=even+2;
           
            cout<<odd<<" ";
            odd=odd-5;
            
          
        }   
    }

    return 0;
}

