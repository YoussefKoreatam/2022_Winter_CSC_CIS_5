/* 
 * File:   main.cpp
 * Author: Youssef Koreatam
 * Created on Jan 24th, 2022,
 * Purpose:  Basic Menu with Functions for exams and homework
 */

//System Libraries
#include <iostream>   //Input/Output Library
#include <iomanip>   //Format Library
#include <string>
using namespace std;  //STD Name-space where Library is compiled

//User Libraries

//Global Constants not Variables
//Math/Physics/Science/Conversions/Dimensions

//Function Prototypes
void prob0();
void prob1();
void prob2();
void prob3();
void prob4();
void prob5();
void prob6();
void prob7();
void prob8();
void prob9();

//Code Begins Execution Here with function main
int main(int argc, char** argv) {
    //Set random number seed once here
    
    //Declare variables here
    int choose;//Choose a problem
    
    //Initialize variables here
    do{
        cout<<"Choose from the following Menu Items"<<endl;
        cout<<"Problem 0"<<endl;
        cout<<"Problem 1"<<endl;
        cout<<"Problem 2"<<endl;
        cout<<"Etc......"<<endl;
        cout<<"10 or greater, all negatives to exit"<<endl;
        cin>>choose;
        
        switch(choose){
            case 0:prob0();break;
            case 1:prob1();break;
            case 2:prob2();break;
            case 3:prob3();break;
            case 4:prob4();break;
            case 5:prob5();break;
            case 6:prob6();break;
            case 7:prob7();break;
            case 8:prob8();break;
            case 9:prob9();break;
            default:cout<<"Exiting the Menu"<<endl;
        }
    }while(choose>=0 && choose<=9);

    return 0;
}

void prob0(){
    cout<<"Place Problem 0 here"<<endl;
}

void prob1(){
    cout<<"Place Problem 1 here"<<endl;
    //Declare Variables
    string name1, name2, name3;
    
    //Initialize or input i.e. set variable values
    cout<<"Sorting Names"<<endl;
    cout<<"Input 3 names"<<endl;
    cin>>name1>>name2>>name3;
    
    //Map inputs -> outputs
    if(name1<name2 && name2<name3){
        cout<<name1<<endl<<name2<<endl<<name3;
    }
    if(name2<name1 && name1<name3){
        cout<<name2<<endl<<name1<<endl<<name3;
    }
    if(name3<name1 && name1<name2){
    cout<<name3<<endl<<name1<<endl<<name2;
    }
    if(name2<name3 && name3< name1){
        cout<<name2<<endl<<name3<<endl<<name1;
    }
    if(name3<name2 && name2<name1){
        cout<<name3<<endl<<name2<<endl<<name1;
    }
}

void prob2(){
    cout<<"Place Problem 2 here"<<endl;
    //Declare Variables
    int num_books,//number of books bought
           points;//points earned
    
    
    //Initialize or input i.e. set variable values
    cout<<"Book Worm Points"<<endl;
    cout<<"Input the number of books purchased this month."<<endl;
    cin>>num_books;
	points = 0;
    
    //Map inputs -> outputs
  points = num_books == 0? 4:
           num_books == 1? 5:
           num_books == 2? 15:
           num_books == 3? 30: 60;
    
    //Display the outputs
    cout<<"Books purchased = "<<setw(2)<<num_books<<endl;
    cout<<"Points earned   = "<<setw(2)<<points<<endl;
    //Exit stage right or left!
}

void prob3(){
    cout<<"Place Problem 3 here"<<endl;
     //Declare Variables
    int num_checks;
    
    float Start_BAL,
          Total_MC = 10,
          low_bal,
          new_bal,
          che_fee;
    
    
    
    //Initialize or input i.e. set variable values
    cout<<"Monthly Bank Fees"<<endl;
    cout<<"Input Current Bank Balance and Number of Checks"<<endl;
    cin>>Start_BAL>>num_checks;
    
    //Map inputs -> outputs
    if (Start_BAL < 400)
        low_bal = 15;
    
    
    che_fee =                       num_checks < 20 ? num_checks * 0.10 :
             (num_checks >= 20 && num_checks <= 39) ? num_checks * 0.08 :
             (num_checks >= 40 && num_checks <= 59) ? num_checks * 0.08 : num_checks * 0.04;

    new_bal = Start_BAL - (low_bal + che_fee + Total_MC);
    
    //Display the outputs
    cout<<setprecision(2)<<fixed;
    cout<<"Balance     $"<<setw(9)<<Start_BAL<<endl;
    cout<<"Check Fee   $"<<setw(9)<<che_fee<<endl;
    cout<<"Monthly Fee $"<<setw(9)<<Total_MC<<endl;
    cout<<"Low Balance $"<<setw(9)<<low_bal<<endl;
    cout<<"New Balance $"<<setw(9)<<new_bal<<endl;
    
    
    //Exit stage right or left!

}

