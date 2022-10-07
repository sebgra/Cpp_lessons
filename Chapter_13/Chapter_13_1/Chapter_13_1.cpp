#include <iostream>
using namespace std;

class Fish{

    public:

        virtual void Swim(){

            cout << "Fish swims in water" << endl;
        }

        // base class should always have virtual destructor

        virtual ~Fish(){}
};

class Tuna : public Fish{

    public:

        void Swim(){

            cout << "Tuna swims real fast in the sea" << endl;
        }

        void BecomeDinner(){

            cout << "Tuna became dinner in Sushi" << endl;
        }
};

class Carp:public Fish{

    public:

        void Swim(){

            cout << "Carp swims real fast in the lake" << endl;
        }

        void Talk(){

            cout << "Carp talked Carp!" << endl;
        }

};

void DetectFishType(Fish* objFish){

    Tuna* objTuna = dynamic_cast <Tuna*> (objFish);

    if (objTuna){ // check succes of cast

    cout << "Detected Tuna. Making Tuna dinner" << endl;
    objTuna->BecomeDinner();
    }

    Carp* objCarp = dynamic_cast <Carp*>(objFish);

    if(objCarp){

        cout << "Detected Carp. Making Carp talk: "<< endl;
        objCarp->Talk();
    }

    cout << "Verifying type using virtual Fish::Swim: " << endl;
    objFish->Swim(); // calling virtual function Swim
}

int main(){

    Carp myLunch;
    Tuna myDiner;

    DetectFishType(&myDiner);
    cout << endl;
    DetectFishType(&myLunch);
    

    return 0;
}