// C++ FUNCTION

// A function is a block of code designed to perform a particular task. 
// They are reusable; we define them once and can call them multiple times.
// Note that the name of the function is followed by parentheses ().
// The statements of the function are inside curly braces {}.

// C++ provides some pre-defined functions, such as main(), which is used to execute code. 
// But you can also create your own functions to perform certain actions.

// Declared functions are not executed immediately. They are "saved for later use", and will be executed later, when they are called.
// To call a function, write the function's name followed by two parentheses () and a semicolon ;

#include <iostream>
using namespace std;

// void means that this function does not have a return value. void is also included in data types.
void hello() {
    cout << "Hello!" << endl;
    cout << "Download Genshin Impact. ):" << endl;
}
// NESTED IF-ELSE 
void test(int num, string evaluation) {
    cout << num << evaluation;
}
// ANOTHER SAMPLE
string getfullname(string f, string l) {
    string fn = f + " " + l;
    return fn;
}

int main() {
    // To call a function, type its name followed by a set of parentheses. A function can be called multiple times:
    hello();
    hello();
    hello();

    // NESTED IF-ELSE 
    float grade = 0;
    cout << "Input the grade: ";
    cin >> grade;
    
    bool isPassed = grade >= 75;
    bool isGradeValid = grade >= 60;

    if (isGradeValid) {
        if (isPassed) {
            test(grade, "P");
        }
        else {
            test(grade, "F");
        } 
    } else {
        cout << "Only 60 above." << endl;
    }

    // ANOTHER SAMPLE
    string first_name = "Joshua";
    string last_name = "Bote";
    string full_name = " ";

    // full_name = getfullname(first_name, last_name);
    cout << getfullname(first_name, last_name);

    // Note: If a user-defined function is declared after the main() function, an error will occur.
    // You will often see C++ programs that have function declaration above main(), and function definition below main(). 
    // This will make the code better organized and easier to read:
    return 0;
}
       

