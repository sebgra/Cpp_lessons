#include <iostream>
#include <string>
#include <algorithm>

int main(){

    using namespace std;

    string sampleStr("Hello String! Wake up to a beatiful day!");
    cout << "The original sample string is: " << endl;
    cout << sampleStr << endl << endl;

    // Delete character given position and count

    cout << "truncating second sentence: " << endl;
    sampleStr.erase(13, 28);
    cout << sampleStr << endl << endl;

    // Find character 'S' using find algorithm
    string::iterator iCharS = find(sampleStr.begin(), sampleStr.end(), 'S');

    // If character found, 'erase" to delte a character
    cout << "Erasing character 'S'  from the sample string:" << endl;
    if (iCharS != sampleStr.end()){

        sampleStr.erase(iCharS);
    }

    cout << sampleStr << endl << endl;

    // Erase a range of character using an overloaded version of erase 

    cout << "Erasing a range between begin() and end(): " << endl;

    sampleStr.erase(sampleStr.begin(), sampleStr.end());

    // Verify the length after erase() operation above

    if (sampleStr.length() == 0){

        cout << "The string is empty" << endl;
    }

    return 0;

}