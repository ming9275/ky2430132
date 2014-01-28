/* 
 * File:   main.cpp
 * Author: Kai Ming Yau
 * Created on January 24, 2014, 8:27 PM
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;
//Global Constants

//function Prototypes
void readin (unsigned short &,unsigned short &,unsigned short &,unsigned short &);
unsigned int waithour (unsigned int,unsigned int,unsigned int,unsigned int);
unsigned int waitminute (unsigned int,unsigned int,unsigned int,unsigned int);
char otampm (unsigned int,unsigned int,unsigned int,unsigned int);
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    unsigned short hour, mins, waithr, waitmin;
    char answer;
    //loop
    do{
    //read in data
    readin (hour, mins, waithr, waitmin);
    //Output
    cout<<"The time after the waiting period is "<<waithour (hour,mins,waithr,waitmin);
    cout<<":"<<waitminute (hour,mins,waithr,waitmin);
    cout<<" "<<otampm (hour, mins, waithr, waitmin)<<"m"<<endl;
    cout<<"--------------------------------------"<<endl;
    cout<<"Do you want to re-run the program?"<<endl;
    cin>>answer;
    cout<<"--------------------------------------"<<endl;
    }while (answer=='y'||answer=='Y');
    return 0;
}
char otampm (unsigned int hr,unsigned int min,unsigned int whr,unsigned int wmin){
    char ampm;
    if (hr>12){
      return ampm='p';    
   } 
    if (hr==0){
       return ampm='a';
    }
    if(hr==12){
       return  ampm='p';
    }
    if(hr<12){
        return ampm='a';
    }
}

unsigned int waitminute (unsigned int hr,unsigned int min,unsigned int whr,unsigned int wmin){
min+=wmin;
if(min>=60){
    return min%=60;
}else{
    return min;
}
}
unsigned int waithour (unsigned int hr,unsigned int min,unsigned int whr,unsigned int wmin){
     min+=wmin;
        if (min>=60){
            if(whr>=24){
               hr+=(whr%24)+1;
               if (hr>=24){
                   return hr-36;
               }else{
                   return hr-12;
               }
            }else{
                hr+=1+whr;
                if (hr>=24){
                   return hr-36;
               }else{
                   return hr-12;
               }
            }
        }else{
            if(whr>=24){
              hr+=(whr%24);
              if (hr>=24){
                   return hr-36;
               }else{
                   return hr-12;
               }
            }else{
               hr+=whr;
               if (hr>=24){
                   return hr-36;
               }else{
                   return hr-12;
               }
            }
        }
}
void readin (unsigned short &hr,unsigned short &min,unsigned short &whr,unsigned short &wmin){
    char dum;
cout<<"Input the current time in 24-hour notation"<<endl;
cout<<"format is xx:xx"<<endl;
cin>>setw(2)>>hr>>dum>>setw(2)>>min;
if(hr>23){
    cout<<"please input the time between 0 and 23"<<endl;
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