//Description: This C++ code prints a rectangle pattern using the character 'o'. The code defines a 
//function rectangle that takes two integers height and width as input and prints a rectangle of 'o' 
//characters with the specified dimensions. The function uses nested loops to iterate through the 
//rows and columns of the rectangle and prints 'o' for each position. In the main function, the user 
//is prompted to enter the height and width of the rectangle. If the input height or width is less 
//than or equal to 0, the program prints "rectangle printing is not possible !!!". Otherwise, it calls 
//the rectangle function with the provided height and width to print the rectangle pattern.
#include <iostream>
using namespace std;

void rectangle(int height,int width){
    for(int i=0;i<height;i++){
        for(int n=0;n<width;n++){
            cout<<"o ";
        }
        cout<<endl;
    }
}
int main (){
    int height,width;
    cout<<"enter height =";
    cin>>height;
    cout<<"enter width =";
    cin>>width;
    if(height<=0 || width<=0){
        cout<<"rectangler printing is not possible !!!";
    }
    else{
        rectangle( height, width);
    }
    return 0;
}    
    

