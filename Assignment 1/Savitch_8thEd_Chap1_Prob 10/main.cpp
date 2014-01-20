/* 
 * File:   main.cpp
 * Author: Kai Ming Yau
 * Created on January 9, 2014, 8:00 AM
 * Problem 10 Output a "C" letter
 */

//System Libraries
#include <iostream>

using namespace std;

//Global Constants

//Function Prototypes

//Execution begins here

int main(int argc, char** argv) {

    char C[1];// character
    
    //input a character from the keyboard
    cout<<"Input a character from the keyboard: ";
    cin>>C;
    //output the result
    cout<<"    "<<C<<" "<<C<<" "<<C<<endl;
    cout<<"   "<<C<<"    "<<C<<endl;
    cout<<"  "<<C<<endl;
    cout<<"  "<<C<<endl;
    cout<<"  "<<C<<endl;
    cout<<"  "<<C<<endl;
    cout<<"  "<<C<<endl;
    cout<<"   "<<C<<"    "<<C<<endl;
    cout<<"    "<<C<<" "<<C<<" "<<C<<endl;
    
    //Exit Stage Right
    return 0;
}

