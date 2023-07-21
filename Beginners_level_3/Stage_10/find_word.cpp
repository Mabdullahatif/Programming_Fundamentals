//Description: This C++ program takes two inputs from the user: a text string and a word. 
//It then uses the find() function to search for the position of the given word within the text string. 
//If the word is found in the text, it returns the starting index of the first occurrence of the word; 
//otherwise, it returns a special value -1 to indicate that the word is not present in the text.
using namespace std;
#include <iostream>
int main (){
	string text,word;
	cout<<"Enter text = ";
	getline(cin,text);
	cout<<"Enter word = ";
	getline(cin,word);
	cout<<text.find(word);
	return 0;
}
