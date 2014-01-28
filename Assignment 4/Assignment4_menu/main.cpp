/* 
 * File:   main.cpp
 * Author: Kai Ming Yau
 * Created on January 27, 2014, 5:10 PM
 * Chap4 Problem 1 -> calculate the mile per gallon of a car
 * Chap4 Problem 2 -> calculate the mile per gallon of two car and compare which one has better mpg
 * Chap4 Problem 3 -> calculate the price of one share of stock
 * Chap4 Problem 4 -> calculate the rate of inflation for the past year
 * Chap4 Problem 5 -> estimate price of the item in one and in two year and calculate the inflation rate
 * Chap4 Problem 7 -> calculate the gravitational force
 * Chap4 Problem 9 -> compute clothes size by asking the user's height, weight, and age
 * Chap4 Problem 14 -> calculate calories of basal metabolic rate, calories required for physical activity
 *                      and the number of food per day to maintain the user's life
 * 
 * chap5 Problem 1 ->conversion from 24 hour notation to 12 hour notation
 * chap5 Problem 2 ->calculate the time in 24 hour notation after a waiting period
 * chap5 Problem 3 ->calculate the time in 12 hour notation after a waiting period
 * chap5 Problem 6 ->conversion from feet and inches to meter and centimeter
 * chap5 Problem 7 ->conversion from meter and centimeter to feet and inches
 * chap5 Problem 8 ->combine Problem 6 and problem 7 and ask user which conversion program they want to use
 * chap5 Problem 9 ->conversion from pounds and ounces to gram and kilogram
 * chap5 Problem 10 ->conversion from grams and kilogram to pounds and ounces
 */
 

//Library includes Here!!!
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//Global Constants Here!!!
const float CNV_LIT_GAL=0.264179;// 1 liter = 0.264179 gallons
const float GRAVT_CON=6.673e-8;//Gravitational constants
const int   CONV_KILOG=1000;//conversion gram to kilogram
const int   CONV_METER=100;//convert cm to m
const unsigned short COV_24HR=12;//Convert to 12 hour notation
float COV_MET=0.3048;//1 foot =0.3048m
float COV_CM=100;//1meter=100cm;
float COV_IN=12;//12inches=1ft
float COV_POUD=2.2046;//1 kilogram =2.2046pounds
float COV_gram=1000;//1kilogram=1000grams;
float COV_ounce=16;//1pound=16ounces
//Function Prototypes Here!!!
void Menu();
int getN();
void def(int);
void chap4problem1();
void chap4problem2();
void chap4problem3();
void chap4problem4();
void chap4problem5();
void chap4problem7();
void chap4problem9();
void chap4problem14();
void chap5problem1();
void chap5problem2();
void chap5problem3();
void chap5problem6();
void chap5problem7();
void chap5problem8();
void chap5problem9();
void chap5problem10();
//Begin Execution Here!!!
int main(int argv,char *argc[]){
    int inN;
    do{
        Menu();
        inN=getN();
        switch(inN){
        case 1:   chap4problem1();break;
        case 2:   chap4problem2();break;
        case 3:   chap4problem3();break;
        case 4:   chap4problem4();break;
        case 5:   chap4problem5();break;
        case 6:   chap4problem7();break;
        case 7:   chap4problem9();break;
        case 8:   chap4problem14();break;
        case 9:   chap5problem1();break;
        case 10:  chap5problem2();break;
        case 11:  chap5problem3();break;
        case 12:  chap5problem6();break;
        case 13:  chap5problem7();break;
        case 14:  chap5problem8();break;
        case 15:  chap5problem9();break;
        case 16:  chap5problem10();break;
        default:   def(inN);}
    }while(inN>=1&&inN<=16);
    return 0;//If midterm not perfect, return something other than 1
}

void Menu(){
    cout<<"Menu for the Assignment4"<<endl;
    cout<<"Type 1 to solve Chap4 problem 1"<<endl;
        cout<<"Type 2 to solve Chap4 problem 2"<<endl;
        cout<<"Type 3 to solve Chap4 problem 3"<<endl;
        cout<<"Type 4 to solve Chap4 problem 4"<<endl;
        cout<<"Type 5 to solve Chap4 problem 5"<<endl;
        cout<<"Type 6 to solve Chap4 problem 7"<<endl;
        cout<<"Type 7 to solve Chap4 problem 9"<<endl;
        cout<<"Type 8 to solve Chap4 problem 14"<<endl;
        cout<<"Type 9 to solve Chap5 problem 1"<<endl;
        cout<<"Type 10 to solve Chap5 problem 2"<<endl;
        cout<<"Type 11 to solve Chap5 problem 3"<<endl;
        cout<<"Type 12 to solve Chap5 problem 6"<<endl;
        cout<<"Type 13 to solve Chap5 problem 7"<<endl;
        cout<<"Type 14 to solve Chap5 problem 8"<<endl;
        cout<<"Type 15 to solve Chap5 problem 9"<<endl;
        cout<<"Type 16 to solve Chap5 problem 10"<<endl;
    cout<<"Type anything else to exit \n"<<endl;
}

