#include <iostream>
using namespace std;

int main()
{

    cout << "Enter a number: " << endl;
    int inputNumber = 0;
    cin >> inputNumber;

    int halfNum = inputNumber >> 1; // << operator shift bits one position left
    int quarterNum = inputNumber >> 2;
    int doubleNum = inputNumber << 1; // >> operator shift bits one position left
    int doubleQuarter = inputNumber << 2;

    cout << "Quarter: " << quarterNum << endl;
    cout << "Half: " << doubleNum << endl;
    cout << "Double: " << doubleNum << endl;
    cout << "Quadruple" << doubleQuarter << endl;

    return 0;
}