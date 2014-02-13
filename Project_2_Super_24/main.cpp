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
const int COL=1;
//Function Prototypes
void filaray (int [][COL],int,int);//fill the points in the array
void write (int [][COL],int,char[],short);//output the array
void det24 (char ,char ,char ,float ,float ,float ,float,int);//determine if the equation can be calculatd 24
short genradN (short [],short);//generate random numbers
float calans (char &,char &,char &,float &,float &,float &,float &);//the equation
void begin (char &);// the introduction
void Instrt (char&,string);//output the instruction
void read (char,char,char,char,float,float,float,float,short [],short);//skip the question or not 
//Execution Begins Here!
int main(int argc, char** argv) {
//Declare Variables
    const int ROW=4;
    const short TOT=4,SIZE=21;
    char strt,o1,o2,o3,pass,repeat,name[SIZE];
    short num[TOT];
    float s1,s2,s3,s4;
    string inst;
    int point[ROW][COL],Rcount=0,Wcount=0,ttTime;
//initialize the random number generator
    srand(static_cast<unsigned short>(time(0)));
//Repeat the program
   do{
//Beginning and game start
    cout<<"What is your name?"<<endl;
    cin>>name;
    cout<<"--------------------"<<endl;
    cout<<"Hello "<<name<<"!"<<endl;;
    cout<<"Welcome to Super 24"<<endl;
    cout<<"--------------------"<<endl; 
    begin (strt);
    //Input file - Instruction 
    while (strt=='I'||strt=='i'){
      Instrt (strt,inst);
    }
    //Game part
    cout<<"================Let's start Super 24================"<<endl; 
        do{
            int sttTime=time(0);
            //write and skip the question 
            read (pass,o1,o2,o3,s1,s2,s3,s4,num,TOT);
            cin>>s1>>o1>>s2>>o2>>s3>>o3>>s4;
            int endTime=time(0);
            //timing
                ttTime=endTime-sttTime;
            //determine if the equation is 24
            det24 (o1,o2,o3,s1,s2,s3,s4,ttTime);
                if (calans(o1,o2,o3,s1,s2,s3,s4)==24){
                Rcount++;
                }
                if(!(calans(o1,o2,o3,s1,s2,s3,s4)==24)){
                Wcount++;  
                }
                if((ttTime)>20){
                Wcount++;
                } 
        }while (Wcount!=5);
        cout<<"Game Over!!!"<<endl;
        cout<<"Here is the points you get"<<endl;
   //fill in the array
     filaray(point,ROW,Rcount);
   //Print the array
    write (point,1,name,SIZE);
    cout<<"Do you want to play Super 24 again? [Y/N]"<<endl;
    cin>>repeat;
    }while (repeat=='y'||repeat=='Y');
    //Exit Stage Right
    return 0;
}

//skip or not 
void read (char pass,char o1,char o2,char o3,float s1,float s2,
        float s3,float s4,short num[],short size){
    //game start
        cout<<"Please use the following numbers and (+,-,*,/) to get 24"<<endl;
        for (int m=1;m<=size;m++){
        cout<<setw(4)<<genradN (num,m);
        }
        cout<<endl;
        cout<<"------------------------------------------------"<<endl;
        cout<<"You can now enter your equation (the numbers and operators) "<<endl;
        cout<<"If you can't think of any solution, you can skip the question"<<endl;
        cout<<"#Do you want to skip this question?[Y/N]#"<<endl;
        cin>>pass;
                while (!(pass=='n'||pass=='N'||pass=='Y'||pass=='y')){
                cout<<"------------------------------------------------"<<endl;
                cout<<"Please follow the instruction"<<endl;
                cout<<"##Do you want to skip this question?[Y/N]##"<<endl;
                cin>>pass;
                }
                while(pass=='Y'||pass=='y'){
                cout<<"------------------------------------------------"<<endl;
                 for (int m=1;m<=size;m++){
                cout<<setw(4)<<genradN (num,m);
                }
                cout<<endl;
                cout<<"------------------------------------------------"<<endl;
                cout<<"Do you want to skip this question?[Y/N]"<<endl;
                cin>>pass; 
                        while (!(pass=='n'||pass=='N'||pass=='Y'||pass=='y')){
                        cout<<"------------------------------------------------"<<endl;
                        cout<<"Please follow the instruction"<<endl;
                        cout<<"##Do you want to skip this question?[Y/N]##"<<endl;
                        cin>>pass;
                        }
                }
        cout<<"Great!!You can now enter your answer"<<endl;
}

//Instruction
void Instrt (char& strt,string inst ){
      ifstream infile("Instruction.txt");
        for(inst;getline(infile,inst);){cout<<inst<<endl;}
    cin>>strt;
         while (!(strt=='S'||strt=='s'||strt=='I'||strt=='i')){
         cout<<"Please follow the instruction (I/S)"<<endl;
         cin>>strt;
         }
}

