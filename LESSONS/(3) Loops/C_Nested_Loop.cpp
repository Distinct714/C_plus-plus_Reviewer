// NESTED LOOPS

// It is also possible to place a loop inside another loop. This is called a nested loop.

// The "inner loop" will be executed one time for each iteration of the "outer loop":


#include <iostream>
using namespace std;

int main() {
    // Outer loop
    for (int i = 1; i <= 2; ++i) {
    cout << "Outer: " << i << "\n"; // Executes 2 times

        // Inner loop
        for (int j = 1; j <= 3; ++j) {
            cout << " Inner: " << j << "\n"; // Executes 6 times (2 * 3)
        }
    }

    // MULTIPLICATION TABLE
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            cout << i * j << " ";
        }
        cout << endl;
    }
    // Nested loops are useful when working with tables, matrices, or multi-dimensional data structures.
    // Outer loop then all inside the inner loop.

    return 0;
}