int getN(){
        int inN;
        cin>>inN;
        return inN;
}
//--------------------------------------------------------------
void chap4problem1(){
        cout<<"Chap4 problem 1"<<endl;
//Function Prototypes
float milpergal (float, float);
   //Declare variables
    float NumLgas, Nmil, gasused;
    char answer;
    //loop
    do{
    //Input
    cout<<"Input the number of liters of gasoline consumed by your ";
    cout<<"car"<<endl;
    cin>>NumLgas;
    cout<<"Input the number of miles traveled by the car"<<endl;
    cin>>Nmil;
    //Output
    cout<<setprecision(2)<<fixed<<showpoint;
    cout<<"The number of miles per gallon ";
    cout<<"your car delivered = "<< milpergal(NumLgas, Nmil);
    cout<<" mil/gal"<<endl;
    cout<<"------------------------------------"<<endl;
    cout<<"Do you want to calculate again? (Y/N)"<<endl;
    cin>>answer;        
    }while (answer=='Y'||answer=='y');    
}

float milpergal (float num1, float num2){
    float milgal;
    num1*= CNV_LIT_GAL;
    milgal=num2/num1;
    return milgal;

}
//--------------------------------------------------------------------------
void chap4problem2(){
        cout<<"Chap4 problem 2"<<endl<<endl;
        //Function Prototypes
float prob2milpergal1 (float, float);
float prob2milpergal2 (float, float);
   //Declare variables
    float NumLgas1, Nmil1,NumLgas2, Nmil2;
    char answer;
    //loop
    do{
    //Input
    cout<<"Input the number of liters of gasoline consumed by your ";
    cout<<"first car"<<endl;
    cin>>NumLgas1;
    cout<<"Input the number of miles traveled by the first car"<<endl;
    cin>>Nmil1;
    cout<<"Input the number of liters of gasoline consumed by your ";
    cout<<"second car"<<endl;
    cin>>NumLgas2;
    cout<<"Input the number of miles traveled by the second car"<<endl;
    cin>>Nmil2;
    cout<<"--------------------------------------------"<<endl;
    //Output
    cout<<setprecision(2)<<fixed<<showpoint;
    cout<<"The number of miles per gallon ";
    cout<<"first car delivered = "<< prob2milpergal1(NumLgas1, Nmil1);
    cout<<" mil/gal"<<endl;
    cout<<"The number of miles per gallon ";
    cout<<"second car delivered = "<< prob2milpergal2(NumLgas2, Nmil2);
    cout<<" mil/gal"<<endl;
    if (prob2milpergal1(NumLgas1, Nmil1)>prob2milpergal2(NumLgas2, Nmil2)){
        cout<<"The first car has the best fuel efficiency."<<endl;
    }
    if (prob2milpergal2(NumLgas2, Nmil2)>prob2milpergal1(NumLgas1, Nmil1)){
        cout<<"The second car has the best fuel efficiency."<<endl;
    }
    if (prob2milpergal2(NumLgas2, Nmil2)== prob2milpergal1(NumLgas1, Nmil1)){
            cout<<"The first and second cars have the same fuel";
    cout<<"efficiency."<<endl;
    }
    cout<<"------------------------------------"<<endl;
    cout<<"Do you want to calculate again? (Y/N)"<<endl;
    cin>>answer;        
    }while (answer=='Y'||answer=='y');    
}

float prob2milpergal1 (float num1, float num2){
    float milgal;
    num1*= CNV_LIT_GAL;
    milgal=num2/num1;
    return milgal;
}
float prob2milpergal2 (float num1, float num2){
    float milgal;
    num1*= CNV_LIT_GAL;
    milgal=num2/num1;
    return milgal;
}

//---------------------------------------------------------------------------
void chap4problem3(){
        cout<<"chap4 problem 3"<<endl;
        //Function PRototypes
float pristck (int, int, int, int);
//Declare Variables
 int numstck, whldol, numtor, dentor;
 char answer;
//loop
 do{
 //Input 
 cout<<"Input the number of share of stock owned"<<endl;
 cin>>setw(8)>>numstck;
 cout<<"Input the whole-dollar portion of the price"<<endl;
 cin>>whldol;
 cout<<"Input the fraction portion of the price"<<endl;
 cout<<"numerator, then denominator.";
 cout<<"For example 5/9, input 5, a space, and then 9."<<endl;
 cin>>numtor>>dentor;
//output
 cout<<"The price of the share of stock";
cout<<" = $"<<pristck (whldol, numtor, dentor, numstck)<<endl;
cout<<"----------------------------------------------"<<endl;
cout<<"Would you like to recalculate again? [Y/N]"<<endl;
cin>>answer;
 }while (answer=='Y'||answer=='y');    
}
float pristck (int num1, int num2, int num3,int num4){
    float price;
    price=(num1+static_cast<float>(num2)/num3)*num4;
    return price;
}
//--------------------------------------------------------------------------

