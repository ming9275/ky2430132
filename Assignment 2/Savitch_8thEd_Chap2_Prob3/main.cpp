/* 
 * File:   main.cpp
 * Author: Kai Ming Yau
 * Created on January 14, 2014, 6:27 PM
 * Chap2 Prob3
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//Global Constants
const float CONV_YR_MON = 12;
//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
//Declare variables
float ASalry,NASalry, MSalry, SIrate = 0.076;
//Input the annual salary
cout<<"Input the Annual Salary"<<endl;
cin>>ASalry;
cout<<"You have input $"<<ASalry<<endl;
//Calculate the new annual and monthly salary;
ASalry*=(1+SIrate);
MSalry=ASalry/CONV_YR_MON;
//Output the new annual and monthly Salary
cout<<setprecision(2);
cout<<fixed;
cout<<showpoint;
cout<<"The new annual salary = $"<<ASalry<<endl;
cout<<"The new monthly salary = $"<<MSalry<<endl;
//Exit Stage Right
    return 0;
}

