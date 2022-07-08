#include <iostream>
using namespace std;

int main()
{

    for (;;) // infinite loop
    {
        cout << "Enter two integers: ";
        int num1 = 0, num2 = 0;
        cin >> num1;
        cin >> num2;

        cout << "Do you widh to correct the numbers? (y/n): " << endl;
        char changeNumbers = '\0';
        cin >> changeNumbers;

        if (changeNumbers == 'y')
        {
            continue; // Restart the loop
        }

        cout << num1 << " x " << num2 << " = " << num1 * num2 << endl;
        cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;

        cout << "Press x to exit or any other key to recalculate: " << endl;
        char userSelection = '\0';
        cin >> userSelection;

        if (userSelection == 'x')
            break; // Exit the loop
    }

    cout << "Goodbye!" << endl;

    return 0;
}