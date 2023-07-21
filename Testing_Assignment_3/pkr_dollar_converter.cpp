//Description: Rupees to Dollar Converter
using namespace std;
#include <iostream>
#include<bits/stdc++.h>
int main(){
	float pakiR;
	float dollar;
	int num;
	float cent;
	int num2;
	int pakr;
	cout<<"enter amount in Paki rupees = ";
	cin>>pakiR;
	pakr=pakiR;
	cout<<"paki rupees in dollar = ";
	dollar=pakiR/165;
	num2=pakr%165;
	

	if(dollar>=1&&num2!=0){
	num=dollar;
	cent=dollar-num;
	cout<<num<<" dollar and "<<cent<<"cents";
	}
	
	if(dollar<1)
	{
		cout<<dollar<<"cents";
	}
	
	if(num2==0 &&dollar>=1)
	{
		cout<<dollar<<"dollars";
	}
		
	
	return 0;
	}
	
	
