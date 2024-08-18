// https://leetcode.com/problems/missing-number/
// Missing Number-->BRUTE FORCE  Time Complexity (TC): O(n log n + n)
class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != i)
                return i;
        }
        return nums.size();
    }
};
// Missing Number-->BETTER FORCE
class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> hash(n + 1, 0);
        for (int i = 0; i < n; i++)
        {
            hash[nums[i]] = 1;
        }
        for (int i = 0; i <= n; i++)
        {
            if (hash[i] == 0)
            {
                return i;
            }
        }
        return -1;
    }
};
// Missing Number-->OPTIMAL

class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int n = nums.size();
        int total = (n * (n + 1)) / 2;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum = sum + nums[i];
        }
        return total - sum;
    }
};

// Missing Number-->OPTIMAL
class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int n = nums.size();
        int xor1 = 0, xor2 = 0;
        for (int i = 0; i <= n; i++)
        {
            xor1 = xor1 ^ i;
        }
        for (int i = 0; i < n; i++)
        {
            xor2 = xor2 ^ nums[i];
        }
        return xor1 ^ xor2;
    }
};