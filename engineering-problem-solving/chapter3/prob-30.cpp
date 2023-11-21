/*                                                                   */
/* Chapter 3 Problem 30                                              */
/*                                                                   */
/* Generate a table of temperature conversions from Celsius to       */
/* Rankine                                                            */

#include <iostream>
#include <iomanip>

using namespace std;

const double klevin2rankine = 9.0/5.0;
const double celsius2kelvin = 273.15; 

int main() {
    // Declare variables
    double celsius, kelvin, rankine, maxTemp, step; 
    bool valid=false;

    do
    {
        cout << "Please input desired starting temperature in °C:  ";
        cin >> celsius;

        if (celsius < -celsius2kelvin) {
            cout << "\n\nERROR:  Temperature input must be above absolute zero (-273.15°C).\n"
                 << "Please try again.\n" << endl;
        } else {
            valid = true;
        }
    } while (!valid);
    
    

    // Get user input for table step size
    valid = false;
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
         << setw(10) << "Celsius" << setw(10) << "Rankine"  << endl;

    cout.setf(ios::fixed);

    for (int i=1; i<=25; i++) 
    {
        // Convert temperature
        kelvin = celsius + celsius2kelvin;
        rankine = kelvin*klevin2rankine;

        // Print line of table
        cout << setw(10) << setprecision(1) << celsius 
             << setw(10) << setprecision(2) << rankine << endl;

        celsius += step; // increment for next loop
    } 

    // Exit program
    return 0;
}