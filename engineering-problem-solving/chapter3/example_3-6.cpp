/*-----------------------------------------------------------*/
/*  Program chapter3_6                                       */
/*  This programs finds the average of a set of exam scores. */

#include <iostream>
using namespace std;

int main()
{
// Declare and initialize objects.
    double exam_score, sum(0), average;
    int count(0);
    
//Prompt user for input.
    cout << "Enter exam scores separated by whitespace. ";

// Input exam scores using counter-controlled loop.
    cin >> exam_score;
    while (!cin.eof())
    {

        sum = sum + exam_score;
        count++;
        cin >> exam_score;
        cout << "exam_socre: " << exam_score << endl;

        cout << cin.eof() << endl;
    }

// Calculate average exam score.
    average = sum/count;
    cout << count << " students took the exam.\n";
    cout << "The exam average is " << average << endl;

// Exit program
    return 0;
}