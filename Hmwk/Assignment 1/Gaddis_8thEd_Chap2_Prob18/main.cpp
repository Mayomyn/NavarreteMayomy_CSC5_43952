/* 
 * File:   main.cpp
 * Author: Mayomy Navarrete
 *Created on March 4, 2015, 8:24 AM
 *      Purpose: 2nd Homeworks Problem
 */

//System Libraries
#include <iostream>

using namespace std;

//User Libraries

//Global Constants
unsigned char CNVPCT=100;

//Function Prototypes

//Execution Begins Here! 
int main(int argc, char** argv) {
         //Declare Variables
        unsigned short nCust,nEDrnks,nCDrnks;
        unsigned char pEDrnks,pCDrnks;
        //Input/Assigned Values
        nCust=16500;//Number of Customers
        pEDrnks=15;//Percentage Energy Drinkers
        pCDrnks=58;//Percentage out of Energy Drinkers 
        //Process Calculate
        nEDrnks=nCust/static_cast<float>(CNVPCT)*pEDrnks;
        nCDrnks=nEDrnks/static_cast<float>(CNVPCT)*pCDrnks;
        //Output Everything
        cout<<"Number of customers = "<<nCust<<endl;
        cout<<"Percentage Energy Drinkers = "
                <<static_cast<int>(pEDrnks)<<"%"<<endl;
        cout<<"Percentage Citrus Drinkers /Energy Drinkers = "
                <<static_cast<int>(pCDrnks)<<"%"<<endl;
        cout<<"Number of Energy Drinkers = "<<nEDrnks<<endl;
        cout<<"Number of Citrus Drinkers = "<<nCDrnks<<endl;
        //End Stage right 
    return 0;
}

