// FOR-EACH-LOOP

// There is also a "for-each loop" (also known as ranged-based for loop), 
// which is used to loop through elements in an array (or other data structures):

/* SYNTAX
for (type variableName : arrayName) {
    code block to be executed
}

*/ 
#include <iostream>
using namespace std;

int main() {
    int myNumbers[5] = {10, 20, 30, 40, 50};
    for (int num : myNumbers) {
        cout << num << endl;
    }

    // Loop Through a String
    string word = "Hello";
    for (char c : word) {
        cout << c << endl;
    }
    return 0;
}

