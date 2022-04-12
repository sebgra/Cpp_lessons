#include <iostream>
using namespace std;
constexpr int Square(int number) { return number * number; }

int main()
{
    constexpr int ARRAY_LENGTH = 5;
    // Array of 5 integers, initialized using a const

    int myNumbers[ARRAY_LENGTH] = {5, 10, 0, -101, 20};

    // Using a constexpr for array of 25 integers
    int moreNumbers[Square(ARRAY_LENGTH)];

    cout << "Enter index of element to be changed ";
    int elementIndex = 0;
    cin >> elementIndex;

    cout << "Enter new value : " << endl;
    int newValue = 0;
    cin >> newValue;

    myNumbers[elementIndex] = newValue;
    moreNumbers[elementIndex] = newValue;

    cout << "Element " << elementIndex << " in array myNumbers is : ";
    cout << moreNumbers[elementIndex] << endl;

    cout << "Element " << elementIndex << " in array moreNumbers is : ";
    cout << moreNumbers[elementIndex];

    return 0;
}