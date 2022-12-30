#include <iostream>
using namespace std;

double Divide(double dividend, double divisor){

    if (divisor == 0){

        throw "Dividing by zero is a crime";
    }

    return (dividend, divisor);
}

int main(){

    cout << "Enter a dividend: ";
    double dividend = 0;
    cin >> dividend;
    cout << "Enter a divisor: ";
    double divisor = 0;
    cin >> divisor;

    try{

        cout << "Result is: " << Divide(dividend, divisor);
    }

    catch (const char* exp){

        cout << "exception: " << exp << endl;
        cout << "Sorry, can't continue!" << endl;
    }

    return 0;
}