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




int main()
{
    //var dec to hold the return value from the displayMenu() function
    int choice;


    //keep running until the user wishes to exit
    do{

        //call the displayMenu() function
        choice = displayMenu();

        //break out of the do-while if the user chose wrong 3 times
        if (choice == -1){
            break;
        }


        //filter choice var through switch statement
        switch (choice){
            case 1:
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

    //var dec to hold user choice and a counter for wrong selections
    int choice;
    int counter = 0;

    //iterate until selection is satisfied or too many worng selections
    do{
        //dipslay menu
        cout << "==================MENU==================" << endl;
        cout << "|  1.                   7.             |" << endl;
        cout << "|  2.                   8.             |" << endl;
        cout << "|  3.                   9.             |" << endl;
        cout << "|  4.                  10.             |" << endl;
        cout << "|  5.                  11.             |" << endl;
        cout << "|  6.                  12. EXIT        |" << endl;
        cout << "========================================" << endl;
        cout << "     Enter your selection wisely: ";
        cin >> choice;

        //validate the users choice
        if (choice < 0 || choice > 12){
            cout << "" << endl;
            return -1;
        }

    }while(choice != 12);

    return choice;
}
