//Beginning
void begin (char &strt){
    cout<<"-----------------------------------------------------------"<<endl;
    cout<<"Would you like to see the instruction before starting SUPER 24?";
    cout<<" Press I for instruction, S for game start"<<endl;
    cin>>strt;
    while (!(strt=='S'||strt=='s'||strt=='I'||strt=='i')){
        cout<<"Please follow the instruction (I/S)"<<endl;
        cin>>strt;
    }
}

//Generating random numbers
short genradN (short num [], short size){
    num[size]=rand()%13+1;
    return num[size];
}

//Calculation
float calans (char &o1,char &o2,char &o3,float &num1,float &num2,
        float &num3,float &num4){
    //declare variables
    float answer;
    //determine what operators are
    if (o1=='+'&&o2=='+'&&o3=='+')answer=num1+num2+num3+num4;
    else if (o1=='+'&&o2=='-'&&o3=='+')answer=num1+num2-num3+num4;
    else if (o1=='+'&&o2=='-'&&o3=='-')answer=num1+num2-num3-num4;
    else if (o1=='-'&&o2=='-'&&o3=='-')answer=num1-num2-num3-num4;
    else if (o1=='-'&&o2=='+'&&o3=='-')answer=num1-num2+num3-num4;
    else if (o1=='-'&&o2=='+'&&o3=='+')answer=num1-num2+num3+num4;
    else if (o1=='+'&&o2=='+'&&o3=='*')answer=num1+num2+num3*num4;
    else if (o1=='+'&&o2=='*'&&o3=='*')answer=num1+num2*num3*num4;
    else if (o1=='*'&&o2=='*'&&o3=='*')answer=num1*num2*num3*num4;
    else if (o1=='*'&&o2=='+'&&o3=='*')answer=num1*num2+num3*num4;
    else if (o1=='*'&&o2=='+'&&o3=='+')answer=num1*num2+num3+num4;
    else if (o1=='+'&&o2=='+'&&o3=='/')answer=num1+num2+num3/num4;
    else if (o1=='+'&&o2=='/'&&o3=='/')answer=num1+num2/num3/num4;
    else if (o1=='/'&&o2=='/'&&o3=='/')answer=num1/num2/num3/num4;
    else if (o1=='/'&&o2=='+'&&o3=='/')answer=num1/num2+num3/num4;
    else if (o1=='/'&&o2=='+'&&o3=='+')answer=num1/num2+num3+num4;
    else if (o1=='-'&&o2=='-'&&o3=='*')answer=num1-num2-num3*num4;
    else if (o1=='-'&&o2=='*'&&o3=='*')answer=num1-num2*num3*num4;
    else if (o1=='*'&&o2=='-'&&o3=='*')answer=num1*num2-num3*num4;
    else if (o1=='*'&&o2=='-'&&o3=='-')answer=num1*num2-num3-num4;
    else if (o1=='-'&&o2=='-'&&o3=='/')answer=num1-num2-num3/num4;
    else if (o1=='-'&&o2=='/'&&o3=='/')answer=num1-num2/num3/num4;
    else if (o1=='/'&&o2=='-'&&o3=='/')answer=num1/num2-num3/num4;
    else if (o1=='/'&&o2=='-'&&o3=='-')answer=num1/num2-num3-num4;
    else if (o1=='+'&&o2=='*'&&o3=='/')answer=num1+num2*num3/num4;
    else if (o1=='+'&&o2=='/'&&o3=='*')answer=num1+num2/num3*num4;
    else if (o1=='*'&&o2=='/'&&o3=='+')answer=num1*num2/num3+num4;
    else if (o1=='/'&&o2=='*'&&o3=='+')answer=num1/num2*num3+num4;
    else if (o1=='/'&&o2=='+'&&o3=='*')answer=num1/num2+num3*num4;
    else if (o1=='*'&&o2=='+'&&o3=='/')answer=num1*num2+num3/num4;
    else if (o1=='-'&&o2=='*'&&o3=='/')answer=num1-num2*num3/num4;
    else if (o1=='-'&&o2=='/'&&o3=='*')answer=num1-num2/num3*num4;
    else if (o1=='*'&&o2=='/'&&o3=='-')answer=num1*num2/num3-num4;
    else if (o1=='/'&&o2=='*'&&o3=='-')answer=num1/num2*num3-num4;
    else if (o1=='/'&&o2=='-'&&o3=='*')answer=num1/num2-num3*num4;
    else if (o1=='*'&&o2=='-'&&o3=='/')answer=num1*num2-num3/num4;
    else if (o1=='*'&&o2=='*'&&o3=='/')answer=num1*num2*num3/num4;
    else if (o1=='*'&&o2=='/'&&o3=='*')answer=num1*num2/num3*num4;
    else if (o1=='/'&&o2=='*'&&o3=='*')answer=num1/num2*num3*num4;
    else if (o1=='/'&&o2=='/'&&o3=='*')answer=num1/num2/num3*num4;
    else if (o1=='/'&&o2=='*'&&o3=='/')answer=num1/num2*num3/num4;
    else if (o1=='*'&&o2=='/'&&o3=='/')answer=num1*num2/num3/num4;
    else if (o1=='+'&&o2=='+'&&o3=='-')answer=num1+num2+num3-num4;
    else if (o1=='+'&&o2=='/'&&o3=='+')answer=num1+num2/num3+num4;
    else if (o1=='+'&&o2=='/'&&o3=='+')answer=num1+num2/num3+num4;
    else if (o1=='-'&&o2=='-'&&o3=='+')answer=num1-num2-num3+num4;
    else if (o1=='-'&&o2=='/'&&o3=='-')answer=num1-num2/num3-num4;
    else if (o1=='*'&&o2=='*'&&o3=='+')answer=num1*num2*num3+num4;
    else if (o1=='*'&&o2=='*'&&o3=='-')answer=num1*num2*num3-num4;
    else if (o1=='/'&&o2=='/'&&o3=='+')answer=num1/num2/num3+num4;
    else if (o1=='/'&&o2=='/'&&o3=='-')answer=num1/num2/num3-num4;
    else if (o1=='+'&&o2=='-'&&o3=='*')answer=num1+num2-num3*num4;
    else if (o1=='+'&&o2=='-'&&o3=='/')answer=num1+num2-num3/num4;
    else if (o1=='-'&&o2=='+'&&o3=='*')answer=num1-num2+num3*num4;
    else if (o1=='-'&&o2=='+'&&o3=='/')answer=num1-num2+num3/num4;
    else if (o1=='*'&&o2=='+'&&o3=='-')answer=num1*num2+num3-num4;
    else if (o1=='/'&&o2=='+'&&o3=='-')answer=num1/num2+num3-num4;
    else if (o1=='+'&&o2=='*'&&o3=='-')answer=num1+num2*num3-num4;
    else if (o1=='+'&&o2=='*'&&o3=='-')answer=num1+num2*num3-num4;
    else{
    if (o1=='+'&&o2=='/'&&o3=='-')answer=num1+num2/num3-num4;
    if (o1=='*'&&o2=='-'&&o3=='+')answer=num1*num2-num3+num4;
    if (o1=='/'&&o2=='-'&&o3=='+')answer=num1/num2-num3+num4;
    if (o1=='-'&&o2=='*'&&o3=='+')answer=num1-num2*num3+num4;
    if (o1=='-'&&o2=='/'&&o3=='+')answer=num1-num2/num3+num4;
    }
     //{ cout<<"This is not correct input"<<endl;}
    return answer;
}

