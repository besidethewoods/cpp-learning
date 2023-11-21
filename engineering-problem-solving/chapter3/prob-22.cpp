/*                                                                   */
/* Chapter 3 Problem 22                                              */
/*                                                                   */
/* Generate a table of conversions from miles per hour to feet       */
/* per second.                                                       */

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

const double mi2ft = 5280;

int main() {
    // Declare variables
    double mph=0, ftps=0, step=5, lastValue=65;

    // Print table header
    cout << "MPH to ft/s Conversion Table\n"
         << "MPH     ft/s" << endl;
    
    // Set output formats
    cout.setf(ios::fixed);
    
    while (mph <= lastValue) 
    {
            ftps = mph*mi2ft/3600; // convert miles per hour to ft/s

            // Print line of table
            cout << setw(3) << setprecision(0) << mph
                            << setw(9) << setprecision(3) << ftps << endl;

            mph += step;  // Iterate
    }

    // Exit program
    return 0;
}