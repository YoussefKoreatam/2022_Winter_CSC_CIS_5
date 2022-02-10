/* 
 * File:   main.cpp
 * Author: Youssef Koreatam
 * Created on January 13, 2022,
 * Purpose:  Calculate Ocean Levels
 */

//System Level Libraries
#include <iostream>  //Input-Output Library
using namespace std;
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
    float rate = 1.5, 
            infivyr = rate * 5,
            insvnyr = rate * 7,
            intenyr = rate * 10;
    //Initialize Variables
    
    //Map the inputs/known to the outputs
    
    //Display the outputs
    cout << "The number of millimeters higher than the current level that the ocean's level will be in 5 years: " << infivyr << " millimeters" << endl;
    cout << "The number of millimeters higher than the current level that the ocean's level will be in 7 years: " << insvnyr << " millimeters" << endl;
    cout << "The number of millimeters higher than the current level that the ocean's level will be in 10 years: " << intenyr << " millimeters" << endl;

    //Exit the program
    return 0;
}