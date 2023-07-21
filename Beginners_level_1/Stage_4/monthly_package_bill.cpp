//Description: This C++ code calculates and displays the monthly bill for different package types 
//based on the user's input. It prompts the user to enter a package name (PackageName) and the total 
//usage time (t).
//
//If the user enters 'C' as the package name, the code directly displays the fixed monthly bill for 
//package C, which is $69.99.
//
//For packages A and B, the code calculates the monthly bill based on the usage time (t):
//
//For package A, if the usage time exceeds 450 minutes, an additional charge of $0.45 per minute is 
//applied to the base charge of $39.99.
//For package B, if the usage time exceeds 900 minutes, an additional charge of $0.40 per minute is 
//applied to the base charge of $59.99.
//After calculating the monthly bill (a for package A and b for package B), the code displays the 
//calculated amounts.
using namespace std;
#include <iostream>

int main()
{ 
    char PackageName;
    int t;
    float a,b,c;
    cout<<"enter your package = ";
    cin>>PackageName;
    if (PackageName=='C')
    cout<<69.99;
    else{ 
    
        
        cout<<"time";
        cin>>t;
        if(PackageName == 'A'&& t>450)
        {
            a=39.99+(t-450)*0.45;
        }
        else
        {
            a=39.99;
        }
        cout << a;
        
        if(PackageName == 'B' && t>900)
        {
            b=59.99+(t-900)*0.40;
            b=b/100;
        }
        else
        {
            b=59.99;
        }
        cout << b;
        
    }
    return 0;
}

