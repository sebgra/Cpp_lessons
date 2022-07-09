#include <iostream>
using namespace std;

int main()
{

    int age = 30;
    int *pointsToInt = &age;

    // Displaying the value of pointer

    cout << "*pointerToInt = 0x" << hex << pointsToInt << endl;

    int dogsAge = 9;
    pointsToInt = &dogsAge;

    cout << "pointsToInt points to dogsAge now" << endl;
    cout << "*pointerToInt = 0x" << hex << pointsToInt << endl;

    return 0;
}