#include <iostream>
#include <algorithm>
using namespace std;
class Heap
{
public:
    int arr[100];
    int size = 0;
    void insert(int val)
    {
        size = size + 1;
        int index = size;
        arr[index] = val;
        while (index > 1)
        {
            int parent = index / 2;
            if (arr[parent] < arr[index])
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
    void deleteFromMaxHeap()
    {
        if (size == 0)
        {
            cout << "nothing to delete" << endl;
            return;
        }
        arr[1] = arr[size];
        size = size - 1;
        int i = 1;

        while (i < size)
        {
            int leftChild = 2 * i;
            int rightChild = 2 * i + 1;
            if (leftChild < size && arr[i] < arr[leftChild])
            {
                swap(arr[leftChild], arr[i]);
                i = leftChild;
            }
            else if (rightChild < size && arr[i] < arr[rightChild])
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
    h1.insert(67);
    h1.insert(78);
    h1.insert(45);
    h1.insert(99);
    h1.printHeap();
    h1.deleteFromMaxHeap();
    h1.printHeap();
    return 0;
}