#include <iostream>
using namespace std;

int main()
{

    // Static array of 5 elements
    int myNumbers[5];

    // array assigned to pointer to int
    int *pointToNums = myNumbers;

    // Display the address contained in the pointer
    cout << "pointToNums = 0x " << hex << pointToNums << endl;

    // Adress of first element of array
    cout << "&myNumbers[0] = 0x" << hex << &myNumbers[0] << endl;

    // Address of second element of array
    cout << "&myNumbers[1] = 0x" << hex << &myNumbers[1] << endl;

    return 0;
}