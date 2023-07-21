//Description: This C++ code converts a temperature from Centigrade to Fahrenheit. 
//It prompts the user to enter the temperature in Centigrade (Celsius) and then 
//calculates the equivalent temperature in Fahrenheit using the formula (T * 9/5) + 32. 
//Finally, it displays the converted temperature in Fahrenheit.
#include<iostream>
using namespace std;
int main()
{
    int T;
    cout << "Enter temperature in Centigrade";
    cin>>T;
    cout << (T*9/5)+32 <<"Fahrenheit"<<endl;
    return 0;
}
