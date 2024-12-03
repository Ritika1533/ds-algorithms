#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;
int findMissing(vector<int> v)
{
    int n = v.size();
    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++)
    {
        if (v[i] != i)
            return i;
    }
    return -1;
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
    vector<int> a = {9, 6, 4, 2, 3, 5, 7, 0, 1};
    printArray(a);
    int missing = findMissing(a);
    cout << missing << endl;
}
// 9 6 4 2 3 5 7 0 1
// 8
