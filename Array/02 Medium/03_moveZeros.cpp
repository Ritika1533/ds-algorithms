// https://leetcode.com/submissions/detail/1325452616/

class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        vector<int> nums2;

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != 0)
            {
                nums2.push_back(nums[i]);
            }
        }
        while (nums2.size() < nums.size())
        {
            nums2.push_back(0);
        }
        for (int j = 0; j < nums2.size(); j++)
        {
            nums[j] = nums2[j];
        }
    }
};