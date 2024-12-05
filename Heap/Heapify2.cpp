// MAX to MIN heap
#include <bits/stdc++.h>
void maxHeapify(vector<int> &arr, int size, int i)
{
    int smallest = i;
    int leftChild = 2 * i + 1;
    int rightChild = 2 * i + 2;

    if (leftChild < size && arr[leftChild] < arr[smallest])
    {
        smallest = leftChild;
    }
    if (rightChild < size && arr[rightChild] < arr[smallest])
    {
        smallest = rightChild;
    }

    if (smallest != i)
    {
        swap(arr[i], arr[smallest]);
        maxHeapify(arr, size, smallest);
    }
}
vector<int> buildMinHeap(vector<int> &arr)
{
    int N = arr.size();
    for (int i = N / 2 - 1; i >= 0; i--)
    {
        maxHeapify(arr, N, i);
    }
    return arr;
}