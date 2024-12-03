
// PASS 1
//   5 78 34 90 1
//   78 5 34 90 1
//   78 34 5 90 1
//   78 34 90 5 1
//   78 43 90 5 1  pass 1=n-1

// pass 2
//   78 43 90 5 1
//   78 43 90 5 1
//   78 90 43 5 1
//   78 90 43 5 1  pass 2 =n-2

// PASS 3
//   78 90 43 5 1
//   90 78 43 5 1
//   90 78 43 5 1  pass 3 =n-3

// pass 4
//   90 78 43 5 1
//   90 78 43 5 1  pass 4 =n-4

//    if we have n element pass will be n-1
//    comparision will be n-i

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void BubbleSort(vector<int> &arr, int n)
{
    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            if (arr[j] < arr[j - 1])
                swap(arr[j], arr[j - 1]);
        }
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
    BubbleSort(arr, n);
    printArray(arr, n);
}