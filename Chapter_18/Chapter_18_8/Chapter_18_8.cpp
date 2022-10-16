#include <forward_list>
#include <iostream>
using namespace std;


template<typename T>
void DisaplyContents(const T& container){

    for (auto element = container.begin(); element != container.end(); ++element){

        cout << *element << ' ';
    }

    cout << endl;
}

int main(){

    forward_list<int> flistIntegers{3, 4, 2, 2, 0};
    flistIntegers.push_front(1);

    cout << "Contents of forward_list: " << endl;
    DisaplyContents(flistIntegers);

    flistIntegers.remove(2);
    flistIntegers.sort();
    cout << "Contents after removing 2 and sorting: " << endl;
    DisaplyContents(flistIntegers);

    return 0;
}