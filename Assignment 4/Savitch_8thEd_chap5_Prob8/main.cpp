/* 
 * File:   main.cpp
 * Author: Kai Ming Yau
 * Created on January 25, 2014, 7:37 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants
float COV_MET=0.3048;//1 foot =0.3048m
float COV_CM=100;//1meter=100cm;
float COV_IN=12;//12inches=1ft
// Function Prototypes
void readin1 (float &, float &);
float covfeet (float, float);
float covinches (float, float);
void out1 (float, float);
void readin2 (float &, float &);
float covMeter (float, float);
float covCMeter (float, float);
void out2 (float, float);
//Execution Begins Here!
int main(int argc, char** argv) {
//Declare Variables
float inches, feet,meter, cmeter;
char answer;
int num;
//loop
    do{
//decide if user want to convert unit from m and cm to ft and in.
//or convert from ft and in. to m and cm
        cout<<"What unit are you trying to convert to?"<<endl;
        cout<<"------------------------------------------------"<<endl;
        cout<<"if you want to convert the length from feet and inches to ";
        cout<<"meter and centimeter, please press 1 and enter"<<endl;
        cout<<"------------------------------------------------"<<endl;
        cout<<"if you want to convert the length from meter and centimeter to ";
        cout<<"feet and inches, please press 2 and enter."<<endl;
        cout<<"------------------------------------------------"<<endl;
        cin>>num;
        cout<<"------------------------------------------------"<<endl;
 if (num==2){
     readin1 (meter, cmeter);
     out1 (meter, cmeter);
 }else if (num==1){
     readin2 (meter, cmeter);
     out2 (meter, cmeter);
 }        
        cout<<"Do you want to run the program again? (Y/N)"<<endl;
        cin>>answer;
        }while (answer=='Y'||answer=='y');
    return 0;
}
void out1 (float m, float cm){
cout<<"The length in feet = "<<covfeet (m, cm)<<"foot."<<endl;
cout<<"The length in inches = "<<covinches (m, cm)<<"inches."<<endl;

}

float covinches (float m, float cm){
    float inches;
    covfeet (m, cm);
    return inches=(covfeet(m,cm)*COV_IN);
}

float covfeet (float m, float cm){
    float feet;
    m+=cm/COV_CM;
    return feet=m/COV_MET;   
}

void readin1 (float &m,float &cm){
    char dum;
 cout<<"Input the length in meter and in centimeter"<<endl;
 cout<<"then it will help you converting to feet and inches"<<endl;
 cout<<"format: xxxmxxxcm"<<endl;
 cin>>m>>dum>>cm>>dum>>dum;
}


void out2 (float ft, float in){
cout<<"The length in meter = "<<covMeter (ft, in)<<"m."<<endl;
cout<<"The length in centimeter = "<<covCMeter (ft, in)<<"cm."<<endl;

}

float covCMeter (float ft, float in){
    float cmeter;
    covMeter (ft, in);
    return cmeter=(covMeter(ft,in)*COV_CM);
}

float covMeter (float ft, float in){
    float meter;
    ft+=in/12;
    return meter=ft*COV_MET;   
}

void readin2 (float &ft,float &in){
    char dum;
 cout<<"Input the length in feet and in inches"<<endl;
 cout<<"then it will help you converting to meter and centimeter."<<endl;
 cout<<"format: xxxftxxxin"<<endl;
 cin>>ft>>dum>>dum>>in>>dum>>dum;
}
