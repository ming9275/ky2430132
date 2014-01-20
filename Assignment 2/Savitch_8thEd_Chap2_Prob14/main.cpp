/* 
 * File:   main.cpp
 * Author: Kai Ming Yau
 * Created on January 15, 2014, 9:55 PM
 * Problem 14
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants
//Function Prototypes
//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    char iname[21],food[10],stname[21], adj[10], color[10], animal[20];
    float number;
    //Input
    cout<<"Input the first or last name of your instructor"<<endl;
    cin>>iname;
    cout<<"Input your name"<<endl;
    cin>>stname;
    cout<<"Input a food"<<endl;
    cin>>food;
    cout<<"Input a number between 100 and 120"<<endl;
    cin>>number;
    cout<<"Input an adjective"<<endl;
    cin>>adj;
    cout<<"Input a color"<<endl;
    cin>>color;
    cout<<"Input an animal"<<endl;
    cin>>animal;
    //Output the paragraph
    cout<<"Dear Instructor "<<iname<<","<<endl;
    cout<<"I am sorry that I am unable to turn in my homework at this time. ";
    cout<<"First,"<<endl;
    cout<<"I ate a rotten "<<food<<", which made me turn "<<color<<" and extremly ";
    cout<<"ill. I came "<<endl;
    cout<<"down with a fever of "<<number<<". Next, my "<<adj<<" pet ";
    cout<<animal<<" must have smelled the "<<endl;
    cout<<"remains of the "<<food<<" on my homework because he ate it. ";
    cout<<"I am currently "<<endl;
    cout<<"rewriting my homework and hope you will accept it late."<<endl;
    cout<<"       "<<endl;
    cout<<"Sincerely,"<<endl;
    cout<<stname<<endl;
    
//Exit Stage Right
    return 0;
}

