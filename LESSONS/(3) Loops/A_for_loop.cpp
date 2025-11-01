// FOR LOOP

// When you know exactly how many times you want to loop through a block of code, use the for loop instead of a while loop.

// The for loop has 3 statements in the parentheses: DCI
// - The first statement runs once when we enter the loop and set the variable before the loop starts. (Declaration)
// - The second statement is the condition of the loop. (Condition)
// - The third statement executes every time the loop runs. Note the semicolons between the statements. (Increment/Decrement)

// You can have any type of condition and any type of increment statements in the for loop.
// The for loop is best when we know the number of times we need to run the loop. (set, condition, increment)
#include <iostream>
using namespace std;

int main() {
    for(int i = 1; i <= 5; i++) {
        cout << i << endl;
    }
    cout << "=====" << endl;

    // PRINT EVEN NUMBERS
    for (int i = 0; i <= 10; i += 2) {
        cout << i << endl;
    }
    cout << "=====" << endl;
    
    // ADDITION CALCULATION LOOP
    int sum = 0;
    for (int i = 1; i <= 5; i++) {
        sum = sum + i;
        }
    cout << "Sum is " << sum << endl;
    cout << "=====" << endl;

    //  The break statement can be used to stop a loop.
    for(int i = 0; i < 10; i++) {
        // The loop will stop when i reaches the value 5.
        if (i==5) {
            break;
        }
        cout << i << endl;
    }
    cout << "=====" << endl;

    // The continue statement can be used to skip the current iteration of the loop (5) and jump to the next one. 
    // If a specified condition occurs, it continues with the next iteration in the loop.
    for(int i = 0; i < 10; i++) {
        if(i==5) {
            continue;
        }
        cout << i << endl;
    }
    cout << "=====" << endl;

    // Another Sample
    for(int x = 1; x <10; x++) {
        if(x == 2) {
            continue; 
        }
        if(x == 5) {
            break;
        }
        cout << x << endl;
        }
    cout << "=====" << endl;

    return 0;

    // In for loop, this is not the same as array index.

    // Another Sample
    int hp = 7;

    for(int i = 1; i <= 20; i++) {
        if (i <= hp) {
            cout << "+";
        }
        else {
            cout << "=";
        }
    }
}