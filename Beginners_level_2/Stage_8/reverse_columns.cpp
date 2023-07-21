//Description: This C++ program takes user input for the number of rows and columns (row and column). 
//It then creates a 2D integer array A of size 10x10. The user is asked to input the elements of the 
//2D array. After receiving the input, the program reverses the order of elements in each column of 
//the array. Finally, it prints the modified 2D array.
#include <iostream>
using namespace std;
int main(){
    int row, coloumn;
    int A[10][10];
    cin >> row>>coloumn;
    for(int i=0; i<row; i++){
       for(int j=0; j<coloumn; j++){
            cin >> A[i][j];
        }
    }
    for(int i=0; i<row; i++){ 
        int cc = coloumn;
        for(int j=0; j<cc; j++)
        {
            int T;
            T = A[i][j];
            A[i][j] = A[i][cc-1];
            A[i][cc-1] = T;
            cc--;
        }
    }
    cout << endl;
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<coloumn; j++){
            cout << A[i][j] << " ";
            }
        cout << endl;
    }
    return 0;
}
