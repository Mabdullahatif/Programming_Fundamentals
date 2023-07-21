//Description: This C++ code determines which cat will reach the mouse first in a simple chase scenario. 
//It prompts the user to input the positions of three entities: Cat A, Cat B, and the Mouse 
//(positions represented by x, y, and z respectively). The CatsAndMouse function calculates the 
//distances of Cat A and Cat B from the Mouse and returns 1 if Cat A will reach the mouse first, 
//-1 if Cat B will reach the mouse first, and 0 if both cats reach the mouse at the same time.
using namespace std;
#include <iostream>
#include <cmath>
int CatsAndMouse(float a,float b,float c){
    int d1 = abs(a - c), d2 = abs(b - c);
    if (d1 < d2){
    	return 1;
	}
	else if(d1>d2){
		return -1;
	}
	else 
	return 0;
}
int main(){
        int x;
        int y;
        int z;
        cin >> x >> y >> z;
       int d =  CatsAndMouse(x,y,z);
       if (d==1){
      	cout<<"CAT A";
	   }   
	   else if (d==-1){
	   	cout <<"CAT B";
	   }
	   else 
	   cout<<"MOUSE";
    }
