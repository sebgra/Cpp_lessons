#include <vector>
#include <iostream>
using namespace std;

void DisplayVector(const vector<int>& inVec){

    for(auto element = inVec.begin(); element != inVec.end(); ++element){

        cout << *element << ' ';
        }

    cout << endl;
}


int main(){

    // Initialize a vector with 4 elements, each initialized to 90
    vector<int> integers(4,90);

    cout << "The initial contents of the vector: ";
    DisplayVector(integers);

    // Insert 25 at the begining
    integers.insert(integers.begin(), 25);

    // Insert to elements of value 45 at the end
    integers.insert(integers.end(), 2, 45);

    cout << "Vector after inserting elements at begining and end: ";
    DisplayVector(integers);

    // Another vector containing 2 elements of value 30
    vector<int> another(2, 30);

    // Insert two elements from another container in position [1]
    integers.insert(integers.begin() + 1, another.begin(), another.end());

    cout << "Vector after inserting contents from another vector: ";
    cout << "in the middle: " << endl;
    DisplayVector(integers);

    return 0;
}