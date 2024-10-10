// https://leetcode.com/problems/maximize-the-total-height-of-unique-towers/description/
class Solution
{
public:
    long long maximumTotalSum(vector<int> &maximumHeight)
    {
        sort(maximumHeight.begin(), maximumHeight.end(), greater<int>());
        long long totalHeight = 0;
        int currentHeight = maximumHeight[0];
        int n = maximumHeight.size();
        for (int i = 0; i < n; i++)
        {
            currentHeight = min(currentHeight, maximumHeight[i]);
            if (currentHeight == 0)
                return -1;
            totalHeight += currentHeight;
            currentHeight--;
        }
        return totalHeight;
    }
};
