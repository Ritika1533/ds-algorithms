#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <unordered_map>
using namespace std;
vector<int> TwoSum(vector<int> arr, int target)
{
    unordered_map<int, int> mpp;
    vector<int> ans;
    for (int i = 0; i < arr.size(); i++)
    {
        if (mpp.find(target - arr[i]) != mpp.end())
        {
            ans.push_back(mpp[target - arr[i]]);
            ans.push_back(i);
            break;
        }
        mpp[arr[i]] = i;
    }
    return ans;
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
    vector<int> arr = {3, 2, 4};
    int target = 6;
    printArray(arr);
    vector<int> ans = TwoSum(arr, target);
    printArray(ans);
}
// 3 2 4
// 1 2
