#include <iostream>
using namespace std;

int main()
{

    cout << "Use boolean values(0 / 1) to answer the questions" << endl;
    cout << "Is it raining? ";
    bool isRaining = false;
    cin >> isRaining;

    cout << "Do you have buses on the streets? " << endl;
    bool bussesPly = false;
    cin >> bussesPly;

    // Conditional statement uses logical AND and NOT

    if (isRaining && !bussesPly)
    {

        cout << "You cannot go to work." << endl;
    }

    else
    {
        cout << "You can go to work." << endl;
    }

    if (isRaining && bussesPly)
    {
        cout << "Take un umbrella." << endl;
    }

    if ((!isRaining) && bussesPly)
    {
        cout << "Enjoy the sun and have a nice day." << endl;
    }

    return 0;
}