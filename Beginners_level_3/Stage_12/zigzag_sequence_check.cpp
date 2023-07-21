//Description: This C++ program checks whether a sequence of numbers entered by the user is a Zig-Zag 
//sequence or a Zag-Zig sequence or neither.
//
//Main Function: The main() function contains the main logic of the program. It prompts the user to 
//enter the total number of elements in the sequence and the elements themselves. Then, it calls two 
//functions ZigZagCheck() and ZagZigCheck() to check if the sequence is Zig-Zag or Zag-Zig, 
//respectively. If either function returns 1, it means the sequence follows the corresponding pattern, 
//and the program displays the appropriate message. If both functions return 0, it means the sequence 
//is neither Zig-Zag nor Zag-Zig, and it displays "NEITHER!".
//
//Functions:
//
//ZigZagCheck(): This function takes an array A and its limit as input and checks if the sequence 
//follows the Zig-Zag pattern. If the sequence is a Zig-Zag sequence, it returns 1; otherwise, it 
//returns 0.
//
//ZagZigCheck(): This function takes an array A and its limit as input and checks if the sequence 
//follows the Zag-Zig pattern. If the sequence is a Zag-Zig sequence, it returns 1; otherwise, it 
//returns 0.
#include<iostream>

using namespace std;

int ZigZagCheck(int A[], int limit){
	
	int check;
	for(int i=2; i<=limit; i++)
	{
		if(i%2 == 0){
			if(A[i] < A[i-1])
				check = 1;
			else
				check = 0;
				return check;
		}
		else{
			if(A[i] > A[i-1])
				check = 1;
			else
				check = 0;
				return check;
		}
	}
	
	return check;
}

int ZagZigCheck(int A[], int limit){
	
	int check;
	for(int i=2; i<=limit; i++)
	{
		if(i%2 == 0){
			if(A[i] > A[i-1])
				check = 1;
			else
				check = 0;
				return check;
		}
		else{
			if(A[i] < A[i-1])
				check = 1;
			else
				check = 0;
				return check;
		}
	}
	
	return check;
}



int main(){
	
	int A[100], num;
	
	cout << "Enter total numbers you want to enter: ";
	cin >> num;
	
	for(int i=1; i<=num; i++) // Storing 
	{
		cin >> A[i];
	}
	
	if(ZigZagCheck(A, num) == 1)
		cout << "Its a Zig-Zag Sequence!" << endl;
	else if(ZagZigCheck(A, num) == 1)
		cout << "Its a Zag-Zig Sequence!" << endl;
	else
		cout << "NEITHER!";
	return 0;
}
