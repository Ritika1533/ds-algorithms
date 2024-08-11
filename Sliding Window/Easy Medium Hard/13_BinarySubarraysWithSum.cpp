// https://leetcode.com/problems/binary-subarrays-with-sum/description/
// Binary Subarrays With Sum-->BRUTE FORCE
class Solution
{
public:
    int numSubarraysWithSum(vector<int> &nums, int goal)
    {
        int count = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            int sum = 0;
            for (int j = i; j < nums.size(); j++)
            {
                sum = sum + nums[j];
                if (sum > goal)
                    break;
                if (sum == goal)
                    count++;
            }
        }
        return count;
    }
};

// Binary Subarrays With Sum-->OPTIMAL
class Solution
{
public:
    int function(vector<int> &nums, int goal)
    {
        if (goal < 0)
            return 0;
        int count = 0, sum = 0;
        int l = 0, r = 0;
        while (r < nums.size())
        {
            sum = sum + nums[r];
            while (sum > goal)
            {
                sum = sum - nums[l];
                l++;
            }
            if (sum <= goal)
            {
                count = count + (r - l + 1);
            }
            r++;
        }
        return count;
    }
    int numSubarraysWithSum(vector<int> &nums, int goal)
    {
        return function(nums, goal) - function(nums, goal - 1);
    }
};