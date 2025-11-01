// C++ INPUT

// cin is a predefined variable that reads data from the keyboard with the extraction operator (>>).

#include <iostream>

using namespace std;

int main() {
    // To take input, use the cin >> command, which is similar to cout in terms of syntax.
    string name;
    cout << "Please enter your name: ";
    cin >> name;
    cout << "Your Name: " << name << endl;
    
    int age;
    cout << "Please enter your age: ";
    cin >> age;
    
    if (age > 18) {
        cout << "Your age: " << age << "Confirmed as Real Adult" << endl;
    }
    else {
        cout << "Your age: " << age << "Confirmed as Young Adult." << endl;
    }
    
    // SAMPLE TWO
    int x, y;
    int sum;

    cout << "Enter a number: ";
    cin >> x;
    cout << "Enter another number: ";
    cin >> y;
    
    sum = x + y;
    cout << "Result: " << sum << endl;

    return 0;
}