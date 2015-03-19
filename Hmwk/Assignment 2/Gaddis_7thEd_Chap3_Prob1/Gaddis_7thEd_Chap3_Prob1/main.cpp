/* 
 * File:   main.cpp
 * Author: Mayomy Navarrete
 * Created on March 18, 2015, 2:28 PM
 *      //Purpose:Calculate a car's gas mileage
 */

#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    float GPT, MPT, MPG;
    //Gallons Per Tank, Miles Per Tank, Miles Per tank
    cout<<"In this program we'll calculate the number of miles \n";
    cout<<"you car can drive per gallon (MPG). Press enter after entering\n";
    cout<<"To find out the MPG of you car, we'll first start by getting\n";
    cout<<"some basic information about your car."; 
    cout<<"\n\nHow many gallons of gas can you car's tank hold?\n";
    cin>>GPT;
    cout<<"How many miles can the car drive on a full tank?\n";
    cin>>MPT;
    MPG=MPT/GPT;
    cout<< setprecision(2)<<fixed;
    cout<<"\nWith the following information we can calculate that you cars\n";
    cout<<"~"<<MPG<<" gets miles to the gallon.";
    return 0;
}

