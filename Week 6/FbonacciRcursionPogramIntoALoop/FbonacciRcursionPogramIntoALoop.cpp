// fibonacci recursion program into a loop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include <iostream>
using namespace std;

using namespace std;

int main() {
    int N, last = 1, secondLast = 0, current = 0, i;
    cout << "Enter number of terms in Fibonacci series\n";
    cin >> N;
    /*
     *  N term = (N-1)th therm + (N-2)th term;
     * or  current term = last term + secondLast term;
     */
    for (i = 0; i < N; i++) {
        if (i < 2) {
            current = i;
        }
        else {
            current = last + secondLast;
            secondLast = last;
            last = current;
        }
        cout << current << " ";
    }
    return 0;
}