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
    int num,
        total,
        posTot = 0,
        negTot = 0;
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    cout << "Input 10 numbers, any order, positive or negative" << endl;
    for (int i = 0; i < 10; i++){
    cin >> num;
    if (num > 0) {
        posTot+= num;
    } else {
        negTot+= num;
    }
    }
    total = negTot + posTot;
    //Display the outputs
    cout << "Negative sum = " << setw(3) << negTot << endl;
    cout << "Positive sum = " << setw(3) << posTot << endl;
    cout << "Total sum    = " << setw(3) << total;
    //Exit stage right or left!
    return 0;
}