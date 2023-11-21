/*                                                                   */
/* Chapter 3 Problem 21                                              */
/*                                                                   */
/* Generate a table of conversions from inches to centimeters        */

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

const double in2cm = 2.54;

int main() {
    // Declare variables
    double inches(0), centimeters(0), step(0.5), lastValue = 20;

    // Print table header
    cout << "Inches to Centimeters Conversion Table\n"
         << "  Inches     Centimeters" << endl;
    
    // Set output formats
    cout.setf(ios::fixed);
    
    while (inches <= lastValue) 
    {
            centimeters = inches*in2cm; // convert inches to centimeters

            // Print line of table
            cout << setw(7) << setprecision(1) << inches
                            << setw(13) << setprecision(3) << centimeters << endl;

            inches += step;  // Iterate
    }

    // Exit program
    return 0;
}