#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> dynArray(3); // dynamic array of int instanciated

    dynArray[0] = 365;
    dynArray[1] = -421;
    dynArray[2] = 789;

    cout << "Number of integer in array: " << dynArray.size() << endl;

    cout << "Enter a new value to insert" << endl;
    int newValue = 0;
    cin >> newValue;

    // Insert a new value into dynamic array
    dynArray.push_back(newValue);

    cout << "Number of integer in array: " << dynArray.size() << endl;
    cout << "Last element of dynamic array: " << endl;

    cout << dynArray[dynArray.size() - 1] << endl;

    return 0;
}
