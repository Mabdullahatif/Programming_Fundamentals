//Description: This C++ code calculates the total number of leap years between two given 
//years (Year One and Year Two). It prompts the user to input the starting (Year One) and ending 
//(Year Two) years. Then, it calculates the number of leap years between the two input years using 
//a formula that considers the leap year rules (divisible by 4 but not divisible by 100 unless 
//divisible by 400). Finally, it displays the total number of leap years between the specified years.
#include <iostream>


using namespace std;


int main() {
	
	int Y1ear,Y2ear,LYears;
	
	cout<<"Enter your desired Year One from where to start : ";
	
	cin>>Y1ear;
	
	cout<<"Enter your desired Year Two for where to end : ";
	
	cin>>Y2ear;
	
	LYears=(Y2ear/4-Y2ear/100+Y2ear/400)-(Y1ear/4-Y1ear/100+Y1ear/400);
	
	cout<<"Total numbers of leap years between Year one & Year two are  = "<<LYears; 
	
    return 0;
    
}
