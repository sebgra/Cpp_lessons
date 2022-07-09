#include <iostream>
using namespace std;

int main()
{

    int age = 30;
    int *pointsToInt = &age; // pointer initialized to &age

    // Displaying the value of pointer

    cout << "Interger age is at: 0x" << hex << pointsToInt << endl; // adress displayed without &

    return 0;
}