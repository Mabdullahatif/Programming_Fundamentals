//Description: This C++ code defines a function findNthDigit(int n, int index) that finds the nth digit 
//of a given number and returns it. The code takes two integer inputs, num and i, from the user. 
//It calls the findNthDigit function to find the i-th digit of the number num and prints the result.
#include <iostream>

using namespace std;
int findNthDigit(int n,int index)
    {
    int Array[10],digit,i=0;
        while(n>0){
            digit=n%10;
            n=n/10;
            Array[i]=digit;
            i++;
        }
        return Array [index];
}
int main(){
    
    int num,i;
    
    cin>>num>>i;
    
    cout<< findNthDigit(num,i);
    
    return 0;
}
