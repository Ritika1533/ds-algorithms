
//     5 8 34 90 12 76 88 3
//     min=3
//     3 | 8 34 90 12 76 88 5
//     min=5
//     3 5 | 34 90 12 76 88 8
//     min=8
//     3 5 8 |  90 12 76 88 34
//     min=12
//     3 5 8 12 |  90 76 88 34
//     min=34
//     2 5 8 12 34 |  76 88 90
//     min=76
//     2 5 8 12 34 76 | 88 90
//     min=88
//     2 5 8 12 34 76 88 |  90

//   n-1 sort tc o(n2) sc o(1)
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void SelectionSort(vector<int> &arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIdx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[minIdx] > arr[j])
                minIdx = j;
        }
        swap(arr[i], arr[minIdx]);
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
    SelectionSort(arr, n);
    printArray(arr, n);
}