//Description: This C++ code is a simple guessing game. It generates a random number between 1 and 10 
//and asks the user to guess the number. The user's input is compared with the random number, and the 
//code provides feedback to the user to indicate if their guess is too low or too large. 
//The user continues to guess until they correctly guess the random number, and a "Congratulations!" 
//message is displayed when the user guesses correctly. The code uses a while loop to keep the game 
//running until the user wins.
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int randomNum,userNumber;
    bool win=false;
    srand(time(0));
    randomNum=1+rand()%10;
    cout<<"can you guess the number?"<<endl;
    cin>>userNumber;
    while(!win){
        if(userNumber<randomNum){
        cout<<"too low try again"<<endl;
        cin>>userNumber;
            
        }
        else if(userNumber>randomNum){
            cout<<"too large try again"<<endl;
            cin>>userNumber;
        }
        else{
            cout<<"congratulations!!"<<endl;
            win=true;
        }
    }


    return 0;
}