void prob4(){
    cout<<"Place Problem 4 here"<<endl;
    //Declare Variables
    string runner1, runner2, runner3;
    int runtime1,runtime2,runtime3;
    
    //Initialize or input i.e. set variable values
    cout<<"Race Ranking Program"<<endl;
    cout<<"Input 3 Runners"<<endl;
    cout<<"Their names, then their times"<<endl;
    cin>>runner1>>runtime1>>runner2>>runtime2>>runner3>>runtime3;
    
    //Map inputs -> outputs
    if(runtime1 < 0  || runtime2 < 0 || runtime3 < 0){
        cout<<"Error. Run times must be greater than 0. Please try again.";
    }
    else{
        if(runtime1 < runtime2){
            if(runtime1 < runtime3){
                cout<<runner1<<"\t "<<runtime1<<endl;
            if(runtime2 > runtime3){
                cout<<runner2<<"\t"<<runtime2<<endl;
                cout<<runner3<<"\t"<<runtime3<<endl;
                
             }    
            }
        }
        if(runtime2 < runtime1){
            if(runtime2 < runtime3){
                cout<<runner2<<"\t "<<runtime2<<endl;
            if(runtime1 > runtime3){
                cout<<runner1<<"\t"<<runtime1<<endl;
                cout<<runner3<<"\t"<<runtime3<<endl;
                }
            }
            else {
                cout<<runner3<<"\t"<<runtime3<<endl;
                cout<<runner1<<"\t"<<runtime1<<endl;
            }
        }
        if(runtime3 < runtime2){
            if(runtime3 < runtime1){
                cout<<runner3<<"\t "<<runtime3<<endl;
            if(runtime1 < runtime2){
                cout<<runner1<<"\t"<<runtime1<<endl;
                cout<<runner2<<"\t"<<runtime2<<endl;
            }
            else{
                cout<<runner2<<"\t"<<runtime2<<endl;
                cout<<runner1<<"\t"<<runtime1<<endl;
            }
            }
        }
    }
}

void prob5(){
    cout<<"Place Problem 5 here"<<endl;
     //Declare  Variables here
    char ISPkge;
    float hrs, bill, ot;

    //Initialize Variables here
    cout << "ISP Bill" << endl;
    cout << "Input Package and Hours" << endl;
    cin >> ISPkge >> hrs;

    //Map inputs/knowns to the output
    //calculate bill based on package and hours used
    switch(ISPkge){
        case 'A': bill = hrs > 10 ?  9.95 + ((hrs - 10) * 2.00) :  9.95; break;
        case 'B': bill = hrs > 20 ? 14.95 + ((hrs - 20) * 1.00) : 14.95; break;
        default: bill = 19.95;
    }


    //Display the outputs
    cout<<setprecision(2)<<fixed;
    cout<<"Bill = $"<<setw(6)<<bill<<endl;
    //Exit stage right or left!
}

void prob6(){
    cout<<"Place Problem 6 here"<<endl;
    //Declare  Variables here
    char
        rck,    //choice option
        ppr,    //choice option
        scr,    //choice option
        p1Chce, //player1 guess
        p2Chce; //player2 guess
    string
        rckWins, //message when rock wins
        pprWins, //message when paper wins
        scrWins, //message when scissor wins
        tieGame, //output message when game ties
        outcome; //outcome of game

    //Initialize Variables here
    cout << "Rock Paper Scissors Game" << endl;
    cout << "Input Player 1 and Player 2 Choices" << endl;
    cin >> p1Chce >> p2Chce;
    //convert letters to game options
    rck = 'r';
    ppr = 'p';
    scr = 's';
    //game outcomes
    rckWins = "Rock breaks scissors.";
    pprWins = "Paper covers rock.";
    scrWins = "Scissors cuts paper.";
    tieGame = "It's a tie.";
    //convert player1 choice to lowercase
    if (p1Chce == 'r' || p1Chce == 'R')
        p1Chce = rck;
    else if (p1Chce == 'p' || p1Chce == 'P')
        p1Chce = ppr;
    else if (p1Chce == 's' || p1Chce == 'S')
        p1Chce = scr;
    //conver player2 choice to lowercase
    if (p2Chce == 'r' || p2Chce == 'R')
        p2Chce = rck;
    else if (p2Chce == 'p' || p2Chce == 'P')
        p2Chce = ppr;
    else if (p2Chce == 's' || p2Chce == 'S')
        p2Chce = scr;

    //Map inputs/knowns to the output
    //determine outcome of game
    if (p1Chce == rck)
    {
        if (p2Chce == rck)
            outcome = tieGame;
        else if (p2Chce == ppr)
            outcome = pprWins;
        else
            outcome = rckWins;
    }
    else if (p1Chce == ppr)
    {
        if (p2Chce == rck)
            outcome = pprWins;
        else if (p2Chce == ppr)
            outcome = tieGame;
        else
            outcome = scrWins;
    }
    else
    {
        if (p2Chce == rck)
            outcome = rckWins;
        else if (p2Chce == ppr)
            outcome = scrWins;
        else
            outcome = tieGame;
    }

    //Display Output
    cout << outcome<<endl;
}

