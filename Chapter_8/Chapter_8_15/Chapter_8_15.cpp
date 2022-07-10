#include <iostream>
using namespace std;

int main()
{

    // remove the try-catch block to see this application crash

    try
    {

        // Request a lot of memory

        int *pointsToManyNums = new int[0x1fffffff];

        // Use the allocated memory

        delete[] pointsToManyNums;
    }

    catch (bad_alloc)
    {

        cout << "Memory allocation failed. Ending program" << endl;
    }

    return 0;
}