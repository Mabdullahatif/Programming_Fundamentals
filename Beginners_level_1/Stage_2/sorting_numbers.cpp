//Description: This C++ code takes three numbers as input and sorts them in descending order. 
//It prompts the user to enter three numbers (x, y, z) and then uses nested if statements to 
//find the largest (a), second largest (b), and smallest (c) numbers among them. The code then 
//displays the three numbers in descending order, i.e., a on the first line, b on the second line, 
//and c on the third line.
using namespace std;
#include <iostream>

int main()
{
    int x,y,z,a,b,c;
    cout<<"enter number 1 = ";
    cin>>x;
    cout<<"enter number 2 = ";
    cin>>y;
    cout<<"enter number 3 = ";
    cin>>z;
    if (x>y && x>z){
        a=x;
        if(y>z){
            b=y;
            c=z;
        }
        else{
            b=z;
            c=y;
        }
    }
     if (y>x && y>z){
        a=y;
        if(x>z){
            b=x;
            c=z;
        }
        else{
            b=z;
            c=x;
        }
    }
     if (z>y && z>x){
        a=z;
        if(y>x){
            b=y;
            c=x;
        }
        else{
            b=x;
            c=y;
        }
    } 
    cout<< a <<endl<< b<<endl<< c ;
    return 0;
}
