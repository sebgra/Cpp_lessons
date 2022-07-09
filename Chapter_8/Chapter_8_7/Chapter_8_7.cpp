#include <iostream>
using namespace std;

int main()
{

    // Request for memory space for an int

    int *pointerToAnAge = new int; // new allow memory to be reserved through a pointer

    // Use the allocated memory space to store an int
    cout << "Enter your dog's age: ";
    cin >> *pointerToAnAge;

    // Use indirection operator* to access value
    cout << "Age " << *pointerToAnAge << " is stored at 0x" << hex << pointerToAnAge << endl;

    delete pointerToAnAge; // release memory
    return 0;
}