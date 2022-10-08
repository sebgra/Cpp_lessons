#include <iostream>
using namespace std;

template <typename T>
class TestStatic{

    public:
        static int staticVal;
};

//Static member initialization

template <typename T> int TestStatic<T>::staticVal;



int main(){

    TestStatic<int> intInstance;
    cout << "Setting staticVal for intInstance to 2011" << endl;
    intInstance.staticVal = 2011;

    TestStatic<double> dbInstance;
    cout << "Setting staticVal for dbInstance to 1101" << endl;
    dbInstance.staticVal = 1101;

    cout << "intInstance.staticVal = " << intInstance.staticVal << endl;
    cout << "dbInstance.staticVal = " << dbInstance.staticVal << endl;

    return 0;
}