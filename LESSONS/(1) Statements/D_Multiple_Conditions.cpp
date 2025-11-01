// MULTIPLE CONDITIONS

// In some scenarios we need to combine multiple conditions.

#include <iostream>
using namespace std;

int main() {
    // LOGICAL OPERATORS

    // 1. The && operator is also referred to as the logical AND operator. (Ampersands)
    //    Returns true if both statements are true.
    double temp = 37.5;
    if(temp >= 36 && temp <= 38) {
        cout << "OK" << endl;
    }

    // 2. The logical OR operator, written as || combines conditions and checks if any one of them is true.
    //    Returns true if one of the statements is true.
    int level = 2, points = 321;
    if(level > 5 || points > 200) {
        cout << "Welcome" << endl;
    }
    // 3. The logical NOT operator ! reverses the condition.
    // In case the condition is true, the not operator will make it false, and vice-e-versa.
    int height = 175;
    if(!(height < 150)) {
        cout << "Welcome" << endl;
    }
    // You can chain multiple conditions using parentheses and the logical operators.
    string region = "Fontaine";
    int mora = 78000;

    if((region == "Inazuma" || region == "Fontaine") && mora < 100000) {
        cout << "Level up your character." << endl;
    }

    // Another Sample
    int time = 11;

    if (time < 0 || time > 24) {
        cout << "Invalid Output";
    }
    else {
        if (time <= 11) {
            cout << "Good Morning, man!";
        }
        else if (time == 12) {
            cout << "Good Afternoon, man!";
        }
        else if (time <= 18) {
            cout << "Good Night, man!";
        }
        else {
            cout << "Good evening";
        }
    }

    // Sample 2
    int time = 24;

    if (time >= 0 && time <= 23) {
        cout << "Good";
    }
    else {
        if (time <= 11) {
            cout << "Good Morning, man!";
        }
        else {
            cout << "Good evening";
        }
    }

    return 0;
}