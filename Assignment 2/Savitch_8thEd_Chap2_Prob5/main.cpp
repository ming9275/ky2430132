/* 
 * File:   main.cpp
 * Author: Kai Ming Yau
 * Created on January 14, 2014, 1:46 PM
 * Chap 2 Prob 5 calculate the face value and monthly payment
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//Global Constants
const float CONV_PREC = 100;
const float CONV_MOTH_YR = 12;
//Function Prototypes

//Execution Begins here!
int main(int argc, char** argv) {

    //Declare variables
    float amnt, intrate, dutnM, dutnYr, facevle, Mpymt;
    //Input the amount needed to receive, interest rate, and duration in months
    cout<<"Input the amount you need to receive in $"<<endl;
    cin>>amnt;
    cout<<"Input the interest rate in %"<<endl;
    cin>>intrate;
    cout<<"Input the duration in months"<<endl;
    cin>>dutnM;
    //conversion
    intrate/=CONV_PREC;
    dutnYr=dutnM/CONV_MOTH_YR;
    //Calculate the face value and monthly payment
    facevle = amnt/(1-intrate*dutnYr);
    Mpymt = facevle/dutnM;
    //Output
    cout<<"***********************************"<<endl;
    cout<<setprecision(2);
    cout<<fixed;
    cout<<showpoint;
    cout<<"THe face value required in order for you to receive";
    cout<<" the amount needed = $"<<facevle<<endl;
    cout<<"The monthly payment = $"<<Mpymt<<endl;  
    //Exit Stage right 
    return 0;
}

