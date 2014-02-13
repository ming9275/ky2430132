/* 
 * File:   main.cpp
 * Author: Kai Ming Yau
 * Created on January 31, 2014, 3:17 PM
 * Super 24
 */

//System Libraries
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>
#include <fstream>
using namespace std;
//Global Constants
//Function Prototypes
void begin (char [],int,char &);
short genradN (short);
void calans (char &,char &,char &,float &,float &,float &,float &);
//Execution Begins Here!
int main(int argc, char** argv) {
//Declare Variables
    const short SIZE=21;
    char name[SIZE],strt,o1,o2,o3,pass,repeat;
    short num;
    float s1,s2,s3,s4;
    string inst;
//initialize the random number generator
    srand(static_cast<unsigned short>(time(0)));
//Repeat the program
   do{
//Beginning
   cout<<"Welcome to Super 24."<<endl;
    cout<<"Please enter your name"<<endl;
    cin>>name;
    cout<<"--------------------"<<endl;
    cout<<"hello "<<name<<"!"<<endl;
    cout<<"--------------------"<<endl;
    cout<<"Would you like to see the instruction before starting SUPER 24?";
    cout<<" Press I for instruction, S for game start"<<endl;
    cin>>strt;
    while (!(strt=='S'||strt=='s'||strt=='I'||strt=='i')){
        cout<<"Please follow the instruction (I/S)"<<endl;
        cin>>strt;
    }
    //Input file - Instruction 
    while (strt=='I'||strt=='i'){
        ifstream infile("Instruction.txt");
        for(inst;getline(infile,inst);){cout<<inst<<endl;}
    cin>>strt;
    while (!(strt=='S'||strt=='s'||strt=='I'||strt=='i')){
        cout<<"Please follow the instruction (I/S)"<<endl;
        cin>>strt;
    }
    }
    //Game Start
    if (strt=='S'||strt=='s'){
       cout<<"================Let's start Super 24================"<<endl;  
       for (int i=1; i<=5;i++){
        cout<<"Please use the following numbers and (+,-,*,/) to get 24"<<endl;
        cout<<genradN (num)<<setw(4)<<genradN (num)<<setw(4)<<genradN (num);
        cout<<setw(4)<<genradN (num)<<endl;
        cout<<"------------------------------------------------"<<endl;
        cout<<"You can now enter the numbers and operators "<<endl;
        cout<<"If you can't think of any solution, you can skip the question"<<endl;
        cout<<"#Do you want to skip this question?[Y/N]#"<<endl;
        cin>>pass;
                while (!(pass=='n'||pass=='N'||pass=='Y'||pass=='y')){
                cout<<"Please follow the instruction"<<endl;
                cout<<"#Do you want to skip this question?[Y/N]#"<<endl;
                cin>>pass;
                cout<<"------------------------------------------------"<<endl;
                }
                while(pass=='Y'||pass=='y'){
                cout<<"------------------------------------------------"<<endl;
                cout<<genradN (num)<<setw(4)<<genradN (num)<<setw(4)<<genradN (num);
                cout<<setw(4)<<genradN (num)<<endl;
                cout<<"------------------------------------------------"<<endl;
                cout<<"Do you want to skip this question?[Y/N]"<<endl;
                cin>>pass;
                 while (!(pass=='n'||pass=='N'||pass=='Y'||pass=='y')){
                 cout<<"Please follow the instruction"<<endl;
                 cout<<"#Do you want to skip this question?[Y/N]#"<<endl;
                 cin>>pass;
                 cout<<"------------------------------------------------"<<endl;
                 }
                }
        if (pass=='n'||pass=='N'){
        cout<<"Great!!You can now enter your answer"<<endl;
        cin>>s1>>o1>>s2>>o2>>s3>>o3>>s4;
                while (!(pass=='n'||pass=='N'||pass=='Y'||pass=='y')){
                cout<<"Please follow the instruction"<<endl;
                cout<<"Do you want to skip this question?[Y/N]"<<endl;
                cin>>pass;
                cout<<"------------------------------------------------"<<endl;
                }
        calans (o1,o2,o3,s1,s2,s3,s4);
        }
       }  
    }
    cout<<"Do you want to play Super 24 again? [Y/N]"<<endl;
    cin>>repeat;
    }while (repeat=='y'||repeat=='Y');
    return 0;
}

