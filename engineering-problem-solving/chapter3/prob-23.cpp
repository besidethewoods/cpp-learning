/*                                                                   */
/* Chapter 3 Problem 23                                              */
/*                                                                   */
/* Generate a table of conversions from feet per second to miles     */
/* per hour.                                                         */

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

const double mi2ft = 5280;

int main() {
    // Declare variables
    double mph=0, ftps=0, step=5, lastValue=100;

    // Print table header
    cout << "ft/s to MPH Conversion Table\n"
         << "ft/s     MPH" << endl;
    
    // Set output formats
    cout.setf(ios::fixed);
    
    while (ftps <= lastValue) 
    {
            mph = ftps*3600/mi2ft; // convert ft/s to mph

            // Print line of table
            cout << setw(3) << setprecision(0) << ftps
                            << setw(10) << setprecision(3) << mph << endl;

            ftps += step;  // Iterate
    }

    // Exit program
    return 0;
}