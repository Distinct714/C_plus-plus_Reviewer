// MULTI-DIMENSIONAL ARRAY

// An array can have multiple dimensions (or indices) to represent a grid.
// To create multidimensional arrays, place each array within its own set of square brackets:

#include <iostream>
using namespace std;

int main() {
    // The array below has two dimensions: 4 rows and 3 columns. The elements are accessed by using the row index and column index of the array.
    // Indices for two-dimensional arrays are also called row and column indices.
    // Each row is an item, which is an array. So, to access a value, we provide the row index, then the column index.
    int x[3][4] = {
        {0, 1, 2, 3}, 
        {3, 4, 5, 6}, 
        {6, 7, 8, 9}
    };
    cout << x[2][0] << endl;

    // We can loop over a two-dimensional array using nested for loops:
    // The first loop iterates over the rows, the second one over their items.
    int seats[2][3] = {
        {1, 2, 3}, 
        {4, 5, 6}, 
    };

    for (int a=0; a<2; a++) {
        for (int b=0; b<3; b++) {
            cout << seats[a][b] << endl;
        }
    }

    // Arrays with multiple dimensions are simply arrays that contain other arrays.
    // The number of square brackets match the dimension of the array, for example [][] denotes a 2-dimensional array.
    // To access the items of the array, specify the row index in the first square brackets, followed by the column index in the second.

    return 0;
}
