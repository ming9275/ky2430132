/* 
 * File:   main.cpp
 * Author: Kai Ming Yau
 * Created on January 10, 2014, 10:13 AM
 * Problem 1 - type in Display 1.8 and successfully run it 
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins here

int main(int argc, char** argv) {

    int number_of_pods, peas_per_pod, total_peas;
    
    cout<< "Press return after entering a number.\n";
    cout<< "Enter the number of pods:\n";
    
    cin>>number_of_pods;
    
    cout<<"Enter the number of peas in a pod:\n";
    cin>>peas_per_pod;
    total_peas = number_of_pods * peas_per_pod;
    cout<<"If you have ";
    cout<<number_of_pods;
    cout<<" pea pods\n";
    cout<<"and ";
    cout<<peas_per_pod;
    cout<<" peas in each pod, then\n";
    cout<<"Your have ";
    cout<< total_peas;
    cout<< " peas in all the pods.\n";
    
    //Exit Stage right
    
    return 0;
}

