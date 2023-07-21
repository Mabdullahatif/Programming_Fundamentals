//Description: This C++ code checks whether the given number is odd or even. The code defines a 
//function isOdd(int number) that takes an integer as input and returns a string "true" if the number is 
//odd and "false" if the number is even. The main function reads an integer n from the user and then 
//calls the isOdd function to check whether the number is odd or even. The result is then printed to 
//the console.
using namespace std;
#include <iostream>
string isOdd(int number){
    if (number % 2 == 0){
        return "false";
    }
    else{
        return "true";
    }
   
}
   



int main() {
    int n;
    cin >> n;
    cout << isOdd(n)<< endl;
    return 0;
}
