#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

template<typename elementType>
struct DisplayElementKeepCount{
    int count;
    DisplayElementKeepCount() : count(0){}

    void operator()(const elementType& element){
        ++count;
        cout << element << ' ';
    }
};

int main(){

    vector<int> numsInVec{2017, 0, -1, 42, 10101, 25};

    cout << "Elements in vector are: " << endl;
    DisplayElementKeepCount<int>functor = for_each(numsInVec.cbegin(), // Start of range
        numsInVec.cend(), // end of range
        DisplayElementKeepCount<int>()); // Functor

    cout << endl;

    // Use the state stored in th return value of for_each!
    cout << "'" << functor.count << "' elements displayed." << endl;

    string str("for_each and strings!");
    cout << "Sample string: " << str << endl;

    cout << "Characters displayed using lambda: " << endl;
    int numChars = 0;
    for_each(str.cbegin(), // Start of range
        str.cend(), // end of range
        [&numChars](char c){ // Lambda
            cout << c << ' ';
            ++numChars;
        });

    cout << endl;

    cout << "'" << numChars << "' characters displayed." << endl;

    return 0;
}