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
#include <iomanip>
//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float payRt,
          paychk;
    int hrsNum;
    //Initialize or input i.e. set variable values
    
    
    cout << "This program calculates the gross paycheck." << endl;
    cout << "Input the pay rate in $'s/hr and the number of hours." << endl;
    cin >> payRt >> hrsNum;
    
    //Map inputs -> outputs
    if (hrsNum < 40){
        paychk = hrsNum * payRt;
    } else {
        paychk = (hrsNum * payRt) + ((hrsNum - 40) * payRt);
    }
    //Display the outputs
    cout << fixed << setprecision(2);
    cout << "Paycheck = $" <<setw(7) << paychk;
    //Exit stage right or left!
    return 0;
}