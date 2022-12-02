#include <algorithm>
#include <list>
#include <string>
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

    list<string> names{"John", "Brad", "jack", "sean", "Anna"};
    cout << "Sorted contents of the llist are: " << endl;
    names.sort();
    DisplayContents(names);

    cout << "Lowest  index where \"Brad\" can be inserted: " << endl;
    auto minPos = lower_bound(names.begin(), names.end(), "Brad");
    cout << distance(names.begin(), minPos) << endl;

    cout << "Highest index where \"Brad\" can be inserted: " << endl;
    auto maxPos = upper_bound(names.begin(), names.end(),  "Brad");
    cout << distance(names.begin(), maxPos) << endl;

    cout << endl;

    cout << "List after inserting Brad in sorted oreder: " << endl;
    names.insert(minPos, "Brad");
    DisplayContents(names);


    return 0;
}