/*                                                                   */
/* Chapter 3 Problem 19                                              */
/*                                                                   */
/* Generate a table of conversions from radians to degrees           */

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

const double PI = acos(-1.0);
const double rad2deg = 180/PI;

int main() {
    // Declare variables
    double radians(0), degrees(0), step(PI/10);

    // Print table header
    cout << "Radians to Degrees Conversion Table\n"
         << "Radians     Degrees" << endl;
    
    // Set output formats
    cout.setf(ios::fixed);
    cout.precision(3);
    
    while (radians <= 2*PI)
    {
            degrees = radians*rad2deg; // convert radians to degrees

            // Print line of table
            cout << setw(7) << radians << setw(12) << degrees << endl;

            radians += step;  // Iterate
    }

    // Exit program
    return 0;
}