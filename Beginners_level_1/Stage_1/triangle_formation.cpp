//Description: This C++ code checks whether a triangle can be formed based on the given input angles. 
//It prompts the user to enter three angles A, B, and C. The code then checks if all the angles are 
//positive, and if not, it prints "All angles must be positive". If all angles are positive, it further 
//checks if the sum of the angles equals 180 degrees (the sum of interior angles in a triangle). 
//If the sum is 180, it prints "A triangle can be formed", indicating that the given angles can form a 
//triangle. Otherwise, it prints "A triangle cannot be formed".
#include <iostream>
using namespace std;
int main (){
    int A,B,C;
    cin>> A>>B>>C;
    if(A<=0 || B<=0 || C<=0){
        cout << "All angles must be positive";
    }
    else{
        if(A+B+C==180){
            cout<<"A triangle can be formed";
        }
        else{
            cout<<"A triangle can not be formed";
        }
    }
    
    return 0;
}
