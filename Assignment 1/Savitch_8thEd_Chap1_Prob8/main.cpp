/* 
 * File:   main.cpp
 * Author: Kai Ming Yau
 * Created on January 7, 2014, 6:47 PM
 * Problem 8 - calculate the total value of the coins
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants
const int QT_CT=25;//conversion from quarters to cents
const int D_CT=10;//conversion from dimes to cents
const int N_CT=5;//conversion from nickels to cents

//Function Prototypes

//Execution begins here

int main(int argc, char** argv) {
    //Declare Variable 
    unsigned int Nqt,Ndimes, Nnickel, Tvalue;
    //Input the number of quarter
    cout<<"The Number of Quarters = ";
    cin>>Nqt;
    //Input the number of dimes
    cout<<"The Number of Dimes = ";
    cin>>Ndimes;
    //Input the number of nickel
    cout<<"The Number of Nickels = ";
    cin>>Nnickel;
    //Calculate the total value of the coins
    Tvalue=Nqt*QT_CT+Ndimes*D_CT+Nnickel*N_CT;
    //Output the result
    cout<<"The total value of the coins = "<<Tvalue<<endl;
    
    //Exit stage here
    
    
    return 0;
}