void prob7(){
    cout<<"Place Problem 7 here"<<endl;
    //Declare  Variables here
    int n1000s, n100s, n10s, n1s;
    unsigned short arabic;
    string roman = "";

    //Initialize Variables here
    cout<<"Arabic to Roman numeral conversion." << endl;
    cout<<"Input the integer to convert." << endl;
    cin >> arabic;
    //convert digits
    n1000s = arabic / 1000;
    n100s  = (arabic - n1000s * 1000) / 100;
    n10s   = arabic % 100/ 10;
    n1s    = arabic % 10;

    //Map inputs/knowns to the output
    //convert the 1000s
    switch(n1000s){
        case 3: roman += "M";
        case 2: roman += "M";
        case 1: roman += "M";
    }
    //convert the 100s
    switch(n100s){
        case 9: {
            roman += "C";
            roman += "M";
            break;
        }
        case 8: case 7: case 6: {
            roman += "D";
            for (int i = 0; i < n100s - 5; i++) roman += "C";
            break;
        }
        case 5: {
            roman += "D";
            break;
        }
        case 4: {
            roman += "C";
            roman += "D";
            break;
        }
        case 3: case 2: case 1: {
            for (int i = 0; i < n100s; i++) roman += "C";
            break;
        }

    }
    //convert the 10s
     switch(n10s){
        case 9: {
            roman += "X";
            roman += "C";
            break;
        }
        case 8: case 7: case 6: {
            roman += "L";
            for (int i = 0; i < n10s - 5; i++) roman += "X";
            break;
        }
        case 5: {
            roman += "L";
            break;
        }
        case 4: {
            roman += "X";
            roman += "L";
            break;
        }
        case 3: case 2: case 1: {
            for (int i = 0; i < n10s; i++) roman += "X";
            break;
        }
    }
    //convert the 1s
    switch(n1s){
        case 9: {
            roman += "I";
            roman += "X";
            break;
        }
        case 8: case 7: case 6: {
            roman += "V";
            for (int i = 0; i < n1s - 5; i++) roman += "I";
            break;
        }
        case 5: {
            roman += "V";
            break;
        }
        case 4: {
            roman += "I";
            roman += "V";
            break;
        }
        case 3: case 2: case 1: {
            for (int i = 0; i < n1s; i++) roman += "I";
            break;
        }
    }

    //Display Output
    arabic < 1000 || arabic > 3000
        ? cout << arabic << " is Out of Range!"<<endl
        : cout << arabic << " is equal to " << roman<<endl;

}

void prob8(){
    cout<<"Place Problem 8 here"<<endl;
     //Declare  Variables here
    string sign1, sign2, type1, type2;

    //Initialize Variables here
    cout << "Horoscope Program which examines compatible signs." << endl;
    cout << "Input 2 signs." << endl;
    cin >> sign1 >> sign2;

    //Map inputs/knowns to the output
    //find type of sign 1
    type1 = (sign1 == "Aries"  || sign1 == "Leo"     || sign1 == "Sagittarius")   ? "Fire" :
            (sign1 == "Taurus" || sign1 == "Virgo"   || sign1 == "Capricorn")     ? "Earth":
            (sign1 == "Gemini" || sign1 == "Libra"   || sign1 == "Aquarius")      ? "Air"  : "Water";
    //find type of sign 2
    type2 = (sign2 == "Aries"  || sign2 == "Leo"     || sign2 == "Sagittarius")   ? "Fire" :
            (sign2 == "Taurus" || sign2 == "Virgo"   || sign2 == "Capricorn")     ? "Earth":
            (sign2 == "Gemini" || sign2 == "Libra"   || sign2 == "Aquarius")      ? "Air"  : "Water";

    //Display Output
    type1 == type2
        ? cout << sign1 << " and " << sign2 << " are compatible " << type1 << " signs."
        : cout << sign1 << " and " << sign2 << " are not compatible signs."<<endl;

}

void prob9(){
    cout<<"Place Problem 9 here"<<endl;
    //Declare Variables
    bool x,y;
    
    //Heading
    cout<<"X Y !X !Y X&&Y X||Y X^Y X^Y^X X^Y^Y !X&&!Y "
        <<"!(X||Y) !X||!Y !(X&&Y)"<<endl;
    
    //First Row
    x=y=true;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x||y?'T':'F')<<"   ";
    cout<<(x^y?'T':'F')<<"    ";
    cout<<(x^y^x?'T':'F')<<"     ";
    cout<<(x^y^y?'T':'F')<<"      ";
    cout<<(!x&&!y?'T':'F')<<"      ";
    cout<<(!(x||!y)?'T':'F')<<"       ";
    cout<<(!(x||y)?'T':'F')<<"       ";
    cout<<(!(x&&y)?'T':'F')<<"";
    cout<<endl;
    
    //Second Row
    y=false;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x||y?'T':'F')<<"   ";
    cout<<(x^y?'T':'F')<<"    ";
    cout<<(x^y^x?'T':'F')<<"     ";
    cout<<(x^y^y?'T':'F')<<"      ";
    cout<<(!x&&!y?'T':'F')<<"      ";
    cout<<(!(x||!y)?'T':'F')<<"       ";
    cout<<(!(x||y)?'T':'F')<<"       ";
    cout<<(!(x&&y)?'T':'F')<<"";
    cout<<endl;
}