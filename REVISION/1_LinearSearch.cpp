#include <iostream>
#include <vector>
using namespace std;
bool LinearSearch(vector<int> arr, int n, int find)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == find)
            return true;
    }
    return false;
}
int main()
{
    vector<int> arr = {5, 8, 34, 90, 12, 76, 88, 3};
    int n = arr.size();
    int find;
    cout << "enter number to be find " << endl;
    cin >> find;
    bool found = LinearSearch(arr, n, find);
    if (found)
        cout << "found";
    else
        cout << "not found";
}