/* 
 * File:   main.cpp
 * Author: Youssef Koreatam
 * Created on January 2, 2019, 12:36 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
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
    int value;
    //Initialize or input i.e. set variable values
    
    
    //Map inputs -> outputs
    cout << "Insurance Calculator" << endl;
    cout << "How much is your house worth?" << endl;
    cin >> value;
    cout << "You need $" << (value * .80) << " of insurance.";
    //Display the outputs

    //Exit stage right or left!
    return 0;
}