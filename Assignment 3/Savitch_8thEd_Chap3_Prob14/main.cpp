/* 
 * File:   main.cpp
 * Author: Kai Ming Yau
 * Created on January 18, 2014, 5:46 PM
 * Prob 14
 */
//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
//Declare Variables
int numb, i, count=0;
//Output    
cout<<"The prime numbers are as follow "<<endl;
  for (numb=3;numb<=100;numb++){
      count=0;
          for(i=2;i<=(numb-1);i++){
            if(numb%i==0){
            count++;
          }
          }
         if(count==0){
            if(numb!=1){
         cout<<setw(3)<<numb;
                 }
         }
         
   }
  //Exit Stage Right                  
    return 0;
}

