/* 
 * File:   main.cpp
 * Author: Kai Ming Yau
 * Created on January 10, 2014, 11:09 AM
 * Problem 6 - create and record the errors
 */

//errors
//a) put an extra space between the < and the iostream file name.
    //main.cpp:12:21: fatal error:  iostream: No such file or directory 
    //#include < iostream>
    //compilation terminated.

//b) omit one of the < or > symbols in the include directive
    //main.cpp:18:19: error: missing terminating > character
    //#include <iostream
    //nbproject/Makefile-Debug.mk:66: recipe for target 'build/Debug/Cygwin_4.x-Windows/main.o' failed

//Systream Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins here

//c) omit the int from int main()
    // No error found without int from int main()

//d) omit or misspell the word main
    ///usr/lib/gcc/x86_64-pc-cygwin/4.8.2/../../../../lib/libcygwin.a(libcmain.o): In function `main':
     
//e) Omit one of the(); then omit both the ()
    //main.cpp:40:34: error: expected ‘)’ before ‘{’ token
    //int main (int argc, char** argv {
    //nbproject/Makefile-Debug.mk:66: recipe for target 'build/Debug/Cygwin_4.x-Windows/main.o' failed
    
    //main.cpp:40:11: error: expected initializer before ‘int’
    //int main int argc, char** argv {
    //nbproject/Makefile-Debug.mk:66: recipe for target 'build/Debug/Cygwin_4.x-Windows/main.o' failed

 int main (int argc, char** argv) {
    int number_of_pods, peas_per_pod, total_peas;
    //e) mispelling identifiers and omit one or both of the << in the cout statemnet
        //main.cpp:47:5: error: ‘cot’ was not declared in this scope
        //cot<<"Hello!"<<endl;
        //main.cpp:50:9: error: expected ‘;’ before string constant
        //cout"Hello!"<<endl;
    cout<<"Hello!"<<endl;
    
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
    
    cout<<"Good-bye"<<endl;
    return 0;
}
 //main.cpp:72:13: error: expected ‘}’ at end of input
     //return 0;

