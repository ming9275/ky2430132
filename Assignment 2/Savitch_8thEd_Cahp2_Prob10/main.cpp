/* 
 * File:   main.cpp
 * Author: Kai Ming Yau
 * Created on January 15, 2014, 7:36 PM
 * Prob 10
 */
//System Libraries
#include <iostream>
using namespace std;
//Global Constants
//Function Prototypes
//Execution Begins Here
int main(int argc, char** argv) {
    //Declare variables
    int t1,t2,t3,t4,t5,t6,t7,t8,t9,t10;
    int sumpn=0,sumnn=0,suman;
    //input the numbers
    cout<<"Input ten whole numbers. Put space between each number"<<endl;
    cout<<"when entering those ten whole numbers For example, 2 3 4"<<endl;
    cin>>t1>>t2>>t3>>t4>>t5>>t6>>t7>>t8>>t9>>t10;
   
    //calculate sum of all number
    suman=t1+t2+t3+t4+t5+t6+t7+t8+t9+t10;
    //calculate the sum of positive number
    if(t1>0)
        sumpn+=t1;
    if(t2>0)
        sumpn+=t2;
    if(t3>0)
        sumpn+=t3;
    if(t4>0)
        sumpn+=t4;
    if(t5>0)
        sumpn+=t5;
    if(t6>0)
        sumpn+=t6;
    if(t7>0)
        sumpn+=t7;
    if(t8>0)
        sumpn+=t8;
    if(t9>0)
        sumpn+=t9;
    if(t10>0)
        sumpn+=t10;
    //calculate the sum of negative numbers
    if(t1<=0)
        sumnn+=t1;
    if(t2<=0)
        sumnn+=t2;
    if(t3<=0)
        sumnn+=t3;
    if(t4<=0)
        sumnn+=t4;
    if(t5<=0)
        sumnn+=t5;
    if(t6<=0)
        sumnn+=t6;
    if(t7<=0)
        sumnn+=t7;
    if(t8<=0)
        sumnn+=t8;
    if(t9<=0)
        sumnn+=t9;
    if(t10<=0)
        sumnn+=t10;
    //Output the result
    cout<<"The sum of all the numbers = "<<suman<<endl;
    cout<<"The sum of positive numbers = "<<sumpn<<endl;
    cout<<"The sum of negative or zero numbers = "<<sumnn<<endl;
    //Exit Stage Right
    return 0;
}

