// https://leetcode.com/problems/relative-ranks/
class Solution
{
public:
    vector<string> findRelativeRanks(vector<int> &score)
    {
        int n = score.size();
        vector<string> ans(n);
        vector<int> scoreCopy = score;
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            mp[scoreCopy[i]] = i;
        }
        sort(scoreCopy.begin(), scoreCopy.end(), greater<int>());
        for (int i = 0; i < n; i++)
        {
            int originalIndex = mp[scoreCopy[i]];
            if (i == 0)
                ans[originalIndex] = "Gold Medal";
            else if (i == 1)
                ans[originalIndex] = "Silver Medal";
            else if (i == 2)
                ans[originalIndex] = "Bronze Medal";
            else
                ans[originalIndex] = to_string(i + 1);
        }
        return ans;
    }
};