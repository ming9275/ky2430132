/* 
 * File:   main.cpp
 * Author: Kai Ming Yau
 * Created on January 16, 2014, 11:38 AM
 * Prob1
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins
int main(int argc, char** argv) {

    //Declare variables
    char choiceA, choiceB;
    
    //type each letter
    cout<<"This is Paper-rock-scissor game"<<endl;
    cout<<"P = paper, R = Rock, S = Scissor"<<endl;
    cout<<"Please player A input a letter"<<endl;
    cin>>choiceA;
    cout<<"     "<<endl;
    cout<<"     "<<endl;
    cout<<"     "<<endl;
    cout<<"     "<<endl;
    cout<<"     "<<endl;
    cout<<"     "<<endl;
    cout<<"     "<<endl;
    cout<<"Please player B input a letter"<<endl;
    cin>>choiceB;
    //Process
    if (choiceA=='P'||choiceA=='p'){
        if(choiceB=='R'||choiceB=='r'){
       cout<<"Paper covers Rocks!!! Play A wins! "<<endl;   
    }
    }
    if (choiceA=='R'||choiceA=='r'){
       if (choiceB=='p'||choiceB=='P'){
       cout<<"Paper covers Rocks!!! Play B wins!"<<endl;
       } 
    }
    if (choiceA=='S'||choiceA=='s'){
       if (choiceB=='p'||choiceB=='P'){
       cout<<"Scissors cut paper!!! Play A wins!"<<endl;
       } 
    }
    if (choiceA=='P'||choiceA=='P'){
       if (choiceB=='S'||choiceB=='s'){
       cout<<"Scissors cut paper!!! Play B wins!"<<endl;
       } 
    }
    if (choiceA=='S'||choiceA=='s'){
       if (choiceB=='R'||choiceB=='r'){
       cout<<"Rock breaks scissors!!! Play B wins!"<<endl;
       } 
    }
    if (choiceA=='R'||choiceA=='r'){
       if (choiceB=='S'||choiceB=='s'){
       cout<<"Rock breaks scissors!!! Play A wins!"<<endl;
       } 
    }
    if (choiceA==choiceB){
            cout<<"Nobody wins!!!"<<endl;
            }    
 //Exit Stage Right   
    return 0;
}

