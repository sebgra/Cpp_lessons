#include <set>
#include <iostream>
using namespace std;

int main(){

    set<int> setInts{43, 78, -1, 124};

    // Display contents of the set to the screen
    for(auto element = setInts.cbegin(); element != setInts.cend(); ++element){

        cout << *element << endl;
    }

    // Try to find an element
    auto elementFound = setInts.find(-1);

    // Check if found
    if (elementFound != setInts.end()){

        cout << "Element " << *elementFound << " found!" << endl;
    }
    else

        cout << "Element not foundin the set!" << endl;

    // Finding another

    auto anotherFound = setInts.find(12345);

    // Check if found 

    if (anotherFound != setInts.end()){

        cout << "Element " << *anotherFound << " found!" << endl;

    }

    else

        cout << "Element 12345 not foundin the set!" << endl;

    return 0;
}