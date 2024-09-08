// https://leetcode.com/problems/relative-ranks/
class Solution
{
public:
    vector<string> findRelativeRanks(vector<int> &score)
    {
        int n = score.size();
        unordered_map<int, int> mpp;
        for (int i = 0; i < n; i++)
        {
            mpp[score[i]] = i;
        }
        sort(score.begin(), score.end(), greater<int>());
        vector<string> ans(n);
        for (int i = 0; i < n; i++)
        {
            int originalIndex = mpp[score[i]];
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