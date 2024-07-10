#include <iostream>
using namespace std;
class Queue
{
	int front;
	int rear;
	int currSize;
	int maxSize;
	int *arr;

public:
	Queue()
	{
		front = -1;
		rear = -1;
		currSize = 0;
		maxSize = 16;
		arr = new int[maxSize];
	}
	Queue(int maxSize)
	{
		this->maxSize = maxSize;
		front = -1;
		rear = -1;
		currSize = 0;
		arr = new int[maxSize];
	}
	void push(int x)
	{
		if (currSize == maxSize)
		{
			cout << "Queue is not empty.Exiting...." << endl;
			return;
		}
		if (rear == -1)
		{
			front = 0;
			rear = 0;
		}
		else
		{
			rear = (rear + 1) % maxSize;
		}
		arr[rear] = x;
		cout << "element has been pushed" << endl;
		currSize = currSize + 1;
	}
	int pop()
	{
		if (front == -1)
		{
			cout << "Queue is not empty.Exiting...." << endl;
			return -1;
		}
		int y = arr[front];
		if (currSize == 1)
		{
			front = -1;
			rear = -1;
		}
		else
		{
			front = (front + 1) % maxSize;
		}
		currSize = currSize - 1;
		return y;
	}
	int size()
	{
		return currSize;
	}
	int top()
	{
		if (front == -1)
		{
			cout << "Queue is not empty.Exiting...." << endl;
			return -1;
		}
		return arr[front];
	}
};
int main()
{
	Queue q(4);
	q.push(4);
	q.push(14);
	q.push(24);
	q.push(34);
	cout << "The peek of the queue " << q.top() << endl;
	cout << "The size of the queue " << q.size() << endl;
	cout << "popped element " << q.pop() << endl;
	q.push(89);
	cout << "The peek of the queue " << q.top() << endl;
	cout << "The size of the queue " << q.size() << endl;
	return 0;
}