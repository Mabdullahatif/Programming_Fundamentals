//Description: This C++ code checks if a given year is a leap year or not. 
//It prompts the user to enter a year, and then it checks the following conditions:
//
//If the year is divisible by 400, it prints "IS A LEAP YEAR".
//If the year is divisible by 100 but not by 400, it prints "IS NOT A LEAP YEAR".
//If the year is divisible by 4 but not by 100, it prints "IS A LEAP YEAR".
//If the year is not divisible by 4, it prints "IS NOT A LEAP YEAR".
#include <iostream>

using namespace std;
int main(){
    int Year;
    cin>>Year;
    if (Year %400==0){
        cout<<Year<<"IS A LEAP YEAR";
    }
    else{
        if(Year % 100 == 0){
            cout<<Year<<"IS NOT A LEAP YEAR";
        }
        else{
            if(Year % 4 == 0){
                cout<<Year<<"IS A LEAP YEAR";
            }
            else{
                cout<<Year<<"IS NOT A LEAP YEAR";
            }
        }
    }
    
    
    
    return 0;
}

