#include <iostream>
#include <string>
using namespace std;

class Human
{

private:
    string name;
    int age;

public:
    Human() // constructor
    {

        age = 1; // Initialization
        cout << "Constructed an instance of class Human" << endl;
    }

    void SetName(string humanName)
    {

        name = humanName;
    }

    void SetAge(int humanAge)
    {

        age = humanAge;
    }

    void IntroduceSelf()
    {

        cout << "I am " + name << " and I am " << age << " years old." << endl;
    }
};

int main()
{

    Human firstWoman;
    firstWoman.SetName("Eve");
    firstWoman.SetAge(28);

    firstWoman.IntroduceSelf();

    return 0;
}