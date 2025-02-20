/*
    File name: Chapter2Exercise6.cpp
    Programmer/Developer: Alejandro Andres Pepito
    Date: 1/20/2025
    Requirements summary:
        "Write a program that calculates an employees annual pay."
*/

#include <iostream>

using namespace std;

int main()
{
    // Variable definitions.
    const double payPerPeriod = 2200.0;         // Employee's pay per period.
    const int payPeriods = 26;                  // Number of pay periods in a year (2 for each month).
    double annualPay = 0.0;                     // Total annual pay.

    // Calculate the total annual pay.
    annualPay = payPerPeriod * payPeriods;


    cout << "An employee earns $" << payPerPeriod << " every payday, and is paid biweekly." << endl
         << "At this rate, the employee will earn $" << annualPay << " annually." << endl;

    return 0;
}

