/*--------------------------------------------------*/
/* Program chapter3_2                               */
/*                                                  */
/*  This program prints a degree-t-radian table     */
/*  using a do-while loop structure                 */

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
    do
    {
        radians = degrees*PI/180;
        cout << setw(6) << degrees << setw(10) << radians << endl;
        degrees += 10;
    } while (degrees <= 360);

    // Exit program
    return 0;
}