// https://leetcode.com/problems/subarray-sum-equals-k/description/

// Subarray Sum Equals K-->BRUTE FORCE
class Solution
{
public:
    int subarraySum(vector<int> &nums, int k)
    {
        int count = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            int sum = 0;
            for (int j = i; j < nums.size(); j++)
            {
                sum = sum + nums[j];
                if (sum == k)
                {
                    count++;
                }
            }
        }
        return count;
    }
};

// Subarray Sum Equals K-->OPTIMAL SOLUTION
class Solution
{
public:
    int subarraySum(vector<int> &nums, int k)
    {
        map<int, int> mpp;
        mpp[0] = 1;
        int sum = 0, count = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            sum = sum + nums[i];
            int rem = sum - k;
            count = count + mpp[rem];
            mpp[sum] = mpp[sum] + 1;
        }
        return count;
    }
};
