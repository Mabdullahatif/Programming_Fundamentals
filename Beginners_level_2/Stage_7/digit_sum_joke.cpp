//Description: This C++ code defines a function i_am_joking(int n) that performs a fun addition 
//operation on a given number until the sum of its digits becomes a single-digit number. 
//The code takes an integer input n from the user, calls the i_am_joking function to perform the 
//addition operation, and prints the final result.
#include<iostream>
using namespace std;
 

int i_am_joking(int n){
    int sum = 0;
    while (n>0){
        while (n != 0){
            sum = sum  + (n % 10);
            n = (n / 10);
        }
        if(sum>9){
          n = sum;
          sum = 0;
        }
    }
    return sum;
}
 
int main()
{
    int n;
    cout<<"enter a number to get addition = ";
    cin>>n;
    cout<<"answer is = "<<i_am_joking(n);

}
 


