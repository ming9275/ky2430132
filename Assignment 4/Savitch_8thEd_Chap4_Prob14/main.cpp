/* 
 * File:   main.cpp
 * Author: Kai Ming Yau
 * Created on January 26, 2014, 9:03 AM
 * Prob 14
 */
//System Libraries
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//Global Constants

//Function Prototypes
void readin (float &,float &,int &, int &);
float calCmeta (float, float);
float calCphyact (float, float, int);
float energ (float, float, int);
int calNfood (float,float,int,int);
float Output (float, float, float,float);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables
    float weight, inten;
    int min, calory;
    char answer;
    //loop
    do{
    //readin data
    readin (weight,inten,min,calory);
    Output (weight,inten,min,calory);
    cout<<"Do you want to recalculate again? (Y/N)"<<endl;
    cin>>answer;
    }while (answer=='y'||answer=='Y');
    return 0;
}
float Output (float wt, float inten, float minspt,float fcal){
    cout<<"---------------------------------------------"<<endl;
    cout<<"calories required for your basal metabolic rate = ";
    cout<<calCmeta (wt,inten)<<" calories"<<endl;
    cout<<"calories required for your physical activity = ";
    cout<<calCphyact (wt,inten,minspt)<<" calories"<<endl;
    cout<<"You require at least "<< calNfood (wt,inten,minspt,fcal)<<" of that ";
    cout<<"food to maintain 1 day life."<<endl;
    cout<<"---------------------------------------------"<<endl;
}

int calNfood (float wt,float inten,int minspt,int fcal){
    int numfood;
    return (numfood)=static_cast <int>((energ (wt,inten, minspt))/fcal);
}

float energ (float wt,float inten,int minspt){
   float tteng;
  return tteng=(calCphyact (wt,inten,minspt))*(calCmeta (wt,inten))*10/9;
   
}

float calCphyact (float wt, float inten, int minspt){
    float Cphyact;
    return Cphyact=0.0385*inten*wt*minspt;
}

float calCmeta (float wt, float inten){
float Cmeta;
return Cmeta=70*pow(wt/2.2, 0.756);
}

void readin (float &wt,float &inten,int &minspt, int &fcal){
    cout<<"This program is about calories calculation"<<endl;
    cout<<"Please input your weight (pounds)"<<endl;
    cin>>wt;
    cout<<"Input the intensity of a activity"<<endl;
    cout<<"for example, the intensity of running 10 mph = 17"<<endl;
    cout<<"the intensity of running 6 mph = 10"<<endl;
    cout<<"the intensity of basketball = 8"<<endl;
    cout<<"the intensity of walking 1 mph = 1"<<endl;
    cin>>inten;
    cout<<"input the number of minutes you spent for the activity"<<endl;
    cin>>minspt;
    cout<<"Input how many calories your favorite food is "<<endl;
    cin>>fcal;
}
