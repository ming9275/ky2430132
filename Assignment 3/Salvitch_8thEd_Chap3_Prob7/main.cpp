/* 
 * File:   main.cpp
 * Author:Guohao Liu
 * Created on January 18, 2014, 9:55 PM
 */
//System Libraries
#include<iostream>
#include<string>
 
using namespace std;
 //Global Constants

//Function Prototypes

//Execution Begins Here!
 
int main(){
 
    int InYear,Oyear,Teyear,Hyear,Thyear;
    
    //All the Roman numbers till 3000
    string Ones[10]={"","I","II","III","IV","V","VI","VII","IVIII","IX"};
    string Tens[10]={"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
    string Hund[10]={"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
    string Thou[4]={"","M","MM","MMM"};
 
    cout<<"Arabic/Gregorian to Roman Year converter."<<endl<<endl;
    cout<<"Enter the year between 1000 to 3000 to convert: ";
    cin>>InYear;
  if(InYear>1000 && InYear<3000)
        {  
    for(int i=1;i<=4;i++) //Save individual digits to individual variables.
    {
       
        switch(i)
        {
        case 1: 
            Oyear=InYear%10;
            InYear=InYear/10;
            break;
        case 2:
            Teyear=InYear%10;
            InYear=InYear/10;
            break;
        case 3:
            Hyear=InYear%10;
            InYear=InYear/10;
            break;
        case 4:
            Thyear=InYear%10;
            InYear=InYear/10;
            break;
        }
    }
  }else {
       cout<<"Please enter the year between 1000 to 3000"<<endl;
  }
      
    //Print the corresponding Roman numbers.
    cout<<Thou[Thyear]<<Hund[Hyear]<<Tens[Teyear]<<Ones[Oyear]<<endl;
 
   
    return 0;
}
