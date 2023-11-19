/*-----------------------------------------------------------*/
/*  Program chapter3_7                                       */
/*                                                           */
/*  This program prints a table of height and velocity       */
/*  values for a weather balloon                             */

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    // Declare and initialize objects.
    double initial, increment, final, time, height, velocity,
        max_time(0), max_height(0);
    int loops;
    bool valid(false);

    do
    {
        // Get user input.
        cout << "Generate Weater Balloon Data\n"
             << "Note: Valid for 0 to 48 hours.\n\n";
        cout << "Enter initial value for table (in hours). Must be greater than 0. \n";
        cin >> initial;
        cout << "Enter increment between lines (in hours) \n";
        cin >> increment;
        cout << "Enter final value for table (in hours). Must be less than 48 hrs. \n";
        cin >> final;

        // check that user input is valid
        if (final <= initial) {
            cout << "\nError: Final altitude of " << final << " m is less than the initial "
                 << "altitude of " << initial << "\nPlease try again.\n\n" << endl;
        } else if (initial < 0) {
            cout << "\nError: Initial altitude (" << initial << ") must be greater than zero.\n"
                 << "Please try again\n\n" << endl;
        } else if (final > 48) {
            cout << "\nError: Final altitude (" << final << ") must be less than 48 hrs.\n"
                 << "Please try again\n\n" << endl;
        } else if (increment < 1) {
            cout << "\nError: Increment (" << increment << ") must be postive.\n"
                 << "Please try again\n\n" << endl;
        } else {
            valid = true;
        }
    } while (valid == false);

    

    // Print report heading.
    cout << "\n\nWeather Balloon Information \n";
    cout << "Time    Height    Velocity \n";
    cout << "(hrs)   (meters)  meters/s) \n";

    //Set formats.
    cout.setf(ios::fixed);
    cout.precision(2);

    // Compute and print report information 
    // Determine number of iterations required
    // Use integer iindex to avoid rounding error.
    loops = (int)( (final -initial)/increment );

    for (int count=0; count<=loops; count++)
    {
        time = initial + count*increment;
        height = 0.12*pow(time,4) + 12*pow(time,3) - 380*time*time + 
            4100*time + 220;
        velocity = -0.48*pow(time,3) + 36*time*time - 760*time + 4100;
        cout << setw(6) << time << setw(10) << height << setw(10) <<
            velocity/3600 << endl;
        if (height >= max_height)
        {
            max_height = height;
            max_time = time;
        }
    }
    // Print maximum height and corresponding time.
    cout << "\nMaximum balloon height was " << setw(8) << max_height 
        << "meters \n";

    cout << "and it occurred at " << setw(6) << max_time << " hours \n";

    // Exit program.
    return 0;
}