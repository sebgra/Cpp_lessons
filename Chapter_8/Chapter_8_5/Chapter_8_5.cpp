#include <iostream>
using namespace std;

int main()
{

    int dogsAge = 9;
    cout << "Initialized dogAge = " << dogsAge << endl;

    int *pointerToAnAge = &dogsAge;
    cout << "pointerToDogsAge points to dogsAge now" << endl;
    cout << "Enter an age for your dog: ";

    // store intput at the memory location pointed to by pointerToAnAge
    cin >> *pointerToAnAge;

    // Displaying the adress where the age is stored
    cout << "Input stored at 0x" << hex << pointerToAnAge << endl;
    cout << "Integer dogsAge = " << dogsAge << endl;

    return 0;
}