/* 
 * File:   BMR.cpp
 * Author: Roman, Johnathon
 * Created on March 07, 2017 12:04PM
 * Purpose: Calculate # of Candy Bars BMR
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize Variables Here
    char sex;                  //M or F
    unsigned short ht,wt,age;  //height(inches),weight(lbs),age(years)
    unsigned char cdyCals=230; //Candy Bar Calories
    float bmr;                 //Basic Metabolic Rate(Calories)
    int nCdyBrs;//Number of candy bars we can eat
    
    //Input data
    cout<<"this program calculates the number of ";
    cout<<"candy bars allowed per day based upon your BMR";
    cout<<"type in your Sex(M/F),WT(Lbs),Ht(in), Age(Yrs)";
    cout<<"Inputs are integer based"<<endl;
    cin>>sex>>wt>>ht>>age;
    
    //Process/Calculations Here
    bmr=(sex=='M')?
         66 + 6.3f*wt + 12.9f*ht - 6.8f*age:
        655 + 4.3f*wt +  4.7f*ht - 4.7f*age;
    nCdyBrs=static_cast<int>(bmr/cdyCals);
    
    //Output Located Here
    cout<<"The number of candy bars you can eat = "<<nCdyBrs<<endl;
    

    //Exit
    return 0;
}

