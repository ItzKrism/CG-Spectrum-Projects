// RecurssionExorcise.cpp : This file contains the 'main' function. Program execution begins and ends there.


#include <iostream>

int values[10] = { 6, 12, 20, 32, 40, 18, 8, 56, 28, 60};

int main()
{
    mergesort(values);
}

//Merge Sorting
void mergesort(int arr[])
{   
    mergesorthelper(arr, 0, sizeof(arr)/sizeof(int));
}

void mergesorthelper(int arr[], int left, int right)
{
    
}