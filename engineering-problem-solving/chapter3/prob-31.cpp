/*                                                                   */
/* Chapter 3 Problem 31                                              */
/*                                                                   */
/* Generate a table of reforestation                                 */

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double uncut=2500, rate=0.02;
    int nYears=20;

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