#include <iostream>
using namespace std;

int main()
{

    const int ARRAY_LEN = 5;

    // Static array of 5 integers initialized
    int myNumbers[ARRAY_LEN] = {24, -1, 365, -999, 2011};

    // Pointer to the first element of the array
    int *pointerToNums = myNumbers; // Pointer initialized to first element of array

    cout << "Displaying array using pointer syntax operator*" << endl;
    for (int index = 0; index < ARRAY_LEN; ++index)
    {

        cout << "Element " << index << " = " << *(pointerToNums + index) << endl; // adress (pointerToNums + index) increases by sizeofint each time to access next element
    }

    cout << "Displaying array using pointer with array syntax operator[]" << endl;

    for (int index = 0; index < ARRAY_LEN; ++index)
    {
        cout << "Element " << index << " = " << pointerToNums[index] << endl;
    }

    return 0;
}