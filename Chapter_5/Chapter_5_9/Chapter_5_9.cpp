#include <iostream>
using namespace std;

int main()
{

    cout << "Enter a number: " << endl;
    int value = 0;
    cin >> value;

    value += 8;
    cout << "Value after + 8 value =  " << value << endl;
    value -= 2;
    cout << "Value after - 2 value =  " << value << endl;
    value /= 4;
    cout << "Value after / 4 value =  " << value << endl;
    value *= 4;
    cout << "Value after * 4 value =  " << value << endl;
    value %= 1000;
    cout << "Value after % 1000 value =  " << value << endl;

    // Note: henceforth assignment happen within cout
    cout << "After <<= 1, value = " << (value <<= 1) << endl;
    cout << "After >>= 2, value = " << (value >>= 2) << endl;

    cout << "After |= 0x55 value = " << (value |= 0x55) << endl;
    cout << "After ^= 0x55 value = " << (value ^= 0x55) << endl;
    cout << "After &= 0x0F value = " << (value &= 0x0F) << endl;

    return 0;
}