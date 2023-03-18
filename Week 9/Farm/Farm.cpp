// Farm.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <string>
using namespace std;

//Variables
const char COW = '1';
const char CHICKEN = '2';
const char PIG = '3';

// base class
class Animal 
{


};

// derived class
class Cow : public Animal 
{

    public:
    void milk() {
        cout << "I'm a cow! I can make milk! MOOOOOO!!" << endl;
    }
};

class Chicken : public Animal 
{

    public:
    void egg() {
        cout << "I'm a chicken! I can mlay an egg! Bawk BAWK!!" << endl;
    }
};

class Pig : public Animal 
{

    public:
    void bacon() {
        cout << "I'm a chicken! I can make bacon! Oink Oink!!" << endl;
    }
};

int main() 
{
    // Create object of the Dog class
    Cow cow1;
    Chicken chicken1;
    Pig pig1;

    // Calling members of the base class


    // Calling member of the derived class
    cow1.milk();
    chicken1.egg();
    pig1.bacon();

    return 0;
}