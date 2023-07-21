//Description: This C++ program takes user input for a string text and removes all non-alphabetic 
//characters (including spaces, digits, and special characters) from the input text. The program 
//uses two character variables capa and smalla to represent the ASCII values of 'A' and 'a', 
//respectively. It also uses capz and smallz to represent the ASCII values of 'Z' and 'z', respectively.
using namespace std;
#include <iostream>
int main (){
    char capa='A';
    char smalla='a';
    char capz='Z';
    char smallz='z';
    string text;
    cin>>text;
    string temp;
    for(int i=0; i <=text.size();i++){
        if((text[i]>=smalla && text[i]<=smallz) || (text[i]>=capa && text[i]<=capz)){
            temp+=text[i];
        }
    }
    text=temp;
    cout<<text;
    return 0;
}
