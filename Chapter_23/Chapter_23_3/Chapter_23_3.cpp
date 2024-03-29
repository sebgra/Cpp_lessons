#include <algorithm>
#include <vector>
#include <list>
#include <iostream>
using namespace std;

template <typename T>
void DisplayContents(const T& container){
    for(auto element = container.cbegin();
        element != container.cend();
        ++element){
        cout << *element << ' ';
    }
    cout << endl;
}

int main(){

    vector<int> numsInVec{2017, 0, -1, 42, 10101, 25, 9, 9, 9};
    list<int> numsInList{-1, 42, 10101};

    cout << "The contents of the sample vector are: " << endl;
    DisplayContents(numsInVec);

    cout << "The contents of the sample list are: " << endl;
    DisplayContents(numsInList);

    cout << "search() for the contents of the list in the vector: " << endl;
    auto range = search(numsInVec.cbegin(), // Start of range
        numsInVec.cend(), // end of range
        numsInList.cbegin(), // Start range to search for
        numsInList.cend()); // end of range to search for

    // Check if search found a match
    if (range != numsInVec.end()){

        cout << "Sequence in list found in vector at position: ";
        cout << distance(numsInVec.cbegin(), range) << endl;
    }

    cout << "Searching {9, 9, 9} in the vector using search_n(): " << endl;
    auto partialRange = search_n(numsInVec.cbegin(), // Start of range
        numsInVec.cend(), // end of range
        3, // Count of item to be searched for
        9); // Item to search for

    if (partialRange != numsInVec.end()){

        cout << "Sequence of {9, 9,9} found in vector at position: ";
        cout << distance(numsInVec.cbegin(), partialRange) << endl;
    }

    return 0;
}