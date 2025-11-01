// C++ SCOPE

// In C++, variables are only accessible inside the region they are created. This is called scope.

#include <iostream>
using namespace std;

// Local Scope is where variable created inside a function and can only be used inside that function.
void myFunction() {
  int a = 5;
  cout << a << endl;
}
// A variable created outside of a function, is called a global variable and belongs to the global scope.
// Global variables are available from within any scope, global and local:
int b = 5;

void myFunction2() {
  cout << b << endl;
}
// If you operate with the same variable name inside and outside of a function, C++ will treat them as two separate variables; 
// One available in the global scope (outside the function) and one available in the local scope (inside the function):
int c = 5;

void myFunction3() {
  // Local variable with the same name as the global variable (x)
  int c = 22;
  cout << c << endl; // Refers to the local variable x
}

// However, you should avoid using the same variable name for both globally and locally variables as it can lead to errors and confusion.
// In general, you should be careful with global variables, since they can be accessed and modified from any function.
// Global variable x
int d = 5;

void myFunction4() {
  cout << ++d << endl; // Increment the value of x by 1 and print it
}

int main() {
    // Local variable that belongs to myFunction
    myFunction();
    // A local variable cannot be used outside the function it belongs to. 
    // If you try to access it outside the function, an error occurs:
    // cout << a;

    myFunction2();
    // We can also use x here
    cout << b;

    myFunction3();
    cout << c; // Refers to the global variable x

    myFunction4();
    cout << d; // Print the global variable x
    // The value of x is now 6 (no longer 5)

    return 0;
}




