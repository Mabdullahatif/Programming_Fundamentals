//Description: This C++ program defines a function isPalindrome() that takes a string text as input and 
//returns a boolean value (true or false) based on whether the input string is a palindrome or not. 
//The function checks if the reverse of the text is equal to the original text. If they are equal, it 
//returns true, indicating that the string is a palindrome; otherwise, it returns false.
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
bool isPalindrome(string text){
    string text2 = text;
    reverse(text2.begin(), text2.end());
    if (text==text2) {
        return true;
    }
    else {
        return false;
    }
}
int main()
{
    string text;
    cin>>text;
    if (isPalindrome(text)==1){
    	cout<<"is a palindrome";
	}
	else{
		cout<<"not a palindrome";
	}
    return 0;
}
