#include <stack>
#include <iostream>

int main(){

    using namespace std;

    using namespace std;
    stack<int> numsInStack;

    //push: insert values at the top of the stack
    cout << "Pushing {25, 10, -1, 5} on stack in that order:" << endl;
    numsInStack.push(25);
    numsInStack.push(10);
    numsInStack.push(-1);
    numsInStack.push(5);

    cout << "Stack contains " << numsInStack.size() << " elements." << endl;
    while (numsInStack.size()!=0){

        cout << "Popping topmost element : " << numsInStack.top() << endl;
        numsInStack.pop(); // pop: remove the topmost element
    }

    if (numsInStack.empty()) // true du to previous pop()s

        cout << "Popping all elements empties stack." << endl;


    return 0;
}