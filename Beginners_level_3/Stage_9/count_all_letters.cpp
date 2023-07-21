//Description: This C++ program counts the occurrences of each letter in an input array of characters. 
//The program takes user input for an array of characters (a[]) and its length (length). It then calls 
//the function countAllLetters() to count the occurrences of each letter in the array. The function 
//iterates through the input array and uses another array (f[]) to keep track of already counted 
//characters. It prints the count of each letter in the array.
#include<iostream>
using namespace std;
void countAllLetters( int Numbers[], int length, int text[]){
    char a[100];
    int number,count;
    for(int i=0;i<10;i++){
    cin>>a[i];
    }
    char f[10]={0};
      for(int i=0;i<10;i++){
      count=0;
       if(f[i]!=1){
         for(int j=0;j<10;j++){
             if(a[i]==a[j]){
             count++;
             f[j]=1;
   }
             }
             if((count>0)||(count==1)){
              cout<<" OCCURENCES OF "<<a[i]<<" IS="<<count<<endl;
            }
        }
    }
}
int main()
{     int Numbers[10];
      int N;
      int F[10];
countAllLetters(Numbers,  N,  F);
return 0;
}
