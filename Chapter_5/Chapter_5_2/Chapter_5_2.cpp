#include <iostream>
using namespace std;

int main()
{
    int startValue = 101;
    cout << "Start value of integer being operated : " << startValue << endl;

    int posfixIncrement = startValue++;
    cout << "Result of posfix Increment = " << posfixIncrement << endl;
    cout << "After PosfixIncrement, startValue " << startValue << endl;

    startValue = 101; // Reset

    int prefixIncrement = ++startValue;

    cout << "Result of prefix Increment = " << prefixIncrement << endl;
    cout << "After prefix Increment, startValue = " << startValue << endl;

    startValue = 101; // Reset

    int postfixDecrement = startValue--;

    cout << "Result of postfix Increment = " << postfixDecrement << endl;
    cout << "After postfix Decrement, startValue = " << startValue << endl;

    startValue = 101; // Reset

    int prefixDecrement = --startValue;

    cout << "Result of prefix Increment = " << prefixDecrement << endl;
    cout << "After prefix Decrement, startValue = " << startValue << endl;

    return 0;
}