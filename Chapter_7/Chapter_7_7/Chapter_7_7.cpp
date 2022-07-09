#include <iostream>
using namespace std;

const double Pi = 3.14159256;

double Area(double radius);                // for circle calculation
double Area(double radius, double height); // for cylinder calculation

int main()
{

    cout << "Enter z for Cylinder, c for Circle: ";
    char userSelection = 'z';
    cin >> userSelection;

    cout << "Enter radius: ";
    double radius = 0;
    cin >> radius;

    if (userSelection == 'z')
    {

        cout << "Enter height: ";
        double height = 0;
        cin >> height;

        // Invoke overloaded variant of Area for cylinder
        cout << "Area: " << Area(radius, height) << endl;
    }
    else
    {

        cout << "Area: " << Area(radius) << endl;
    }
}

// for circle

double Area(double radius)
{

    return Pi * radius * radius;
}

// Overloaded variant of Area for cylinder

double Area(double radius, double height)
{

    return 2 * Area(radius) + 2 * Pi * radius * height;
}