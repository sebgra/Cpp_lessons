#include <iostream>
#include <string>
#include <string.h>
using namespace std;

int main()
{

    cout << "Enter a line of text: " << endl;
    string userInput;
    getline(cin, userInput); // get console input from cin to store it in userInput

    char copyInput[20] = {'\0'};
    if (userInput.length() < 20) // check bounds of input
    {
        strcpy(copyInput, userInput.c_str()); // copy userInput to copyInput
        cout << "copyInput contains: " << copyInput << endl;
    }
    else
    {
        cout << "Bounds exceded: won't copy!" << endl;
    }

    return 0;
}