#include <iostream>
using namespace std;

const double Pi = 3.14159265;

// Function Declaration (Prototypes)

double SurfaceArea(double radius, double height);

int main()
{

    cout << "Enter the radius of the cylinder: ";
    double radius = 0;
    cin >> radius;

    cout << "Enter the height of the cylinder: " << endl;
    double height = 0;
    cin >> height;

    cout << "Surface area is: " << SurfaceArea(radius, height) << endl;

    return 0;
}

double SurfaceArea(double radius, double height)
{

    double area = 2 * Pi * radius * height + 2 * Pi * radius * radius;
    return area;
}