//Generating random numbers
short genradN (short num){
    num=rand()%13+1;
    return num;
}

//Calculation
void calans (char &o1,char &o2,char &o3,float &num1,float &num2,float &num3,float &num4){
    //declare variables
    float answer;
    //determine what operators are
    if (o1=='+'&&o2=='+'&&o3=='+'){
        answer=num1+num2+num3+num4;
    }else if (o1=='+'&&o2=='-'&&o3=='+'){
        answer=num1+num2-num3+num4;
    }else if (o1=='+'&&o2=='-'&&o3=='-'){
        answer=num1+num2-num3-num4;
    }else if (o1=='-'&&o2=='-'&&o3=='-'){
        answer=num1-num2-num3-num4;
    }else if (o1=='-'&&o2=='+'&&o3=='-'){
        answer=num1-num2+num3-num4;
    }else if (o1=='-'&&o2=='+'&&o3=='+'){
        answer=num1-num2+num3+num4;
    }else if (o1=='+'&&o2=='+'&&o3=='*'){
        answer=num1+num2+num3*num4;
    }else if (o1=='+'&&o2=='*'&&o3=='*'){
        answer=num1+num2*num3*num4;
    }else if (o1=='*'&&o2=='*'&&o3=='*'){
        answer=num1*num2*num3*num4;
    }else if (o1=='*'&&o2=='+'&&o3=='*'){
        answer=num1*num2+num3*num4;
    }else if (o1=='*'&&o2=='+'&&o3=='+'){
        answer=num1*num2+num3+num4;
    }else if (o1=='+'&&o2=='+'&&o3=='/'){
        answer=num1+num2+num3/num4;
    }else if (o1=='+'&&o2=='/'&&o3=='/'){
        answer=num1+num2/num3/num4;
    }else if (o1=='/'&&o2=='/'&&o3=='/'){
        answer=num1/num2/num3/num4;
    }else if (o1=='/'&&o2=='+'&&o3=='/'){
        answer=num1/num2+num3/num4;
    }else if (o1=='/'&&o2=='+'&&o3=='+'){
        answer=num1/num2+num3+num4;
    }else if (o1=='-'&&o2=='-'&&o3=='*'){
        answer=num1-num2-num3*num4;
    }else if (o1=='-'&&o2=='*'&&o3=='*'){
        answer=num1-num2*num3*num4;
    }else if (o1=='*'&&o2=='-'&&o3=='*'){
        answer=num1*num2-num3*num4;
    }else if (o1=='*'&&o2=='-'&&o3=='-'){
        answer=num1*num2-num3-num4;
    }else if (o1=='-'&&o2=='-'&&o3=='/'){
        answer=num1-num2-num3/num4;
    }else if (o1=='-'&&o2=='/'&&o3=='/'){
        answer=num1-num2/num3/num4;
    }else if (o1=='/'&&o2=='-'&&o3=='/'){
        answer=num1/num2-num3/num4;
    }else if (o1=='/'&&o2=='-'&&o3=='-'){
        answer=num1/num2-num3-num4;
    }else if (o1=='+'&&o2=='*'&&o3=='/'){
        answer=num1+num2*num3/num4;
    }else if (o1=='+'&&o2=='/'&&o3=='*'){
        answer=num1+num2/num3*num4;
    }else if (o1=='*'&&o2=='/'&&o3=='+'){
        answer=num1*num2/num3+num4;
    }else if (o1=='/'&&o2=='*'&&o3=='+'){
        answer=num1/num2*num3+num4;
    }else if (o1=='/'&&o2=='+'&&o3=='*'){
        answer=num1/num2+num3*num4;
    }else if (o1=='*'&&o2=='+'&&o3=='/'){
        answer=num1*num2+num3/num4;
    }else if (o1=='-'&&o2=='*'&&o3=='/'){
        answer=num1-num2*num3/num4;
    }else if (o1=='-'&&o2=='/'&&o3=='*'){
        answer=num1-num2/num3*num4;
    }else if (o1=='*'&&o2=='/'&&o3=='-'){
        answer=num1*num2/num3-num4;
    }else if (o1=='/'&&o2=='*'&&o3=='-'){
        answer=num1/num2*num3-num4;
    }else if (o1=='/'&&o2=='-'&&o3=='*'){
        answer=num1/num2-num3*num4;
    }else if (o1=='*'&&o2=='-'&&o3=='/'){
        answer=num1*num2-num3/num4;
    }else if (o1=='*'&&o2=='*'&&o3=='/'){
        answer=num1*num2*num3/num4;
    }else if (o1=='*'&&o2=='/'&&o3=='*'){
        answer=num1*num2/num3*num4;
    }else if (o1=='/'&&o2=='*'&&o3=='*'){
        answer=num1/num2*num3*num4;
    }else if (o1=='/'&&o2=='/'&&o3=='*'){
        answer=num1/num2/num3*num4;
    }else if (o1=='/'&&o2=='*'&&o3=='/'){
        answer=num1/num2*num3/num4;
    }else if (o1=='*'&&o2=='/'&&o3=='/'){
        answer=num1*num2/num3/num4;
    }else if (o1=='+'&&o2=='+'&&o3=='-'){
        answer=num1+num2+num3-num4;
    }else if (o1=='+'&&o2=='/'&&o3=='+'){
        answer=num1+num2/num3+num4;
    }else if (o1=='+'&&o2=='/'&&o3=='+'){
        answer=num1+num2/num3+num4;
    }else if (o1=='-'&&o2=='-'&&o3=='+'){
        answer=num1-num2-num3+num4;
    }else if (o1=='-'&&o2=='/'&&o3=='-'){
        answer=num1-num2/num3-num4;
    }else if (o1=='*'&&o2=='*'&&o3=='+'){
        answer=num1*num2*num3+num4;
    }else if (o1=='*'&&o2=='*'&&o3=='-'){
        answer=num1*num2*num3-num4;
    }else if (o1=='/'&&o2=='/'&&o3=='+'){
        answer=num1/num2/num3+num4;
    }else if (o1=='/'&&o2=='/'&&o3=='-'){
        answer=num1/num2/num3-num4;
    }else if (o1=='+'&&o2=='-'&&o3=='*'){
        answer=num1+num2-num3*num4;
    }else if (o1=='+'&&o2=='-'&&o3=='/'){
        answer=num1+num2-num3/num4;
    }else if (o1=='-'&&o2=='+'&&o3=='*'){
        answer=num1-num2+num3*num4;
    }else if (o1=='-'&&o2=='+'&&o3=='/'){
        answer=num1-num2+num3/num4;
    }else if (o1=='*'&&o2=='+'&&o3=='-'){
        answer=num1*num2+num3-num4;
    }else if (o1=='/'&&o2=='+'&&o3=='-'){
        answer=num1/num2+num3-num4;
    }else if (o1=='+'&&o2=='*'&&o3=='-'){
        answer=num1+num2*num3-num4;
    }else if (o1=='+'&&o2=='*'&&o3=='-'){
        answer=num1+num2*num3-num4;
    }else if (o1=='+'&&o2=='/'&&o3=='-'){
        answer=num1+num2/num3-num4;
    }else if (o1=='*'&&o2=='-'&&o3=='+'){
        answer=num1*num2-num3+num4;
    }else if (o1=='/'&&o2=='-'&&o3=='+'){
        answer=num1/num2-num3+num4;
    }else if (o1=='-'&&o2=='*'&&o3=='+'){
        answer=num1-num2*num3+num4;
    }else if (o1=='-'&&o2=='/'&&o3=='+'){
        answer=num1-num2/num3+num4;
    }else { cout<<"This is not correct input"<<endl;}
    cout<<"-------------------------------------------------------"<<endl;
        cout<<"The answer of your equation = "<<answer<<endl;
        if (!(answer==24))
            cout<<"you have calculated a wrong answer"<<endl;
        if (answer==24)
            cout<<"Congratulations!! You got right answer"<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;
    cout<<"-------------------------------------------------------"<<endl;
}