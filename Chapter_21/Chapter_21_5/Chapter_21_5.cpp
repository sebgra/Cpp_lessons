#include <vector>
#include <iostream>
#include <algorithm>

template <typename elementType>
class Multiply{
    public:
        elementType operator()(const elementType& elem1, const elementType& elem2){

            return (elem1 * elem2);
        }
};

int main(){

    using namespace std;

    vector<int> multiplicands{0, 1, 2, 3, 4};
    vector<int> multipliers{100, 101, 102, 103, 104};

    // A third containers that holds the result of the multiplication
    vector<int> vecResult;

    // make space for the result of the multiplication
    vecResult.resize(multipliers.size());
    transform(multiplicands.begin(), // range of the multiplicands
        multiplicands.end(), // end of range
        multipliers.begin(), // multipliers values
        vecResult.begin(), // holds result
        Multiply<int>());


    cout << "The contents of the first vector are: " << endl;
    for (size_t index =0; index < multiplicands.size(); ++index){

        cout << multipliers[index] << " ";
    }

    cout << endl;

    cout << "The result of the multiplication is: " << endl;

    for (size_t index = 0; index < vecResult.size(); ++index){

        cout << vecResult[index] << " "; 
    }

    return 0;
}