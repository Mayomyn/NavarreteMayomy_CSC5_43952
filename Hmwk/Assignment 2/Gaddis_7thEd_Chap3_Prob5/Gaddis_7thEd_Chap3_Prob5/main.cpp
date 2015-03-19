/* 
 * File:   main.cpp
 * Author: Mayomy Navarrete
 * Created on March 18, 2015, 6:26 PM
 *      //Purpose:Calculate total gross of a movie and who gets what
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
    float Adult_T, Adult_G, Child_G, Child_T, AmntBx, AmntDs, total;
    //Adult Ticket, Adult Gross, Child Gross, Child Ticket, 
    //Amount Paid to Distributor, Amount Paid to Box Office, Total Gross
    string NmMovie;
    //Name of Movie
    
    cout<<"In order to find out the total amount of revenue a movie make\n";
    cout<<"and were the profits are going we'll need to first find out the\n";
    cout<<"amount of tickets were sold. *Please press enter after every entry\n";
    
    cout<<"Witch movie are we talking about?\n";
    cin>>NmMovie;
    cout<<"\n\nWhat is the amount of adult tickets were sold for "<<NmMovie<<"?\n";
    cin>>Adult_T; Adult_G = Adult_T * 6;
    cout<<"\n\nWhat is the amount of children tickets were sold for "<<NmMovie<<"?\n";
    cin>>Child_T; Child_G = Child_T * 3;
    
    total = Adult_G + Child_G;
    AmntBx = total * 0.20;
    AmntDs = total - AmntBx;
    
    cout<<right<<"Movie Name:"<<right<<setw(34)<<NmMovie<<;
    cout<<"\nAdult Tickets Sold:"<<right<<setw(26)<<Adult_G;
    cout<<"\nChild Tickets Sold:"<<right<<setw(26)<<Child_G;
    cout<<"\nGross Box Office Profit:"<<setw(16)<<"$"<<right<<setw(5)<<setprecision(2)<<fixed<<showpoint<<total;
    cout<<"\nNet Box Office Profit:"<<setw(18)<<"$"<<right<<setw(5)<<setprecision(2)<<fixed<<showpoint<<AmntBx;
    cout<<"\nAmount Paid to Distributor:"<<setw(13)<<"$"<<right<<setw(5)<<setprecision(2)<<fixed<<showpoint<<AmntDs;
    return 0;
}

