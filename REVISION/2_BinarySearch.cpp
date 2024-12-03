#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool BinarySearch(vector<int> arr, int n, int find)
{
    int l = 0, r = n - 1;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (arr[mid] == find)
            return true;
        else if (arr[mid] > find)
            r = mid - 1;
        else
            l = mid + 1;
    }
    return false;
}
int main()
{
    vector<int> arr = {5, 8, 34, 90, 12, 76, 88, 3};
    sort(arr.begin(), arr.end());
    int n = arr.size();
    int find;
    cout << "enter number to be find " << endl;
    cin >> find;
    bool found = BinarySearch(arr, n, find);
    if (found)
        cout << "found";
    else
        cout << "not found";
}