/* 
 * File:   main.cpp
 * Author: Youssef Koreatam
 * Created on February 1, 2022, 11:20 AM
 * Purpose:  Project: hangman
 */
 
//System Level Libraries
#include <iostream>  //Input-Output Library
using namespace std;
#include <cstdlib>
#include <ctime> 
//User Defined Libraries
 
//Global Constants, not Global Variables
//These are recognized constants from the sciences
//Physics/Chemistry/Engineering and Conversions between
//systems of units!
 
//Function Prototypes
 
//Execution begins here!
int main(int argc, char** argv) {
    //Initialize Random Seed once here!
    srand(static_cast<unsigned int>(time(0)));
    //Declare Variables
    int   wordnum;
    string wrong6;
    string wrong5;
    string wrong4;
    string wrong3;
    string wrong2;
    string wrong1;
    string wrong0;
    string logo;
    string play;
    //Initialize Variables
    wordnum = rand() % 10;
  	wrong6 = R"( 
  +---+
  |   |
  O   |
 /|\  |
 / \  |
      |
=========)";
	wrong5 = R"(
  +---+
  |   |
  O   |
 /|\  |
 /    |
      |
=========
    )";
    wrong4 = R"(
  +---+
  |   |
  O   |
 /|\  |
      |
      |
=========
    )";
    wrong3 = R"(
  +---+
  |   |
  O   |
 /|   |
      |
      |
=========
    )";
    wrong2 = R"(
  +---+
  |   |
  O   |
  |   |
      |
      |
=========
    )";
    wrong1 = R"(
  +---+
  |   |
  O   |
      |
      |
      |
=========
    )";
    wrong0 = R"(
  +---+
  |   |
      |
      |
      |
      |
=========
    )";
    logo   = R"(
 _                                             
| |                                            
| |__   __ _ _ __   __ _ _ __ ___   __ _ _ __  
| '_ \ / _` | '_ \ / _` | '_ ` _ \ / _` | '_ \ 
| | | | (_| | | | | (_| | | | | | | (_| | | | |
|_| |_|\__,_|_| |_|\__, |_| |_| |_|\__,_|_| |_|
                    __/ |                      
                   |___/    
    )";
    play = "yes"
    //Map the inputs/known to the outputs
    cout << logo << endl;
    cout << "Do you want to play  game of hangman? Type y or n" << endl;
    cin  >> play;
    play? 
    //Display the outputs
	
    //Exit the program
    return 0;
}