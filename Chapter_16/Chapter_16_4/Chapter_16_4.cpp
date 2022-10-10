#include <iostream>
#include <string>

int main(){

    using namespace std;

    string sampleStr("Good day String! Today is beautiful!");
    cout << "Sample string is: " << endl << sampleStr << endl << endl;

    // Find substring "day" - find() return position 
    size_t charPos = sampleStr.find("day", 0);

    // Check if th esubstring was found...

    if (charPos != string::npos){

        cout << "First isntance of \"day\" at position " << charPos << endl;
    }

    else

        cout << "Substring not found!" << endl;


    cout << "Locating all instances of \"day\"" << endl;
    size_t subStrPos = sampleStr.find("day", 0);

    while (subStrPos != string::npos){

        cout << "\"day\" found at position " << subStrPos << endl;

        // Make find search forward from the next character onwards
        size_t searchOffset = subStrPos + 1; 

        subStrPos = sampleStr.find("day", searchOffset);

    }

    return 0;
    
}