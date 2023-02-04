// Meters to Feet.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
	float m, ft;

	// Taking the length of meters
	cout << "Enter the length in meters:";
	cin >> m;

	//Converts Meters into Feet
	ft = m * 3.28084;

	// Displaying the length
	cout << "Equal length in feet: " << ft << endl;

	return 0;
}
