// ArrayToSet.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>
#include <unordered_set>
using namespace std;

int main()
{
    int arr[6], i, elem;
    cout << "Enter 5 Array Elements: ";
    for (i = 0; i < 5; i++)
        cin >> arr[i];
    cout << "\nEnter a new Element to Insert: ";
    cin >> elem;
    arr[i] = elem;
    cout << "\nThe New Array is:\n";
    for (i = 0; i < 6; i++)
        cout << arr[i] << "  ";
    cout << endl;
    return 0;
}