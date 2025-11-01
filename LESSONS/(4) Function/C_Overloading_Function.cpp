// C++ OVERLOADING FUNCTION

// C++ allows you to define a function with the same name but different parameter data types.
// We used the same function name, and changed the parameter data types. This is called function overloading.

// Now, when we call the function, the correct version will be called based on the type of the argument.

#include <iostream>
using namespace std;

void demo(int x) {
  cout << x/2;
}
void demo(double s) {
 cout << s-2;
}

int main() {
    demo(8);
    return 0;
}

// You cannot overload function declarations that differ only by return type. This results in an error.

// DEFAULT ARGUMENTS

// Another handy thing when working with functions are default arguments.
// When defining a function, you can specify a default value for each of the last parameters.
// If the corresponding argument is missing when you call a function, it uses the provided default value.

int area(int x, int y=1) {
    return x*y;
}

int main() {
    cout << area(8, 2) << endl;
    cout << area(6) << endl;
}

// Overloading functions allows you to use the same name of the function with different parameter data types.
// Default arguments allow to specify a default value for the last parameters of the function by assigning them values right in the definition.