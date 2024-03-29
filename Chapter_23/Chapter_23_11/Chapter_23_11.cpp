#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

bool isEven(const int& num){ // unary predicate
    return (num % 2 == 0);
}

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

    vector<int> numsInVec{2017, 0, -1, 42, 10101, 25};

    cout << "The initial contents: " << endl;
    DisplayContents(numsInVec);

    vector<int> vecCopy(numsInVec);

    cout << "The effect of using partition():" << endl;
    partition(numsInVec.begin(), // Start of range
        numsInVec.end(), // end of range
        isEven); // Unary predicate
    DisplayContents(numsInVec);

    cout << "The effect of using stable_partition():" << endl;
    stable_partition(vecCopy.begin(), // Start of range
        vecCopy.end(), // end of range
        isEven); // Unary predicate

    DisplayContents(vecCopy);

    return 0;
}