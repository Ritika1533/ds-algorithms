// https://leetcode.com/problems/find-the-xor-of-numbers-which-appear-twice/solutions/5834654/codeease/
class Solution
{
public:
    int duplicateNumbersXOR(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int ans = 0;
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] == nums[i - 1])
            {
                ans = ans ^ nums[i];
            }
        }
        return ans;
    }
};
