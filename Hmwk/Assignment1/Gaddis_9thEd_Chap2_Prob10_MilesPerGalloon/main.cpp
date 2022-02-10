/* 
 * File:   main.cpp
 * Author: Youssef Koreatam
 * Created on January 13, 2022,
 * Purpose:  calculate miles per galloon
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
    int mildrvn = 375,
        galloon = 15,
        mpg = mildrvn / galloon;
    //Initialize Variables
    
    //Map the inputs/known to the outputs
    
    //Display the outputs
    cout << "Miles per Galloon: " << mpg << " mpg" << endl;
    //Exit the program
    return 0;
}