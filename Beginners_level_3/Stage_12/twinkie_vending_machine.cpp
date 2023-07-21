//Description: This C++ program simulates a twinkie vending machine. The user can insert coins of 
//different denominations (Dollar, Quarter, Dime, Nickel) to make the total amount equal to or 
//greater than the cost of a twinkie, which is $3.50. The program will display the total amount 
//inserted so far and whether the user has enough money to purchase a twinkie or not. If the user 
//has enough money, it will display "Enjoy your twinkie." If there is any excess amount after 
//purchasing the twinkie, it will also show the change in cents.
#include <iostream>
using namespace std;
const double Dollar= 1;
const char D=1 ,Q=0.25 ,d=0.1,N=0.05;
double  coin,total;
const double Quater = 0.25,Dime = 0.1 ,Nickel = 0.05;
const double Twinkies = 3.5;

bool valid(int i){
    if (i == 'D' || i == 'Q' || i =='d' || i =='N' || i == Quater || i == Dime || i == Nickel || i ==Dollar )
        return true;
    else
        return false;
}
void coin_value(){
    do{   
    	cout << "Enter = (Dollar=1,Quarter=0.25, Dime=0.1,Nickel=0.05) : ";
        cin >> coin;
        if(valid(coin)){
            total += coin;
            cout  <<total<<"$"<<endl;
        }
        else{
            cout << "Invalid entry, try again" << endl;
        }
    } while (total < Twinkies);
    cout << "Enjoy you twinkie" << endl;
    if (total > Twinkies)
    {
        cout << "Your change is: " << total - Twinkies << " cents" << endl;
    }
}
int main()
{
    coin_value();
    return 0;
}

 /* my coming output
Enter = (Dollar=1,Quarter=0.25, Dime=0.1,Nickel=0.05) : 1
1$
Enter = (Dollar=1,Quarter=0.25, Dime=0.1,Nickel=0.05) : 1
2$
Enter = (Dollar=1,Quarter=0.25, Dime=0.1,Nickel=0.05) : 1
3$
Enter = (Dollar=1,Quarter=0.25, Dime=0.1,Nickel=0.05) : 1
4$
Enjoy you twinkie
Your change is: 0.5 cents */


