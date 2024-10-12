// https://leetcode.com/problems/largest-positive-integer-that-exists-with-its-negative/description/
class Solution
{
public:
    int findMaxK(vector<int> &nums)
    {
        set<int> negative;
        set<int> positive;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] > 0)
                positive.insert(nums[i]);
            else
                negative.insert(nums[i]);
        }
        int maxInt = 0;
        for (auto it : negative)
        {
            int posNum = abs(it);
            if (positive.find(posNum) != positive.end())
            {
                maxInt = max(maxInt, posNum);
            }
        }
        if (maxInt)
            return maxInt;
        else
            return -1;
    }
};