#include <iostream>
#include <string>
#include <algorithm>

int main(){

    using namespace std;

    cout << "PLease enter a strinf for case-convertion:" << endl;
    cout << ">";

    string inStr;
    getline(cin, inStr);
    cout << endl;

    transform(inStr.begin(), inStr.end(), inStr.begin(), ::toupper);
    cout << "The string converted to upper case is:" << endl;
    cout << inStr << endl << endl;

    transform(inStr.begin(), inStr.end(), inStr.begin(), ::tolower);

    cout << "The string converted to lower case is:" << endl;
    cout << inStr << endl << endl;

    return 0;
}