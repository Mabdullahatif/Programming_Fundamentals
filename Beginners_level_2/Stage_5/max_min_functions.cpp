//Description: This C++ code defines two functions: max and min. The max function takes three integers 
//as input and returns the maximum of the three numbers. The min function takes three integers as 
//input and returns the minimum of the three numbers. The main function prompts the user to enter 
//three integers (a, b, and c) and then calls the max and min functions to calculate and display 
//the maximum and minimum values among the three numbers.
using namespace std;
#include <iostream>
#include <cmath>
int max (int a, int b, int c)
{
  int result;
  if (a > b && a > c){
    result = a;
  }
  else if (b > a && b > c){
    result = b;
  }
  else 
    result = c;

  return result;
}
int min (int a ,int b ,int c)
{
    int result;
    if (a<b && a<c){
    result=a;
    }
    else if (b<a && b<c){
    result=b;
    }
    else
    result=c;
    
    return  result;
}

int main (){
    int a,b,c;
    cin>>a>>b>>c;
    cout<<"MAX="<<max(a,b,c)<<endl<<"MIN="<<min(a,b,c);
    return 0;
}
