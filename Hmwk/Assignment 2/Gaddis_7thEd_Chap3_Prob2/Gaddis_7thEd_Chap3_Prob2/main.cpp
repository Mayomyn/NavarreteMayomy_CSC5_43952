/* 
 * File:   main.cpp
 * Author: Mayomy Navarrete
 * Created on March 18, 2015, 4:30 PM
 *      //Purpose:Calculate the total revenue of the softball game 
 */

#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    float CA, CB, CC, CAC, CBC, CCC, Total;
    //Class A, Class B, Class C, Class A Cost, Class B Cost, Class C Cost
    cout<<"To figure out the total revenue from the softball game\n";
    cout<<"we have to know the number of seats sold in each category.\n";
    cout<<"Please press enter after every entry.\n\n";
    cout<<"How many seats were sold in Class A?\n";
    cin>>CA; CAC=15;
    cout<<"How many seats were sold in Class B?\n";
    cin>>CB; CBC=12;
    cout<<"How many seats were sold in Class C?\n";
    cin>>CC; CCC=9;
    Total=CA*CAC+CB*CBC+CC*CCC;
    cout<< setprecision(2)<<fixed;
    cout<<"\nThe total amount of revenue sold in the softball game is $"<<Total<<".";
    return 0;
}

