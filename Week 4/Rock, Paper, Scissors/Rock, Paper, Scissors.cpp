// Rock, Paper, Scissors.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

//Variables
const char ROCK = 'R';
const char PAPER = 'P';
const char SCISSORS = 'S';

using namespace std;


char getComputerOption() 
{
    srand(time(0));
    // Ranom Number
    int num = rand() % 3 + 1;
    if (num == 1) return 'R';
    if (num == 2) return 'P';
    if (num == 3) return 'S';
}

char getUserOption() 
{
    char c;
    cout << "Lets play Rock, Paper, and Scissors!" << endl;
    cout << "Press R for Rock, P for Paper, and S for Scissors." << endl;
    cout << "-----------------------------------" << endl;
    cout << "(R) for Rock" << endl << "(P) for Paper" << endl << "(S) for Scissors" << endl;
    cin >> c;
    c = toupper(c);

    while (c!='R' && c!='P' && c!='S' && c!='Q')
    {
        cout << "Please enter one of the following options only!" << endl;
        cout << "(R) for Rock" << endl << "(P) for Paper" << endl << "(S) for Scissors" << endl;
        cin >> c;
    }

    return c;
}

void showSelectedOption(char option)
{
    string choice;
    switch (option) 
    {
        case 'R':  choice = "ROCK"; break;

        case 'P': choice = "PAPER"; break;
        default :
        case 'S': choice = "SCISSORS"; break;

       //default : choice = "NULL"; break;
    }
    cout << choice << endl;
    /*if (option == 'R') cout << "Rock" << endl;
    if (option == 'P') cout << "Paper" << endl;
    if (option == 'S') cout << "Scissors" << endl;*/
}

void chooseWinner(char uChoice, char cChoice)
{
    //cout << (uChoice == ROCK && cChoice == PAPER ? "I win! Paper covers Rock!" : "Shadowbringer") << endl;
    if (uChoice == ROCK && cChoice == PAPER)
    {
        cout << "I win! Paper covers Rock!" << endl;
    }
    else if (uChoice == ROCK && cChoice == SCISSORS)
    {
        cout << "You win! Rock crushes Scissors!" << endl;
    }
    else if (uChoice == SCISSORS && cChoice == ROCK)
    {
        cout << "I win! Rock crushes  Scissors!" << endl;
    }
    else if (uChoice == SCISSORS && cChoice == PAPER)
    {
        cout << "You win! Scissors slices Paper!" << endl;
    }
    else if (uChoice == PAPER && cChoice == ROCK)
    {
        cout << "You win! Paper covers rock!" << endl;
    }
    else if (uChoice == PAPER && cChoice == SCISSORS)
    {
        cout << "You win! Scissors slices Paper!" << endl;
    }
    else
    {
        cout << "Tie! Play again to win the game." << endl;
    }
}

int option; //Stores the number the user picked

int main()
{
    char option;

    while (true)
    {
        //Menu Options
        cout << "Menu" << endl;
        cout << "Option 1 - Start" << endl;
        cout << "Option 2 - Quit" << endl;
        cin >> option;


        //option 1
        if (option == '1')
        {
            system("cls");
            break;
        }
        //Option 2
        else if (option == '2')
        {
            cout << "Goodbye!" << endl;
            return 0;
            break;
        }
        else
            cout << "Incorrect Option. Pick one of the bellow choices" << endl;
    }

    //User's choice
    char uChoice;
    //Computer's Choice
    char cChoice;

    while (true)
    {

        uChoice = getUserOption();

        cout << "Your choice is: " << endl;

        showSelectedOption(uChoice);


        cout << "Computer's choice is: " << endl;

        cChoice = getComputerOption();

        showSelectedOption(cChoice);


        chooseWinner(uChoice, cChoice);
    }

    return 0;
}