void chap4problem4(){
        cout<<"chap4 problem 4"<<endl;
        //Function Prototypes
float inflatn (float, float);
//Declare Variables
    char item[15], answer;
    float tIprice,oIprice;
//loop
    do{
//Input
    cout<<"This program is to estimate the rate of inflation ";
    cout<<"for the past year."<<endl;
    cout<<"What item is that?"<<endl;
    cin>>item;
    cout<<"Input the price of the item one year ago $'s"<<endl;
    cin>>oIprice;
    cout<<"Input the price of the item today $'s"<<endl;
    cin>>tIprice;
//Output the result
    cout<<"The inflation rate of "<<item<<" = ";
    cout<<inflatn (oIprice, tIprice)<<" percent."<<endl;
    cout<<"-----------------------------------------------------"<<endl;
    cout<<"Would you like to recalculate the inflation of";
    cout<<"an item again? (Y/N)"<<endl;
    cin>>answer;  
    }while (answer == 'Y'||answer=='y');
}
float inflatn(float oIprice,float tIprice){
   float infltrt;
   infltrt= (tIprice-oIprice)/oIprice;
   return infltrt;
}
//---------------------------------------------------------------------------
void chap4problem5(){
        cout<<"chap4 problem 5"<<endl;
        //Function Prototypes
float prob5inflatn (float, float);
float price (float, float);
//Execution Begins Here!
    char item[15], answer;
    float tIprice,oIprice;
//loop
    do{
//Input
    cout<<"This program is to estimate the rate of inflation ";
    cout<<"in the past year and estimate the price of the item in ";
    cout<<"one and in two years."<<endl;
    cout<<"What item is that?"<<endl;
    cin>>item;
    cout<<"Input the price of the item one year ago $'s"<<endl;
    cin>>oIprice;
    cout<<"Input the price of the item today $'s"<<endl;
    cin>>tIprice;
//Output the result
    cout<<"The inflation rate of "<<item<<" = ";
    cout<<prob5inflatn (oIprice, tIprice)<<" percent."<<endl;
    cout<< "The estimated cost of the item in one year = $";
    cout<<price (oIprice, tIprice)<<endl;
    cout<<"-----------------------------------------------------"<<endl;
    cout<<"Would you like to recalculate the inflation of";
    cout<<"an item again? (Y/N)"<<endl;
    cin>>answer;  
    }while (answer == 'Y'||answer=='y');
}
float prob5inflatn(float oIprice,float tIprice){
   float infltrt;
   infltrt= (tIprice-oIprice)/oIprice;
   return infltrt;
}

float price(float num1, float num2){
    float infltrt, cost;
    infltrt= (num2-num1)/num1;
   return cost=num2+infltrt*num2;
}
//----------------------------------------------------------------------------
void chap4problem7(){
        cout<<" Chap4 problem # 7"<<endl;
        //Function Prototypes
float grafrce (float, float, float);
    //Declare Variable
    float distnce, mass1, mass2;
    char answer;
    //loop
    do{
    //Input the distance and two object masses
    cout<<"This program is going to calculate the gravitational ";
    cout<<"force between two objects"<<endl;
    cout<<"Please input the mass of the first object (kilogram)"<<endl;
    cin>>mass1;
    cout<<"Please input the mass of the second object (kilogram)"<<endl;
    cin>>mass2;
    cout<<"Please input the distance between two object (m)"<<endl;
    cin>>distnce;
    //Output
    cout<<"----------------------------------------"<<endl;
    cout<<"The gravitational force between two objects = ";
    cout<< grafrce (distnce, mass1, mass2)<<" Newton"<<endl;
    cout<<"Would you like to recalculate the gravitational ";
    cout<<"force between two objects? (Y/N)"<<endl;
    cin>>answer;
    }while (answer=='Y'||answer=='y');
}

