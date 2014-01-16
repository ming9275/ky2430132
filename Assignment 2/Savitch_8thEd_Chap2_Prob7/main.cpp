/* 
 * File:   main.cpp
 * Author: Kai Ming Yau
 * Created on January 15, 2014, 7:52 AM
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
//Declare Variables
    float NWkHr, grspy, ntpy, etrWhr;
    float SStax, fitax, statax,unidue=10, Dfee=35, addfee;
    int NDpt;      
//Input the hours worked per week and the number of dependents
    cout<<"Input the number of hours worked in a week "<<endl;
    cin>>NWkHr;
    cout<<"Input the number of dependents you have"<<endl;
    cin>>NDpt;
//Process - calculate the extra work hours, gross pay, each withholding amount 
//          and the net take-home pay for week
    if (NWkHr>=40){
    etrWhr=NWkHr-40;
    grspy=40*16.78+etrWhr*16.78*1.5;
    }else{
    grspy=NWkHr*16.78;
    }
    SStax=grspy*0.06;
    fitax=grspy*0.14;
    statax=grspy*0.05;
    addfee=NDpt*Dfee;
    ntpy=grspy-SStax-fitax-statax-unidue-addfee;
//Output 
    cout<<setprecision(2);
    cout<<fixed;
    cout<<showpoint;
    cout<<"The gross pay in a week = $"<<grspy<<endl;
    cout<<"The Social Security tax = $"<<SStax<<endl;
    cout<<"The federal income tax  = $"<<fitax<<endl;
    cout<<"The state income tax    = $"<<statax<<endl;
    cout<<"The additional fee for "<<NDpt<<" dependents = $"<<addfee<<endl;
    cout<<"The net take-home pay for the week  = $"<<ntpy<<endl;
    cout<<"-------------------------------------------------------"<<endl;
  
//Exit Stage Right

  
        return 0;
}

