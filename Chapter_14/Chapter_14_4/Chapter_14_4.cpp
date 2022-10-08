#include <iostream>
using namespace std;

// template with default parameters int & double

template <typename T1=int, typename T2=double>

class HoldsPair{

    private:

        T1 value1;
        T2 value2;

    public:

        HoldsPair(const T1& value1, const T2& value2): value1(value1), value2(value2) {} // constructor

        //Acessor function
        const T1 & GetFirstValue() const{

            return value1;
        }

        const T2 & GetSecondValue() const{

            return value2;
        }

};



int main(){

    HoldsPair<> pairIntDbl (300, 10.09);
    HoldsPair<short, const char*>pairShort(25, "Learn templates, love C++");

    cout << "The first obejct contains -" << endl;
    cout << "Value 1: "<< pairIntDbl.GetFirstValue() << endl;
    cout << "Value 2: "<< pairIntDbl.GetSecondValue() << endl;


    cout << "The second obejct contains -" << endl;
    cout << "Value 1: " << pairShort.GetFirstValue() << endl;
    cout << "Value 2: " << pairShort.GetSecondValue() << endl;

    return 0;

}