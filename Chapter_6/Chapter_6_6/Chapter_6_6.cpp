#include <iostream>
using namespace std;

int main()
{

    cout << "Enter two numbers: " << endl;
    int num1 = 0, num2 = 0;
    cin >> num1;
    cin >> num2;

    int max = (num1 > num2) ? num1 : num2; // Evaluate expressison before question mark. If true, return value before :, otherwise return value after :.
    cout << "The greater of " << num1 << " and "
         << num2 << " is " << max << endl;

    return 0;
}