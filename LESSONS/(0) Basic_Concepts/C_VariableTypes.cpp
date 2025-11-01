// DIFFERENT TYPES OF VARIABLES

// C++ supports many different types for your variables, based on their value. (int, double, char, string, bool)
// Syntax (type variableName = value;)

#include <iostream>
using namespace std;

int main() {

    // The string stores text and are surrounded by double quotes. This is array of characters which is not data types.
    string myText = "This is Text";
    cout << myText << endl;

    // The int type is used to store whole numbers.
    int points = 128;
    cout << points << endl;

    // The default here is 0, not error.
    int a;
    cout << a;

    // The float and double type stores fractional numbers(or floating point numbers), containing one or more decimals.
    float length = 1.024f;
    cout << length << endl;

    // The precision of a floating point value indicates how many digits the value can have after the decimal point. 
    // The precision of float is only six or seven decimal digits, while double variables have a precision of about 15 digits. 
    // Therefore it is safer to use double for most calculations.
    double width = 1.024;
    cout << width << endl;

    // The char type is used to store a single character. It is similar to declaring a string, but uses single quotes for the value:
    char g = 'G';
    cout << g << endl;

    // The bool type can only hold values: either true or false. It is used when working with conditions.
    bool online = false;
    cout << online << endl;

    // The auto keyword automatically detects the type of a variable based on the value you assign to it.
    // It helps you write cleaner code and avoid repeating types, especially for long or complex types.
    auto x = 8;
    auto y = 5.11; 
    auto z = "test"; 
    cout << x << endl << y << endl << z << endl;

    // This is byte, (allocated RAM), happen in online compiler, which change the values and return as memory address.
    int a;

    return 0;
}

