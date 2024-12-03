#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;
int findMaxConsecutiveOnes(vector<int> v)
{
    int n = v.size();
    int maxcount = 0;
    int l = 0, r = 0;
    while (r <= n)
    {
        if (v[r] == 0)
        {
            l = r + 1;
        }
        else if (v[r] == 1)
        {
            maxcount = max(maxcount, r - l + 1);
        }
        r++;
    }
    return maxcount;
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
    vector<int> a = {1, 0, 1, 1, 1, 1, 1, 0, 0, 1};
    printArray(a);
    int count = findMaxConsecutiveOnes(a);
    cout << count << endl;
}
// 1 0 1 1 1 1 1 0 0 1
// 5
