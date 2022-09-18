#include <iostream>
#include <string>
using namespace std;

class President{

    private:
        President(){}; // private default constructor
        President(const President&); // private copy constructor;
        const President& operator=(const President&); // assignment operator

        string name;

    public:

        static President& GetInstance(){

            // static objects are only constructed once

            static President onlyInstance;
            return onlyInstance;

        }

        string GetName(){
            return name;
            }

        void SetName(string InputName){

            name = InputName;
        }

        };

int main(){

    President& onlyPresident = President::GetInstance();
    onlyPresident.SetName("president");

    // uncomment lines to see how compiles failures prohibit duplicates
    // President second; // cannot acces constructor
    // President* third = new President; // cannot access constructor
    // President fourth = only President; // cannot access copy constructor
    // onlyPresident = President::GetInstance(); // cannot acces operator =

    cout << "The name of the president is: " ;
    cout << President::GetInstance().GetName() << endl;

    return 0;
}