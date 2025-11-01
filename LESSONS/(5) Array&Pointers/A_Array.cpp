// C++ ARRAY

// Arrays are used to store multiple values in a single variable, instead of declaring separate variables for each value.
// An array needs to be declared like a variable, with the type of the items it will hold.

// Note: In array, don't forget to put semicolon at the end of the code.
// In array, it is optional to make a variable plural.
#include <iostream>
using namespace std;

int main() {
    // After declaring the array, we can access the items using their position, also called the index.
    // The index is specified in square brackets, next to the array name.
    // That's because array indexes start from 0, meaning that the first element's index is 0 rather than 1. 
    // Array items are accessed using their indexes, placed in square brackets. The first item has the index 0.
    double prices[4] = {5.99, 3.2, 9.99, 9.59};
    prices[3] = 29.99;
    cout << prices[3];

    // If you already know what values to store in array, instead of assigning them one by one, you can use the following syntax:
    double prices2[] = {5.99, 3.2, 9.99, 29.99};
    cout << prices2[2];

    // We can use a loop to iterate over the items of an array.
    // We used the x variable of the loop as the index for our array. 
    // During each iteration of the loop it is incremented and used to access the corresponding item of the array.
    double prices3[] = {5.99, 3.2, 9.99, 29.99};
    for(int x=0;x<4;x++) {
        cout << prices3[x] << endl;
    }

    // We can also use loops to perform calculations with arrays.
    double prices4[] = {5.99, 3.2, 9.99, 29.99};
    double total=0;
    
    for(int x=0;x<4;x++) {
        total += prices4[x];
    }
    cout << total;
    // To make iterating over arrays easier and shorter, C++ provides another type of the for loop, called the for-each loop.
    // The loop creates a variable, which is automatically assigned to each value of the array during the loop.
    double prices5[] = {5.99, 3.2, 9.99, 29.99};
    for(double x: prices5) {
        cout << x << endl;
    }
    // We can also use the auto keyword in a for-each loop:
    for (auto x: prices5) {
        cout << x << endl;
    }

    // Another Sample
    int arr[] = {0, 2, 4, 6};
    int res = 0;
    for(auto x: arr) {
        if(x < 5) {
            res += x;
            }
        }
        cout << res;

    // Another Sample
    string firstName[5] = {"A", "B", "C", "D", "E"};
    string lastName[5] = {"Ape", "Boy", "Cat", "Dog", "Eagle"};
    int age[5] = {10, 5, 29, 15, 40};

    cout << "ID\tFirst Name\tLast Name" << endl;
    for (int i = 0; i < 5; i++) {
        cout << i << "\t" << lastName[i] << "\t\t" << firstName[i] << endl;
    }
    cout << "==================================" << endl;

    int id = 0;

    cout << "Input Person ID: ";
    cin >> id;
    cout << "";
    cout << "\n\n" << "Age: " << age[id];
    return 0;
}
