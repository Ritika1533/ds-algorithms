#include <iostream>
using namespace std;
bool isSorted(int *arr, int n)
{
    if (n == 0 || n == 1)
    {
        return true;
    }
    if (arr[0] > arr[1])
    {
        return false;
    }

    bool ans = isSorted(arr + 1, n - 1);
    return ans;
}
int main()
{
    int arr[] = {1, 6, 9, 10, 66};
    int i = 0;
    bool ans = isSorted(arr, 5);
    if (ans == 0)
    {
        cout << "not sorted";
    }
    else
    {
        cout << "sorted";
    }
}