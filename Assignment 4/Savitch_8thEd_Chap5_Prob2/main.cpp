/* 
 * File:   main.cpp
 * Author: Kai Ming Yau
 * Created on January 24, 2014, 3:38 PM
 */

#include <iostream>
#include <iomanip>
using namespace std;
//Global Constants

//function Prototypes
void readin (int &,int &,int &,int &);
int waithour (int,int,int,int);
int waitminute (int,int,int,int);
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int hour, mins, waithr, waitmin;
    char answer;
    //loop
    do{
    //read in data
    readin (hour, mins, waithr, waitmin);
    //Output
    cout<<"The time after the waiting period is "<<waithour (hour,mins,waithr,waitmin);
    cout<<":"<<waitminute (hour,mins,waithr,waitmin)<<endl;
    cout<<"--------------------------------------"<<endl;
    cout<<"Do you want to re-run the program?"<<endl;
    cin>>answer;
    cout<<"--------------------------------------"<<endl;
    }while (answer=='y'||answer=='Y');
    return 0;
}
int waitminute (int hr,int min,int whr,int wmin){
min+=wmin;
if(min>=60){
    return min%=60;
}else{
    return min;
}
}
int waithour (int hr,int min,int whr,int wmin){
     min+=wmin;
        if (min>=60){
            if(whr>=24){
               hr+=(whr%24)+1;
               if (hr>=24){
                   return hr-24;
               }else{
                   return hr;
               }
            }else{
                hr+=1+whr;
                if (hr>=24){
                   return hr-24;
               }else{
                   return hr;
               }
            }
        }else{
            if(whr>=24){
              hr+=(whr%24);
              if (hr>=24){
                   return hr-24;
               }else{
                   return hr;
               }
            }else{
               hr+=whr;
               if (hr>=24){
                   return hr-24;
               }else{
                   return hr;
               }
            }
        }
}
void readin (int &hr,int &min,int &whr,int &wmin){
    char dum;
cout<<"Input the current time in 24-hour notation"<<endl;
cout<<"format is xx:xx"<<endl;
cin>>setw(2)>>hr>>dum>>setw(2)>>min;
if (hr>23){
    cout<<"Please input the time between 0 and 23"<<endl;
    cin>>setw(2)>>hr>>dum>>setw(2)>>min;
}
cout<<"Input how many hour of the waiting time"<<endl;
cin>>whr;
cout<<"Input how many minute of the waiting time"<<endl;
cin>>wmin;
//cout<<"The input are following"<<endl;
//cout<<hr<<endl;
//cout<<min<<endl;
//cout<<whr<<endl;
//cout<<wmin<<endl;
}