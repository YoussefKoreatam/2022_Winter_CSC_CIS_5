/* 
 * File:   main.cpp
 * Author: Youssef Koreatam
 * Created on January 17, 2022, 12:36 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;
#include <iomanip>

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int prevSal;
    float retSal,
          nwAnlsl,
          nwMntsl;
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    cout << "Input previous annual salary." << endl;
    cin >> prevSal;
    retSal = (prevSal * 0.076) / 2;
    nwAnlsl = prevSal + retSal * 2;
    nwMntsl = nwAnlsl / 12;
    cout << fixed << setprecision(2);
    cout << setw(7);
    cout << "Retroactive pay    = $" << setw(7) << retSal <<endl;
    cout << "New annual salary  = $" << setw(7) << nwAnlsl <<endl;
    cout << "New monthly salary = $" << setw(7) << nwMntsl;
    //Display the outputs

    //Exit stage right or left!
    return 0;
}