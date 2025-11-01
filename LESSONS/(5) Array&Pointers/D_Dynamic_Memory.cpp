
// dynamic arrays (arrays which have a variable size). 
// These are handy when we need to allocate new memory based on user input.

#include <iostream>
using namespace std;

int main() {
    // The new operator is used to allocate memory. It then can be assigned to a pointer.
    // Now, p hold the address of our newly allocated memory, which can be used to store 8 item, because size = 8;
    int size = 8;
    int * p = new int[size];
    
    p[0] = 128;
    p[1] = 512;
    p[2] = 16;

    cout << *(p+1);

    // We can also use size in a for loop, as the condition.
    int sizes = 10;
    int *a = new int[sizes];

    for(int i=0; i<sizes; i++) {
        a[i] = i;
    }
    for(int i=0; i<sizes; i++) {
        cout << a[i] << endl;
    }
    
    // In most cases, memory allocated dynamically is only needed during specific periods of time within a program; 
    // once it is no longer needed, it can be freed so that the memory becomes available again for other requests of dynamic memory.
    // This frees up the memory taken by the array a.
    
    string *a = new string[sizes];
    delete[] a;

    // Dynamic memory allocation is useful in many situations, such as when your program depends on input. 
    // As an example, when your program needs to read an image file, it doesn't know in advance the size of the image file 
    // and the memory necessary to store the image.
    // - Memory is allocated using the new keyword: int* p = new int[size];
    // - After the allocated memory is no longer needed, we can free it up using delete: delete[] p;

    return 0;
}

