/* 
 * File:   main.cpp
 * Author: Youssef Koreatam
 * Created:2/4/22 17:37
 * Purpose:  2d table
 * 
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Format Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const int COLS=6;

//Function Prototypes
// void fillTbl(int [][COLS],int);
// void prntTbl(const int [][COLS],int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    const int ROWS=6;
     string row [] = {"R", "O", "W", "S"} ;
    int rowSi = 4;
    int c = 0;
    // int tablSum[ROWS][COLS];
    
    //Initialize or input i.e. set variable values
    // fillTbl(tablSum,ROWS);
    
    //Display the outputs
    // prntTbl(tablSum,ROWS);
    cout << "Think of this as the Sum of Dice Table" << endl;
    cout << "           C o l u m n s" << endl;
    cout << "     |";
    for(int a = 1; a <= COLS; a++){
        cout << "   " << a;
    }
    cout << endl << "----------------------------------" << endl;
    for(int b = 1; b <= ROWS; b++){
        if(b < 2 || b > 5){
            cout << "   ";
        }else{
            cout << row[c] << "  ";
            if(c < rowSi){
                c += 1;
            }
           
        }
        cout << b << " |";
        for(int d = 1; d <= COLS; d++){
            int sum = b+d;
            if(sum > 9){
                cout << "  " << sum;
            } else{
                cout << "   " << sum;
            }
        }
        cout << endl;
    }
    //Exit stage right or left!
    return 0;
}