// SWITCH STATEMENT

// The switch statement can be used to check for equality against a list of values, instead of multiple else if statements.

#include <iostream>
using namespace std;

int main() {
   int choice = 4;

   // Each case has a value to compare with.
   // When the switch variable's value is equal to a case value, the code inside it is executed, until a break statement is reached.
   switch(choice) {
      //  Each case has to have a value and a colon.

      // The break statement is used to terminate the switch, when the case it matched. 
      // This will stop the execution of more code and case testing inside the block.
      case 1:
         cout << "Skirk";
         break;
      case 2:
         cout << "Furina";
         break;
      case 3:
         cout << "Arlechinno";
         break;

      // This is used to run code, when none of the cases match.
      // No break is needed in the default case, as it is always the last statement in the switch.
      default:
         cout << "Lumine";
   }

   // If you forget to add the break after each case, the program will continue to execute the code in the next case statements, 
   // even if their value does not match the variable's value. This type of behavior is called fall-through.
   // A break can save a lot of execution time because it "ignores" the execution of all the rest of the code in the switch block.
   int x = 3;
   switch(x) {
      case 2:
         x = 6;
      case 3:
         x = 9;
      case 4:
         x = 7;
         break; // watch out here
      case 5:
         x = 8;
   }

   // Random Number

   // You can use the rand() function, found in the <cstdlib> library, to generate a random number:


   srand(time(0));
   int dice = 0;
    
   for (int i = 0; i < 3; i++)
   // To get more control over the random number, for example, if you only want a random number between 0 and 100, you can use the following formula:
      dice = (rand() % 6) + 1; // 1-6

      switch (dice) {
         case 1:
            cout << "Red";
            break;
         case 2:
            cout << "Orange";
            break;
         case 3:
            cout << "Yellow";
            break;
         case 4:
            cout << "Green";
            break;
         case 5:
            cout << "Yellow";
            break;
         case 6:
            cout << "Green";
            break;
        }

        // Note: The examples above just outputs a random number once. 
        // They don't output different random numbers each time the program runs. 
        // To fix this, you can use the srand() function and add the time() function from the <ctime> library.
      
      // You cannot add >, < at switch case
      
      // int time = 12;
      // switch (time) {
      //     case 0:
      //         cout << "Midnight";
      //         break;
      //     case 12:
      //         cout << "Noon";
      //         break;
      // }

      // Below will run the rest of code.
      // if the variable didn't match to the cases, it will return nothing.
      // int countdown = 6;
      // switch (countdown) {

      //     case 7:
      //         cout << "Seven\n";
      //     case 6:
      //         cout << "Six\n";
      //     case 5:
      //         cout << "Five\n";
      //     case 4:
      //         cout << "Four\n";
      //     case 3:
      //         cout << "Three\n";
      //     case 2:
      //         cout << "two\n";
      //     case 1:
      //         cout << "One\n";
      // }

   return 0;
}


