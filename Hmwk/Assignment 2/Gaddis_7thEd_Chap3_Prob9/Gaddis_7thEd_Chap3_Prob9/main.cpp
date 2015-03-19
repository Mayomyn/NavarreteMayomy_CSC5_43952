/* 
 * File:   main.cpp
 * Author: Mayomy Navarrete
 * Created on March 18, 2015, 2:28 PM
 *      //Purpose:Calculate the total cost of the user automobile
 */

#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    float LnPyt, Inrnc, gas, oil, tires, MnTnc, TtlEpcM, TtlEpcA;
    //Loan Payment, Insurance, Maintenance, Total Expenses Monthly, Total Expenses Annually
    cout<<"To find out the monthly and annual cost of having you automotive vehicle's,\n";
    cout<<"please provide the following information. *Press enter after every entry\n";
    
    cout<<"Loan Payment Cost Per Month\n";
    cin>>LnPyt;
    cout<<"Insurance Cost Per Month\n";
    cin>>Inrnc;
    cout<<"Gas Cost Per Month\n";
    cin>>gas;
    cout<<"Oil Cost Per Month\n";
    cin>>oil;
    cout<<"Tire Cost Per Month\n";
    cin>>tires;
    cout<<"Maintenance Cost Per Month\n";
    cin>>MnTnc;
    
    TtlEpcM = LnPyt + Inrnc + gas + oil + tires + MnTnc;
    TtlEpcA = TtlEpcM * 12;
    
    cout<<"The monthly cost of your automobile is $"<<TtlEpcM<<" and $"<<TtlEpcA<<" annually.";
    return 0;
}

