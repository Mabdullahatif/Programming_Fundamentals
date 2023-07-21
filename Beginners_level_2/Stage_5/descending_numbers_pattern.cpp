//Description: This C++ code prints a descending numbers pattern. The code prompts the user to enter a 
//number n, and then it uses nested while loops to print the descending numbers pattern. The outer loop 
//runs n times, starting from the input number and decrements by 1 in each iteration. The inner loop runs 
//x times, where x is equal to the value of n in each iteration of the outer loop. In each inner loop 
//iteration, the number n is printed, and x is decremented by 1 until x becomes 0. This process is 
//repeated for each value of n, resulting in a descending pattern of numbers.
using namespace std;
#include <iostream>

int main(){
    int  n;
    cin>>n;
    while(n>0)
    {
        int x=n;
        while(x>0)
        {
            cout<<n;
            x--;
        }
        
        n--;
        cout<<endl;
    }


    return 0;
}

