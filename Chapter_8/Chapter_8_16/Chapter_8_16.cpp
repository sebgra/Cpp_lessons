#include <iostream>
using namespace std;

int main()
{

    // Request a lot of memory space, use nothrow

    int *pointsToManyNums = new (nothrow) int[0x1fffffff];

    if (pointsToManyNums) // check if pointsToManyNums != NULL

    {
        // Use the allocated memory
        delete[] pointsToManyNums;
    }
    else
    {
        cout << "Memory allocation failed. Ending program" << endl;
    }

    return 0;
}