//Description: This C++ program defines a function tweakLetters() that takes two arguments: string[] 
//(a character array) and incre[] (an integer array). The function modifies the characters in the string 
//array by adding the corresponding value from the incre array to each character. The modified string 
//array is stored in a new character array array. The function then prints the array.
using namespace std;
#include <iostream>
void tweakLetters(char string[],int incre[]){
    char array[100];
    for(int i=0;string[i]!='\0';i++){
        array[i]=string[i]+incre[i];
    }
    cout<<array;
}
int main (){
    char A[100]="many";
    int I[10]={0,0,0,-1};
    tweakLetters(A,I);
    return 0;
}
