/* 
 * File:   main.cpp
 * Author: Kai Ming Yau
 * Created on January 24, 2014, 2:57 PM
 */

#include <iostream>
using namespace std;
//Global Constants
const unsigned short COV_24HR=12;//Convert to 12 hour notation
//Function Prototypes
void readin (unsigned short &, unsigned short &);
unsigned short convt12 (unsigned short);
char rdampm (unsigned short);
void output (unsigned short, unsigned short);

//Execution Begins Here!
int main(int argc, char** argv) {
//declare variables
    unsigned short hr, min;
    char answer;
//loop
   do{
//Read in data
    readin (hr, min);
//Output
    output (hr, min);
    cout<<"-------------------------------------"<<endl;
    cout<<"Would you like to use the program again? (Y/N)"<<endl;
    cin>>answer;
   }while (answer=='Y'||answer=='y');
 //Exit Stage Right
    return 0;
}

void output (unsigned short hr, unsigned short min){
  cout<<"The time in 12-hour notation -> ";
    cout<<convt12 (hr)<<":"<<min;
    cout<<rdampm (hr)<<"m"<<endl;  
}

char rdampm (unsigned short hr){
    char ampm;
    if (hr>12){
        ampm='p';
    }
    if(hr==0){
        ampm='a';
    }
    if(hr==12){
        ampm='p';
    }
    if(hr<12){
        ampm='a';
    }
    return ampm;
}
unsigned short convt12 (unsigned short hr){
    if(hr>12){
        hr-=COV_24HR;
    }
    if(hr==0){
        hr+=COV_24HR;
    }
    if(hr==12){
        hr+=0;
    }
    return hr;
}

void readin (unsigned short &hr, unsigned short &min){
    char dum;
    cout<<"Input the time in 24-hour notation"<<endl;
    cout<<"format is xx:xx"<<endl;
    cin>>hr>>dum>>min;
    
}