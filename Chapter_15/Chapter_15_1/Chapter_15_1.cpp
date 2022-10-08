#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    // A dynamic array of integers

    vector<int> intArray;

    //Insert sample integer into the array

    intArray.push_back(50);
    intArray.push_back(2991);
    intArray.push_back(23);
    intArray.push_back(9999); 

    cout << "The content of the vector are: " << endl;

    // Walk the vector and read values using an iterator

    vector<int>::iterator arrIterator = intArray.begin();

    while (arrIterator != intArray.end()){

        // Write the value to the screen 
        cout << *arrIterator << endl;


        // Increment the iterator to acces the next element
        ++arrIterator;
    }

    // Find an element (say 2991) using th efind algorithm

    vector<int>::iterator elFound = find(intArray.begin(), intArray.end(), 2991);

    // Check if value was found

    if (elFound != intArray.end()){

        // Determine position of element using std::distance

        int elPos = distance(intArray.begin(), elFound);
        cout << "Value: " << *elFound;
        cout << " found in the vector at position: " << elPos << endl;
    }

    return 0;
}