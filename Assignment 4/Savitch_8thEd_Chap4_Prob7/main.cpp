/* 
 * File:   main.cpp
 * Author: Kai Ming Yau
 * Created on January 22, 2014, 6:57 PM
 * Prob7
 */

//System Libraries
#include <iostream>
#include <cmath>
using namespace std;

//Global Constants
const float GRAVT_CON=6.673e-8;//Gravitational constants
const int   CONV_KILOG=1000;//conversion gram to kilogram
const int   CONV_METER=100;//convert cm to m
//Function Prototypes
float grafrce (float, float, float);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variable
    float distnce, mass1, mass2;
    char answer;
    //loop
    do{
    //Input the distance and two object masses
    cout<<"This program is going to calculate the gravitational ";
    cout<<"force between two objects"<<endl;
    cout<<"Please input the mass of the first object (kilogram)"<<endl;
    cin>>mass1;
    cout<<"Please input the mass of the second object (kilogram)"<<endl;
    cin>>mass2;
    cout<<"Please input the distance between two object (m)"<<endl;
    cin>>distnce;
    //Output
    cout<<"----------------------------------------"<<endl;
    cout<<"The gravitational force between two objects = ";
    cout<< grafrce (distnce, mass1, mass2)<<" Newton"<<endl;
    cout<<"Would you like to recalculate the gravitational ";
    cout<<"force between two objects? (Y/N)"<<endl;
    cin>>answer;
    }while (answer=='Y'||answer=='y');
    return 0;
}

float grafrce (float de, float m1, float m2){
    float force;
    return force=(GRAVT_CON*CONV_KILOG/pow(CONV_METER,3)*m1*m2)/pow(de,2);
}
