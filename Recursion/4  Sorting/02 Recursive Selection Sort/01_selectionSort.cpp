#include <iostream>
using namespace std;
void selectionSort(int *arr, int n)
{
    if (n == 0 || n == 1)
    {
        return;
    }
    int min = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[0] > arr[i])
        {
            min = i;
        }
    }
    swap(arr[0], arr[min]);
    return selectionSort(arr + 1, n - 1);
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
    selectionSort(arr, size);
    printArray(arr, size);
}
/*6 8 4 0 55 633 53 21
0 4 6 8 21 53 55 633*/

// Time complexity (all case ) : O(n^2)