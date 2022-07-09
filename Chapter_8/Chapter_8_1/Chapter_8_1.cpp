#include <iostream>
using namespace std;

int main()
{

    int age = 30;
    const double Pi = 3.1416;

    // Use & to find the adresse in memory and

    cout << "Interger age is located at: 0x" << &age << endl; // adress displayed with &
    cout << "Double Pi is located at: 0x" << &Pi << endl;

    return 0;
}