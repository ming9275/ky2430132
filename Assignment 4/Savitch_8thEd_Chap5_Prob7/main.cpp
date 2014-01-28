/* 
 * File:   main.cpp
 * Author: Kai Ming Yau 
 * Created on January 25, 2014, 6:50 PM
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
float covfeet (float, float);
float covinches (float, float);
void out (float, float);
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float meter, cmeter;
    char answer;
    //loop
    do{
    //Read in data
    readin (meter, cmeter);
    out (meter, cmeter);
   cout<<"-----------------------------------------"<<endl;
   cout<<"Do you want to run the program again? (Y/N)"<<endl;
    cin>>answer;
    }while (answer=='Y'||answer=='y');
    return 0;
}

void out (float m, float cm){
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

void readin (float &m,float &cm){
    char dum;
    cout<<"This program is about length conversion"<<endl;
 cout<<"Input the length in meter and in centimeter"<<endl;
 cout<<"then it will help you converting to feet and inches"<<endl;
 cout<<"format: xxxmxxxcm"<<endl;
 cin>>m>>dum>>cm>>dum>>dum;
}
