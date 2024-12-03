//      7  |  12  9  11  3

// start
//      7  12  |   9  11  3
//      7  9  12  |   11  3
//      7  9  11  12   |  3
//      3  7  9  11  12

// n-1
// Best case: O(n) , If the list is already sorted, where n is the number of elements in the list.
// Average case: O(n 2 ) , If the list is randomly ordered
// Worst case: O(n 2 ) , If the list is in reverse order
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void InsertionSort(vector<int> &arr, int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
void printArray(vector<int> arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> arr = {5, 8, 34, 90, 12, 76, 88, 3};
    int n = arr.size();
    InsertionSort(arr, n);
    printArray(arr, n);
}