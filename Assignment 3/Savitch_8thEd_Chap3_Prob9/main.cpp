/* 
 * File:   main.cpp
 * Author: Kai Ming Yau
 * Created on January 18, 2014, 8:31 PM
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//Global Constants
const int CNV_YR_MNS=12;//12 months per year
const int CNV_PERC=100;//convert percentage
//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {

    float loan, iRate, paymnt, prin=0, owned, intpay=0, month=0, mpay=0;
    float tintpay=0, annperc, annint;
    //Input loan and interest rate
    cout<<"What was the loan? $'s"<<endl;
    cin>>loan;
    cout<<"What was the interest rate? %"<<endl;
    cin>>iRate;
    //Process
    cout<<"The monthly payment is 1/20 of the loan"<<endl;
    paymnt=loan*1/20;
    cout<<"The month payment = $"<<paymnt<<endl;
    //convert
    iRate/=(CNV_PERC*CNV_YR_MNS);
    owned=loan;
    cout<<setprecision(2)<<fixed<<showpoint<<endl;
    cout<<"Month     Owned     Interest   Payment    Principal"<<endl;
    //loop
    for(int month=0; owned>paymnt; month++){
        owned-=prin;
         mpay=paymnt;
         intpay=owned*iRate;
         prin=mpay-intpay;
         tintpay+=intpay;
         annint=tintpay/(2+(month++))*CNV_YR_MNS;
         annperc=annint/loan*CNV_PERC;
     cout<<setw(4)<<month<<setw(11)<<owned<<setw(10)<<intpay;
    cout<<setw(12)<<paymnt<<setw(13)<<prin<<endl;
    }   
    //Output final payment and others
    cout<<"Your final Payment = $"<<owned+intpay<<endl;
    cout<<"Your total interest payment = $"<<tintpay<<endl;
    cout<<"The annualized interest = $"<<annint<<endl;
    cout<<"The annualized percentage = "<<annperc<<endl;
    //Exit Stage Right
    return 0;
}

