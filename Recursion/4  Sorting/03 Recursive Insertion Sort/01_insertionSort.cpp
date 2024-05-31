#include <iostream>
using namespace std;
void insertionSortRecursive(int arr[], int n)
{
    if (n <= 1)
    {
        return;
    }
    insertionSortRecursive(arr, n - 1);
    int last = arr[n - 1];
    int j = n - 2;
    while (j >= 0 && arr[j] > last)
    {
        arr[j + 1] = arr[j];
        j--;
    }
    arr[j + 1] = last;
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
    int arr[] = {6, 8, 4, 0, 55, 633, 53, 21};
    int size = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, size);
    insertionSortRecursive(arr, size);
    printArray(arr, size);
}
/*6 8 4 0 55 633 53 21
0 4 6 8 21 53 55 633*/
