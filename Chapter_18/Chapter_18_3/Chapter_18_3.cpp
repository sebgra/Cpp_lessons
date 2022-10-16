#include <list>
#include <iostream>
using namespace std;

template<typename T>
void DisplayContents(const T& container){

    for(auto element = container.begin(); element != container.end(); ++element){

        cout << *element << ' ';
    }

    cout << endl;
}

int main(){


    list<int> linkInts1 ;

    // Inserting elements at the beginning 
    linkInts1.insert(linkInts1.begin(), 2);
    linkInts1.insert(linkInts1.begin(), 1);

    // Inserting elements at the end
    linkInts1.insert(linkInts1.end(), 3);

    cout << "The contents of list 1 after inserting elements: " << endl;
    DisplayContents(linkInts1);

    list<int> linkInts2 ;

    // Inserting 4 elements of the same value 0...

    linkInts2.insert(linkInts2.begin(), 4, 0);


    cout << "The contents of list 2 after inserting '";
    cout << linkInts2.size() << "' elements of a value: " << endl;
    DisplayContents(linkInts2);

    list<int> linkInts3;

    // Inserting elements from another list at the begining
    linkInts3.insert(linkInts3.begin(),  linkInts1.begin(), linkInts1.end());


    cout << "The contents of list 3 after inserting contents of ";
    cout << "list1 ath the begining:" << endl;
    DisplayContents(linkInts3);

    // Inserting elements from antoher list at the end
    linkInts3.insert(linkInts3.end(), linkInts2.begin(), linkInts2.end());

    cout << "The contents of list 3 after inserting ";
    cout << "the contents of list 2 at the end:" << endl;
    DisplayContents(linkInts3);

    return 0;
}
