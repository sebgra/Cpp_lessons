#include <iostream>
using namespace std;

class Human{

    int age;

    public:

        // explicit constructor block implicit conversion

        explicit Human(int humansAge) : age(humansAge) {}

};

void DoSomething(Human person){

    cout << "Human sent did something" << endl;
    return;

}

int main(){

    Human kid(10); // explicit conversion is OK
    Human anotherKid = Human(11); // explicit OK

    DoSomething(kid); // OK

    // Human anotherKid2 = 11; // failure: implicit conversion not OK
    // DoSomething(10); // implicit conversion 

    return 0;


}