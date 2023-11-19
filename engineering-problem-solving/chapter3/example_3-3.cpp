/*--------------------------------------------------*/
/* Program chapter3_3                               */
/*                                                  */
/*  This program prints a degree-t-radian table     */
/*  using a for loop structure                      */

#include <iostream>
#include <iomanip>
using namespace std;

const double PI = 3.141593;

int main()
{
    // Declare and initialize objects.
    int degrees(0);
    double radians;
    
    // Set formats.
    cout.setf(ios::fixed);
    cout.precision(6);

    // Print radians and degrees in a loop.
    cout << "Degrees to Radians \n";
    for (int degrees=0; degrees<=360; degrees+=10)
    {
        radians = degrees*PI/180;
        cout << setw(6) << degrees << setw(10) << radians << endl;
    }

    // Exit program
    return 0;
}