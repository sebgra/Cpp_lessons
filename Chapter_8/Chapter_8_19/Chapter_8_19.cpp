#include <iostream>
using namespace std;

void GetSquare(const int &number, int &result) // here result is used to hold the result of number squared
{
    result = number * number;
}

int main()
{

    cout << "Enter a number you wish to square: ";
    int number = 0;
    cin >> number;

    int square = 0;
    GetSquare(number, square);
    cout << "Number "
         << "^2 = " << square << endl;

    return 0;
}