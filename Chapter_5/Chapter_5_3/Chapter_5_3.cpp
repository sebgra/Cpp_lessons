#include <iostream>
using namespace std;

int main()
{
    cout << "Enter two integers : " << endl;
    int num1 = 0, num2 = 0;
    cin >> num1;
    cin >> num2;

    bool isEqual = (num1 == num2);
    cout << "Result of equality test : " << isEqual << endl;

    bool isUnequal = (num1 != num2);
    cout << "Result of inequality test : " << isUnequal << endl;

    bool isGreaterThan = (num1 > num2);
    cout << "Result of  " << num1 << ">" << num2 << endl;
    cout << "test : " << isGreaterThan << endl;

    bool isLessThan = (num1 < num2);
    cout << "Result of " << num1 << "<" << num2 << endl;
    cout << "test : " << isLessThan << endl;

    return 0;
}