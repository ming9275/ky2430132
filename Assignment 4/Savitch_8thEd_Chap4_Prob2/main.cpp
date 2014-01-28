/* 
 * File:   main.cpp
 * Author: Kai Ming Yau
 * Created on January 21, 2014, 6:20 PM
 * Prob2
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//Global Constants
const float CNV_LIT_GAL=0.264179;// 1 liter = 0.264179 gallons
//Function Prototypes
float milpergal1 (float, float);
float milpergal2 (float, float);
//Execution Begins Here!
int main(int argc, char** argv) {

   //Declare variables
    float NumLgas1, Nmil1,NumLgas2, Nmil2;
    char answer;
    //loop
    do{
    //Input
    cout<<"Input the number of liters of gasoline consumed by your ";
    cout<<"first car"<<endl;
    cin>>NumLgas1;
    cout<<"Input the number of miles traveled by the first car"<<endl;
    cin>>Nmil1;
    cout<<"Input the number of liters of gasoline consumed by your ";
    cout<<"second car"<<endl;
    cin>>NumLgas2;
    cout<<"Input the number of miles traveled by the second car"<<endl;
    cin>>Nmil2;
    cout<<"--------------------------------------------"<<endl;
    //Output
    cout<<setprecision(2)<<fixed<<showpoint;
    cout<<"The number of miles per gallon ";
    cout<<"first car delivered = "<< milpergal1(NumLgas1, Nmil1);
    cout<<" mil/gal"<<endl;
    cout<<"The number of miles per gallon ";
    cout<<"second car delivered = "<< milpergal2(NumLgas2, Nmil2);
    cout<<" mil/gal"<<endl;
    if (milpergal1(NumLgas1, Nmil1)>milpergal2(NumLgas2, Nmil2)){
        cout<<"The first car has the best fuel efficiency."<<endl;
    }
    if (milpergal2(NumLgas2, Nmil2)>milpergal1(NumLgas1, Nmil1)){
        cout<<"The second car has the best fuel efficiency."<<endl;
    }
    if (milpergal2(NumLgas2, Nmil2)== milpergal1(NumLgas1, Nmil1)){
            cout<<"The first and second cars have the same fuel";
    cout<<"efficiency."<<endl;
    }
    cout<<"------------------------------------"<<endl;
    cout<<"Do you want to calculate again? (Y/N)"<<endl;
    cin>>answer;        
    }while (answer=='Y'||answer=='y');    
    return 0;
}

float milpergal1 (float num1, float num2){
    float milgal;
    num1*= CNV_LIT_GAL;
    milgal=num2/num1;
    return milgal;
}
float milpergal2 (float num1, float num2){
    float milgal;
    num1*= CNV_LIT_GAL;
    milgal=num2/num1;
    return milgal;
}
