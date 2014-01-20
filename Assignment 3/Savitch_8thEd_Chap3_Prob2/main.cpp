/* 
 * File:   main.cpp
 * Author: Kai MIng Yau
 * Created on January 18, 2014, 11:38 AM
 * Prob2
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Here!
int main(int argc, char** argv) {
    //Declare variables
    float actblce, intdue, ttamtde, minipyt;
    
    //Input the account balance
    cout<<"Please input your account balance"<<endl;
    cin>>actblce;
    // Process - calculate the total amount due, interest due, minimum paynment
    cout<<setprecision(2)<<fixed<<showpoint;
    if (actblce<=1000)
    intdue=actblce*0.015;
    ttamtde=actblce+intdue;
    if(actblce>1000)
    intdue=1000*0.015+(actblce-1000)*0.01;
    ttamtde=actblce+intdue;
    if(ttamtde<=10){
    minipyt=ttamtde;
    cout<<"The minimum payment = $"<<minipyt<<endl;
    }else if(ttamtde>10){
        minipyt=ttamtde*0.1;
        if (minipyt<10){
            cout<<"The minimum payment = $10."<<endl;
        }else{
            cout<<"The minimum payment =$"<<minipyt<<endl;
        }
    }
    //output the result
    cout<<"The interest due = $"<<intdue<<endl;
    cout<<"The total amount due = $"<<ttamtde<<endl;
   //Exit Stage Right

    return 0;
}

