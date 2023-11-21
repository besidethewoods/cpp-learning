/*                                                                   */
/* Chapter 3 Problem 33                                              */
/*                                                                   */
/* Generate a table of reforestation                                 */
/* User inputs number of acres and code reports how long it will take*/
/* to reforest completely.                                           */

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double uncut=2500, rate=0.02, totalAcres, year=0, nYears;
    bool valid;

    do
    {
        // Get user input for total number of acres
        cout << "Please enter total acres to reforest: " << endl;
        cin >> totalAcres;

        if (totalAcres <= uncut)
        {
            cout << "ERROR: Total acres must be greater than " << uncut << ".\nPlease try again." << endl;
        } else
        {
            valid = true;
        }    
    } while (!valid);
    
    // Compute total number of years
    nYears = log(totalAcres/uncut) / log(rate + 1);

    // Print header lines of table
    cout << "\nReforestation Table\n"
         << setw(10) << "Year" << setw(10) << "Acres" << endl;

    cout.precision(0);
    cout.setf(ios::fixed);

    // Loop through the years and print number of forested acres
    while (year <= nYears)
    {
        cout << setw(10) << year << setw(10) << uncut << endl;

        uncut *= (1 + rate);

        year++;
    }

    // Check if last line needs to be printed
    if (fmod(nYears, 1) != 0) {
        cout << setw(11) << setprecision(1) << nYears
             << setw(9) << setprecision(0) << totalAcres << endl;
    }

    // exit program
    return 0;
}