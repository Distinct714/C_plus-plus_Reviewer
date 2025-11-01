// WHILE LOOP

// A loop allows you to repeat a block of code multiple times.
// Loops can execute a block of code as long as a specified condition is reached.
// Loops are handy because they save time, reduce errors, and they make code more readable.

// The while loop takes a condition and repeats its statements as long as the condition is true.
#include <iostream>
using namespace std;

int main() {
    int num1 = 5; // This is will serve as index, initialization.
    while(num1 > 0) {
        cout << num1;// process
        // Do not forget this counter variable to prevent infinite loop
        num1 = num1 - 1;

        cout << endl;
    }
    cout << "=====" << endl;

    // As it's common to increment and decrement a variable's value by 1 in loops, C++ provides special increment and decrement operators.
    // The ++ and -- operators are used to increase and decrease the value of a variable by one.
    int num2 = 5;
    while(num2 > 0) {
        cout << num2;;
        num2 --;

        cout << endl;
    }
    cout << "=====" << endl;
    // Similarly, num++ will increase the value of num by 1

    // Sometimes you might need to increase or decrease the value of a variable by a different value than 1. 
    // C++ provides shorthand operators to perform mathematical operations on a variable
    int num3 = 0;
    while(num3 <= 10) {
        cout << num3;
        num3 += 2;

        cout << endl;
    }
    cout << "=====" << endl;

    // DO-WHILE

    // The do-while loop is a variant of the while loop
    // The difference with a while loop is that the condition is checked after the code, 
    // meaning the code in the do is executed at least once, even if the condition is false.
    // Then it will repeat the loop as long as the condition is true. Also, note the semicolon after the while condition.
    int num4 = 0;
    do {
        cout << num4 << endl;
        num4 += 2;
    } while(num4 <= 10);

    cout << endl;
    cout << "=====" << endl;

    // Another Sample
    int i = 0;
    do {
        cout << i << endl;
        i++;
    } while (i < 5);

    cout << endl;
    cout << "=====" << endl;

    // Condition is False from the Start
    // In the example below, the variable i starts at 10, so the condition i < 5 is false immediately - yet the do/while loop still runs once:
    int j = 10;
    do {
        cout << "i is " << j << endl;
        j++;
    } while (j < 5);

    cout << endl;
    cout << "=====" << endl;

    // User Input
    int number;
    do {
        cout << "Enter a positive number: ";
        cin >> number;
    } while (number > 0);
    
    cout << "=====" << endl;

    return 0;
}