#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    cout << "Hey - default!" << endl;

    cout << setw(35); // set field width to 35 columns
    cout << "Hey - alright aligned" << endl;

    cout << setw(35) << setfill('*'); // set field width to 35 columns
    cout << "Hey - right aligned" << endl;

    cout << "Hey - Back to default!" << endl;

    return 0;
}