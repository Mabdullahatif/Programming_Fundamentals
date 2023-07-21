//Description: This C++ code defines two functions cin_Array and cout_Array to read and print an array 
//of integers, respectively. The code takes an integer n as input to determine the size of the array. 
//It then calls the cin_Array function to read n integers into the array A. After that, 
//it calls the cout_Array function to print the elements of the array A.
//
//Functions:
//
//void cin_Array(int arr[], int n): This function takes an integer array arr and an integer n as input. 
//It prompts the user to enter n numbers, which are then stored in the array arr.
//
//void cout_Array(const int arr[], int n): This function takes a constant integer array arr and an 
//integer n as input. It prints the n elements of the array arr.
#include <iostream>
using namespace std;
void cin_Array( int arr[], int n){
    cout <<"enter numbers";
    for(int i=0;i<n;i++){
        cin>> arr[i];
    }
}
void cout_Array( const int arr[], int n){
    for(int i=0;i<n;i++){
        cout<< arr[i];
    }
}
int main() {
    int n, A[100];
    cout<<"please enter limit";
    cin>>n;
    cin_Array(A,n);
    cout_Array( A, n);
    return 0;
    
}


