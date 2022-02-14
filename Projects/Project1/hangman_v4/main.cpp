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
#include <iomanip>
#include <string>
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
    string word;
    string dashes;
    string gsRt = "";
    char guess;
    bool cont;
    //Initialize Variables
    
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
    cont = true;
    //Map the inputs/known to the outputs
    while(cont == true){
    wordnum = rand() % 10;
    cout << "Do you want to play  game of hangman? Type y or n" << endl;
    cin  >> play;
    if(play == "n"){
        cont = false;
        cout << "Good Bye!";
    }else if(play == "y"){
        cont = true;
    }else{
        while(play != "y" && play != "n" && cont == true){
        cout << "Enter a valid option" << endl;
        cout << "Do you want to play  game of hangman? Type y or n" << endl;
        cin  >> play;
         if(play == "n"){
            cont = false;
            cout << "Good Bye!";
        }else if(play == "y"){
            cont = true;
    }
    }
    }
    if(play == "y"){
        cout << logo << endl;
        cout << wrong0 << endl;
        cout << "Guess a letter:" << endl;
        cout << "word num is " << wordnum << endl; // to remove
        switch(wordnum){
            case 0: word = "apple";break;
            case 1: word = "python";break;
            case 2: word = "computer";break;
            case 3: word = "science";break;
            case 4: word = "football";break;
            case 5: word = "battleship";break;
            case 6: word = "water";break;
            case 7: word = "flower";break;
            case 8: word = "hardware";break;
            case 9: word = "software";break;
        }
    
    cout << word << endl;  // to remove
    for(int dashesV = word.length(); dashesV > 0; dashesV--){
        dashes += "-";
    }
    cout << dashes;
    cout << endl;
    int size = word.length();
    
    
    cout << size << endl;
    for(int tries = 6; tries > 0;tries--){
    cout << "Guess a letter: " << endl;
    cin  >> guess;
    if(guess >= 65 && guess <= 90){
        guess += 32;
    }else if(guess >= 97 && guess <= 122){
        guess = guess;
    }else{
        cout << "Please enter a valid letter as a guess!" << endl;
    }
    for(int i = 0; i < size; i++){
        if(guess == static_cast<char>(word[i]) && tries > 0){
            
            cout << word[i] << " is correct" << endl;
            tries < 6? tries +=1: tries=tries;
            gsRt += word[i];
            cout << gsRt << endl;
        }
        
        
    }
        cout << "You have " << tries << " tries left." << endl;
        
        if(tries == 0){
            cout << "You lost!" << endl;
            cont == false;
        }else if(gsRt == word){
            cout << "You won!" << endl;
            cont == false;
        }
    }
    }
    }
    //Exit the program
    return 0;
}