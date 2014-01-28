/* 
 * File:   main.cpp
 * Author: Kai Ming Yau
 * Created on January 22, 2014, 4:12 PM
 */

//System Libraries
#include <iostream>
using namespace std;
//Global Constants

//Function Prototypes
float inflatn (float, float);
float price (float, float);
//Execution Begins Here!
int main(int argc, char** argv) {
//Declare Variables
    char item[15], answer;
    float tIprice,oIprice;
//loop
    do{
//Input
    cout<<"This program is to estimate the rate of inflation ";
    cout<<"in the past year and estimate the price of the item in ";
    cout<<"one and in two years."<<endl;
    cout<<"What item is that?"<<endl;
    cin>>item;
    cout<<"Input the price of the item one year ago $'s"<<endl;
    cin>>oIprice;
    cout<<"Input the price of the item today $'s"<<endl;
    cin>>tIprice;
//Output the result
    cout<<"The inflation rate of "<<item<<" = ";
    cout<<inflatn (oIprice, tIprice)<<" percent."<<endl;
    cout<< "The estimated cost of the item in one year = $";
    cout<<price (oIprice, tIprice)<<endl;
    cout<<"-----------------------------------------------------"<<endl;
    cout<<"Would you like to recalculate the inflation of";
    cout<<"an item again? (Y/N)"<<endl;
    cin>>answer;  
    }while (answer == 'Y'||answer=='y');
    return 0;
  
}
float inflatn(float oIprice,float tIprice){
   float infltrt;
   infltrt= (tIprice-oIprice)/oIprice;
   return infltrt;
}

float price(float num1, float num2){
    float infltrt, cost;
    infltrt= (num2-num1)/num1;
   return cost=num2+infltrt*num2;
}