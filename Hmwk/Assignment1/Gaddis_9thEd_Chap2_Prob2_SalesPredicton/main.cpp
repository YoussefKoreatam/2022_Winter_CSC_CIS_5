/* 
 * File:   main.cpp
 * Author: Youssef Koreatam
 * Created on January 13, 2022,
 * Purpose:  Sales Prediction
 */

//System Level Libraries
#include <iostream>  //Input-Output Library
using namespace std;
#include <iomanip>
//User Defined Libraries

//Global Constants, not Global Variables
//These are recognized constants from the sciences
//Physics/Chemistry/Engineering and Conversions between
//systems of units!

//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Initialize Random Seed once here!
    
    //Declare Variables
    //Initialize Variables
    int compSal = 8600000;
    float estPerc = 0.58;
    int total = compSal * estPerc;
    
    //Map the inputs/known to the outputs
    
    //Display the outputs
    cout << total << endl;
    //Exit the program
    return 0;
}