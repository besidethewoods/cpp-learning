#include <iostream>

using namespace std;

int main() {
    // declare variables
    int rank;

    cout << "Input a value for 'rank'" << endl;
    cin >> rank;

    switch (rank)
    {
        case 1:
        case 2:
            cout << "Lower division" << endl;
            break;
        case 3:
        case 4:
            cout << "Upper division" << endl;
            break;
        case 5:
            cout << "Graduate student" << endl;
            break;
        default:
            cout << "invalid rank" << endl;
            break;
    }

    // Exit program
    return 0;
}