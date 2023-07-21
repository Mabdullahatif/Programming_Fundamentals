//Description: This C++ code prints a square pattern using asterisks () based on the user's input. 
//It prompts the user to enter a number (h) to specify the size of the square pattern. 
//The code then uses nested for loops to print the square pattern. The outer loop runs h times 
//to create each row of the square, and the inner loop also runs h times to create each column of the 
//square. It prints an asterisk followed by a space for each element in the row, and then moves to the 
//next line to create a square pattern. The size of the square will be h rows and h columns of 
//asterisks ().

using namespace std;
#include <iostream>
int main (){
    int h;
    cout<<"enter number to print your pattern = ";
    cin>> h;
    for(int i = 0; i < h; i++){
        
        cout<< endl;
        for(int i = 0; i < h; i++){
        cout<<"* ";
        }
    }
    
    
    
    
    return 0;
}
