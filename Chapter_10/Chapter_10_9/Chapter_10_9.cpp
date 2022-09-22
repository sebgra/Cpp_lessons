#include <iostream>

using namespace std;


class Motor{

    public:
    
        void SwitchIgnition(){


            cout << "Ignition ON" << endl;
        }

        void PumpFuel(){

            cout << "Fuel in cylinders" << endl;


        }

        void FireCylinder(){

            cout << "Vroooom" << endl;
        }


};


class Car: protected Motor{

    public:
    
        void Move(){

            SwitchIgnition();
            PumpFuel();
            FireCylinder();
        }
};

class RaceCar: protected Car{

    public:
    
        void Move(){

            SwitchIgnition(); //RaceCar has acces to members of
            PumpFuel(); // base Motor due to "protected" inheritance
            FireCylinder(); //  between RaceCar and Carn Car & Motor
            FireCylinder();
            FireCylinder();

        }

};



int main()
{

    RaceCar myDreamCar;
    myDreamCar.Move();


    return 0;
}