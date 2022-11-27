#include <algorithm>
#include <iostream>
#include <vector>
#include <list>

using namespace std;


int main(){


    vector<int> numsInVec{101, -4, 500, 21, 42, -1};

    list<char> charsInList{'a', 'h', 'z', 'k', 'l'};
    cout << "Display elements in a vector using lambda: " << endl;

    // Display the arra of integers
    for_each(numsInVec.cbegin(), numsInVec.cend(), [](const int& element){cout << element << ' ';}); // lambda

    cout << endl; 
    cout << "Display elements in a list using a lambda: " << endl;

    // Display the list of characters
    for_each(charsInList.cbegin(), charsInList.cend(), [](auto& element){cout << element << ' ';}); // lambda

    return 0;

}
