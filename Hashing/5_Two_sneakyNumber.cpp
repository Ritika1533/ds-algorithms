// https://leetcode.com/problems/the-two-sneaky-numbers-of-digitville/description/
class Solution
{
public:
    vector<int> getSneakyNumbers(vector<int> &nums)
    {
        vector<int> v;
        sort(nums.begin(), nums.end());
        int num = nums[0];
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] == num)
                v.push_back(nums[i]);
            num = nums[i];
        }
        return v;
    }
};