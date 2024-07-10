// Stack using one queues
#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;
class Stack
{
    queue<int> q;

public:
    void Push(int x)
    {
        q.push(x);
        int Size = q.size();
        for (int i = 0; i < Size - 1; i++)
        {
            q.push(q.front());
            q.pop();
        }
    }
    void Pop()
    {
        if (q.empty())
        {
            return;
        }
        q.pop();
    }
    int Top()
    {
        if (q.empty())
        {
            return -1;
        }
        return q.front();
    }
    int Size()
    {
        return q.size();
    }
};
int main()
{
    Stack s;
    s.Push(3);
    s.Push(4);
    s.Push(2);
    s.Push(1);
    cout << "the top element" << s.Top() << endl;
    s.Pop();
    cout << "the top element" << s.Top() << endl;
    cout << "size: " << s.Siize() << endl;
    return 0;
}
