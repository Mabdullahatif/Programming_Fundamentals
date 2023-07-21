//Description: This C++ code calculates the sum, average, maximum, and minimum of a series of numbers 
//entered by the user. The code uses a while loop to continuously input numbers until a non-positive 
//number is entered (num > 0). The loop calculates the sum, maximum, and minimum of the entered numbers 
//as it iterates through them. After the loop ends, the code calculates the average by dividing the sum 
//by the number of entered values (var). Finally, the program prints the calculated sum, average, 
//maximum, and minimum values. The user is prompted to enter numbers until they input a non-positive 
//value to terminate the input process.
using namespace std;
#include <iostream>
int main(){
    int sum=0,average,max,num,var=0;
    cin>>num;
    int min=num;
    while(num>0){
        sum=sum+num;
        if(num>max){
            max=num;
        }
        if(num<min){
            min=num;
        }
        cin>>num;
        var++;
    }
    average=sum/var;
    cout<<"sum = "<<sum<<endl;
    cout<<"average = "<<average<<endl;
    cout<<"maximum = "<<max<<endl;
    cout<<"minimum = "<<min<<endl;
    return 0;
}

