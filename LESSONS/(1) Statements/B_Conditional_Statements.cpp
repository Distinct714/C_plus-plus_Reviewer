// CONDITIONAL STATEMENTS

// Conditional statements are used to perform different actions based on different conditions. 

/*  COMPARISON OPERATORS

    < less than

    > greater than

    != not equal to

    == equal to

    <= less than or equal to

    >= greater than or equal to
*/

#include <iostream>
using namespace std;

int main() {
    int age2 = 24;

    // IF      - Specify a block of code to be executed, if a specified condition is true
    if(age2 >= 65) {
        cout << "You're senior" << endl;
    }
    // ELSE IF - Specify a new condition to test, if the first condition is false
    else if(age2 >= 18) {
        cout << "You're adult" << endl;
    }
    // ELSE    - specify a block of code to be executed, if the same condition is false
    else {
        cout << "You're child" << endl;
    }

    // You can use one if-else statement inside another if or else statement.

    // TERNARY OPERATOR

    // There is also a short-hand if else, which is known as the ternary operator because it consists of three operands.
    // It can be used to replace multiple lines of code with a single line, and is often used to replace simple if else statements
    // declaration variable = (condition) ? expressionTrue : expressionFalse;
    int time = 20;
    string result = (time < 18) ? "Good day, man." : "Good evening, man.";
    cout << result << endl;


    // NESTED IF-ELSE STATEMENTS WITH BOOL
    float grade = 55;
    bool isPassed = grade >= 75;
    bool isGradeValid = grade >= 60;

    if (isGradeValid) {
        if (isPassed) {
            cout << "You passed!" << endl;
        }
        else {
            cout << grade << "You failed!" << endl;
        } 
    }
    else {
        cout << "Aim 60 above!" << endl;
    }

    // Inside the parenthesis it should be boolean, but optionally, you can add 0, 1 or empty as this will output.
    return 0;
}