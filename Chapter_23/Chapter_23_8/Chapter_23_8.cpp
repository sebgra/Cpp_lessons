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
    cout  << "| Number of elements: " << container.size() << endl;
}

int main(){

    list<int> numsInList{2017, 0, -1, 42, 10101, 25};

    cout << "Source (list) contains: " << endl;
    DisplayContents(numsInList);

    // Initialize vector to hold 2x elements as the list
    vector<int> numsInVec(numsInList.size() * 2);

    auto lastElement = copy(numsInList.cbegin(), // Start of range
        numsInList.cend(), // end of range
        numsInVec.begin()); // Destination

    // copy odd numbers from the list into vector
    copy_if(numsInList.cbegin(), // Start of range
        numsInList.cend(), // end of range
        lastElement, // Destination
        [](int element){return (element % 2 != 0);}); // Unary predicate

    cout << "Destination (vector) after copy and copy_if contains: " << endl;
    DisplayContents(numsInVec);

    // Remove all instances of '0', resize vector using erase()

    auto newEnd = remove(numsInVec.begin(), // Start of range
        numsInVec.end(), // end of range
        0); // Element to remove

    numsInVec.erase(newEnd, numsInVec.end());

    // Remove all odd numbers from the vector using remove_if()
    newEnd = remove_if(numsInVec.begin(), // Start of range
        numsInVec.end(), // end of range
        [](int number){return (number % 2 != 0);}); // Unary predicate

    numsInVec.erase(newEnd, numsInVec.end());

    cout << "Destination (vector) after remove and remove_if erase: " << endl;
    DisplayContents(numsInVec);


    return 0;
}