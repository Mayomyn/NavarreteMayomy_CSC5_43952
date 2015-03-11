/* 
 * File:   main.cpp
 * Author: Mayomy Navarrete
 * Created on March 6, 2015, 4:30 PM
 *      //Purpose calculate the number of hours someone work per week 
 */

#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    int number_of_days, number_of_hours, total_hours;
    cout << "Press enter after entering a numbers.\n";
    cout << "Enter the number of hours you work per day:\n";
    cin  >> number_of_hours;
    cout << "Enter the number of days you work per week:\n";
    cin >> number_of_days;
        total_hours = number_of_days * number_of_hours;
    cout << "If you work ";
    cout << number_of_hours;
    cout << " hours a day and you work \n";
    cout << number_of_days;
    cout << " day of the week then the total amout\n";
    cout << "of hours you work per week is ";
    cout << total_hours;
    cout << ".";
    return 0;
}

