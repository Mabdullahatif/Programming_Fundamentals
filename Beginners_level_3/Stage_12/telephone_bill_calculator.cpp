//Description: This C++ program calculates the telephone bill based on the call start time, 
//call duration in minutes, and the day of the call. The program allows the user to enter the 
//call start time and duration, along with the day of the call. It then calculates the bill 
//amount based on the rate per minute depending on the day and time of the call.
//
//Main Function: The main() function prompts the user to enter the call start time (between 0 and 2400) 
//and the call duration in minutes. It also asks for the day of the call. The program then calculates 
//the bill amount based on the day and time using the following rates:
//
//On weekdays (Monday to Friday): $0.40 per minute for calls between 8:00 AM and 6:00 PM, and $0.25 per 
//minute for other times.
//On weekends (Saturday and Sunday): $0.15 per minute.
//After calculating the bill amount, it displays the result and asks the user if they want to run the 
//program again. If the user enters 'Y' or 'y', the program will repeat. Otherwise, it will end with 
//the message "program ended".
#include<iostream>
#include<string>
using namespace std;
int main (){
	int minutes, starting_time;
    double price, rate;
	string day; 
	char option;
	do
	{
		cout << "Enter start time of the call between 0 and 2400 =  ";
		cin >> starting_time;
		while( starting_time < 0 ||  starting_time >= 2400)
		{
			cout << "\nInvalid time.";
			cin >>  starting_time;
		}
		cout<<"enter minutes =  ";
		cin >> minutes;
		cout<<" MONDAY || monday \n TUESDAY || tuesday \n WEDNESDAY || wednesday \n THURSDAY ||thursday \n FRIDAY ||friday \n SATURDAY || saturday \n SUNDAY || sunday \n";
		cout << "enter day =  ";
		cin >> day;
		if( day == "MONDAY"|| day == "monday"|| day == "tuesday" || day == "TUESDAY"  || day =="wednesday" || day == "WEDNESDAY" || day =="THURSDAY" || day == "thursday"	|| day == "friday" || day =="FRIDAY"){ 
			if ( starting_time >= 800 && starting_time <= 600) 
				rate = 0.40; 
			else 
				rate = 0.25;
			price = minutes * rate;
			cout<< price<<"$"<<endl;
		}
		else if(day =="saturday" || day =="SATURDAY" || day =="sunday" || day =="SUNDAY"){
			rate = 0.15;
			price = minutes * rate;
			cout << price<<"$"<<endl;
		}
		else
			cout << "invalid!!!";
		cout << endl << "want to run again ? ";
		cin >> option;
	}
	while( option =='Y' || option == 'y');
	cout << "program ended"; 
	return 0;
}
