/* 
 * File:   main.cpp
 * Author: Kai Ming Yau
 * Created on January 10, 2014, 10:07 AM
 * Problem 9 Calculate distance
 */

//System Libraries
#include <iostream>
using namespace std;

//System Constants
const float GRAVITY=32.174;//Units = (ft)

//Function Prototypes

//Execution Begins here!

int main(int argc, char** argv) {

    //Declare variables
    float time, frefall;
    //input the time
    cout<<"input the time in seconds ";
    cin>>time;
    //calculate the distance dropped
    frefall=GRAVITY*time*time*1/2;
    //output the result
    cout<<"The Distance dropped = "<<frefall<<"(ft)"<<endl;
    //Exit Stage Right
    return 0;
}

