#include <iostream>
#include <algorithm>
using namespace std;
bool BinarySearch(int *arr, int key, int s, int e)
{
    if (s > e)
        return false;
    int mid = s + (e - s) / 2;
    if (arr[mid] == key)
        return true;
    if (arr[mid] > key)
    {
        BinarySearch(arr, key, s, mid + 1);
    }
    else
    {
        BinarySearch(arr, key, mid - 1, e);
    }
}
int main()
{
    int arr[] = {1, 2, 3, 9, 6, 4, 77};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key;
    cout << "enter the element to be searched : " << endl;
    cin >> key;
    sort(arr, arr + n);
    int s = 0;
    int e = n - 1;
    bool ans = BinarySearch(arr, key, s, e);
    if (ans == true)
    {
        cout << "found the element" << endl;
    }
    else
    {
        cout << "not found the element" << endl;
    }
}