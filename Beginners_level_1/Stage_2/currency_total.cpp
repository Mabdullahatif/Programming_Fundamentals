//Description: This C++ code calculates the total currency amount based on the number of five thousand,
// one thousand, and five hundred notes entered by the user. It prompts the user to enter the number 
// of five thousand, one thousand, and five hundred notes, respectively. Then, it calculates the total 
// currency amount using the formula 
// "total = (five_thousand * 5000) + (one_thousand * 1000) + (five_hundred * 500)". 
// Finally, it displays the total currency amount. This code assumes that the user is providing the 
// count of each denomination and not the actual currency values.
using namespace std;
#include <iostream>

int main()
{
    int fivet,onet,fiveh,t;
    cout<<"enter five thousand number = ";
    cin>>fivet;
    cout<<"enter one thousand number = ";
    cin>>onet;
    cout<<"enter five hundred number = ";
    cin>>fiveh;
    t=(fivet*5000+onet*1000+fiveh*500);
    cout<<t;

    return 0;
}
