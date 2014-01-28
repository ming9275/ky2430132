/* 
 * File:   main.cpp
 * Author: Kai Ming Yau
 * Created on January 27, 2014, 7:09 PM
 */

//System Libraries
#include <iostream>
using namespace std;
//Global Constants

//Function Prototypes

//Execution Begins here!
int main(int argc, char** argv) {
//Declare Variables
    bool x=true, y=true;
 //Output the table heading
    cout<<"X Y !X !Y X&&Y X||Y X^Y X^Y^Y X^Y^X "
        <<"!(X&&Y) !X||!Y !(X||Y) !X&&!Y"<<endl;
 //Output the rows
    for (int count=1; count<=4; count++){
        if (count==2){
            y=false;
        }else if (count==3){
            x=false;
        }else{
            x=false, y=false;
        }
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"  ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x||y?'T':'F')<<"    ";
    cout<<(x^y?'T':'F')<<"    ";
    cout<<(x^y^y?'T':'F')<<"     ";
    cout<<(x^y^x?'T':'F')<<"      ";
    cout<<(!(x&&y)?'T':'F')<<"       ";
    cout<<(!x||!y?'T':'F')<<"      ";
    cout<<(!(x||y)?'T':'F')<<"       ";
    cout<<(!x&&!y?'T':'F')<<"  ";
    cout<<endl;
    }
    return 0;
}