float grafrce (float de, float m1, float m2){
    float force;
    return force=(GRAVT_CON*CONV_KILOG/pow(CONV_METER,3)*m1*m2)/pow(de,2);
}
//----------------------------------------------------------------------------
void chap4problem9(){
        cout<<"Chap4 problem 9"<<endl;
        //Function Prototypes
float hatsize(float,float);
float jacsize(float,float,int);
float waistin(float,float,int);
//Declare variable
    float height, weight, size;
    int age;
    char answer;
//loop
    do{
//Input 
    cout<<"This program is to measure the clothes sizes base on your";
    cout<<" height, weight, and age."<<endl;
    cout<<"-------------------------------------------------------"<<endl;
    cout<<"How tall are you? (in inches)"<<endl;
    cin>>height;
    cout<<"What is your current weight? (pounds)"<<endl;
    cin>>weight;
    cout<<"How old are you?"<<endl;
    cin>>age;
    while (age>109){
    cout<<"I don't think your are that old!!"<<endl;
    cout<<"Please enter your real age again!!"<<endl;
    cin>>age;
    }
    
//Output
   cout<<"Your hat size is "<<hatsize (height, weight)<<"."<<endl;
   cout<<"Your jacket size (chest in inches) is "<<jacsize (height, weight, age)<<"."<<endl;
   cout<<"Your waist in inches is "<<waistin (height, weight, age)<<"."<<endl;
   cout<<"Do you want to re-run the program?"<<endl;
   cin>>answer;
    }while (answer=='Y'||answer=='y');
}
float waistin (float ht,float wt,int age){
float size;
if(age>28){
    if(age%2==0){
    return size=(age/2-14)*0.1+wt/5.7;
    }else{
    return size=wt/5.7+((age-1)/2-14)*0.1;   
    }
    }else{
    return size=wt/5.7;
    }
    }
 
float jacsize(float ht,float wt,int age){
float size;
if (age<=39){
  return size=ht*wt/288;
}
if (age>=40&&age<=49){
   return size=0.125+ht*wt/288;
}
if (age>=50&&age<=59){
  return  size=ht*wt/288+0.25;
}
if (age>=60&&age<=69){
   return size=ht*wt/288+0.375;
}
if (age>=70&&age<=79){
   return size=ht*wt/288+0.5;
}
if (age>=80&&age<=89){
   return size=ht*wt/288+0.625;
}
if (age>=90&&age<=99){
  return  size=ht*wt/288+0.75;
}
if (age>=100&&age<=109){
    return size=ht*wt/288+0.875;
}
}

float hatsize(float ht,float wt){
float size;
return size=wt/ht*2.9;
}
//-----------------------------------------------------------------------------
//Chapter 4 Problem 14
//Function Prototypes
void readin (float &,float &,int &, int &);
float calCmeta (float, float);
float calCphy (float, float, int);
float energ (float, float, int);
int calNfood (float,float,int,int);
float Output (float, float, float,float);
void chap4problem14(){
        cout<<"Chap4 problem 14"<<endl;
//Function Prototypes
void readin (float &,float &,int &, int &);
float calCmeta (float, float);
float calCphy (float, float, int);
float energ (float, float, int);
int calNfood (float,float,int,int);
float Output (float, float, float,float);
//Declare variables
    float weight, inten;
    int min, calory;
    char answer;
    //loop
    do{
    //readin data
    readin (weight,inten,min,calory);
    Output (weight,inten,min,calory);
    cout<<"Do you want to recalculate again? (Y/N)"<<endl;
    cin>>answer;
    }while (answer=='y'||answer=='Y');
}
float Output (float wt, float inten, float minspt,float fcal){
    cout<<"---------------------------------------------"<<endl;
    cout<<"calories required for your basal metabolic rate = ";
    cout<<calCmeta (wt,inten)<<" calories"<<endl;
    cout<<"calories required for your physical activity = ";
    cout<<calCphy (wt,inten,minspt)<<" calories"<<endl;
    cout<<"You require at least "<< calNfood (wt,inten,minspt,fcal)<<" of that ";
    cout<<"food to maintain 1 day life."<<endl;
    cout<<"---------------------------------------------"<<endl;
}

int calNfood (float wt,float inten,int minspt,int fcal){
    int numfood;
    return (numfood)=static_cast <int>((energ (wt,inten, minspt))/fcal);
}

float energ (float wt,float inten,int minspt){
   float tteng;
   tteng=(calCphy (wt,inten,minspt))*(calCmeta (wt,inten))*10/9;
   return tteng;
}

float calCphy (float wt, float inten, int minspt){
    float calory;
    calory=0.0385*inten*wt*minspt;
    return calory;
}

float calCmeta (float wt, float inten){
float Cmeta;
return Cmeta=70*pow(wt/2.2, 0.756);
}

