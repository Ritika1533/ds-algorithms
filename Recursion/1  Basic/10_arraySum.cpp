#include <iostream>
using namespace std;

int arraySum(int *arr, int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return arr[0];
    }
    return arr[0] + arraySum(arr + 1, n - 1);
}

int main()
{
    int arr[] = {1, 2, 3, 9, 6, 4, 77};
    int n = sizeof(arr) / sizeof(arr[0]);
    int ans = arraySum(arr, n);
    cout << "sum of array : ";
    cout << ans;
}