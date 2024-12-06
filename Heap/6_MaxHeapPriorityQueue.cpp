#include <iostream>
#include <queue>
using namespace std;
int main()
{
    priority_queue<int> pq;
    pq.push(78);
    pq.push(34);
    pq.push(99);
    // extraction of max element
    cout << pq.top();
    cout << endl;
    if (pq.empty())
    {
        cout << "priority queue is empty" << endl;
    }
    else
    {
        cout << "priority queue is not empty" << endl;
    }
}
