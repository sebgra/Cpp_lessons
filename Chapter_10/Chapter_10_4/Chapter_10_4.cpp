#include <iostream>
using namespace std;

class Fish{

    private:
        bool isFreshWaterFish;

    public:
        Fish(bool isFreshWater){}

        void Swim(){
            if(isFreshWaterFish){

                cout << "Swims in lake" << endl;
            }

            else 

                cout << "Swims in sea" << endl;
        }

};

class Tuna : public Fish{
    public:

        Tuna():Fish(false){}

        void Swim(){
            cout << "Tuna swims real fast" << endl;
        }
};

class Carp : public Fish{

    public:

        Carp():Fish(true){}

        void Swim(){

            cout << "Carp swims real slow" << endl;
        }

};

int main(){

    Carp myLunch;
    Tuna myDiner;

    cout << "Aboutmy food" << endl;
    cout << "Lunch: ";

    myLunch.Swim();

    cout << "Diner: ";

    myDiner.Swim();

    return 0;

}