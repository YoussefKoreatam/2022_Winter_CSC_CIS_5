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
    float f, cel ;
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    cout << "Temperature Converter" << endl;
    cout << "Input Degrees Fahrenheit" << endl;
    cin >> f;
    cel = 5 * (f-32) / 9;
    //Display the outputs
    cout << fixed << setprecision(1);
    cout << f << " Degrees Fahrenheit = " << cel <<" Degrees Centigrade";
    //Exit stage right or left!
    return 0;
}