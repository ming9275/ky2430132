/* 
 * File:   main.cpp
 * Author: Kai Ming Yau
 * Created on January 13, 2014, 8:56 PM
 * Problem 1
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants
const float M_ton_Oucs=35273.92;// A metric ton convert to ounces

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare variables
    float WgtCO, WgtCT, NBoxT;
    //Input the weight of a package breakfast cereal 
    cout<<"What is the weight of a package of breakfast cereal ";
    cout<<"in ounces? "<<endl;
    cin>>WgtCO;
    //Process - calculation the weight in metric tons and the number of boxes needed
    WgtCT = WgtCO/M_ton_Oucs;
    NBoxT=1/WgtCT;
    //Output the result
    cout<<"You have input the weight of a package of breakfast cereal";
    cout<<"in ounces = "<<WgtCO<<endl; 
    cout<<"********************************************************"<<endl;
    cout<<"The weight in metric tons = "<<WgtCT<<endl;
    cout<<"The number of boxes needed to yield"; 
    cout<<" 1 metrix ton of cereal = "<<NBoxT<<endl;
    
    //Exit Stage Right
    
    return 0;
}

