#include <iostream>
using namespace std;

template<typename Res, typename ValType>
void Sum(Res& result, ValType& val){

    result = result + val;
}

template<typename Res, typename First, typename... Rest>
void Sum(Res& result, First val1, Rest... valN){

    result = result + val1;
    return Sum(result, valN ...);
}

int main(){

    double dResult = 0;
    Sum(dResult,3.14, 4.56, 1.1111);
    cout << "dResult = " << dResult << endl;

    string strResut;
    Sum(strResut, "Hello ", "World");
    cout << "strResut = " << strResut.c_str() << endl;

    return 0;
}