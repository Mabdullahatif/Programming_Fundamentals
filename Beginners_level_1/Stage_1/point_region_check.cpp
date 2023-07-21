//Description: This C++ code checks if a given point lies within a rectangular region defined by its 
//top-left and bottom-right corners. It prompts the user to enter the coordinates of a point (x, y) 
//and the coordinates of the top-left (x1, y1) and bottom-right (x2, y2) corners of the rectangle.
//
//The code then checks if the point lies within the rectangle using the following condition:
//
//If the x-coordinate of the point is greater than x1, less than x2, the y-coordinate of the point 
//is greater than y1, and less than y2, then it sets the variable 'a' to 1 
//(indicating that the point lies inside the rectangle).
//After the condition check, it prints "yes, it's in region" if the point lies within the rectangle, 
//and "no, it's not in region" if the point is outside the rectangle. Note that there's a small issue 
//with the code: a-1 should be changed to a=1 to correctly set the 'a' variable to 1 when the 
//point lies inside the rectangle.
#include <iostream>
using namespace std;
int main(){
	int x=0,y=0,a=0,x1=0,y1=0,x2=0,y2=0;
	cout<<"enter x-coordinate of the point :";
    cin>>x;
    cout<<"\n";
    cout<<"enter y-coordinate of the point :";
    cin>>y;
    cout<<"\n";
    cout<<"enter x-coordinate of left top corner :";
    cin>>x1;
    cout<<"\n";
    cout<<"enter y-coordinate of left top corner :";
    cin>>y1;
    cout<<"\n";
    cout<<"enter x-coordinate of right bottom corner :";
    cin>>x2;
    cout<<"\n";
    cout<<"enter y-coordinate to right bottom corner :";
    cin>>y2;
    cout<<"\n";
    if (x >x1 && x <x2 && y >y1 && y <y2 ){
    	a-1;
	}
	else {
		if(a-1){
			cout<<"yes it's in region";
			cout<<"\n";
		}
		else{
			cout<<"no it's not in region";
			cout<<"\n";
		}
	}
    
return 0;
}
