/*-----------------------------------------------------------*/
/*  Program chapter3_5                                       */
/*  This programs finds the average of a set of exam scores. */

#include <iostream>
using namespace std;

int main()
{
// Declare and initialize objects.
    double exam_score, sum(0), average;
    int count(0);
    
//Prompt user for input.
    cout << "Enter exam scores separated by whitespace.\n";
    cout << "Enter a negative value to indicate the end of data. ";

// Input exam scores using counter-controlled loop.
    cin >> exam_score;
    while (exam_score >= 0)
    {
        sum = sum + exam_score;
        count++;
        cin >> exam_score;
    }

// Calculate average exam score.
    average = sum/count;
    cout << count << " students took the exam.\n";
    cout << "The exam average is " << average << endl;

// Exit program
    return 0;
}