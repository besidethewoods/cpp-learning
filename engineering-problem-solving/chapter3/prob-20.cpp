/*                                                                   */
/* Chapter 3 Problem 20                                              */
/*                                                                   */
/* Generate a table of conversions from degrees to radians           */
/* User inputs increment                                             */

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

const double PI = acos(-1.0);
const double deg2rad = PI/180;

int main() {
    // Declare variables
    double radians(0), degrees(0), step(10);
    int count(0), maxCount(1000);
    bool valid(false);

    // Get user input for step size
    do 
    {
        cout << "Enter step size for conversion table in degrees." << endl;
        cin >> step;

        if (step <= 0) {
            cout << "\nERROR:  Step size must be greater than zero.\nPlease try again.\n\n" << endl;
        } else {
            valid = true;
        }
    } while (valid == false);

    // Print table header
    cout << "Degrees to Radians Conversion Table\n"
         << "Degrees     Radians" << endl;
    
    // Set output formats
    cout.setf(ios::fixed);
    cout.precision(3);
    
    while (degrees <= 360)
    {
            radians = degrees*deg2rad; // convert radians to degrees

            // Print line of table
            cout << setw(7) << degrees << setw(12) << radians << endl;

            degrees += step;  // Iterate
    }

    // Exit program
    return 0;
}