//determine if the equation is 24
void det24 (char o1,char o2,char o3,float num1,float num2,
        float num3,float num4,int ttTime){
    bool det;
    cout<<"-------------------------------------------------------"<<endl;
    cout<<"The answer of your equation = "<<calans(o1,o2,o3,num1,num2,num3,num4);
    cout<<endl;
    //determine if the answer is 24
    !(calans(o1,o2,o3,num1,num2,num3,num4)==24)?det=false:det=true;
        switch(det){
            case false:
            cout<<"you have calculated a wrong answer"<<endl;
            cout<<"add 1 mistake point"<<endl;
            break;
            case true:
            cout<<"Congratulations!! You got right answer"<<endl;
            cout<<"add 1 point"<<endl;
            break;
        }
        cout<<"====================================================="<<endl;
        cout<<"You have used "<<ttTime<<" seconds to finish the task"<<endl;
        cout<<"====================================================="<<endl;
        if (ttTime>20){
            cout<<"~~~~~~Because you have use more than 20 secs "<<endl;
            cout<<"to solve the task, it will be counted 1 mistake point~~~~~~"<<endl;
        }
        cout<<endl;
    cout<<"-------------------------------------------------------"<<endl;
}

//fill the array
void filaray (int point[][COL],int ROW,int count){
   //fill in the array
    for (int row=0;row<ROW;row++){
        for (int col=0;col<COL;col++){
         point[row][col]=count;
        }
    }
}

//Print the array
void write (int point[][COL],int ROW,char name[],short SIZE){
    cout<<endl;
    cout<<"Player       Points"<<endl;
    for(int row=0;row<ROW;row++){
        cout<<name<<"      ";
        for(int col=0;col<COL;col++){
            cout<<setw(4)<<point[row][col];
        }
        cout<<endl;
    }
    cout<<endl;
}