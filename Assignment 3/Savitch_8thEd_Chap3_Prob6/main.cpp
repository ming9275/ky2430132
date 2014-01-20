/* 
 * File:   main.cpp
 * Author: Kai MIng Yau
 * Created on January 18, 2014, 3:26 PM
 */

//System Libraries
#include <iostream>
#include <math.h>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {

    //Declare Variables
    int a, b, c;
    float dismint;
    //Input 
    cout<<"This program is to solve a quadratic equation(ax^2+bx+c=0) ";
    cout<<"to find its roots"<<endl;
    cout<<"-----------------------"<<endl;
    cout<<"Input the value of a"<<endl;
    cin>>a;
    cout<<"Input the value of b"<<endl;
    cin>>b;
    cout<<"Input the value of c"<<endl;
    cin>>c;
    //Process
    dismint=b*b-4*a*c;
    //Output
    if(dismint==0){
    cout<<"The discriminant(b^2-4ac)= 0, so the equation";
    cout<<" has a single real root."<<endl;
    }
    else if(dismint>0){
    cout<<"The discriminant(b^2-4ac)> 0, so the equation";
    cout<<" has two real roots."<<endl;
    }
    else{
    cout<<"The discriminant(b^2-4ac)< 0, so the equation";
    cout<<" has two complex roots."<<endl;
    }
    //Exit Stage Right
    return 0;
}

