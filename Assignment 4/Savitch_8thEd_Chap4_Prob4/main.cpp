/* 
 * File:   main.cpp
 * Author: Kai Ming Yau
 * Created on January 22, 2014, 8:19 AM
 * Prob4
 */

//System Libraries
#include <iostream>
using namespace std;
//Global Constants

//Function Prototypes
float inflatn (float, float);
//Execution Begins Here!
int main(int argc, char** argv) {
//Declare Variables
    char item[15], answer;
    float tIprice,oIprice;
//loop
    do{
//Input
    cout<<"This program is to estimate the rate of inflation ";
    cout<<"for the past year."<<endl;
    cout<<"What item is that?"<<endl;
    cin>>item;
    cout<<"Input the price of the item one year ago $'s"<<endl;
    cin>>oIprice;
    cout<<"Input the price of the item today $'s"<<endl;
    cin>>tIprice;
//Output the result
    cout<<"The inflation rate of "<<item<<" = ";
    cout<<inflatn (oIprice, tIprice)<<" percent."<<endl;
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

