#include <iostream>
using namespace std;

class Fish{

    protected:

        bool isFreshWaterFish;

    public:

        //Fish constructor

        Fish(bool isFreshWater) : isFreshWaterFish(isFreshWater){}

        void Swim(){

            if (isFreshWaterFish){

                cout << "Swims in lake" << endl;

                }
            
            else

                cout << "Swims in sea" << endl;

        }
};

class Tuna : public Fish{

    public:

        Tuna():Fish(false){} // Constructor initializes base
        
};

class Carp : public Fish{

    public:
        Carp():Fish(true){} // Constructor
};


int main(){

    Carp myLunch;
    Tuna myDiner;

    cout << "About my food" << endl;

    cout << "Lunch: ";
    myLunch.Swim();

    cout << "Diner: ";
    myDiner.Swim();

    return 0;
}