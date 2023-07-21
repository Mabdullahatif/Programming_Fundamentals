//Description: This C++ code calculates the factorial of a given number between 1 and 10. 
//It prompts the user to input a number and then calculates the factorial using conditional 
//statements for each number from 1 to 10. If the number is greater than 10 or negative, 
//appropriate messages are displayed. Otherwise, it prints the factorial of the entered number.
#include <iostream>
using namespace std;
int main() {
    int number;
    cout<<"Enter the number from 1 to 10 to have your desired factorial:";
    cin>>number;
    if(number>10){
		cout<<"\nProgram is only valid for first 10 non zero digits !!!";
	}
	if(number<0){
		cout<<"\nProgram is only valid for positive non zero numbers upto 10 !!!";
	}
    if(number<=10){
	
      if(number==1){
    	cout<<"\nFactorial of "<< number<<"!"<<"= "<<1;
	 }
  	  if(number==2){
    	cout<<"\nFactorial of "<< number<<"!"<<"= "<<1*2;
	 }
	  if(number==3){
    	cout<<"\nFactorial of "<< number<<"!"<<"= "<<1*2*3;
	 }
   	  if(number==4){
    	cout<<"\nfactorial of "<< number<<"!"<<"= "<<1*2*3*4;
	 }
	  if(number==5){
    	cout<<"\nFactorial of "<< number<<"!"<<"= "<<1*2*3*4*5;
	 }
      if(number==6){
    	cout<<"\nFactorial of "<< number<<"!"<<"= "<<1*2*3*4*5*6;
	 }
	  if(number==7){
    	cout<<"\nFactorial of "<< number<<"!"<<"= "<<1*2*3*4*5*6*7;
	 }
	  if(number==8){
    	cout<<"\nFactorial of "<< number<<"!"<<"= "<<1*2*3*4*5*6*7*8;
	 }  
	  if(number==9){
    	cout<<"\nFactorial of "<< number<<"!"<<"= "<<1*2*3*4*5*6*7*8*9;
	 }
	   if(number==10){
    	cout<<"\nFactorial of "<< number<<"!"<<"= "<<1*2*3*4*5*6*7*8*9*10;
	 }
	}
    return 0;
}
