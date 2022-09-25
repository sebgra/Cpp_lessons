#include <iostream>

using namespace std; 


class Fish{

    public:

        void Swim(){

            cout << "Fish swims!" << endl;

        }
};


class Tuna : public Fish{


    public:

        //Overide Fish::Swim

        void Swim(){

            cout << "Tuna swims!" << endl;
        }
};

void MakeFishSwim(Fish& inputFish){

    // Calling Fish::Swim
    inputFish.Swim();
}


int main(){

    Tuna myDinner;

    // Calling Tuna::Swim

    myDinner.Swim();

    // Sending Tuna as Fish

    MakeFishSwim(myDinner);

    return 0;
}