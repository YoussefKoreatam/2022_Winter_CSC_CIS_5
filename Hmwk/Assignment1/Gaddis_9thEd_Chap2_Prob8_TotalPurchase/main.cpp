/* 
 * File:   main.cpp
 * Author: Youssef Koreatam
 * Created on January 13, 2022,
 * Purpose:  
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
    float itm1 = 15.95, 
          itm2 = 24.95, 
          itm3 = 6.95, 
          itm4 = 12.95, 
          itm5 = 3.95, 
          subtot = itm1 + itm2 + itm3 + itm4 + itm5, 
          taxRate = 0.07, 
          tax = subtot * taxRate, 
          total = subtot + tax;
    //Initialize Variables
    
    //Map the inputs/known to the outputs
    cout << fixed << setprecision(2);
    cout << "Item 1: $" << itm1 << endl;
    cout << "Item 2: $" << itm2 << endl;
    cout << "Item 3: $" << itm3 << endl;
    cout << "Item 4: $" << itm4 << endl;
    cout << "Item 5: $" << itm5 << endl;
    cout << "Subtotal: $" << subtot << endl;
    cout << "Sales Tax: $" << tax << endl;
    cout << "Total: $" << total << endl;
    //Display the outputs

    //Exit the program
    return 0;
}