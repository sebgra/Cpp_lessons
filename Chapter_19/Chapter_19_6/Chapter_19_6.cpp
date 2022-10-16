#include <unordered_set>
#include <iostream>
using namespace std;

template<typename T>
void DisplayContents(const T& container){

    for(auto element = container.cbegin(); element != container.cend(); ++element){

        cout << *element << ' ';
    }

    cout << endl;
    cout << "Number of elements, size() = " << container.size() << endl;
    cout << "Bucket count = " << container.bucket_count() << endl;
    cout << "Max load factor = " << container.max_load_factor() << endl;
    cout << "Load factor = " << container.load_factor() << endl << endl;
}

int main(){

    unordered_set<int> useInts{1, -3, 2017, 300, -1, 989, -300, 9};
    DisplayContents(useInts);
    useInts.insert(999);
    DisplayContents(useInts);

    cout << "Enter int you want to check existence in set: ";
    int input = 0;
    cin >> input;
    auto elementFound = useInts.find(input);

    if (elementFound != useInts.end()){
        cout << *elementFound << " found in set" << endl; 
    }

    else

        cout << input << " not available in set" << endl;

    return 0;
}