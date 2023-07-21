//Description: This C++ program takes user input for a string text and then reverses the order 
//of characters in the text using the reverse() function from the <algorithm> header. 
//The reversed text is then printed as the output.
using namespace std;
#include <algorithm>
#include <iostream>
int main(){
	string text;
	cout << "Enter your text = ";
	cin>>text;
	reverse(text.begin(),text.end());
	cout<<text;
	return 0;
}

