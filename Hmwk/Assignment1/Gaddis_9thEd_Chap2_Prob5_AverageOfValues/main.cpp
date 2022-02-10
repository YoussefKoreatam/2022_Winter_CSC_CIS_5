/* 
 * File:   main.cpp
 * Author: Youssef Koreatam
 * Created on January 13, 2022,
 * Purpose:  Find the average of values
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
    int num1 = 28, 
        num2 = 32, 
        num3 = 37, 
        num4 = 24, 
        num5 = 33,
        total = num1 + num2 + num3 + num4 + num5;
    //Initialize Variables
    
    //Map the inputs/known to the outputs
    
    //Display the outputs
    cout << (static_cast<float>(total) / 5);
    //Exit the program
    return 0;
}