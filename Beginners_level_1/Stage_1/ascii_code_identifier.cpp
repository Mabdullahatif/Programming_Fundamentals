//Description: This C++ code identifies the type of character represented by a given ASCII code. 
//It prompts the user to enter an ASCII code, and then it checks the following conditions:
//If the ASCII code is between 65 and 90 (inclusive), it prints "represents an uppercase alphabet".
//If the ASCII code is between 97 and 122 (inclusive), it prints "represents a lowercase alphabet".
//If the ASCII code is between 48 and 57 (inclusive), it doesn't print any message (there is an empty block).
//If the ASCII code is less than 128, but none of the previous conditions are met, it prints "does not represent an ASCII code".
#include <iostream>

using namespace std;
int main (){
    int CODE; 
    cout<<"ENTER ANY ASCII CODE:";
    if(CODE >96 & CODE  < 91){
        cout <<"represents an upper case alphabets";
    }
    else{
        if (CODE > 96 & CODE <123){
            cout <<"represents a lower case alphabets";
            
        }
        else{
            if (CODE >47 & CODE <58){
                
            }
            else{
                if (CODE < 128){
                    cout <<"does not represent an ASCII code";
                }
            }
        }
    }
    
    
    
    
    
    
    
    return 0;
}
