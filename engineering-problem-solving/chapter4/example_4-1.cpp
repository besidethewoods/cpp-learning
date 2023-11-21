/*-----------------------------------------------------*/
/* Program chapter4_1                                  */
/*                                                     */
/* This program generates a summary report from a data */
/* file that has the number of data points in the first*/
/* record.                                             */

#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Declare and initialize objects.
    int num_data_pts, k;
    double time, motion, sum(0), max, min;
    string filename;
    ifstream sensor1;
    
    // Prompt user for name of input file.
    cout << "enter the name of the input file:  ";
    cin >> filename;

    // Open file and read the number of data points.
    sensor1.open(filename.c_str());
    //sensor1.open("sensor1.dat");
    if( sensor1.fail() )
    { 
        cout << "Error opening input file\n";
    }
    else
    {
        sensor1 >> num_data_pts;

        // Read data nd compute summary information.
        for (k=1; k<=num_data_pts; k++)
        {
            sensor1 >> time >> motion;
            if (k == 1)
            {
                max = min = motion;
            }
            sum += motion;
            if (motion > max)
            {
                max = motion;
            }
            if (motion < min)
            {
                min = motion;
            }
        }

        // Set format flags.
        sensor1.setf(ios::fixed);
        sensor1.setf(ios::showpoint);
        sensor1.precision(2);

        // Print summary information.
        cout << "Number of sensor readings: "
             << num_data_pts << endl;
        cout << "Average reading:              "
             << sum/num_data_pts << endl;
        cout << "Maximum reading:              "
             << max << endl;
        cout << "Minimum reading:              "
             << min << endl;

        // Close file and exit program.
        sensor1.close();
    }
    return 0;
} // end main