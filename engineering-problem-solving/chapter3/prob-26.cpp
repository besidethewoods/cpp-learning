/*                                                                   */
/* Chapter 3 Problem 26                                              */
/*                                                                   */
/* Generate a table of currency conversions from yen to South        */
/* African Rand                                                      */

#include <iostream>
#include <iomanip>

using namespace std;

const double dollar2Pesos = 9.02, yen2dollar = 0.01, dollar2rand = 11.30;

int main() {
    // Declare variables
    double yen=100, rand=0, step=2, nLines=25, lastLine=1e4;

    // Print table header
    cout << "Currency Conversion Table\n"
         << "     Yen       S.A. Rand" << endl;

    cout.setf(ios::fixed);

    // Determine Step Size
    step = (lastLine - yen)/(nLines - 1);

    for (yen; yen<=lastLine; yen+=step)
    {
        rand = yen*yen2dollar*dollar2rand; // convert currency

        // Print line of table
        cout << setw(8) << setprecision(2) << yen
             << setw(14) << setprecision(2) << rand << endl;
    }

    // Exit program
    return 0;
}