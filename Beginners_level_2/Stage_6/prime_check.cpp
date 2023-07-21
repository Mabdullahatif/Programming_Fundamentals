//Description: This C++ code checks for prime numbers within a given range. The code defines a 
//function Primecheck that takes two integers start and end as input and prints all prime numbers 
//in the range [start, end]. The function uses a while loop to iterate through the numbers from start 
//to end. For each number, it checks whether it is prime or not by dividing it by all numbers from 2 
//to its half (start / 2). If the number has no divisors other than 1 and itself, it is considered 
//prime, and the function prints it. In the main function, the user is prompted to enter the start 
//and end values for the range. The program then calls the Primecheck function with the provided 
//range and prints all the prime numbers within that range.
#include <iostream>
using namespace std;

void Primecheck(int start,int end){
    bool isPrime = true;
    while (start < end) {
        isPrime = true;
        if (end == 0 || start == 1) {
            isPrime = false;
        }
        else {
            for (int i = 2; i <= start / 2; ++i) {
                if (start % i == 0) {
                    isPrime = false;
                    break;
                }
            }
        }
        if (isPrime)
            cout << start << " ";
        ++start;
    }
    
}

int main() {
    int start, end;
    cin>>start>>end;
    Primecheck(start,end);
    
    return 0;
}


