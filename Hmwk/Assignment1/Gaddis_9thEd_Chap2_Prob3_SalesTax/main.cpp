/* 
 * File:   main.cpp
 * Author: Youssef Koreatam
 * Created on January 13, 2022,
 * Purpose:  Sales Tax
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
    float statTax = 0.04, 
          counTax = 0.02, 
          totTax;
    int total = 95;
    //Initialize Variables
    totTax = (statTax + counTax) * total;
    //Map the inputs/known to the outputs
    
    //Display the outputs
    cout << "The Total after taxes is " << totTax << endl;
    //Exit the program
    return 0;
}