#include <iostream>
using namespace std;
void heapify(int arr[], int size, int i)
{
    // 0 indexing
    int largest = i;
    int leftChild = 2 * i + 1;
    int rightChild = 2 * i + 2;

    if (leftChild < size && arr[leftChild] > arr[largest])
    {
        largest = leftChild;
    }
    if (rightChild < size && arr[rightChild] > arr[largest])
    {
        largest = rightChild;
    }

    if (largest != i)
    {
        swap(arr[i], arr[largest]);
        heapify(arr, size, largest);
    }
}
void heapSort(int arr[], int n)
{
    int size = n;
    for (int i = n / 2 - 1; i >= 0; i--)
    {
        heapify(arr, n, i);
    }
    while (size > 1)
    {
        swap(arr[0], arr[size - 1]);
        size--;
        heapify(arr, size, 0);
    }
}
void printArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[] = {90, 15, 10, 7, 12, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, n);
    heapSort(arr, n);
    printArray(arr, n);
}
// 90 15 10 7 12 2
// 2 7 10 12 15 90