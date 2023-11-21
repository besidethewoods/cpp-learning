/*                                                                   */
/* Chapter 3 Problem 27                                              */
/*                                                                   */
/* Generate a table of currency conversions from dollars to pesos,   */
/* South African Rand, and yen                                       */

#include <iostream>
#include <iomanip>

using namespace std;

const double dollar2Pesos = 9.02, yen2dollar = 0.01, dollar2rand = 11.30;

int main() {
    // Declare variables
    double dollar=1, pesos=0, rand=0, yen=0, step=1, nLines=50;

    // Print table header
    cout << "Currency Conversion Table\n"
         << setw(10) << "Dollars" << setw(8) << "Pesos" << setw(12) << "S.A. Rand"
         << setw(8) << "Yen" << endl;

    cout.setf(ios::fixed);
    cout.precision(2);

    for (int i=1; i<=nLines; i++)
    {
        // currency conversion
        pesos = dollar*dollar2Pesos;
        rand = dollar*dollar2rand;
        yen = dollar/yen2dollar;

        // Print line of table
        cout << setw(10) << dollar << setw(8) << pesos
             << setw(10) << rand << setw(10) << yen << endl;

        dollar += step;
    }

    // Exit program
    return 0;
}