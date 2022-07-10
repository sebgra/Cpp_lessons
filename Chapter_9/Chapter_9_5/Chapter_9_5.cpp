#include <iostream>
#include <string>
using namespace std;

class Human
{

private:
    string name;
    int age;

public:
    Human(string humansName, int humansAge)
    {
        name = humansName;
        age = humansAge;
        cout << "Overloaded constructor creates";
        cout << name << " of " << age << " years " << endl;
    }

    void IntroduceSelf()
    {

        cout << "I am " + name << " and I am " << age << " years old." << endl;
    }
};

int main()
{

    Human firstMan("Adam", 25);
    Human firstWoman("Eve", 28);

    firstMan.IntroduceSelf();
    firstWoman.IntroduceSelf();

    return 0;
}