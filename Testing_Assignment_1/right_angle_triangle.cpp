//Description: This C++ code takes input measurements of three sides (TS1, TS2, and TS3) and 
//determines whether a right-angle triangle can be formed using these measurements. 
//It checks if any of the combinations of the three sides satisfy the Pythagorean 
//theorem (a^2 + b^2 = c^2), and if so, it prints a message indicating that a right-angle 
//triangle can be formed. Otherwise, it prints a message stating that a right-angle triangle 
//cannot be formed.

using namespace std;

#include <iostream>

int main(){

	
	int TS1,TS2,TS3;
	cout   <<"Enter measurement of TS1:";
	cin  >>TS1;
	cout  <<"\n";
	cout   <<"Enter measurement of TS2:";
	cin  >>TS2;
	cout  <<"\n";
	cout   <<"Enter measurement of TS3:";
	cin  >>TS3;
	cout  <<"\n";
	if(TS1*TS1+TS2*TS2==TS3*TS3 || TS1*TS1+TS3*TS3==TS2*TS2 || TS2*TS2+TS3*TS3==TS1*TS1){
		cout<<"By These Measurments A Right Angle Triangle Can Be Formed !!!";
	}
	else{
		cout<<"By These Measurments A Right Angle Triangle Can Not Be Formed !!!";
	}	
  return 0;
}



