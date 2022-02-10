/* 
 * File:   main.cpp
 * Author: Youssef Koreatam
 * Created on January 2, 2019, 12:36 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */
/*

*/
//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int maxRoom, 
        atndNum,
        less,
        more;
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    cout << "Input the maximum room capacity and the number of people" << endl;
    cin >> maxRoom >> atndNum;
    if (maxRoom < atndNum) { 
        less = atndNum - maxRoom;
        cout << "Meeting cannot be held." << endl;
        cout << "Reduce number of people by " << less << " to avoid fire violation.";
    } else {
        cout << "Meeting can be held." << endl;
        if (maxRoom != atndNum){
            more = maxRoom - atndNum;
            cout << "Increase number of people by " << more << " will be allowed without violation.";
        }
    }
    //Display the outputs

    //Exit stage right or left!
    return 0;
}