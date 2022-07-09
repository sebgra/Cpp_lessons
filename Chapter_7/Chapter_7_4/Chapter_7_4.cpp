#include <iostream>
using namespace std;

// Function declarations

double Area(double radius, double pi = 3.14);

int main()
{

    cout << "Enter the radius of the circle: ";
    double radius = 0;
    cin >> radius;

    cout << "pi is 3.14, do you wish to change this (y/n)? ";
    char changePi = 'n';
    cin >> changePi;

    double circleArea = 0;

    if (changePi == 'y')
    {

        cout << "Enter the value of pi: ";
        double newPi = 0;
        cin >> newPi;
        circleArea = Area(radius, newPi);
    }

    else
    {

        circleArea = Area(radius); // Ignore 2nd parameter, use default value
    }

    cout << "Area is: " << circleArea << endl;

    return 0;
}

// Function definition

double Area(double radius, double pi)
{

    return pi * radius * radius;
}