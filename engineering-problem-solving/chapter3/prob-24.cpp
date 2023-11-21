/*                                                                   */
/* Chapter 3 Problem 24                                              */
/*                                                                   */
/* Generate a table of currency conversions from pesos to dollars    */

#include <iostream>
#include <iomanip>

using namespace std;

const double dollar2Pesos = 9.02;

int main() {
    // Declare variables
    double pesos=5, dollars=0, step=5, nLines=25;

    cout << "Currency Conversion Table\n"
         << "   Pesos          Dollars" << endl;

    cout.setf(ios::fixed);

    for (int i=1; i<=nLines; i++)
    {
        dollars = pesos/dollar2Pesos; // convert currency

        cout << setw(7) << setprecision(0) << pesos
             << setw(17) << setprecision(2) << dollars << endl;

        pesos += step;
    }

    return 0;
}