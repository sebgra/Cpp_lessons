#include <iostream>
#include <memory> // include this to use st::uniq_ptr
using namespace std;

class Fish{

    public:
        Fish() { cout << "Fish: Constructed" << endl; }
        ~Fish() { cout << "Fish: Destructed" << endl; }
        void Swim() const { cout << "Fish: Swims in the water" << endl; }
};

void MakeFishSwim(const unique_ptr<Fish>& inFish){

    inFish->Swim();
}

int main(){

    unique_ptr<Fish> smartFish(new Fish);

    smartFish->Swim();
    MakeFishSwim(smartFish); // Ok as MakeFishSwim takes a const reference

    unique_ptr<Fish> copysmartFish;
    // copysmartFish = smartFish; // Error: operator= is private

    return 0;
}