void readin (float &wt,float &inten,int &minspt, int &fcal){
    cout<<"This program is about calories calculation"<<endl;
    cout<<"Please input your weight (pounds)"<<endl;
    cin>>wt;
    cout<<"Input the intensity of a activity"<<endl;
    cout<<"for example, the intensity of running 10 mph = 17"<<endl;
    cout<<"the intensity of running 6 mph = 10"<<endl;
    cout<<"the intensity of basketball = 8"<<endl;
    cout<<"the intensity of walking 1 mph = 1"<<endl;
    cin>>inten;
    cout<<"input the number of minutes you spent for the activity"<<endl;
    cin>>minspt;
    cout<<"Input how many calories your favorite food is "<<endl;
    cin>>fcal;
}
//-----------------------------------------------------------------------------
//Chapter 5 Prob1
//Function Prototypes
unsigned short chap5prob1convt12 (unsigned short);
char chap5prob1rdampm (unsigned short);
void chap5problem1(){
        cout<<"Chap5 problem 1"<<endl;
//Function Prototypes
void chap5prob1readin (unsigned short &, unsigned short &);
unsigned short chap5prob1convt12 (unsigned short);
char chap5prob1rdampm (unsigned short);
void chap5prob1output (unsigned short, unsigned short);
//declare variables
    unsigned short hr, min;
    char answer;
//loop
   do{
//Read in data
   chap5prob1readin (hr, min);
//Output
    chap5prob1output (hr, min);
    cout<<"-------------------------------------"<<endl;
    cout<<"Would you like to use the program again? (Y/N)"<<endl;
    cin>>answer;
   }while (answer=='Y'||answer=='y');
 //Exit Stage Right
}

void chap5prob1output (unsigned short hr, unsigned short min){
  cout<<"The time in 12-hour notation -> ";
    cout<<chap5prob1convt12 (hr)<<":"<<min;
    cout<<chap5prob1rdampm (hr)<<"m"<<endl;  
}

