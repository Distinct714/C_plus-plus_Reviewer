
// In order to learn about dynamic memory, we first need to learn about pointers.
// All variables that you create are stored in the memory. 
// A pointer is a variable that stores the memory address of another variable as its value.
// It is defined using the asterisk sign and the type of the value it points to, for example: int *p;
// A pointer can also be assigned to an array and be used to access the elements of the array, by simply incrementing the pointer.
#include <iostream>
using namespace std;

int main() {
    // // Now, p is a pointer that will point to an integer value in the memory.
    // // The address of a variable can be accessed using the & operator.
    // int num1 = 42;

    // int *a = &num1;
    // cout << a;
    // // The code above creates a pointer called p and assigns it the memory address of the variable num.

    // // The asterisk * is also used to access the value stored at a memory address. It is called the dereference operator.
    // int num2 = 44;

    // int *b = &num2;
    // cout << *b;

    // // The & operator is used to access the memory location of a variable.
    // // The * operator is used to access the value of a memory address that is stored in a pointer.
    // // The same * sign is also used to declare a pointer, and it is different from the dereference operator.

    // // Because the pointer points to the memory address of a variable, we can use it to change the value of that variable:
    // // We have changed the value of a variable using the pointer. 
    // // *p is basically an alias for num, meaning that they represent the same thing. 
    // // When you change the value of *p, num is also changed, and vice-e-versa, changing num will also change the value of *p.
    // int num3 = 46;

    // int *c = &num3;
    // *c = 8;
    // cout << *c;

    // Another Sample
    int a = 4;
    int *p = &a;
    a += 2;
    *p += 3;
    a -= 1;
    cout << a;

    // The name of an array is actually a pointer to its first element. Each element can be accessed by incrementing the pointer.
    int arr[] = {1, 2, 3, 4, 5};
    int *ptr = arr;
    cout << *ptr << endl;
    cout << *(ptr+1) << endl;
    cout << *(ptr+2) << endl;

    // Note, that we used *p = arr and not &arr. This is because the array name is already a pointer and is the same as &arr[0].
    // Also, note that we used the dereference operator like this: *(p+1), so that it accessed the incremented address. 
    // The parentheses are important!

    // We can use pointers to arrays to loop over them. 
    // During each iteration of the loop we simply increment the pointer by 1, making it point to the next element of the array.
    int arr2[] = {1, 2, 3, 4, 5};
    int *p = arr2;
    
    for(int i=0; i<5; i++) {
        cout << *p << endl;
        p++;
    }
        


    return 0;
}

