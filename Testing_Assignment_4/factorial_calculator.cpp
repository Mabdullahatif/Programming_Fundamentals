//Description: This C++ code calculates the factorial of a given non-negative number. 
//The code prompts the user to enter a number, and then it calls the fact function to 
//calculate the factorial using a for loop. It returns the factorial of the input number as the output.
using namespace std;
#include <iostream>
int fact(int N){
	int factorial=1;
	 for (int i = 1; i <= N; ++i) {
        factorial *= i;   
    }
    return factorial;
}
int main(){
	int n;
	cout<<"enter a number = ";
	cin>>n;
	cout<<"you answer is = "<<fact(n);
}
