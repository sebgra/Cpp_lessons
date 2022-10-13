#include <deque>
#include <iostream>
#include <algorithm>

int main(){

    using namespace std;

    // Define a deque integers
    deque<int> intDeque;

    // Insert integers at the bottom of the array
    intDeque.push_back(3);
    intDeque.push_back(4);
    intDeque.push_back(5);

    // Insert integers at the top of the array
    intDeque.push_front(2);
    intDeque.push_front(1);
    intDeque.push_front(0);

    cout << "The content of the deque after inserting elements ";
    cout << "at the top and the bottom are:" << endl;

    // Display contents on the screen

    for (size_t count = 0; count < intDeque.size(); ++count){

        cout << "Element [" << count << "] = ";
        cout << intDeque[count] << endl;
    }

    cout << endl;

    // Erase an element at the top
    intDeque.pop_front();

    // Erase an element at the bottom
    intDeque.pop_back();

    cout << "The content of the deque after inserting elements ";
    cout << "from the top and the bottom are:" << endl;

    // Display contents again: this time using iterators
    // if on older compilers, remove auto and uncomment next line
    // deque<int>::iterator element();

    for (auto element = intDeque.begin(); element != intDeque.end(); ++element){

        size_t Offset = distance(intDeque.begin(), element);
        cout << "Element [" << Offset << "] = " << *element << endl;
    }


    return 0;
}