#include <iostream>
#include <string>
#include <algorithm>

int main(){

    using namespace std;

    string sampleStr("Hello String! We will reverse you!");
    cout << "The original string is: " << endl;
    cout << sampleStr << endl;

    reverse(sampleStr.begin(), sampleStr.end());

    cout << "After appmlying the std::reverse algorithm: " << endl;
    cout << sampleStr << endl;

    return 0;
}