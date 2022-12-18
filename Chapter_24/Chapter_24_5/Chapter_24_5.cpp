#include <queue>
#include <functional>

int main(){

    using namespace std;

    // Priority queue of integers sorted using std::less<> (default )
    priority_queue<int> numsInPrioQ;

    // A priority queue of doubles
    priority_queue<double> dblsInPrioQ;

    // A priority queue of integers sorted using std::greater<>
    priority_queue<int, deque<int>, greater<int>> numsIndescendingQ;

    // a priority queue of integers created as a copy of another
    priority_queue<int> copyQ(numsInPrioQ);

    return 0;

}