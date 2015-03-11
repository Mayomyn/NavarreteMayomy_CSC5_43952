/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on March 9, 2015, 10:20 AM
 */

#include <iostream>
using namespace std;

//User Libraries 

//Global Constants

//Function Prototype
int main(int argc, char** argv) {
//Declare variables
    unsigned short wtlbs, htin, ageyrs;
    char mf;
    unsigned char cBar=230;
    float BMRFem, BMRMale, nCBars;
    //Prompt the user for input
    cout<<"How many candy bars will it take"<<endl;
    cout<<"to maintain you weight?"<<endl;
    cout<<"All input are integers!!!"<<endl;
    cout<<"input your weight in lbs"<<endl;
    cin>>wtlbs;
    cout<<"Input your height in inches"<<endl;
    cin>>htin;
    cout<<"Input you age in years"<<endl;
    cin>>ageyrs;
    cout<<"Are you a male or female m/f one character input"<<endl;
    cin>>mf;
    //Calculate
    BMRFem=655+4.3*wtlbs+4.7*htin-4.7*ageyrs;
    BMRMale=66+6.3*wtlbs+12.9*htin-6.8*ageyrs;
    //        Ques       if Male       if Female    
    nCBars=((mf=='m')?(BMRMale/cBar):(BMRFem/cBar));
    //Output the results 
    cout<<"Your weight = "<<wtlbs<<"(lbs)"<<endl;
    cout<<"Your height = "<<htin<<"(inches)"<<endl;
    cout<<"Your age = "<<ageyrs<<"(years)"<<endl;
    cout<<"Your sex = "<<((mf=='m')?"Male":"Female")<<endl;
    cout<<"You can eat "<<nCBars<<" candy bars per/day"<<endl;
    //Exit Stage right!
    return 0;
}

