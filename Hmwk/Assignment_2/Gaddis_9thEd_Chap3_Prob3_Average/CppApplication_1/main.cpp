/* 
 * File:   main.cpp
 * Author: Youssef Koreatam
 * Created on January 16, 2019, 12:36 PM
 * Purpose:  Calculate the average of test scores
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
    int num1, num2, num3, num4, num5, tot;
    
    //Initialize or input i.e. set variable values
    cout << "Input 5 numbers to average." << endl;
    cin >> num1 >> num2 >> num3 >> num4 >> num5;
    //Map inputs -> outputs
    tot = num1 + num2 + num3 + num4 + num5;
    //Display the outputs
    cout << fixed << setprecision(1);
    cout << "The average = " << static_cast<float>(tot) / 5;
    //Exit stage right or left!
    return 0;
}