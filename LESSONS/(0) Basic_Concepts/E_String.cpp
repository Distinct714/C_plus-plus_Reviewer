// STRING

// Strings are used for storing text/characters.
// A string variable contains a collection of characters surrounded by double quotes.
// To use strings, you must include an additional header file in the source code, the <string> library:

#include <iostream>
#include <string>
using namespace std;

int main() {
    // Note: You cannot combine number and string

    // The + operator can be used between strings to add them together to make a new string. This is called concatenation.
    string firstName = "Distinct", lastName = "Lone";
    string fullName = firstName + " " + lastName;
    cout << fullName << endl;

    // A string in C++ is actually an object, which contain functions that can perform certain operations on strings. 
    // For example, you can also concatenate strings with the append() function:
    string fullName2 = firstName.append(lastName);
    cout << fullName2 << endl;

    // To get the length of a string, use the length() function:
    string txt = "I am the Distinct";
    cout << "The length of the txt string is: " << txt.length() << endl;

    // You might see some C++ programs that use the size() function to get the length of a string. This is just an alias of length(). 
    // It is completely up to you if you want to use length() or size():
    cout << "The length of the txt string is: " << txt.size() << endl;

    // You can access the characters in a string by referring to its index number inside square brackets [].
    // String indexes start with 0: [0] is the first character. [1] is the second character, and so on.
    string s1 = "Hello";
    cout << s1[1] << endl;

    string s2 = "Distinct";
    cout << s2[s2.length() - 1] << endl; // This is -1 index, we are not in python.

    // To change the value of a specific character in a string, refer to the index number, and use single quotes:
    string s3 = "Welcome";
    s3[0] = 'J';
    cout << s3 << endl;
    
    // The <string> library also has an at() function that can be used to access characters in a string.
    string s4 = "Back";
    cout << s4 << endl;

    cout << s4.at(0) << endl;               // First character
    cout << s4.at(1) << endl;               // Second character
    cout << s4.at(s4.length() - 1) << endl; // Last character

    s4.at(0) = 'J';
    cout << s4 << endl;

    return 0;
}

