/* 
 * File:   main.cpp
 * Author: Mayomy Navarrete
 * Created on March 6, 2015, 4:30 PM
 *      //Purpose: Mad Lib
 */

#include <iostream>
#include <string>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    string instrNm, UserNm, AFood ,x100120 ,adtve ,AColor ,Animal;
        //Instructors first or last name, User's Name, A Food, 
        //A number between 100 and 120, An Adjective, A Color, An Animal
    cout<<"In this program you'll create a Mad Lib.\n";
    cout<<"You'll start be filling in for the following prompts.\n";
    cout<<"The first or last name of you instructor\n";
    cin>>instrNm;
    cout<<"Your First Name\n";
    cin>>UserNm;
    cout<<"A Food\n";
    cin>>AFood;
    cout<<"A number between 100 and 120\n";
    cin>>x100120;
    cout<<"An adjective\n";
    cin>>adtve;
    cout<<"A color\n";
    cin>>AColor;
    cout<<"An animal\n";
    cin>>Animal;
    cout<<"\nWith the provided information you get the following message.\n";
    cout<<"\nDear Instructor "<<instrNm<<",\n"<<endl;
    cout<<"I am sorry that I an unable to turn in my home work at this time. First,\n";
    cout<<"I ate a rotten "<<AFood<<", which made me turn "<<AColor<<" and extremely ill. I\n";
    cout<<"came down with a fever of "<<x100120<<". Next, my "<<adtve<<" pet\n";
    cout<<Animal<<" must have smelled the remain of the "<<AFood<<" on my homework,\n";
    cout<<"because he ate it. I am currently rewriting my homework and hope you\n";
    cout<<"will accept it late.\n\n";
    cout<<"Sincerely,\n";
    cout<<UserNm;
    return 0;
}