char chap5prob1rdampm (unsigned short hr){
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
unsigned short chap5prob1convt12 (unsigned short hr){
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

void chap5prob1readin (unsigned short &hr, unsigned short &min){
    char dum;
    cout<<"Input the time in 24-hour notation"<<endl;
    cout<<"format is xx:xx"<<endl;
    cin>>hr>>dum>>min; 
}        
//-----------------------------------------------------------------------------
void chap5problem2(){
cout<<"Chap5 problem 2"<<endl;       
//function Prototypes
void chap5pro2readin (int &,int &,int &,int &);
int waithour (int,int,int,int);
int waitminute (int,int,int,int);
    //Declare Variables
    int hour, mins, waithr, waitmin;
    char answer;
    //loop
    do{
    //read in data
    chap5pro2readin (hour, mins, waithr, waitmin);
    //Output
    cout<<"The time after the waiting period is "<<waithour (hour,mins,waithr,waitmin);
    cout<<":"<<waitminute (hour,mins,waithr,waitmin)<<endl;
    cout<<"--------------------------------------"<<endl;
    cout<<"Do you want to re-run the program?"<<endl;
    cin>>answer;
    cout<<"--------------------------------------"<<endl;
    }while (answer=='y'||answer=='Y');
}
int waitminute (int hr,int min,int whr,int wmin){
min+=wmin;
if(min>=60){
    return min%=60;
}else{
    return min;
}
}
int waithour (int hr,int min,int whr,int wmin){
     min+=wmin;
        if (min>=60){
            if(whr>=24){
               hr+=(whr%24)+1;
               if (hr>=24){
                   return hr-24;
               }else{
                   return hr;
               }
            }else{
                hr+=1+whr;
                if (hr>=24){
                   return hr-24;
               }else{
                   return hr;
               }
            }
        }else{
            if(whr>=24){
              hr+=(whr%24);
              if (hr>=24){
                   return hr-24;
               }else{
                   return hr;
               }
            }else{
               hr+=whr;
               if (hr>=24){
                   return hr-24;
               }else{
                   return hr;
               }
            }
        }
}
void chap5pro2readin (int &hr,int &min,int &whr,int &wmin){
    char dum;
cout<<"Input the current time in 24-hour notation"<<endl;
cout<<"format is xx:xx"<<endl;
cin>>setw(2)>>hr>>dum>>setw(2)>>min;
if (hr>23){
    cout<<"Please input the time between 0 and 23"<<endl;
    cin>>setw(2)>>hr>>dum>>setw(2)>>min;
}
cout<<"Input how many hour of the waiting time"<<endl;
cin>>whr;
cout<<"Input how many minute of the waiting time"<<endl;
cin>>wmin;
//cout<<"The input are following"<<endl;
//cout<<hr<<endl;
//cout<<min<<endl;
//cout<<whr<<endl;
//cout<<wmin<<endl;
}
//-----------------------------------------------------------------------------
void chap5problem3(){
        cout<<"Chap5 problem 3"<<endl;
        
//function Prototypes
void chap5prob3readin (unsigned short &,unsigned short &,unsigned short &,unsigned short &);
unsigned int chap5prob3waithour (unsigned int,unsigned int,unsigned int,unsigned int);
unsigned int chap5prob3waitminute (unsigned int,unsigned int,unsigned int,unsigned int);
char chap5prob3otampm (unsigned int,unsigned int,unsigned int,unsigned int);
    //Declare Variables
    unsigned short hour, mins, waithr, waitmin;
    char answer;
    //loop
    do{
    //read in data
    chap5prob3readin (hour, mins, waithr, waitmin);
    //Output
    cout<<"The time after the waiting period is "<<chap5prob3waithour (hour,mins,waithr,waitmin);
    cout<<":"<<chap5prob3waitminute (hour,mins,waithr,waitmin);
    cout<<" "<<chap5prob3otampm (hour, mins, waithr, waitmin)<<"m"<<endl;
    cout<<"--------------------------------------"<<endl;
    cout<<"Do you want to re-run the program?"<<endl;
    cin>>answer;
    cout<<"--------------------------------------"<<endl;
    }while (answer=='y'||answer=='Y');
}
char chap5prob3otampm (unsigned int hr,unsigned int min,unsigned int whr,unsigned int wmin){
    char ampm;
    if (hr>12){
      return ampm='p';    
   } 
    if (hr==0){
       return ampm='a';
    }
    if(hr==12){
       return  ampm='p';
    }
    if(hr<12){
        return ampm='a';
    }
}

unsigned int chap5prob3waitminute (unsigned int hr,unsigned int min,unsigned int whr,unsigned int wmin){
min+=wmin;
if(min>=60){
    return min%=60;
}else{
    return min;
}
}
unsigned int chap5prob3waithour (unsigned int hr,unsigned int min,unsigned int whr,unsigned int wmin){
     min+=wmin;
        if (min>=60){
            if(whr>=24){
               hr+=(whr%24)+1;
               if (hr>=24){
                   return hr-36;
               }else{
                   return hr-12;
               }
            }else{
                hr+=1+whr;
                if (hr>=24){
                   return hr-36;
               }else{
                   return hr-12;
               }
            }
        }else{
            if(whr>=24){
              hr+=(whr%24);
              if (hr>=24){
                   return hr-36;
               }else{
                   return hr-12;
               }
            }else{
               hr+=whr;
               if (hr>=24){
                   return hr-36;
               }else{
                   return hr-12;
               }
            }
        }
}
void chap5prob3readin (unsigned short &hr,unsigned short &min,unsigned short &whr,unsigned short &wmin){
    char dum;
cout<<"Input the current time in 24-hour notation"<<endl;
cout<<"format is xx:xx"<<endl;
cin>>setw(2)>>hr>>dum>>setw(2)>>min;
if(hr>23){
    cout<<"please input the time between 0 and 23"<<endl;
}
cout<<"Input how many hour of the waiting time"<<endl;
cin>>whr;
cout<<"Input how many minute of the waiting time"<<endl;
cin>>wmin;
//cout<<"The input are following"<<endl;
//cout<<hr<<endl;
//cout<<min<<endl;
//cout<<whr<<endl;
//cout<<wmin<<endl;
}
//-----------------------------------------------------------------------------
//Chapter 5 Prob6
//Function Prototypes
float chap5prob6covMeter (float, float);
float chap5prob6covCMeter (float, float);

void chap5problem6(){
cout<<"Chap5 problem 6"<<endl;
 //Function Prototypes
void chap5prob6readin (float &, float &);
float chap5prob6covMeter (float, float);
float chap5prob6covCMeter (float, float);
void chap5prob6out (float, float);
    //Declare Variables
    float inches, feet;
    char answer;
    //loop
    do{
    //Read in data
    chap5prob6readin (feet, inches);
    chap5prob6out (feet, inches);
   cout<<"-----------------------------------------"<<endl;
   cout<<"Do you want to run the program again? (Y/N)"<<endl;
    cin>>answer;
    }while (answer=='Y'||answer=='y');
}

void chap5prob6out (float ft, float in){
cout<<"The length in meter = "<<chap5prob6covMeter (ft, in)<<"m."<<endl;
cout<<"The length in centimeter = "<<chap5prob6covCMeter (ft, in)<<"cm."<<endl;

}

float chap5prob6covCMeter (float ft, float in){
    float cmeter;
    return cmeter=(chap5prob6covMeter(ft,in)*COV_CM);
}

float chap5prob6covMeter (float ft, float in){
    float meter;
    ft+=in/COV_IN;
    return meter=ft*COV_MET;   
}

void chap5prob6readin (float &ft,float &in){
    char dum;
    cout<<"This program is about length conversion"<<endl;
 cout<<"Input the length in feet and in inches"<<endl;
 cout<<"then it will help you converting to meter and centimeter."<<endl;
 cout<<"format: xxxftxxxin"<<endl;
 cin>>ft>>dum>>dum>>in>>dum>>dum;
}
//-----------------------------------------------------------------------------
//Chapter 5 prob7
//Function Prototypes
float chap5prob7covfeet (float, float);
float chap5prob7covinches (float, float);

void chap5problem7(){
        cout<<"Chap5 problem 7"<<endl;
        //Function Prototypes
void chap5prob7readin (float &, float &);
float chap5prob7covfeet (float, float);
float chap5prob7covinches (float, float);
void chap5prob7out (float, float);
    //Declare Variables
    float meter, cmeter;
    char answer;
    //loop
    do{
    //Read in data
    chap5prob7readin (meter, cmeter);
    chap5prob7out (meter, cmeter);
   cout<<"-----------------------------------------"<<endl;
   cout<<"Do you want to run the program again? (Y/N)"<<endl;
    cin>>answer;
    }while (answer=='Y'||answer=='y');
}

void chap5prob7out (float m, float cm){
cout<<"The length in feet = "<<chap5prob7covfeet (m, cm)<<"foot."<<endl;
cout<<"The length in inches = "<<chap5prob7covinches (m, cm)<<"inches."<<endl;

}

float chap5prob7covinches (float m, float cm){
    float inches;
    chap5prob7covfeet (m, cm);
    return inches=(chap5prob7covfeet(m,cm)*COV_IN);
}

float chap5prob7covfeet (float m, float cm){
    float feet;
    m+=cm/COV_CM;
    return feet=m/COV_MET;   
}

void chap5prob7readin (float &m,float &cm){
    char dum;
    cout<<"This program is about length conversion"<<endl;
 cout<<"Input the length in meter and in centimeter"<<endl;
 cout<<"then it will help you converting to feet and inches"<<endl;
 cout<<"format: xxxmxxxcm"<<endl;
 cin>>m>>dum>>cm>>dum>>dum;
}
//----------------------------------------------------------------------------
// Function Prototypes
float chap5prob8covfeet (float, float);
float chap5prob8covinches (float, float);
float chap5prob8covMeter (float, float);
float chap5prob8covCMeter (float, float);
void chap5problem8(){
        cout<<"Chap5 problem 8"<<endl;
// Function Prototypes
void chap5prob8readin1 (float &, float &);
float chap5prob8covfeet (float, float);
float chap5prob8covinches (float, float);
void chap5prob8out1 (float, float);
void chap5prob8readin2 (float &, float &);
float chap5prob8covMeter (float, float);
float chap5prob8covCMeter (float, float);
void chap5prob8out2 (float, float);
//Declare Variables
float inches, feet,meter, cmeter;
char answer;
int num;
//loop
    do{
//decide if user want to convert unit from m and cm to ft and in.
//or convert from ft and in. to m and cm
        cout<<"What unit are you trying to convert to?"<<endl;
        cout<<"------------------------------------------------"<<endl;
        cout<<"if you want to convert the length from feet and inches to ";
        cout<<"meter and centimeter, please press 1 and enter"<<endl;
        cout<<"------------------------------------------------"<<endl;
        cout<<"if you want to convert the length from meter and centimeter to ";
        cout<<"feet and inches, please press 2 and enter."<<endl;
        cout<<"------------------------------------------------"<<endl;
        cin>>num;
        cout<<"------------------------------------------------"<<endl;
 if (num==2){
     chap5prob8readin1 (meter, cmeter);
     chap5prob8out1 (meter, cmeter);
 }else if (num==1){
     chap5prob8readin2 (meter, cmeter);
     chap5prob8out2 (meter, cmeter);
 }        
        cout<<"Do you want to run the program again? (Y/N)"<<endl;
        cin>>answer;
        }while (answer=='Y'||answer=='y');
}
void chap5prob8out1 (float m, float cm){
cout<<"The length in feet = "<<chap5prob8covfeet (m, cm)<<"foot."<<endl;
cout<<"The length in inches = "<<chap5prob8covinches (m, cm)<<"inches."<<endl;

}

float chap5prob8covinches (float m, float cm){
    float inches;
    chap5prob8covfeet (m, cm);
    return inches=(chap5prob8covfeet(m,cm)*COV_IN);
}

float chap5prob8covfeet (float m, float cm){
    float feet;
    m+=cm/COV_CM;
    return feet=m/COV_MET;   
}

void chap5prob8readin1 (float &m,float &cm){
    char dum;
 cout<<"Input the length in meter and in centimeter"<<endl;
 cout<<"then it will help you converting to feet and inches"<<endl;
 cout<<"format: xxxmxxxcm"<<endl;
 cin>>m>>dum>>cm>>dum>>dum;
}


void chap5prob8out2 (float ft, float in){
cout<<"The length in meter = "<<chap5prob8covMeter (ft, in)<<"m."<<endl;
cout<<"The length in centimeter = "<<chap5prob8covCMeter (ft, in)<<"cm."<<endl;

}

float chap5prob8covCMeter (float ft, float in){
    float cmeter;
    chap5prob8covMeter (ft, in);
    return cmeter=(chap5prob8covMeter(ft,in)*COV_CM);
}

float chap5prob8covMeter (float ft, float in){
    float meter;
    ft+=in/12;
    return meter=ft*COV_MET;   
}

void chap5prob8readin2 (float &ft,float &in){
    char dum;
 cout<<"Input the length in feet and in inches"<<endl;
 cout<<"then it will help you converting to meter and centimeter."<<endl;
 cout<<"format: xxxftxxxin"<<endl;
 cin>>ft>>dum>>dum>>in>>dum>>dum;
}
//-----------------------------------------------------------------------------
//Chap5 Prob9
 //Function Prototypes
float chap5pro9covkg (float, float);
float chap5pro9covg (float, float);
void chap5problem9(){
        cout<<"Chap5 problem 9"<<endl;
//Function Prototypes
void chap5pro9readin (float &, float &);
float chap5pro9covkg (float, float);
float chap5pro9covg (float, float);
void chap5pro9out (float, float);

    //Declare Variables
    float lbs, ounce;
    char answer;
    //loop
    do{
    //Read in data
    chap5pro9readin (lbs, ounce);
    chap5pro9out (lbs, ounce);
   cout<<"-----------------------------------------"<<endl;
   cout<<"Do you want to run the program again? (Y/N)"<<endl;
    cin>>answer;
    }while (answer=='Y'||answer=='y');
}

void chap5pro9out (float lb, float oc){
cout<<"The weight in kilogram = "<<chap5pro9covkg (lb, oc)<<"kg."<<endl;
cout<<"The weight in grams = "<<chap5pro9covg (lb, oc)<<"g."<<endl;

}

float chap5pro9covg (float lb, float oc){
    float g;
    return g=(chap5pro9covkg(lb,oc)*COV_gram);
}

float chap5pro9covkg (float lb, float oc){
    float kg;
    lb+=oc/COV_ounce;
    return kg=lb/COV_POUD;   
}

void chap5pro9readin (float &lb,float &oc){
    char dum;
    cout<<"This program is about weight conversion"<<endl;
 cout<<"Input the weight in pounds and in ounce"<<endl;
 cout<<"then it will help you converting to kilogram and gram"<<endl;
 cout<<"format: xxxlbsxxxoz"<<endl;
 cin>>lb>>dum>>dum>>dum>>oc>>dum>>dum;
}
//-----------------------------------------------------------------------------
//Chapter5 porb 10
//function Prototypes
float chap5pro10covoz (float, float);
float chap5pro10covpd (float, float);
void chap5problem10(){
        cout<<"Chap5 problem 10"<<endl;
        //Function Prototypes
void chap5pro10readin (float &, float &);
float chap5pro10covoz (float, float);
float chap5pro10covpd (float, float);
void chap5pro10out (float, float);
    //Declare Variables
    float kg, g;
    char answer;
    //loop
    do{
    //Read in data
    chap5pro10readin (kg, g);
    chap5pro10out (kg, g);
   cout<<"-----------------------------------------"<<endl;
   cout<<"Do you want to run the program again? (Y/N)"<<endl;
    cin>>answer;
    }while (answer=='Y'||answer=='y');
}

void chap5pro10out (float kg, float g){
cout<<"The weight in pounds = "<<chap5pro10covpd (kg, g)<<"lbs."<<endl;
cout<<"The weight in ounce = "<<chap5pro10covoz (kg, g)<<"oz."<<endl;

}

float chap5pro10covoz (float kg, float g){
    float oz;
    return oz=(chap5pro10covpd(kg,g)*COV_ounce);
}

float chap5pro10covpd (float kg, float g){
    float lb;
    kg+=g/COV_gram;
    return lb=kg*COV_POUD;   
}

void chap5pro10readin (float &kg,float &g){
    char dum;
    cout<<"This program is about weight conversion"<<endl;
 cout<<"Input the weight in kilogram and in gram"<<endl;
 cout<<"then it will help you converting to pounds and ounces"<<endl;
 cout<<"format: xxkgxxxg"<<endl;
 cin>>kg>>dum>>dum>>g>>dum;
}
//-----------------------------------------------------------------------------
void def(int inN){
        cout<<"You typed "<<inN<<" to exit the program"<<endl;
}
