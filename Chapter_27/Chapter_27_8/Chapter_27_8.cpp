#include <fstream>
#include <iostream>
using namespace std;

int main(){

    ofstream myFile;
    myFile.open("HelloFile.txt", ios_base::out);

    if(myFile.is_open()){

        cout << "File open successfull!" << endl;
        myFile << "My first text here" << endl;
        cout << "Finished wrtiting to file, will close now" << endl;
        myFile.close();
    }

    return 0;
}