#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;
int LargestSubarray(vector<int> v, int k)
{
    int n = v.size();
    int l = 0, r = 0;
    int maxLength = 0;
    int sum = 0;
    while (r < n)
    {
        sum = sum + v[r];
        while (l <= r && sum > k)
        {
            sum = sum - v[l];
            l++;
        }
        if (sum == k)
        {
            maxLength = max(maxLength, r - l + 1);
        }
        r++;
    }
    return maxLength;
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
    vector<int> a = {2, 3, 5, 1, 9};
    int k = 10;
    printArray(a);
    int ans = LargestSubarray(a, k);
    cout << ans;
}
// 4 1 2 1 2
// 4
