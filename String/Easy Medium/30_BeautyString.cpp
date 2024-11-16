// https://leetcode.com/problems/sum-of-beauty-of-all-substrings/solutions/6051358/codeease/
class Solution
{
public:
    int beautySum(string s)
    {
        int n = s.size();
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            unordered_map<char, int> mpp;
            for (int j = i; j < n; j++)
            {
                mpp[s[j]]++;
                int maxCount = INT_MIN, minCount = INT_MAX;
                for (auto entry : mpp)
                {
                    if (entry.second > maxCount)
                        maxCount = entry.second;
                    if (entry.second < minCount)
                        minCount = entry.second;
                }
                sum = sum + (maxCount - minCount);
            }
        }
        return sum;
    }
};