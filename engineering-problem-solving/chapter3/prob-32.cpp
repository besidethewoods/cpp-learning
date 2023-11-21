/*                                                                   */
/* Chapter 3 Problem 32                                              */
/*                                                                   */
/* Generate a table of reforestation                                 */

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double uncut=2500, rate=0.02, nYears;
    bool valid=false;

    do
    {
        // Get user input for number of years to print table
        cout << "Please enter number of years for the table to print" << endl;
        cin >> nYears;

        if (nYears <= 0) {
            cout << "ERROR: Number of years must be greater than zero.\nPlease try again\n" << endl;
        } else {
            valid = true;
        }
    } while (!valid);
    


    // Print header lines of table
    cout << "\nReforestation Table\n"
         << setw(10) << "Year" << setw(10) << "Acres" << endl;

    cout.precision(0);
    cout.setf(ios::fixed);

    // Loop through the years and print number of forested acres
    for (int i=0; i<=nYears; i++)
    {
        cout << setw(10) << i << setw(10) << uncut << endl;

        uncut *= (1 + rate);
    }

    // exit program
    return 0;
}