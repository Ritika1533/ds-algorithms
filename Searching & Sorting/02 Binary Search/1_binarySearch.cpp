#include <iostream>
#include <algorithm>
using namespace std;
bool BinarySearch(int *arr, int n, int key)
{
    int s = 0;
    int e = n - 1;

    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] == key)
            return true;
        if (arr[mid] > key)
            e = mid - 1;
        else
            s = mid + 1;
    }

    return false;
}
int main()
{
    int arr[] = {1, 2, 3, 9, 6, 4, 77};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key;
    cout << "enter the element to be searched : " << endl;
    cin >> key;
    sort(arr, arr + n);
    bool ans = BinarySearch(arr, n, key);
    if (ans == true)
    {
        cout << "found the element" << endl;
    }
    else
    {
        cout << "not found the element" << endl;
    }
}
/*time Complexity
   best case : O(1)
   average case : O(log(n))
   worst case : O(log(n))
*/