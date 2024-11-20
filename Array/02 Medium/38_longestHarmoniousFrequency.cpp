// https://leetcode.com/problems/longest-harmonious-subsequence/
class Solution
{
public:
    int findLHS(vector<int> &nums)
    {
        int n = nums.size();
        map<int, int> mpp;
        for (int i = 0; i < n; i++)
        {
            mpp[nums[i]]++;
        }
        int maxCount = 0;
        auto l = mpp.begin();
        auto r = mpp.begin();
        while (r != mpp.end())
        {
            if (r->first - l->first > 1)
            {
                l++;
            }
            if (r->first - l->first == 1)
            {
                maxCount = max(maxCount, r->second + l->second);
            }
            r++;
        }
        return maxCount;
    }
};