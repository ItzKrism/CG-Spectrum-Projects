// Rock, Paper, Scissors.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

//Variables
const char ROCK = 'r';
const char PAPER = 'p';
const char SCISSORS = 's';

using namespace std;


char getComputerOption() 
{
    srand(time(0));
    // Ranom Number
    int num = rand() % 3 + 1;
    if (num == 1) return 'R';
    if (num == 2) return 'P';
    if (num == 3) return'S';
}

char getUserOption() 
{
    char c;
    cout << "Lets play Rock, Paper, and Scissors!" << endl;
    cout << "Press R for Rock, P for Paper, and S for Scissors." << endl;
    cout << "-----------------------------------" << endl;
    cout << "(R) for Rock" << endl << "(P) for Paper" << endl << "(S) for Scissors" << endl;
    cin >> c;

    while (c!='R' && c!='P' && c!='S')
    {
        cout << "Please enter one of the following options only!" << endl;
        cout << "(R) for Rock" << endl << "(P) for Paper" << endl << "(S) for Scissors" << endl;
        cin >> c;
    }

    return c;
}

void showSelectedOption(char option)
{
    if (option == 'R') cout << "Rock" << endl;
    if (option == 'P') cout << "Paper" << endl;
    if (option == 'S') cout << "Scissors" << endl;
}

void chooseWinner(char uChoice, char cChoice)
{
    if (uChoice == ROCK && cChoice == PAPER)
    {
        cout << "I win! Paper covers Rock!" << endl;
    }
    else if(uChoice == PAPER && cChoice == SCISSORS) 
    {
        cout << "I win! Scissors slices Paper!" << endl;
    }
    else if (uChoice == SCISSORS && cChoice == ROCK)
    {
        cout << "I win! Rock crushes Scissors!" << endl;
    }
    else if (uChoice == ROCK && cChoice == SCISSORS) 
    {
        cout << "You win! Rock crushes  Scissors!" << endl;
    }
    else if (uChoice == PAPER && cChoice == ROCK)
    {
        cout << "You win! Paper covers rock!" << endl;
    }
    else if (uChoice == SCISSORS && cChoice == PAPER)
    {
        cout << "You win! Scissors slices Paper!" << endl;
    }
    else
    {
        cout << "Tie! Play again to win the game." << endl;
    }
}

int main()
{
    //User's choice
    char uChoice;
    //Computer's Choice
    char cChoice;

    uChoice = getUserOption();
    cout << "Your choice is: " << endl;
    showSelectedOption(uChoice);

    cout << "Computer's choice is: " << endl;
    cChoice = getComputerOption();
    showSelectedOption(cChoice);

    chooseWinner(uChoice, cChoice);

    return 0;
}
