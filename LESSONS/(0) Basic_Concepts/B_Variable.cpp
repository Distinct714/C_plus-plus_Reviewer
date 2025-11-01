// C++ VARIABLE

// A variable lets you store a value by assigning it to a name.
// A variable has a name and a type of the value it holds. 

// To declare a variable use the type followed by the name of the variable.
// You can assign a value to the declared variable using the = operator.
// A variable can change its value during the program, by being assigned to a new value.

// Every variable has a type, which defines the type of the value it holds. 
// A variable can hold a text value, a number, a decimal, etc.

// Text Numbers - Two Common types of Variable Data type

// Text - string and char
// Number - int float double short long
// other - bool

#include <iostream>
using namespace std;

int main() {
    // In programming terms, the process of creating a variable is called declaration.
    string message;
    message = "Play Genshin Impact";
    cout << message << endl;

    // We can combine the declaration and assignment into one statement:
    string message2 = "Earn Primos!";
    cout << message2 << endl;

    // A variable can change its value during the program multiple times.
    // The first output here will be message3 not in declaration.
    string message3 = "Welcome";
    message3 = "Distinct";
    cout << message3 << endl;
    message3 = "Gone";
    cout << message3 << endl;

    // You can declare multiple variables of the same type by separating them with commas.

    // GENERAL RULES OF NAMING VARIABLES:
    // - Names can contain letters, digits and underscores
    // - Names must begin with a letter or an underscore (_)
    // - Names are case-sensitive (myVar and myvar are different variables)
    // - Names cannot contain whitespaces or special characters like !, #, %, etc., except $.
    // - Reserved words (like C++ keywords, such as int) cannot be used as names


    // There are two popular naming conventions: 

    // 1. Pascal case: For example: BackColor (Not a good practice)
    // The first letter in the identifier and the first letter of each subsequent concatenated word are capitalized. 

    // 2. Camel case: For example: backColor
    // The first letter of an identifier is lowercase and the first letter of each subsequent concatenated word is capitalized. 

    // 3. Snake case: For example: back_color
    // All letters are lowercase and uses underscore as space.

    // 4. kebab-case 
    // This will not work in C++

    // When you do not want others to change existing variable values, use the const keyword.
    // This will declare the variable as "constant", which means unchangeable and read-only.
    const int myNum = 15; 
 // myNum = 10;  - error: assignment of read-only variable 'myNum'
    cout << myNum;

    //

    return 0;

}

