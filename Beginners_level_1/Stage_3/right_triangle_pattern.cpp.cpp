//Description: This C++ code prints a right-angled triangle pattern using asterisks () 
//based on the user's input. It prompts the user to enter a number (n) to specify the 
//size of the right-angled triangle pattern. The code then uses nested for loops to print 
//the right-angled triangle pattern. The outer loop runs n times to create each row of the triangle, 
//and the inner loop also runs n times to create each column of the triangle. It prints an asterisk () 
//only when the column number is greater than or equal to the row number, creating a right-angled triangle pattern.
using namespace std;
#include <iostream>
int main(){
    int n;
    cin>>n;
    for(int i=n; i>0; i--){
      for(int j=0; j<=n; j++)
      {
        if (j>=i)
        {
          cout<<"*";
        }
        else
        {
          cout<<" ";
        }
      }
      cout<<endl;
    }
    return 0;
}
