//Description: This C++ code calculates the sum of even powers of a given base raised to the given 
//exponent. The code prompts the user to enter the values of base and expo (exponent). 
//It then uses a while loop to iterate through even exponents (starting from 2) up to the value of expo. 
//For each even exponent, it calculates the corresponding power of the base using the pow function from 
//the math.h library and adds it to the sum. Finally, the code prints the total sum of even powers of the 
//base, including the base itself.
using namespace std;
#include<iostream>
#include<math.h>
int main(){
    int base,expo=0,sum=0,i=2;
    cin>>base>>expo;
    while(i<=expo){
        sum=sum+pow(base,i);
        i+=2;
    }
    cout<<sum+base;
    
    return 0;
}

