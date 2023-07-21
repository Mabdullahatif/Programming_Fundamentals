//Description: This C++ code implements the Euclidean algorithm to find the Greatest Common Divisor (GCD) 
//of two given numbers. The code prompts the user to enter two values n and m, then it calls the 
//Euclid_GCD function to calculate the GCD of the two numbers using a while loop and the Euclidean 
//algorithm. Finally, it displays the calculated GCD as the output.
using namespace std;
#include <iostream>
int Euclid_GCD(int m, int n){
	int remainder=m%n;
	while(remainder>0){
		m=n;
		n=remainder;
		remainder=m%n;
	}
	return n;
}
int main(){
	int n,m,remainder;
	cout<<"your two values = ";
	cin>>n>>m;
	cout<<"your answer ="<<Euclid_GCD(m,n);
	
	return 0;
}

