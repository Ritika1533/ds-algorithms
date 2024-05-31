#include <iostream>
#include <algorithm>
using namespace std;
void BubbleSort(int *arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
        }
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
    int arr[] = {4, 8, 9, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, size);
    BubbleSort(arr, size);
    printArray(arr, size);
}
/*4 8 9 2
2 4 8 9*/
/*
time complexity
                 Best: O(n)
                 Average: O(n^2)
                 Worst: O(n^2)
*/