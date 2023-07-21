//Description: This C++ code defines a function swap(int a, int b) to swap the values of two integers a 
//and b. The code takes two integer inputs a and b from the user and calls the swap function to swap 
//their values. Then, it prints the swapped values of a and b.
using namespace std;
#include <iostream>
void swap(int a, int b){
    int t;
    t=a;
    a=b;
    b=t;
}
int main(){
    int a,b;
    cout<<"enter 1st expression = ";
    cin>>a;
     cout<<"enter 2nd expression = ";
    cin>>b;
    swap(a,b);
    cout <<"swapped expressions are given below !!"<<endl;
    cout<<b<<endl;
    cout<<a;
    
}
