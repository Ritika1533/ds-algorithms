#include <iostream>
using namespace std;
void insertionSort(int *arr, int n)
{

    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        for (; j >= 0; j--)
        {
            if (arr[j] > temp)
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j + 1] = temp;
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
    insertionSort(arr, size);
    printArray(arr, size);
}
/*6 8 4 0 55 633 53 21
0 4 6 8 21 53 55 633

more adaptable than selection sort where we have to traverse whole array here we need not to traverse all array
Time Complexity :
Best case: O(n) If the list is already sorted,
Average case: O(n2), If the list is randomly ordered
Worst case: O(n2)  If the list is in reverse order*/