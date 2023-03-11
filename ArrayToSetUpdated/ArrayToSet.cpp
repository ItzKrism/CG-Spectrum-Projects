// ArrayToSet.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>
#include <unordered_set>
#include <ctime>
using namespace std;

// function to generate and retrun random numbers.
int* getRandom() {

    static int  r[3];

    // set the seed
    srand((unsigned)time(NULL));

    for (int i = 0; i < 3; ++i) {
        r[i] = rand();
        cout << r[i] << endl;
    }

    return r;
}

int* add(int arr[], int element)
{
    int size = sizeof(arr) / sizeof(arr[0]);

    size++;

    int* newarr = new int[size];

    for(int a = 0; a < size-1; a = a + 1)
    {
        newarr[a] = arr[a];
    }
    newarr[size - 1] = element;
    return newarr;
}

bool contains(int arr[], int element)
{
    for(unsigned int a = 0; a < sizeof(arr) / sizeof(arr[0]); a = a + 1)
    {
        if (arr[a] == element) return true;
    }

    return false;
}

int main()
{
    /*int arr[6], i, elem;
    cout << "Enter 5 Array Elements: "; //Enter any 5 numbers
    for (i = 0; i < 5; i++)
        cin >> arr[i];
    cout << "\nEnter a new Element to Insert: "; //Enter a new number to replace the 5th element
    cin >> elem;
    arr[i] = elem;
    cout << "\nThe New Array is:\n"; // Displays the new set of array elements
    for (i = 0; i < 6; i++)
        cout << arr[i] << "  ";
    cout << endl;
    return 0;*/

    int arr[3];
    arr[0] = 8;
    arr[1] = 10;
    arr[2] = 47;

    if (contains(arr, 7))
        cout << "New array set";
    else cout << "Doesn't exist";

    int* newarr = add(arr, 7);
    if (contains(newarr, 7))
        cout << "New array set";
    else cout << "Doesn't exist";

    // a pointer to an int.
    int* p;

    p = getRandom();

    for (int i = 0; i < 3; i++) {
        cout << "*(p + " << i << ") : ";
        cout << *(p + i) << endl;
    }

    return 0;
}