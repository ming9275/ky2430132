/* 
 * File:   main.cpp
 * Author: Kai Ming Yau
 * Created on January 22, 2014, 7:41 PM
 * Prob9
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes
float hatsize(float,float);
float jacsize(float,float,int);
float waistin(float,float,int);
//Execution Begins Here!
int main(int argc, char** argv) {
//Declare variable
    float height, weight, size;
    int age;
    char answer;
//loop
    do{
//Input 
    cout<<"This program is to measure the clothes sizes base on your";
    cout<<" height, weight, and age."<<endl;
    cout<<"-------------------------------------------------------"<<endl;
    cout<<"How tall are you? (in inches)"<<endl;
    cin>>height;
    cout<<"What is your current weight? (pounds)"<<endl;
    cin>>weight;
    cout<<"How old are you?"<<endl;
    cin>>age;
    while (age>109){
    cout<<"I don't think your are that old!!"<<endl;
    cout<<"Please enter your real age again!!"<<endl;
    cin>>age;
    }
    
//Output
   cout<<"Your hat size is "<<hatsize (height, weight)<<"."<<endl;
   cout<<"Your jacket size (chest in inches) is "<<jacsize (height, weight, age)<<"."<<endl;
   cout<<"Your waist in inches is "<<waistin (height, weight, age)<<"."<<endl;
   cout<<"Do you want to re-run the program?"<<endl;
   cin>>answer;
    }while (answer=='Y'||answer=='y');
    return 0;
}
float waistin (float ht,float wt,int age){
float size;
if(age>28){
    if(age%2==0){
    return size=(age/2-14)*0.1+wt/5.7;
    }else{
    return size=wt/5.7+((age-1)/2-14)*0.1;   
    }
    }else{
    return size=wt/5.7;
    }
    }
 
float jacsize(float ht,float wt,int age){
float size;
if (age<=39){
  return size=ht*wt/288;
}
if (age>=40&&age<=49){
   return size=0.125+ht*wt/288;
}
if (age>=50&&age<=59){
  return  size=ht*wt/288+0.25;
}
if (age>=60&&age<=69){
   return size=ht*wt/288+0.375;
}
if (age>=70&&age<=79){
   return size=ht*wt/288+0.5;
}
if (age>=80&&age<=89){
   return size=ht*wt/288+0.625;
}
if (age>=90&&age<=99){
  return  size=ht*wt/288+0.75;
}
if (age>=100&&age<=109){
    return size=ht*wt/288+0.875;
}
}

float hatsize(float ht,float wt){
float size;
return size=wt/ht*2.9;
}
