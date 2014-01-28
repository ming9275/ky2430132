/* 
 * File:   main.cpp
 * Author: Kai Ming Yau
 * Created on January 26, 2014, 7:27 PM
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
float covkg (float, float);
float covg (float, float);
void out (float, float);
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float lbs, ounce;
    char answer;
    //loop
    do{
    //Read in data
    readin (lbs, ounce);
    out (lbs, ounce);
   cout<<"-----------------------------------------"<<endl;
   cout<<"Do you want to run the program again? (Y/N)"<<endl;
    cin>>answer;
    }while (answer=='Y'||answer=='y');
    return 0;
}

void out (float lb, float oc){
cout<<"The weight in kilogram = "<<covkg (lb, oc)<<"kg."<<endl;
cout<<"The weight in grams = "<<covg (lb, oc)<<"g."<<endl;

}

float covg (float lb, float oc){
    float g;
    return g=(covkg(lb,oc)*COV_gram);
}

float covkg (float lb, float oc){
    float kg;
    lb+=oc/COV_ounce;
    return kg=lb/COV_POUD;   
}

void readin (float &lb,float &oc){
    char dum;
    cout<<"This program is about weight conversion"<<endl;
 cout<<"Input the weight in pounds and in ounce"<<endl;
 cout<<"then it will help you converting to kilogram and gram"<<endl;
 cout<<"format: xxlbsxxxoz"<<endl;
 cin>>lb>>dum>>dum>>dum>>oc>>dum>>dum;
}
