#include <iostream>
using namespace std;

// definde an inline function that doubles

inline long DoubleNum(int input) // inline is used to return the value return by the function directly in it. Increase execution speed. Use inline function only when the function is very small.
{
    return input * 2;
}

int main()
{

    cout << "Enter an integer: ";
    int inputNum = 0;
    cin >> inputNum;

    // call inlinde function

    cout << "Double is: " << DoubleNum(inputNum) << endl;
}