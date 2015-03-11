/* 
 * File:   main.cpp
 * Author: Mayomy Navarrete
 * Created on March 6, 2015, 4:30 PM
 *      //Purpose Output the value of the giving amount of quarters, dimes, and nickels
 */

#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    int quarters, dimes, nickels, total_amount;
    cout<<"Press enter after entering a number.\n";
    cout<<"Choose the number of quarters you would like to enter.\n";
         cin>>quarters; 
         quarters = quarters * 25;
    cout<<"Next, you will choose the number of dimes you would like to enter.\n";
        cin>>dimes;
        dimes = dimes * 10;
    cout<<"Finally, you will choose the number of nickels you would like to enter.\n";
        cin>>nickels;
        nickels = nickels * 5;
    total_amount = quarters + dimes + nickels;
    cout<<"The total amount is "<<total_amount<<" cents."<<endl;
    return 0;
}

