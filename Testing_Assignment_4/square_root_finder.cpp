//Description: This C++ code calculates the square root of a given non-negative number using the binary 
//search method. The code prompts the user to enter a non-negative number, and then it calls the 
//square_root function to find the square root of the input number using binary search. 
//It returns the square root of the number as the output. If the user enters a non-positive number, 
//it prints "enter a non-negative number to get the square root !!!".
#include <iostream>
using namespace std;
int square_root(int num1) {
            long left_part = 0;
            long right_part = num1 + 1;
            while (left_part <= right_part) {
                long mid = (left_part + right_part )/ 2;
                long result = mid * mid;
                if (result == (long) num1) {
                    return (int) mid;
                } else if (result > num1) {
                    right_part = mid - 1;
                } else {
                    left_part = mid + 1;
                }
            }
            return (int) right_part;
        }

int main() {
	int num;
	cout<<"enter a non negative number to get square number = ";
	cin>>num;
	cout<<endl;
	

	if (num<=0){
		cout<<"enter a non negative number to get square root !!! ";
	}
	else {
		cout<<"Your desired square root of a number is = "<< square_root(num);
    }   
	return 0;
	
	
}
