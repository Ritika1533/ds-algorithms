// https://leetcode.com/problems/move-zeroes/description/
// Moves Zeros -->BRUTE FORCE
class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        vector<int> arr;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != 0)
            {
                arr.push_back(nums[i]);
            }
        }
        for (int i = 0; i < arr.size(); i++)
        {
            nums[i] = arr[i];
        }
        for (int i = arr.size(); i < nums.size(); i++)
        {
            nums[i] = 0;
        }
    }
};

// Moves Zeros -->OPTIMAL
class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int j = -1;
        int n = nums.size();

        for (int i = 0; i < n; i++)
        {
            if (nums[i] == 0)
            {
                if (j == -1)
                {
                    j = i;
                }
            }
            else
            {
                if (j != -1)
                {
                    swap(nums[i], nums[j]);
                    j++;
                }
            }
        }
    }
};