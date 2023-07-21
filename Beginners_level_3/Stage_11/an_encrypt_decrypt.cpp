//Description: This C++ program provides two options: encryption and decryption. 
//If the user chooses encryption, it reads the content from the input.txt file, encrypts it by 
//shifting each character one position ahead in the ASCII table, and stores the encrypted text 
//in the encrypt.txt file. If the user chooses decryption, it reads the content from the encrypt.txt 
//file, decrypts it by shifting each character one position back in the ASCII table, and stores the 
//decrypted text in the decrypt.txt file.

#include <iostream>
#include <fstream>
using namespace std;
int main(){
	int choice;
	char arr[100];
	cout<<"1.encrypt"<< endl;
	cout<<"2.decrypt"<< endl;
	cin>>choice;
	if(choice==1){
		ifstream inFile;
		ofstream outFile;
		inFile.open("input.txt");
		outFile.open("encrypt.txt");
		inFile.getline(arr,100);
		for(int i=0; i<100 && arr[i] !='\0';i++){
			arr[i]=arr[i]+1;
		}
		cout<<arr;
		outFile << arr;
		inFile.close();
		outFile.close();
	}
	else if (choice == 2){
		ifstream inFile;
		ofstream outFile;
		inFile.open("encrypt.txt");
		outFile.open("decrypt.txt");
		inFile.getline(arr,100);
		for(int i=0;i<100 && arr[i] !='\0';i++){
			arr[i]=arr[i]-1;
		}
		cout<<arr;
		outFile<<arr;
		inFile.close();
		outFile.close();
			}
	return 0;
}
