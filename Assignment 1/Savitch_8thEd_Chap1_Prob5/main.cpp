/* 
 * File:   main.cpp
 * Author: Kai Ming Yau
 * Created on January 7, 2014, 4:09 PM
 * Probem 5 - write a program that can read two integers 
 * and output the sum and product of them
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins here!

int main(int argc, char** argv) {
    //Declare Variables
    int x, y, Sum, Product;
    //input the first integer
    cout<<" Please input the first integer: ";
    cin>>x;
    cout<<"You had input an integer "<<x<<endl;
    //Input the second integer
    cout <<"******************************"<<endl;
    cout<<"Please input the second integer: ";
    cin>>y;
    cout<<"You had input an integer "<<y<<endl;
    //Calculate the sum and product of two variables
    Sum=x+y;
    Product=x*y;
    //Output the result
    cout <<"******************************"<<endl;
    cout<<"The sum of the two integers: "<<Sum<<endl;
    cout<<"The product of the two integers: "<<Product<<endl;
    cout<<"This is the end of the program."<<endl;
    //Exit stage Right          
    return 0;
}

