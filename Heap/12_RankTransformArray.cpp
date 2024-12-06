// https://leetcode.com/problems/rank-transform-of-an-array/
class Solution
{
public:
    vector<int> arrayRankTransform(vector<int> &arr)
    {
        int n = arr.size();
        set<int> st(arr.begin(), arr.end());
        unordered_map<int, int> mpp;
        vector<int> ans;
        int i = 1;
        for (auto it : st)
        {
            mpp[it] = i++;
        }
        for (int i = 0; i < n; i++)
        {
            ans.push_back(mpp[arr[i]]);
        }
        return ans;
    }
};