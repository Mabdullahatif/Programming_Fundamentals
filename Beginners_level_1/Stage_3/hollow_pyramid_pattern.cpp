//Description: This C++ code prints a hollow pyramid pattern using asterisks (*) based on the user's input. 
//It prompts the user to enter the number of rows (rows) to specify the size of the hollow pyramid pattern. 
//The code then uses nested for loops to print the hollow pyramid pattern. The outer loop runs from 1 to 
//rows to create each row of the pyramid. The first inner loop prints spaces to align the pyramid 
//correctly, and the second inner loop prints asterisks to form the hollow pyramid pattern.
#include <iostream>
using namespace std;
int main()
{
    int i,j,rows;
    cout << "Enter the number of rows " << endl;
    cin>>rows;
    for(i=1; i<=rows; i++){
        for(j=i; j<=rows; j++){
        cout<<" ";
    }
        for(j=1; j<=i; j++){
                if(i==rows || j==1 || j==i)
                {
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
    }
    cout<<"\n";
    }
    return 0;
}
