/* 
 * File:   main.cpp
 * Author: Mayomy Navarrete
 * Created on March 18, 2015, 2:28 PM
 *      //Purpose:Calculate the averages of test scores 
 */

#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    float test1, test2, test3, test4, test5, total, average;
    cout<<"Please input the five test scores you wish to find to average to.\n";
    cout<<"For every entry please press enter Please keep in mind that the\n";
    cout<<"entry are entered individually and not all at once.\n";
    cout<<"\nPlease enter the first test score\n";
    cin>>test1;
    cout<<"\nPlease enter the second test score\n";
    cin>>test2;
    cout<<"\nPlease enter the third test score\n";
    cin>>test3;
    cout<<"\nPlease enter the fourth test score\n";
    cin>>test4;
    cout<<"\nPlease enter the fifth test score\n";
    cin>>test5;
    total=test1+test2+test3+test4+test5; average=total/5;
    cout<< setprecision(2)<<fixed;
    cout<<"With the given information we can calculate that the average is "<<average<<".";
    return 0;
}

