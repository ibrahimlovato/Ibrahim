// 2.17.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    double ta, twc, v;
    //for the wind speed
    std::cout << " the wind speed is:" << std::endl;
    std::cin >> v;
    /*Read the wind speed as greater than or eual to 2*/
    //for the outside temperature
    std::cout << " the outside temperature is" << std::endl;
    std::cin >> ta;
    /*Read the temperature between -58 degree fahrenheit and 41 degree fahrenheit*/
    //counting the wind-chill temperature
    twc = 35.74 + (0.6215 * ta) - (35.75 * (pow(v, 0.16))) + (0.42758 * ta * (pow(v, 0.16)));
    std::cout << " the wind-chill temperature is:" << twc << std::endl;
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
