/* 
 * File:   main.cpp
 * Author: Mayomy Navarrete
 * Created on March 18, 2015, 2:28 PM
 *      //Purpose:Calculate the calories in the amount of cookies the user wants
 */

#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    int cookie, ClPrCk, CkPrBg, ClPrBg, SvPrBg, ClPrSr, TtlCl;
    //Calories Per Cookie, Cookies Per Bag, Calories per Bag,
    //Servings Per Bag, Calories Per Serving, Total Calories by User
    
    cout<<"How many cookies would you like to eat?\n";
    cin>>cookie;
    
    SvPrBg = 10; ClPrSr = 300; CkPrBg = 40;
    ClPrBg = SvPrBg * ClPrSr; ClPrCk = ClPrBg / CkPrBg;
    TtlCl = ClPrCk * cookie;
    
    cout<<"There are "<<TtlCl<<" calories in "<<cookie<<" cookies.";
    return 0;
}

