#include <iostream>
#include <string.h>

using namespace std;

int main()
{

    cout << "Enter a word not longer than 20 characters : " << endl;

    char userInput[21] = {'\0'};
    cin >> userInput;

    cout << "Lenght of your input was : " << strlen(userInput) << endl;

    return 0;
}