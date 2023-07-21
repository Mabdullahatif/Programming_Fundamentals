//Description: This C++ code implements a simple calculator that performs basic arithmetic 
//operations: addition, subtraction, division, and multiplication. The code defines four functions 
//add, sub, divi, and mul, each responsible for performing the corresponding arithmetic operation and 
//displaying the result. In the main function, the user is prompted to enter two numbers (a and b) 
//and a character representing the desired arithmetic operation (c). Based on the input character, 
//the corresponding function is called to perform the operation and display the result. 

#include <iostream>
using namespace std;

void add(int a, int b);
void sub(int a, int b);
void divi(int a, int b);
void mul(int a, int b);
    int main(){
    float a,b;
    char c;
    cin>>a;
    cout<<endl;
    cin>>b;
    cout<<endl;
    cin>>c;
    cout<<endl;
    if(c=='+'){
      add(a,b);
    }
    else if(c=='-'){
    sub(a,b);
    }
    else if(c=='/'){
    divi(a,b);
    }
    else if(c=='*'){
    mul(a,b);
    }
    system ("pause");
    return 0;
    }
    void add(int a, int b){
    a=a+b;
    cout<<a;
    cout<<endl;
    }
    void sub(int a, int b){
    a=a-b;
    cout<<a;
    cout<<endl;
    }
    void divi(int a, int b){
    a=a/b;
    cout<<a;
    cout<<endl;
    }
    void mul(int a, int b){
    a=a*b;
    cout<<a;
    cout<<endl;
    }

