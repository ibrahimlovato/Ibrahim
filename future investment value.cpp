// 2.23.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    double investmentAmount, annualInterestRate, numberOfYears, futureInvestmentValue;
    //for the investment amount
    std::cout << "Enter investment amount:" << std::endl;
    std::cin >> investmentAmount;
    //for annual interest rate
    std::cout << "Enter the annual interest rate:" << std::endl;
    std::cin >> annualInterestRate;
    //for the number of years
    std::cout << "Enter the number of years" << std::endl;
    std::cin >> numberOfYears;
    //counting the future investment value
    futureInvestmentValue = investmentAmount * (pow(1 + (annualInterestRate/100), numberOfYears));
    //display the amount
    std::cout << "The future Investment value is:" << futureInvestmentValue << std::endl;
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
