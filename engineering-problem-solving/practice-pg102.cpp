// Checking loop iterator logic

#include <iostream>

using namespace std;

int main() {
    int count(0);
    
    for (int k=3; k<=20; k++) {
        cout << "k = " << k << endl;

        count++;
    }

    cout << "Total Number of Iterations:  " << count << endl;

    return 0;
}