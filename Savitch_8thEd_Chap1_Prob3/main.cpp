/* 
 * File:   main.cpp
 * Author: Kai Ming Yau
 * Created on January 10, 2014, 10:55 AM
 * Problem 3 - futher modify Problem 2
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) {
    
    int number_of_pods, peas_per_pod, total_peas;
    
    cout<<"Hello!"<<endl;
    
    cout<< "Press return after entering a number.\n";
    cout<< "Enter the number of pods:\n";
    
    cin>>number_of_pods;
    
    cout<<"Enter the number of peas in a pod:\n";
    cin>>peas_per_pod;
    total_peas = number_of_pods / peas_per_pod;
    cout<<"If you have ";
    cout<<number_of_pods;
    cout<<" pea pods\n";
    cout<<"and ";
    cout<<peas_per_pod;
    cout<<" peas in each pod, then\n";
    cout<<"Your have ";
    cout<< total_peas;
    cout<< " peas in all the pods.\n";
    
    cout<<"Good-bye"<<endl;

    return 0;
}

