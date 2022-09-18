#include <iostream>
using namespace std;

class Fish{

    protected : 
        bool isFreshWaterFish; // Accessible only by derived classes

    public:

        void Swim(){

            if (isFreshWaterFish){

                cout << "Swims in lake";
            }

            else
                cout << "Swims in sea" << endl;
        }

};

class Tuna : public Fish{

    public:

        Tuna(){

            isFreshWaterFish = true; // set protected member in base
        }
};

class Carp : public Fish{

    public:
        Carp(){

            isFreshWaterFish = false; // set protected member in base
        }
};

int main(){

    Carp myLunch;
    Tuna myDiner;
    
    cout << "About my food: " << endl;

    cout << "Lunch: ";

    myLunch.Swim();

    cout << "Diner: ";

    myDiner.Swim();

    // Uncomment lines below to see that protected members
    // are not accessible from outside the class hierarchy
    // myLunch.isFreshWaterFish = false;

    return 0;
}