/* 
 * File:   main.cpp
 * Author: Youssef Koreatam
 * Created on January 13, 2022,
 * Purpose:  Restaurant Bill
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
    float cost = 88.67, 
          taxPerc = 0.0675,
          taxAmnt = (88.67 * taxPerc), 
          tip = (taxAmnt * 0.2), 
          totBill = (tip  + taxAmnt + cost);
    //Initialize Variables
    
    //Map the inputs/known to the outputs
    
    //Display the outputs
    cout << fixed << setprecision(2);
    cout << "Cost: " << cost << endl;
    cout << "Tax Amount: " << taxAmnt << endl;
    cout << "Tip: " << tip << endl;
    cout << "Total bill: " << totBill << endl;
    //Exit the program
    return 0;
}