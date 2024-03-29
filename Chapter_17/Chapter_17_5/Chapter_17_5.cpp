#include <iostream>
#include <vector>

int main(){

    using namespace std;
    vector<int> integers{50, 1, 987, 1001};

    vector<int>::const_iterator element = integers.cbegin();
    // auto element = integers.cbegin() // auto type deduction

    while(element != integers.end()){

        size_t index = distance(integers.cbegin(), element);

        cout << "Element at position ";
        cout << index << " is: " << *element << endl;

        // Move to the next element
        ++element;
    }

    return 0;
}