// Count Number of Nice Subarrays -->OPTIMAL
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
            sum = sum + nums[r] % 2;
            while (sum > goal)
            {
                sum = sum - nums[l] % 2;
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
    int numberOfSubarrays(vector<int> &nums, int k)
    {
        return function(nums, k) - function(nums, k - 1);
    }
};