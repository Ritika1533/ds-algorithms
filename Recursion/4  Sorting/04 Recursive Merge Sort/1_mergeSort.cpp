#include <iostream>
using namespace std;
void merge(int *arr, int s, int e)
{
    int mid = s + (e - s) / 2;
    // finding array length
    int len1 = mid - s + 1;
    int len2 = e - mid;
    // creating new array
    int *first = new int[len1];
    int *second = new int[len2];
    // copying array
    int k = s;
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[k++];
    }
    k = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[k++];
    }
    // merge two array
    int index1 = 0;
    int index2 = 0;
    k = s;
    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] < second[index2])
        {
            arr[k++] = first[index1++];
        }
        else
        {
            arr[k++] = second[index2++];
        }
    }
    while (index1 < len1)
    {
        arr[k++] = first[index1++];
    }

    while (index2 < len2)
    {
        arr[k++] = second[index2++];
    }
    delete[] first;
    delete[] second;
}
void mergeSort(int *arr, int s, int e)
{
    if (s >= e)
    {
        return;
    }
    int mid = s + (e - s) / 2;
    // left part sort
    mergeSort(arr, s, mid);
    // right part sort
    mergeSort(arr, mid + 1, e);
    // merge two sorted array
    merge(arr, s, e);
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
    int arr[] = {6, 9, 3, 0, 14, 56, 344, 98};
    int size = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, size);
    mergeSort(arr, 0, size - 1);
    //
    printArray(arr, size);
}
// time complexity : O(n log n)