// Implentation of stack using array
#include <iostream>
using namespace std;
class Stack
{
    int top;
    int *arr;
    int size;

public:
    Stack()
    {
        top = -1;
        size = 100;
        arr = new int[size];
    }
    void push(int x)
    {
        top = top + 1;
        arr[top] = x;
    }
    int pop()
    {
        if (top == -1)
            return -1;
        else
        {
            int deletedEle = arr[top];
            top = top - 1;
            return deletedEle;
        }
    }
    int Top()
    {
        return arr[top];
    }
    int Size()
    {
        return top + 1;
    }
};
int main()
{
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    cout << "Top element present in stack is : " << s.Top() << endl;
    cout << "size of the stack now is : " << s.Size() << endl;
    cout << "deleting the first element " << s.pop() << endl;
    cout << "size of the stack now is : " << s.Size() << endl;
    cout << "Top element present in stack is : " << s.Top() << endl;
    return 0;
}
/*Top element present in stack is : 4
size of the stack now is : 4
deleting the first element 4
size of the stack now is : 3
Top element present in stack is : 3*/