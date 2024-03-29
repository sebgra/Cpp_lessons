#include <algorithm>
#include <vector>
#include <iostream>

// unary predicate for *_if functions
template <typename elementType>
bool IsEven(const elementType& number){
    return (number % 2 == 0); // true if even
}

int main(){

    using namespace std;
    vector<int> numsInVec{2017, 0, -1, 42, 10101, 25};

    size_t numZeroes = count(numsInVec.cbegin(), // Start of range
        numsInVec.cend(), // end of range
        0); // Element to count

    cout << "Number of instances of '0': " << numZeroes << endl << endl;

    size_t numEvenNums = count_if(numsInVec.cbegin(), // Start of range
        numsInVec.cend(), // end of range
        IsEven<int>); // Unary predicate

    cout << "Number of even elements: " << numEvenNums << endl;
    cout << "Number of odd elements: ";
    cout << numsInVec.size() - numEvenNums << endl;

    return 0;
}