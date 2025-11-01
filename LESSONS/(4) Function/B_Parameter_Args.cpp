// C++ PARAMETERS

#include <iostream>
using namespace std;

// Information can be passed to functions as a parameter. Parameters act as variables inside the function.
// Parameters are specified after the function name, inside the parentheses. 
void my_fatui(string fname) {
  cout << fname << " is a Fatui Harbinger.\n";
}

// You can also use a default parameter value, by using the equals sign (=).
void my_region(string region = "Fontaine") {
  cout << region << endl;
}
// If you want the function to return a value, you can use a data types instead of void, 
// and use the return keyword inside the function.

// The return keyword stops the function from executing. If there are any statements after return, they won't run.
// Use the return keyword to return a value from your function.
// The function needs to have its return type specified before its name.
// The returned value can be assigned to a variable when calling the function.
double sum(int x, int y) {
    return x + y;
}

// // Functions can take multiple parameters by simply separating them using commas.
void combine(string fname, int rank) {
  cout << fname << ": " << "rank " << rank << endl;
}

// FOR-LOOP FUNCTION
int doubleGame(int x) {
  return x * 2;
}

// BOOL FUNCTION - 1 as true, 0 as false
bool check(int x) {
    if(x > 18) {
        return true;
    }
    else {
        return false;
    }
}
// OUTPUT COMING FROM FUNCTION
int main() {
    // The values passed as parameters when calling the function are called arguments.
    my_fatui("Columbina");
    my_fatui("Marionette");
    my_fatui("Pierro");

    // Default Parameter
    my_region();
    my_region("Liyue");

    // Note that the arguments need to match the parameters and must be passed in the same order, separated by commas.
    sum(10, 15);

    combine("Capitano", 1);
    combine("Childe", 11);

    // RETURNING VALUES
    int result;
    result = sum(25, 27);
    cout << result << endl;
    
    // FOR-LOOP FUNCTION
    for (int i = 1; i <= 5; i++) {
        cout << "Double of " << i << " is " << doubleGame(i) << endl;
    }
    // BOOL ARGUMENT
    cout << check(25);

    return 0;
}



