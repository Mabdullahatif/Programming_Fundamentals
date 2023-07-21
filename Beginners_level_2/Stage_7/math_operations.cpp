//Description: This C++ code defines several functions to perform different mathematical operations. 
//The code includes functions for addition, multiplication, generating a multiplication table, and 
//finding the square of a number. In the main function, it calls these functions with a given value 
//a = 10 and b = -17 to demonstrate the operations. The results of each operation are printed to the 
//console.
#include<iostream>
using namespace std;
void Addition(int a, int b){
    cout <<"the sum of "<<a<<" and "<<b<<"="<<a+b<<endl;
}
void Multiplication(int a, int b){
    cout<<"The Multiplication of "<<a<<" and "<<b<<"="<<a*b<<endl;
}
void Table(int a){
    for(int i=1;i<=10;i++){
        cout<<a<<"x"<<i<<"="<<a*i;
        cout<<endl;
    }
}
void Square(int a){
    cout<<a*a<<endl;
}

int main() {
    int a = 10, b = -17;

    Addition(a, b);
    Multiplication(a, b);
    cout <<"Table of "<<a<<" is = ";
    Table(a);
    cout <<"Sqaure of "<<a<<" is = ";
    Square(a);
    return 0;
}
