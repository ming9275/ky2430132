/* 
 * File:   main.cpp
 * Author: Kai Ming Yau
 * Created on January 14, 2014, 7:32 PM
 * Prob6
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
//Declare Variables
 int max, npeople, addpple, excpple;
//Input the maximum room capacity and the number of people attended to meeting
 cout<<"What is the maximum room capacity of the meeting room?"<<endl;
 cin>>max;
 cout<<"How many people is attending to the meeting?"<<endl;
 cin>>npeople;
 //Calculate the additional people may legally attend
 addpple=max-npeople;
 excpple=npeople-max;
 //Output
 if (npeople <= max){
        cout<<"It is legal to hold the meeting and ";
        cout<<addpple<<" more people may attend the meeting legally.";
 }else{
        cout<<"It is illegal to hold the meeting and ";
        cout<<excpple<<" people must be excluded in order to meet the fire ";
        cout<<"regulation."<<endl;
 }
  //Exit Stage Right      
    return 0;
}

