#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> removeDublicatesFromSortedArray(vector<int> &v)
{
    vector<int> arr;
    arr.push_back(v[0]);
    int n = v.size();
    for (int i = 1; i < n; i++)
    {
        if (v[i] != arr.back())
        {
            arr.push_back(v[i]);
        }
    }
    return arr;
}
void printArray(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> v = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    printArray(v);
    vector<int> ans = removeDublicatesFromSortedArray(v);
    printArray(ans);
}

// 0 0 1 1 1 2 2 3 3 4
// 0 1 2 3 4