/* 
 * File:   main.cpp
 * Author: Youssef Koreatam
 * Created on January 17, 2021, 12:36 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */
 
 
 /*
 sweetner to kill a mouse = 5 grams 
the mass of the mouse = 35 grams
lb to grams = 453.592 grams
a single can mass = 350 gram
diet soda has 1/10 of 1% = 0.001
sweetner per can --> 0.001 * 350 = 0.35

rate to kill is 5/35 --> 1/7
200 * lb to gram --> 200 * 453.592 = 90,718.4
sweetner to kill human --> 90,718.4 / 7 = 12,959.771428571428571428571428571
in cans  * 0.35
(input) weight = 200
expected output = 37027
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    const float cnSwtnr = 0.001;
    int swKmous = 5,
        mousMas = 35,
        canMas  = 350,
        weight,
        toKhum;
    float lbTog = 453.592,
          swPrc = cnSwtnr * canMas;
          
    //Initialize or input i.e. set variable values
    //Map inputs -> outputs
    cout << "Program to calculate the limit of Soda Pop Consumption." << endl;
    cout << "Input the desired dieters weight in lbs." << endl;
    cin >> weight;
    toKhum = (weight * lbTog) / (mousMas / 5 ) / swPrc;
    cout << "The maximum number of soda pop cans" << endl;
    cout << "which can be consumed is " << toKhum << " cans";
    //Display the outputs

    //Exit stage right or left!
    return 0;
}