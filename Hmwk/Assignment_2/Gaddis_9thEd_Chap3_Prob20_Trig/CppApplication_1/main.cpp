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
#include <cmath>

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const float PI = 4*atan(1);

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int ang;
    float sind, tand, cosnd, inrad;

    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    cout << "Calculate trig functions" << endl;
    cout << "Input the angle in degrees." << endl;
    cin >> ang;
    inrad = (ang * PI) / 180;
    sind = sin(inrad);
    cosnd = cos(inrad);
    tand = tan(inrad);
    //Display the outputs
    cout << fixed << setprecision(4);
    cout << "sin(" << ang << ") = " << sind << endl;
    cout << "cos(" << ang << ") = " << cosnd << endl;
    cout << "tan(" << ang << ") = " << tand;
    //Exit stage right or left!
    return 0;
}