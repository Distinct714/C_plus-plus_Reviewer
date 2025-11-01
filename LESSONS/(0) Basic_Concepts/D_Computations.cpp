// C++ COMPUTATIONS

// C++ supports a number of arithmetic operators that can be used to perform calculations.

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // ARITHMETIC OPERATORS

    // ADDITION
    int a = 8, b = 24;
    cout << a + b + a << endl;

    // SUBTRACTION
    int price = 20, discount = 5;
    int total = price - discount;
    cout << total << endl;

    // // MULTIPLICATION
    int points = 28, level = 3;
    int result = points * level;
    cout << result << endl;

    // DIVISION
    int hours = 500;
    int days = hours / 24;
    cout << days << endl;

    // In case we need a more precise result, which includes decimal points, we can use doubles
    double second_hours = 500;
    double second_days = second_hours / 24;
    cout << second_days << endl;

    // REMAINDER
    // Also called the modulo, is used to find the remainder of a division. (1 = decimal, 0 = nondecimal)
    int third_days = 9;
    int result2 = third_days % 4;
    cout << result2 << endl;

    
    // INCREMENT - Increases the value of a variable (+1)
    int x = 5;
    ++x;
    cout << x << endl;

    // DECREMENT - Decreases the value of a variable (-1)
    int y = 5;
    --y;
    cout << y << endl;

    // C++ MATH

    // The max(x,y) function can be used to find the highest value of x and y:
    cout << max(15, 20) << endl;

    // The min(x,y) function can be used to find the lowest value of x and y:
    cout << min(5, 10) << endl;
    
    // Other functions, such as sqrt (square root), round (rounds a number) and log (natural logarithm), 
    // can be found in the <cmath> header file. 

    // Included in the cmath library:
    cout << sqrt(64) << endl;
    cout << round(2.6) << endl;
    cout << log(2) << endl;

    return 0;
}