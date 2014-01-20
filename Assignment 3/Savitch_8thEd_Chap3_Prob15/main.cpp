/* 
 * File:   main.cpp
 * Author: Kai Ming Yau
 * Created on January 18, 2014, 7:24 PM
 * Prob14
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants
const float y=62.4;//specific weight of the fluid
const float PI=3.1415926535;
//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {

    //declare variable
    float volume,weight, radius, Fb;//buoyant force
    
    //input 
    cout<<"This program is to determine if the sphere will sink or float"<<endl;
    cout<<"Input the weight of the sphere in pounds"<<endl;
    cin>>weight;
    cout<<"Input the radius of the sphere in ft"<<endl;
    cin>>radius;
    //Calculate the Buoyancy
    volume=PI*radius*radius*radius*4/3;
    Fb=volume*y;
    //Output
    cout<<"Fb = "<<Fb<<endl;
    if(Fb>=weight){
        cout<<"The sphere will float in water."<<endl;
    }else
        cout<<"The sphere will sink in water."<<endl;
    //Exit Stage Right
    return 0;
}

