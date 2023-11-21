/*                                                                   */
/* Chapter 3 Problem 29                                              */
/*                                                                   */
/* Generate a table of temperature conversions from Fahrenheit to    */
/* Kelvin                                                            */

#include <iostream>
#include <iomanip>

using namespace std;

const double klevin2Rankine = 9.0/5.0;
const double fahrenheit2Rankine = 459.67; 

int main() {
    // Declare variables
    double fahrenheit=0, kelvin, rankine=0, maxTemp=200, step; 
    bool valid=false;

    // Get user input for table step size
    do
    {
        cout << "Please input desired table step size:  ";
        cin >> step;

        if (step <= 0) {
            cout << "\n\nERROR: Step size must be greater than zero.\n"
                << "Please try again.\n" << endl;
        } else {
            valid = true;
        }

    } while (!valid);

    // Print table header
    cout << "Temperature Conversion Table\n"
         << setw(10) << "Fahrenheit" << setw(10) << "Kelvin"  << endl;

    cout.setf(ios::fixed);

    do 
    {
        // Convert temperature
        rankine = fahrenheit + fahrenheit2Rankine;
        kelvin = rankine/klevin2Rankine;

        // Print line of table
        cout << setw(10) << setprecision(1) << fahrenheit 
             << setw(10) << setprecision(3) << kelvin << endl;

        fahrenheit += step; // increment for next loop
    } while (fahrenheit <= maxTemp);

    // Exit program
    return 0;
}