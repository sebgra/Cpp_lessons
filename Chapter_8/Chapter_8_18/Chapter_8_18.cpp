#include <iostream>
using namespace std;

void GetSquare(int &number) // allow to return the result directly
{
    number *= number;
}

int main()
{

    cout << "Enter a number you wish to square: ";
    int number = 0;
    cin >> number;

    GetSquare(number);
    cout << "The square of number is " << number << endl;

    return 0;
}