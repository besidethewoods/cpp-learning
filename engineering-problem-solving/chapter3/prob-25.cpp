/*                                                                   */
/* Chapter 3 Problem 25                                              */
/*                                                                   */
/* Generate a table of currency conversions from yen to pesos        */

#include <iostream>
#include <iomanip>

using namespace std;

const double dollar2Pesos = 9.02, yen2dollar = 0.01;

int main() {
    // Declare variables
    double yen=1, pesos=0, step=2, nLines=30;

    // Print table header
    cout << "Currency Conversion Table\n"
         << "   Yen          Pesos" << endl;

    cout.setf(ios::fixed);

    for (int i=1; i<=nLines; i++)
    {
        pesos = yen*yen2dollar*dollar2Pesos; // convert currency

        // Print line of table
        cout << setw(6) << setprecision(0) << yen
             << setw(15) << setprecision(2) << pesos << endl;

        yen += step; // Iterate for next line
    }

    // Exit program
    return 0;
}