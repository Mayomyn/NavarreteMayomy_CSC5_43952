/* 
 * File:   main.cpp
 * Author: Mayomy Navarrete
 *Created on March 16, 2015, 8:11 AM
 * 
 */

#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
// Declare Variables
    ofstream out;//output the results in file
    float hrsWkd;//Hours worked (hrs)
    float payRate;//Pay Rate (dollars/hour)
    float oRate=1.5f;//multiplicative factor of payrate
    float oTime=40.0f;//where overtime begins (hours)
    float payChk;//gross pay (dollars)
    //open the file
    out.open("Payroll.dat");
    //prompt the ser for inputs
    cout<<"How many hours this week did you work?"<<endl;
    cin>>hrsWkd;
    cout<<"What is your pay rate ($'s/hr)"<<endl;
    cin>>payRate;
    //Calculate the paycheck
    payChk=hrsWkd<oTime?
        payRate*hrsWkd:
        payRate*(hrsWkd+(oRate-1)*(hrsWkd-oTime));
    //output the results to the screen
    cout<<"Hours worked = "<<hrsWkd<<"(hrs)"<<endl;
    cout<<"Pay Rate = $"<<payRate<<"/(hr)"<<endl;
    cout<<"Overtime rate = "<<oRate<<endl;
    cout<<"Overtime begins at "<<oTime<<"(hrs"<<endl;
    cout<<"Gross pa = $"<<payChk<<endl;
    //output the results to the file
    out<<"Hours worked = "<<hrsWkd<<"(hrs)"<<endl;
    out<<"Pay Rate = $"<<payRate<<"/(hr)"<<endl;
    out<<"Overtime rate = "<<oRate<<endl;
    out<<"Overtime begins at "<<oTime<<"(hrs"<<endl;
    out<<"Gross pa = $"<<payChk<<endl;
    out.close();
    //close the file
   
    return 0;
}

