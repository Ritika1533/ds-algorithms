// MIN HEAP USING PRIORITY QUEUE;
#include <iostream>
#include <queue>
using namespace std;
int main()
{
    priority_queue<int, vector<int>, greater<int>> minHeap;
    minHeap.push(78);
    minHeap.push(34);
    minHeap.push(99);
    // extraction of max element
    cout << minHeap.top();
    cout << endl;
    if (minHeap.empty())
    {
        cout << "priority queue is empty" << endl;
    }
    else
    {
        cout << "priority queue is not empty" << endl;
    }
}
