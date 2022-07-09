#include <iostream>
using namespace std;

int main()
{

    cout << "How many integers you wish to enter? ";
    int numEntries;
    cin >> numEntries;

    int *pointsToInts = new int[numEntries]; // reserve memory for an array of ints of #numEntries elements

    cout << "Allocated for " << numEntries << " integers" << endl;

    for (int counter = 0; counter < numEntries; ++counter) // Increase the address value in pointer by the size of the data type pointed
    {
        cout << "Enter a number " << counter << ": ";
        cin >> *(pointsToInts + counter); // Move pointer inside the array
    }

    cout << endl;

    cout << "Displaying  all numbers entered: " << endl;
    for (int counter = 0; counter < numEntries; ++counter)
    {
        cout << *(pointsToInts++) << " ";
    }
    cout << endl;

    // return pointer to initial position

    pointsToInts -= numEntries;

    // done with using memory?
    delete[] pointsToInts;

    return 0;
}