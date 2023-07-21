//Description: This C++ code is a simple rock-paper-scissors game for two players. 
//It prompts each player to enter their choice by inputting either 1 for rock, 2 for paper, 
//or 3 for scissors. The code then compares the choices and displays the winner or declares the 
//game as a draw based on the following rules:
//
//If both players choose the same option, the game is declared a draw.
//If one player chooses rock and the other chooses paper, the player who chose paper wins.
//If one player chooses rock and the other chooses scissors, the player who chose rock wins.
//If one player chooses paper and the other chooses scissors, the player who chose scissors wins.
//The code displays the result of the game based on the players' choices.
using namespace std;
#include <iostream>

int main()
{
    int P1,P2;
    cout<<"player1 <>enter 1 for rock 2 for paper 3 scissors";
    cin>>P1;
    cout<<"player2 <>enter 1 for rock 2 for paper 3 scissors";
    cin>>P2;
    if(P1== 1 && P2==1)
    cout<<"game draw";
    else if (P1== 1 && P2==2)
    cout<<"P2 wins";
    else if (P1== 1 && P2==3)
    cout<<"P1 wins";
    
    if(P1== 2 && P2==1)
    cout<<"P1 wins";
    else if (P1== 2 && P2==2)
    cout<<"game draw";
    else if (P1== 2 && P2==3)
    cout<<"P2 wins";
    
    if(P1== 3 && P2==1)
    cout<<"P2 wins";
    else if (P1== 3 && P2==2)
    cout<<"P1 wins";
    else if (P1== 3 && P2==3)
    cout<<"game draw";
    

    return 0;
}

