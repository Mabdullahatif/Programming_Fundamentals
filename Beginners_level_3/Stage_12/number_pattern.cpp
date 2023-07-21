//Description: This C++ program takes a number as input from the user and prints a number pattern 
//using asterisks (*) and spaces.
#include<iostream>
using namespace std;
int main(){
    int r,c,number;
    cout<<"Enter a number : ";
    cin>>number;
    for(r=1; r<=number; r++){
        for(c=1; c<=number; c++){
            if(c <= (number+1-r)){
                if(r==1 || c==1 || c == (number+1-r) )
                cout<<"* ";
                else
                cout<<"  ";
            }
        }
    cout<<endl;
    }
    return 0;
}
