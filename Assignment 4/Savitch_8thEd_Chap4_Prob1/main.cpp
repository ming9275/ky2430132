/* 
 * File:   main.cpp
 * Author: Kai Ming Yau
 * Created on January 21, 2014, 8:31 AM
 * Prob 1
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//Global Constants
const float CNV_LIT_GAL=0.264179;// 1 liter = 0.264179 gallons
//Function Prototypes
float milpergal (float, float);
//Execution Begins Here!
int main(int argc, char** argv) {

   //Declare variables
    float NumLgas, Nmil, gasused;
    char answer;
    //loop
    do{
    //Input
    cout<<"Input the number of liters of gasoline consumed by your ";
    cout<<"car"<<endl;
    cin>>NumLgas;
    cout<<"Input the number of miles traveled by the car"<<endl;
    cin>>Nmil;
    //Output
    cout<<setprecision(2)<<fixed<<showpoint;
    cout<<"The number of miles per gallon ";
    cout<<"your car delivered = "<< milpergal(NumLgas, Nmil);
    cout<<" mil/gal"<<endl;
    cout<<"------------------------------------"<<endl;
    cout<<"Do you want to calculate again? (Y/N)"<<endl;
    cin>>answer;        
    }while (answer=='Y'||answer=='y');    
    return 0;
}

float milpergal (float num1, float num2){
    float milgal;
    num1*= CNV_LIT_GAL;
    milgal=num2/num1;
    return milgal;
}
