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

    vector<int> numsInVec(6);

    // Fill first 3 elements with value 8, last 3 with 5
    fill(numsInVec.begin(), numsInVec.begin() + 3, 8);
    fill_n(numsInVec.begin() + 3, 3, 5);

    // shuffle the container 
    random_shuffle(numsInVec.begin(), numsInVec.end());

    cout << "The initial content of vector: " << endl;
    DisplayContents(numsInVec);

    cout << endl << "'std::replace_if' value 5 by 8" << endl; 
    replace(numsInVec.begin(), numsInVec.end(), 5, 8);

    cout << "'std::replace_if' even value by -1" << endl;
    replace_if(numsInVec.begin(), numsInVec.end(), [](int elem){return elem % 2 == 0;}, -1);
    cout << endl << "Vectort after replacements: " << endl;
    DisplayContents(numsInVec);



    return 0;
}