//Description: This C++ code prints a hollow square pattern using asterisks () based on the user's 
//input. It prompts the user to enter the number of rows (N) to specify the size of the hollow square 
//pattern. The code then uses nested for loops to print the hollow square pattern. The outer loop runs 
//N times to create each row of the square, and the inner loop also runs N times to create each column 
//of the square. It prints an asterisk () for the outer border of the square (first row, last row, 
//first column, and last column), and a space for the inner part of the square. This creates a hollow 
//square pattern with a border of asterisks and an empty space inside.
using namespace std;
#include <iostream>

int main()
{
    int i, j, N;

    cout<<"Enter number of rows: ";
    cin>>N;

    
    for(i=1; i<=N; i++)
    {
        
        for(j=1; j<=N; j++)
        {
            if(i==1 || i==N || j==1 || j==N)
            {
            
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        
        cout<<"\n";
    }

    return 0;
}
