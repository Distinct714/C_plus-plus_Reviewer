// COMMENTS

// Comments can be used to explain C++ code, and to make it more readable. 
// It can also be used to prevent execution when testing alternative code and it ignored by the compiler. 
// It can be singled-lined or multi-lined.

// Single-line comments start with two forward slashes use for shorter comments (//).
/* Multi-line comments start with this format use for longer comments. */

// C++ PROGRAM

// A header is a file that contains functions and commands. 
// The #include command is used to add a header file to the program.

// #include <iostream> is a header file library in C++ that lets us work with input and output objects such as cout. 
// This is why we need to include it in our program, to enable us to use the cout command. 
// Header files add functionality to C++ programs.

// A namespace is used to organize code into logical groups and give them names for objects and variables from the standard library.
// So, the std namespace is part of the <iostream> header, containing the cout command. C++ ignores white space.

#include <iostream>
using namespace std;

// Each C++ program has a entry point or starting point, which is a function called main(). You cannot change this = error.
// Any code inside its curly brackets {} will be executed. This is code blocks.
int main() {
    // The cout command, together with the << insertion operator, is used to output values and print text. (pronounced "see-out") - 
    // To add a new line, you can use the endl command, like this:
    cout << 1 << endl;

    // ESCAPE CHARACTERS

    // Insert a new line in your output.
    cout << "Genshin Impact! \n" << endl;

    // Creates a horizontal tab
    cout << "The Best \tAnime Game!" << endl;   

    // Inserts a backslash character (\)
    cout << "The Best Survival\\Game!" << endl;

    // Inserts a double quote character
    cout << "\"Teyvat\": Open-World Game" << endl;

    // This ends the main function. If main function is int, it should be number not string.
    return 0;
    
    // If you put some code below here, it will not be executed unless the return 0 is the lowest here.

    // Remember: The compiler ignores white spaces. However, multiple lines makes the code more readable.

}
// Each statement in C++ needs to end with a semicolon ;.
// If you forget the semicolon (;), an error will occur and the program will not run.

// Curly brackets { } indicate the beginning and end of a function, which can also be called the function's body. 
// The code inside the brackets indicates what the function does when executed.

// Tips: The body of int main() could also been written as:
// int main () { cout << "Hello World! "; return 0; } (not recommended)


// OMMITING NAMESPACE (OPTIONAL)

// You might see some C++ programs that runs without the standard namespace library. 
// The using namespace std line can be omitted and replaced with the std keyword, followed by the :: operator for some objects.
// It is up to you if you want to include the standard namespace library or not.
// #include <iostream>

// int main() {
//   std::cout << "Genshin Impact!" << endl;
//   return 0;
// }