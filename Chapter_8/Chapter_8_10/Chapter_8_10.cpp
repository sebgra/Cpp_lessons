#include <iostream>
using namespace std;

void CalcArea(const double *ptrPi,     // const pointer to const data
              const double *ptrRadius, // const pointer to const data
              double *ptrArea)         // pointer to data
{

    // Check pointer validity before usint it is
    if (ptrPi && ptrRadius && ptrArea)
    {

        *ptrArea = (*ptrPi) * (*ptrRadius) * (*ptrRadius);
    }
}

int main()
{

    const double PI = 3.1416;

    cout << "Enter the radius of the circle: ";
    double radius;
    cin >> radius;

    double area;
    CalcArea(&PI, &radius, &area); // provide arguments through references

    cout << "The area of the circle is: " << area << endl;
    return 0;
}