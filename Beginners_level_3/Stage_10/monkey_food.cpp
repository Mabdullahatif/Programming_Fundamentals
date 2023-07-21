Description: This C++ program takes input regarding the amount of food eaten by three monkeys over 
five days and calculates the average, maximum, and minimum food consumption among them. 
It then presents a report displaying the calculated values.

#include <iostream>
using namespace std;
int size[10][10];
int Amax, Amin;
double avg;

void dataInput(){
    int max=0, min=0;
    double total=0;
    for(int i=0; i<3; i++){
        for(int c=0; c<5; c++){
            cout << "Enter food eaten: ";
            cin >> size[i][c];
            total = total + size[i][c];
            if(i==0 && c==0){
                max =size[i][c];
                Amax = i+1;
                min = size[i][c];
                Amin = i+1;
            }
            if(min > size[i][c])
                min = size[i][c];
            if(max < size[i][c])
                max = size[i][c];
        }
        if(total > max)
            Amax = i+1;
        if(min > total)
            Amin = i+1;
    }
    avg = total / 15;
}
int main(){
    dataInput();
    cout << endl << endl << "------------------ REPORT ------------------" << endl
         << "The average food eaten by all monkeys is: " << avg << endl
         << "The maximum food eaten monkey " << Amax << endl
         << "The minimum food eaten monkey " << Amin << endl;
    return 0;
}
