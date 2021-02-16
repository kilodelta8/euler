/*
* PROJECT EULER
* John Durham
* 01/01/2021
* A simple C++ console application that presents a menu to run Project Euler problems
* via functions.
* For fun........
*/
#include <iostream>
using namespace std;



/*
************PROTO's************
*/

//Displays a main menu and returns users choice
int displayMenu();
//Multiples of 3 and 5 Project Euler problem #1
void multiplesOfThreeAndFive();



int main()
{
    //var dec to hold the return value from the displayMenu() function
    //and a counter to track the amount of wrong selections
    int choice;
    int counter = 0;

    //TODO - Size terminal window to suit the ascii menu's


    //keep running until the user wishes to exit
    do{

        //call the displayMenu() function
        choice = displayMenu();

        //validate the users choice
        if (choice < 1 || choice > 12){
            cout << "That is an invalid selection, try again!" << endl;
            counter++;
        }

        //break out of the do-while if the user chose wrong 3 times
        if (counter == 3){
            cout << "Perhaps it is time to hang it up for a bit." << endl;
            cout << "Come back later and try again....." << endl;
            return 0;
        }


        //clear(flush) the menu from the screen
        system("clear");



        //filter choice var through switch statement
        switch (choice){
            case 1:
                multiplesOfThreeAndFive();
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                break;
            case 6:
                break;
            case 7:
                break;
            case 8:
                break;
            case 9:
                break;
            case 10:
                break;
            case 11:
                break;
        }


        //clear(flush) the screen
        system("clear");


    }while(choice != 12);




    //saying good-bye
    cout << "Good Bye!" << endl;



    return 0;
}





/*
********************************FUNCTIONS********************************
*/


//displayMenu() displays an ascii menu, validates users selection then returns the selection
//If the user chooses an invalid selection three times, the program exits
int displayMenu(){

    //var dec to hold user choice
    int choice;


    //dipslay menu
    cout << "=============================MENU=============================" << endl;
    cout << "|  1. Multiples of 3 and 5        7.                         |" << endl;
    cout << "|  2.                             8.                         |" << endl;
    cout << "|  3.                             9.                         |" << endl;
    cout << "|  4.                            10.                         |" << endl;
    cout << "|  5.                            11.                         |" << endl;
    cout << "|  6.                            12. EXIT                    |" << endl;
    cout << "==============================================================" << endl;
    cout << "                Enter your selection wisely: ";
    cin >> choice;

    return choice;
}


//Multiples of 3 and 5 Project Euler problem #1 presentation
void multiplesOfThreeAndFive(){
    //explenation from site
    cout << "                                MULTIPLES OF 3 AND FIVE                                        " << endl;
    cout << "If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9." << endl;
    cout << "The sum of these multiples is 23.                                                              " << endl;
    cout << "Find the sum of all the multiples of 3 or 5 below 1000.                                        " << endl;

    //TODO - show code

    //TODO - run code, displaying results


    //linux command to pause the terminal screen
    cout << endl;
    cout << "Press any key to return to Menu!";
    cin.ignore().get();
}
























