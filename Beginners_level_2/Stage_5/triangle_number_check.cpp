//Description: This C++ code checks if a given number is a triangular number or not. A triangular number 
//is a number that can be represented as the sum of consecutive natural numbers starting from 1. 
//The code defines a function named function that takes an integer n as input and checks if the number 
//is a triangular number or not. It uses a while loop to find the sum of consecutive natural numbers 
//starting from 1 and compares it with the input number. If the sum is equal to the input number (n), 
//it sets a flag to 1 to indicate that it is a triangular number. The main function prompts the user 
//to enter a number, calls the function to check if it is a triangular number, and then displays 
//whether the number is a triangle or not.
#include <iostream>
using namespace std;
void function (int n){
    int x=1;
    int sum =0;
    int flag =0;
    while (sum <= n){
        sum = sum + x;
        if (sum == n)
        flag = 1;
    }
    if (flag==1)
    cout << "triangle";
    else
    cout << "not triangle";
}
int main(){
    int n;
    cout << "enter a number";
    cin >> n;
    function(n);
    return 0;
}

