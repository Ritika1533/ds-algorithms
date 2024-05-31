#include <iostream>
using namespace std;
void selectionSort(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        int small = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[small] > arr[j])
            {
                small = j;
            }
        }
        swap(arr[i], arr[small]);
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
    int arr[] = {6, 8, 4, 0, 55, 633, 53, 21};
    int size = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, size);
    selectionSort(arr, size);
    printArray(arr, size);
}
/*6 8 4 0 55 633 53 21
0 4 6 8 21 53 55 633

Time complexity (all case ) : O(n^2)
space complexity : O(1)
*/