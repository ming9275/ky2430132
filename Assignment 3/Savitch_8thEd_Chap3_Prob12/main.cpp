/* 
 * File:   main.cpp
 * Author: Kai Ming Yau
 * Created on January 18, 2014, 7:16 PM
 */
//System Libraries
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
//Global Constant

//Function Prototypes

//Execution Begins Here!
int main (){
    //Declare variable
    float pi = 0, n;
    //Input
    cout<<"This program approximates pi using an n-term series expansion.\n"
        <<"Enter the value of n > ";
    cin>>n;
    //Output loop
    for (float i = 1; i <= n; i++){
        pi += pow(-1, i+1)*(4/(2*i-1));
    }
    cout<<setprecision(20)<<fixed<<showpoint;
    cout<<"pi"<<"["<<static_cast <int> (n)<<"]"<<" = "<<pi;
    //Exit Stage Right
    return (0);
}