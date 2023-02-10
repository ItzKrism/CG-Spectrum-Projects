//C++ program for converting degree Celsius into Fahrenheit and vice versa
#include<iostream>
using namespace std;

int main()
{
    //Container for the difference in temp between Celsius and Faherenheit
    const float TEMP_DIFF = 32;

    //float containers for Celsius and Faherenheit
    float fahr, cel;

    //Container for the option the user can pick
    char option;

    while (true)
    {
        cout << "Choose from following option:" << endl;
        cout << "1. Celsius to Fahrenheit." << endl;
        cout << "2. Fahrenheit to Celsius." << endl;
        cin >> option;
    

        //option for converting celsius into fahernheit
        if (option == '1')
        {
            cout << "Enter the temperature in Celsius: ";
            cin >> cel;

            fahr = (1.8 * cel) + TEMP_DIFF; //temperature conversion
            cout << "\nTemperature in degree Fahrenheit: " << fahr << " F" << endl;
            break;
        }
        //option for converting Fahrenheit into Celsius
        else if (option == '2')
        {
            cout << "Enter the temperature in Fahrenheit: ";
            cin >> fahr;

            cel = (fahr - TEMP_DIFF) / 1.8; //temperature conversion
            cout << "\nTemperature in degree Celsius: " << cel << " C" << endl;
            break;
        }
        else
            cout << "Error Wrong Input." << endl;
    }

    return 0;
}
