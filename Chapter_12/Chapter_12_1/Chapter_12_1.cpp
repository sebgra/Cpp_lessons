#include <iostream>
#include <memory> // new include to use unique_ptr
using namespace std;

class Date{

    private:
        int day, month, year;
        string dateInString;

    public: 
        Date(int inMonth, int inDay,  int inYear) : month(inMonth), day (inDay), year(inYear){};

        Date& operator ++(){ //prefix increment

            ++day;
            return *this;

        }

        Date& operator --(){ //prefix decrement

            --day;
            return *this;

        }

        void DisplayDate(){

            cout << month << " / " << day << " / " << year << endl;
        }

};

int main(){

    Date holiday(12, 25, 2016); // 25 Dec 2016

    cout << "The date is initialized to: ";
    holiday.DisplayDate();

    ++holiday; // move date ahead by a day
    cout << "Date after prefix increment is: ";
    holiday.DisplayDate();

    --holiday; // move date backward by a day
    cout << "Date after prefix decrement is: ";
    holiday.DisplayDate();

    return 0;
}