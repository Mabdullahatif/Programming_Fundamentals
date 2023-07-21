//Description: This C++ program counts the occurrences of a specific character in a given string. 
//It takes user input for the length of the string (l), the string itself (str), and the character 
//to be counted (character). The program then calls the function countCharacter() to count the 
//occurrences of the specified character in the given string. Finally, it prints the number of 
//occurrences.
#include <iostream>
using namespace std;
int countCharacter(string text, char character,int l){
    int length=0;
    for (int i=0;i<text.length();i++)
        if (text[i] == character)
            length++;
    return length;
}
int main()
{
    int l;
    cout<<"Enter length = ";
    cin>>l;
    string str;
    cout<<"Enter string = ";
    cin>>str;
    char character;
    cout<<"Enter character = ";
    cin>>character;
    cout <<"Your desired character "<<character<<" occurred " <<countCharacter(str, character,l)<<" times " << endl;
    return 0;
}

