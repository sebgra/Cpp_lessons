#include <iostream>

using namespace std;

class Fish{

    public:

        Fish(){

            cout << "Constructed Fish" << endl;
        }

        virtual ~Fish(){

            cout << "Destroyed Fish" << endl;

        }
};

class Tuna : public Fish{

    public:

        Tuna(){

            cout << "Constructed Tuna" << endl;

        }

        ~Tuna(){

            cout << "Destroyed Tuna" << endl;

        }
};

void DeletefishMemory(Fish* pFish){

    delete pFish;
}

int main(){

    cout << "Allocating a Tuna on free store:" << endl;

    Tuna* pTuna = new Tuna;

    cout << "Deleting the Tuna:" << endl;

    DeletefishMemory(pTuna);

    cout << "Instanciating a Tuna on the stack:" << endl;

    Tuna myDinner;

    cout << "Automatic destruction as it goes out the scope:" << endl;


    return 0;
}