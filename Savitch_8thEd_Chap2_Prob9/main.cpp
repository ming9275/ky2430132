/* 
 * File:   main.cpp
 * Author: Kai Ming Yau
 * Created on January 16, 2014, 8:43 AM
 * Problem 9
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//Global Constants
const int CNV_YR_MNS=12;//12 months per year
const int CNV_PERC=100;//convert percentage

//Function Prototypes

//Execution begins Here
int main(int argc, char** argv) {

    //declare variables
    float price, iRate, intst, paymnt, prin=0, owned, intpay=0, month, mpay=0;
    //Input price and year interest rate
    cout<<"What was the pruchase price of stereo system? $'s"<<endl;
    cin>>price;
    cout<<"What was the finance rate? %"<<endl;
    cin>>intst;
    cout<<"What is your month payment? $'s"<<endl;
    cin>>paymnt;
    //Convert and setup heading
    intst/=(CNV_PERC*CNV_YR_MNS);
    owned=price;
    cout<<setprecision(2)<<fixed<<showpoint<<endl;
    cout<<"Month     Owned     Interest   Payment    Principal"<<endl;
    //loop on months till paid
    for(int month=0; owned>paymnt; month++){
       intpay=owned*intst;
       prin=mpay-intpay;
       mpay=paymnt;
       owned-=(mpay-intpay);
       
    cout<<setw(4)<<month<<setw(11)<<owned<<setw(10)<<intpay;
    cout<<setw(12)<<paymnt<<setw(13)<<prin<<endl;
    }
    return 0;
}

