/* 
 * File:   main.cpp
 * Author: Kai Ming Yau
 * Created on January 21, 2014, 7:21 PM
 * Prob 3
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//Global Constants

//Function PRototypes
float pristck (int, int, int, int);
//Execution Begin Here!
int main(int argc, char** argv) {
//Declare Variables
 int numstck, whldol, numtor, dentor;
 char answer;
//loop
 do{
 //Input 
 cout<<"Input the number of share of stock owned"<<endl;
 cin>>setw(8)>>numstck;
 cout<<"Input the whole-dollar portion of the price"<<endl;
 cin>>whldol;
 cout<<"Input the fraction portion of the price"<<endl;
 cout<<"numerator, then denominator.";
 cout<<"For example 5/9, input 5, a space, and then 9."<<endl;
 cin>>numtor>>dentor;
//output
 cout<<"The price of the share of stock";
cout<<" = $"<<pristck (whldol, numtor, dentor, numstck)<<endl;
cout<<"----------------------------------------------"<<endl;
cout<<"Would you like to recalculate again? [Y/N]"<<endl;
cin>>answer;
 }while (answer=='Y'||answer=='y');    
return 0;
}
float pristck (int num1, int num2, int num3,int num4){
    float price;
    price=(num1+static_cast<float>(num2)/num3)*num4;
    return price;
}

