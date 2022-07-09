#include <iostream>
using namespace std;

const double Pi = 3.14159265;

auto Area(double radius)
{ // auto will deduce type of returned value. Time consumming

    return Pi * radius * radius;
}

int main()
{

    cout << "Enter radius: ";
    double radius = 0;
    cin >> radius;

    // call function Area
    cout << "Area: " << Area(radius) << endl;
    return 0;
}