#include <queue>
#include <iostream>

int main(){

    using namespace std;

    queue<int> numsInQ;

    cout << "Inserting {10, 5, -1, 20} into queue" << endl;
    numsInQ.push(10);
    numsInQ.push(5); // elements are instered at the end
    numsInQ.push(-1);
    numsInQ.push(20);

    cout << "Queue contains " << numsInQ.size() << " elements." << endl;
    cout << "Element at the front: " << numsInQ.front() << endl;
    cout << "Element at the back: " << numsInQ.back() << endl;

    while (numsInQ.size()!=0){

        cout << "Deleteing element: " << numsInQ.front() << endl;
        numsInQ.pop(); // pop: remove the front element
    }

    if (numsInQ.empty()) // true due to previous pop()s

        cout << "The queue is now empty" << endl;

    return 0;
}