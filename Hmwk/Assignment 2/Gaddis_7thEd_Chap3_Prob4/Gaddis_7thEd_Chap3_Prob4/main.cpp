/* 
 * File:   main.cpp
 * Author: Mayomy Navarrete
 * Created on March 18, 2015, 2:28 PM
 *      //Purpose:Calculate average rainfall for three months
 */

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    float RnPrMn1, RnPrMn2, RnPrMn3, total, average;
    //Rainfall per month 1,2,&3
    string month1, month2, month3;
    
    cout<<"To find the average rainfall between three month,\n";
    cout<<"please enter the three months you wish to find the average\n";
    cout<<"so every month please press enter.\n";
    
    cout<<"\nFirst month\n";  cin>>month1;      
    cout<<"Second month\n";   cin>>month2;   
    cout<<"Third month\n";    cin>>month3;
   
    
    cout<<"\nWhat was the amount of rainfall (in inches) for "<<month1<<".\n"; cin>>RnPrMn1;
    cout<<"What was the amount of rainfall (in inches) for "<<month2<<".\n"; cin>>RnPrMn2;
    cout<<"What was the amount of rainfall (in inches) for "<<month3<<".\n"; cin>>RnPrMn3;
    
    total = RnPrMn1 + RnPrMn2 + RnPrMn3; average = total / 3;
    cout<< setprecision(2)<<fixed;
    
    cout<<"\nThe average rainfall for "<<month1<<" "<<month2<<" "<<month3<<" is "<<average<<"(in inches).";
    return 0;
}

