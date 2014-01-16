/* 
 * File:   main.cpp
 * Author: Kai Ming Yau
 * Created on January 15, 2014, 5:23 PM
 * Chap2 Prob4
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
float ASalry,nmonth, rSalry,MSalry,SIrate = 0.076;
//Input the annual salary
cout<<"Input the Annual Salary"<<endl;
cin>>ASalry;
cout<<"You have input $"<<ASalry<<endl;
cout<<"Input the months for the retroactive salary "<<endl;
cin>>nmonth;
//Calculate the new annual and monthly salary;
MSalry=ASalry/CONV_YR_MON;
rSalry=MSalry*nmonth*SIrate;
//Output the new annual and monthly Salary
cout<<setprecision(2);
cout<<fixed;
cout<<showpoint;
cout<<"The retroactive salary = $"<<rSalry<<endl;
//Exit Stage Right
    return 0;
}


