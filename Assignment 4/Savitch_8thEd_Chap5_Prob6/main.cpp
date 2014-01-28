/* 
 * File:   main.cpp
 * Author: Kai Ming Yau
 * Created on January 25, 2014, 4:40 PM
 * Prob6
 */

//System libraries
#include <iostream>
using namespace std;

//Global Constants
float COV_MET=0.3048;//1 foot =0.3048m
float COV_CM=100;//1meter=100cm;
float COV_IN=12;//12inches=1ft
//Function Prototypes
void readin (float &, float &);
float covMeter (float, float);
float covCMeter (float, float);
void out (float, float);
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float inches, feet;
    char answer;
    //loop
    do{
    //Read in data
    readin (feet, inches);
    out (feet, inches);
   cout<<"-----------------------------------------"<<endl;
   cout<<"Do you want to run the program again? (Y/N)"<<endl;
    cin>>answer;
    }while (answer=='Y'||answer=='y');
    return 0;
}

void out (float ft, float in){
cout<<"The length in meter = "<<covMeter (ft, in)<<"m."<<endl;
cout<<"The length in centimeter = "<<covCMeter (ft, in)<<"cm."<<endl;

}

float covCMeter (float ft, float in){
    float cmeter;
    return cmeter=(covMeter(ft,in)*COV_CM);
}

float covMeter (float ft, float in){
    float meter;
    ft+=in/COV_IN;
    return meter=ft*COV_MET;   
}

void readin (float &ft,float &in){
    char dum;
    cout<<"This program is about length conversion"<<endl;
 cout<<"Input the length in feet and in inches"<<endl;
 cout<<"then it will help you converting to meter and centimeter."<<endl;
 cout<<"format: xxxftxxxin"<<endl;
 cin>>ft>>dum>>dum>>in>>dum>>dum;
}
