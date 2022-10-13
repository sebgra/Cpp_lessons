#include <list>
#include <vector>

int main(){

    using namespace std;

    // instanciate an empty list
    list<int> linkInts;

    //Instanciate a list with 10 integers
    list<int> listWith10Integers(10);

    //Instanciate a list with 4 integers, each value 99
    list<int> listWith4IntegersEach99(4, 99);

    // Create an exact copy of an existing list
    list<int>listCopyAnother(listWith4IntegersEach99);

    // a vector with 10 integers, each 2017
    vector<int> vecIntegers(10, 2017);

    // instanciate a list using values from another container
    list<int>listContainsCopyOfAnother(vecIntegers.cbegin(), vecIntegers.cend());

    return 0;
}