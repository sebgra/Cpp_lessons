#include <iostream>
using namespace std;

int GetFibNumber(int fibIndex)
{

    if (fibIndex < 2)
    {

        return fibIndex;
    }

    else
    { // recursion if fibIndex >= 2

        return GetFibNumber(fibIndex - 1) + GetFibNumber(fibIndex - 2);
    }
}

int main()
{

    cout << "Enter the 0-based index of the desired Fibonacci number: ";
    int fibIndex = 0;
    cin >> fibIndex;

    cout << "The Fibonacci number at index " << fibIndex << " is " << GetFibNumber(fibIndex) << endl;

    return 0;
}