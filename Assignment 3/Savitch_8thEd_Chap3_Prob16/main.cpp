/* 
 * File:   main.cpp
 * Author: Kai Ming Yau
 * Created on January 17, 2014, 5:51 PM
 */

//System Libraries
#include <iostream>
using namespace std;
//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
//Declare variables
    float F,C;
    C=100;
    //loop
    while (C >=-40){
    F = C*9/5+32;
    cout<<C<<" degrees C = "<<F<<" degrees F"<<endl;
    C--;
    }   
//Exit Stage Right
    return 0;
}
