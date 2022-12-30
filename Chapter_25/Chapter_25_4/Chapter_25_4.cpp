#include <vector>
#include <iostream>
using namespace std;


int main(){

    vector<bool> boolFlags(3); // Instanciate to hold 3 bool flags
    boolFlags[0] = true; // Set the first element to true
    boolFlags[1] = true; // Set the second element to false
    boolFlags[2] = false; // Set the third element to false

    boolFlags.push_back(true); // Insert a fourth bool at the end

    cout << "The contents of the vector are: " << endl;
    for (size_t index = 0; index < boolFlags.size(); ++index)
        cout << boolFlags[index] << " ";

    cout << endl;
    return 0;
}