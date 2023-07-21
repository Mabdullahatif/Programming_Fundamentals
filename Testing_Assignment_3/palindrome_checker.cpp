//Description: This C++ code checks whether a given number is a palindrome or not. 
//It prompts the user to enter a number and then uses a while loop to reverse the 
//digits of the number. The reversed number is compared with the original number 
//to determine if it is a palindrome (i.e., it reads the same forwards and backwards). 
//If the original number and the reversed number are the same, 
//it prints "this is a palindrome number !!!", otherwise, it prints "this is not a palindrome number !!!".
using namespace std;
#include <iostream>  
int main()    
{    
    int num,read,sum=0,temp;    
    cout<<"enter the number = ";    
    cin>>num;
    temp=num;    
    while(n>0)    
    {    
    read=num%10;    
    sum=(sum*10)+read;    
    num=num/10;    
    }    
    if(temp==sum)    
    cout<<" this is a palindrome number !!!";    
    else    
    cout<<" this is not a palindrome number !!!";   
    return 0;  
}   
