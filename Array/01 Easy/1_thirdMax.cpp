// https://leetcode.com/problems/third-maximum-number/?source=submission-noac
class Solution
{
public:
    int thirdMax(vector<int> &nums)
    {
        int n = nums.size();
        sort(nums.begin(), nums.end(), greater<int>());
        int elemCounted = 1;
        int prevele = nums[0];
        for (int i = 1; i < n; i++)
        {
            if (nums[i] != prevele)
            {
                prevele = nums[i];
                elemCounted++;
            }
            if (elemCounted == 3)
            {
                return nums[i];
            }
        }
        return nums[0];
    }
};