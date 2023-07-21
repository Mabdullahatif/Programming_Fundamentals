//Description: This C++ code checks whether a given number is a palindrome or not. The code defines a 
//function checkpalindrome that takes an integer Num as input and checks if it is a palindrome. 
//Inside the function, a temporary variable temp is used to store the original value of Num. The 
//function then uses a while loop to reverse the digits of Num and store the reversed number in 
//the variable Sum. If the reversed number Sum is equal to the original number temp, then the number 
//is a palindrome and the function prints "is a palindrome !!". Otherwise, 
//it prints "is not a palindrome !!". In the main function, the user is prompted to enter a number, 
//and the checkpalindrome function is called with the input number to check if it is a palindrome.
#include <iostream>

using namespace std;

void checkpalindrome(int Num){
    int r,Sum=0,temp;
    temp=Num; 
    while(Num>0){ //condition
       
        r=Num%10; //main logic
        Sum=(Sum*10)+r;
        Num=Num/10;
    }
    if(temp==Sum){
        cout<<"is a pilondrome !!";
    }
    else{
        cout<<"is not a pilondrome !!";
    }
    
}

int main(){
    int Num,r,Sum=0,temp;
    cout<<"enter a number =  "; //entering a number  format
    cin>>Num ; // enters a number
    checkpalindrome(Num);
  
    return 0;
    
}


