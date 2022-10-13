#include <iostream>
#include <vector>
int main(){

    using namespace std;

    // instanciate a vector object that holds 5 integers to default value
    vector<int> integers(5);

    cout << "Vector of integers was instantiated with " << endl;
    cout << "Size: " << integers.size() << endl;
    cout << ", Capacity: " << integers.capacity() << endl;

    // inserting a 6th element in to the vector
    integers.push_back(666);

    cout << "After inserting an additonal element..." << endl;
    cout << "Size: " << integers.size() << endl;
    cout << ", Capacity: " << integers.capacity() << endl;

    // Inserting another element
    integers.push_back(777);

    cout << "After inserting yet an additonal element..." << endl;
    cout << "Size: " << integers.size() << endl;
    cout << ", Capacity: " << integers.capacity() << endl;

    return 0;
}