/* 
 * File:   main.cpp
 * Author: Kai Ming Yau
 * Created on January 26, 2014, 7:57 PM
 */

//System libraries
#include <iostream>
using namespace std;

//Global Constants
float COV_POUD=2.2046;//1 kilogram =2.2046pounds
float COV_gram=1000;//1kilogram=1000grams;
float COV_ounce=16;//1pound=16ounces
//Function Prototypes
void readin (float &, float &);
float covoz (float, float);
float covpd (float, float);
void out (float, float);
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float kg, g;
    char answer;
    //loop
    do{
    //Read in data
    readin (kg, g);
    out (kg, g);
   cout<<"-----------------------------------------"<<endl;
   cout<<"Do you want to run the program again? (Y/N)"<<endl;
    cin>>answer;
    }while (answer=='Y'||answer=='y');
    return 0;
}

void out (float kg, float g){
cout<<"The weight in pounds = "<<covpd (kg, g)<<"lbs."<<endl;
cout<<"The weight in ounce = "<<covoz (kg, g)<<"oz."<<endl;

}

float covoz (float kg, float g){
    float oz;
    return oz=(covpd(kg,g)*COV_ounce);
}

float covpd (float kg, float g){
    float lb;
    kg+=g/COV_gram;
    return lb=kg*COV_POUD;   
}

void readin (float &kg,float &g){
    char dum;
    cout<<"This program is about weight conversion"<<endl;
 cout<<"Input the weight in kilogram and in gram"<<endl;
 cout<<"then it will help you converting to pounds and ounces"<<endl;
 cout<<"format: xxkgxxxg"<<endl;
 cin>>kg>>dum>>dum>>g>>dum;
}
