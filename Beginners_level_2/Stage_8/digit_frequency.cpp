//Description: This C++ program defines three functions to work with arrays. The functions are:
//
//void cin_Array(int arr[], int N): Reads 'N' numbers from the user and stores them in the 
//integer array 'arr'.
//void cout_Array(const int arr[], int N): Prints the elements of the integer array 'arr'.
//void Digit_Frequency(int Numbers[], int N, int F[]): Calculates the frequency of each 
//element in the 'Numbers' array and stores the frequencies in the 'F' array.
using namespace std;
#include <iostream>
void cin_Array( int arr[], int N){
    cout <<"enter numbers";
    for(int i=0;i<N;i++){
        cin>> arr[i];
    }
}
void cout_Array( const int arr[], int N){
    for(int i=0;i<N;i++){
        cout<< arr[i];
    }
}
void Digit_Frequency( int Numbers[], int N, int F[]){
    for(int i=0;i<N ;i++){
        int temp=Numbers[i];
        int j=i;
        int count=1;
        for(int i =0;i<N;i++){
        if(i !=j){
            if(Numbers[i]==temp){
                count++;
            }
        }
        
        }
    F[i]=count;
    }
    
}
int main (){
    int A[20],N,F[100];
    cin>>N;
    cin_Array(A,N);
    Digit_Frequency(A,N,F);
    cout<<endl;
    cout_Array(F,N);
    return 0;
}


