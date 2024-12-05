#include <iostream>
#include <algorithm>
using namespace std;

class Heap
{
public:
    int arr[100];
    int size = 0;

    // Insert a value into the min heap
    void insert(int val)
    {
        size = size + 1;
        int index = size;
        arr[index] = val;
        // Maintain the min-heap property by moving the element up
        while (index > 1)
        {
            int parent = (index) / 2;
            if (arr[parent] > arr[index])
            {
                swap(arr[parent], arr[index]);
                index = parent;
            }
            else
            {
                return;
            }
        }
    }

    void deleteFromMinHeap()
    {
        if (size == 0)
        {
            cout << "Heap is empty!" << endl;
            return;
        }

        arr[1] = arr[size];
        size--;

        int i = 1;
        while (i < size)
        {
            int leftChild = 2 * i;
            int rightChild = 2 * i + 1;
            if (leftChild < size && arr[leftChild] < arr[i])
            {
                swap(arr[leftChild], arr[i]);
                i = leftChild;
            }
            else if (rightChild < size && arr[rightChild] < arr[i])
            {
                swap(arr[rightChild], arr[i]);
                i = rightChild;
            }
            else
            {
                return;
            }
        }
    }

    void printHeap()
    {
        for (int i = 1; i <= size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    Heap h1;
    h1.insert(40);
    h1.insert(50);
    h1.insert(20);
    h1.insert(15);
    h1.insert(10);
    cout << "Heap before deletion:" << endl;
    h1.printHeap();
    h1.deleteFromMinHeap();
    cout << "Heap after deletion:" << endl;
    h1.printHeap();
    return 0;
}
// Heap before deletion:
// 10 15 40 50 20
// Heap after deletion:
// 15 20 40 50