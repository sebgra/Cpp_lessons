#include <vector>
using namespace std;

int main(){

    // Vector of integers
    std::vector<int> integers;

    // Vector initialized using C++11 list initialization
    std::vector<int> initVector{202, 2017, -1};

    // Instantiate a vector with 10 elements (it can still grow)
    std::vector<int> tenElements(10);

    // Instanciate a vector with 10 elements, each initialized to 90
    std::vector<int> tenElementsInit(10, 90);

    // Instantiate a vector to the content of an other
    std::vector<int> copyVector(tenElementsInit);

    // Ve tor initialized to 5 elements from an other using iterators
    std::vector<int> partialCopy(tenElements.cbegin(), tenElements.cbegin() + 5);

    return 0;
}