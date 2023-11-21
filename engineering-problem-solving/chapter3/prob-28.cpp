/*                                                                   */
/* Chapter 3 Problem 28                                              */
/*                                                                   */
/* Generate a table of temperature conversions from Fahrenheit to    */
/* Celsius                                                           */

#include <iostream>
#include <iomanip>

using namespace std;

const double klevin2Rankine = 9.0/5.0;

int main() {
    // Declare variables
    double fahrenheit=0, celsius, maxTemp=100, step=5; 

    // Print table header
    cout << "Temperature Conversion Table\n"
         << setw(10) << "Fahrenheit" << setw(10) << "Celsius"  << endl;

    cout.setf(ios::fixed);

    while (fahrenheit <= maxTemp)
    {
        // Convert temperature
        celsius = (fahrenheit - 32)/klevin2Rankine;

        // Print line of table
        cout << setw(10) << setprecision(1) << fahrenheit 
             << setw(10) << setprecision(3) << celsius << endl;

        fahrenheit += step; // increment for next loop
    }

    // Exit program
    return 0;
}