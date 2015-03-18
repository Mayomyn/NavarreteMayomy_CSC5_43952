/* 
 * File:   main.cpp
 * Author: Mayomyn
 *
 * Created on March 16, 2015, 2:57 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    double mph;
    cout<<"Enter the mph you want to convert\n";
    cin>> mph;
    
    double mn_ml = (1/mph) * 60;
    int min = static_cast <int> (mn_ml);
    double sec = (mn_ml - min) * 60;
    cout<<"Your pace is "<<min<<" minutes and "<<sec<<" seconds per mile."<<endl;
    return 0;
}

