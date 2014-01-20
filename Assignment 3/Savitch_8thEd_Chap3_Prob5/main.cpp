/* 
 * File:   main.cpp
 * Author: Kai Ming Yau
 * Created on January 18, 2014, 1:05 PM
 * Prob 5
 */

//System Libraries
#include <iostream>
#include <string>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float cost;
    int time,NumMin;
    char flet,slet;
    //Input
    cout<<"Input the day you had the call"<<endl;
    cout<<"For exmaple, Monday=Mo, Tuesday=Te, etc"<<endl;
    cin>>flet>>slet;
    cout<<"Input the time your call started in 24 hour notation"<<endl;
    cout<<"For example,13:00, you can input as 1300"<<endl;
    cin>> time;
    cout<<"Input the length of the call in mins"<<endl;
    cin>>NumMin;
    //Process
    if (flet=='M'||flet=='m'){
        if (time>=800 && time<=1800){
                cout<<"The period is between 8:00am to 6:00pm."<<endl;
                cost=0.40*NumMin;
                cout<<"So the cost is $"<<cost<<endl;
        }else{ 
                cout<<"The priod is before 8:00am and after 6:00pm."<<endl;
                cost=0.25*NumMin;
                cout<<"So the cost is $"<<cost<<endl;
        }  
    }
    if (flet=='T'||flet=='t'&&slet=='E'||slet=='e'){
        if (time>=800 && time<=1800){
                cout<<"The period is between 8:00am to 6:00pm."<<endl;
                cost=0.40*NumMin;
                cout<<"So the cost is $"<<cost<<endl;
        }else{ 
                cout<<"The priod is before 8:00am and after 6:00pm."<<endl;
                cost=0.25*NumMin;
                cout<<"So the cost is $"<<cost<<endl;
        }  
    } 
     if (flet=='W'||flet=='e'){
        if (time>=800 && time<=1800){
                cout<<"The period is between 8:00am to 6:00pm."<<endl;
                cost=0.40*NumMin;
                cout<<"So the cost is $"<<cost<<endl;
        }else{ 
                cout<<"The priod is before 8:00am and after 6:00pm."<<endl;
                cost=0.25*NumMin;
                cout<<"So the cost is $"<<cost<<endl;
        }  
     }
    if (flet=='F'||flet=='f'){
        if (time>=800 && time<=1800){
                cout<<"The period is between 8:00am to 6:00pm."<<endl;
                cost=0.40*NumMin;
                cout<<"So the cost is $"<<cost<<endl;
        }else{ 
                cout<<"The priod is before 8:00am and after 6:00pm."<<endl;
                cost=0.25*NumMin;
                cout<<"So the cost is $"<<cost<<endl;
        }  
    }
    if (flet=='S'||flet=='s'){
                cost=0.15*NumMin;
                cout<<"Since the rate in Saturday and Sunday is same in";
                cout<<" different period of time, so the cost is $"<<cost<<endl;
    }
    //Exit Stage Right 
    return 0;
}

