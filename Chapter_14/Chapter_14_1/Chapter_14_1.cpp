#include <iostream>
#include <string>
using namespace std;

#define ARRAY_LENGTH 25
#define PI 3.1416
#define MY_DOUBLE double
#define FAV_WHISKY "Jack Daniels"


int main(){

    int numbers[ARRAY_LENGTH] = {0};

    cout << "Array's length : " << sizeof(numbers) / sizeof(int) << endl;

    cout << "Enter radius: ";
    MY_DOUBLE radius = 0;
    cin >> radius;
    cout << "Area is: " << PI * radius * radius << endl;

    string favoriteWhisky =(FAV_WHISKY);
    cout << "My favorite drink is: " << favoriteWhisky << endl;

    return 0;
}