// https://leetcode.com/problems/max-consecutive-ones-iii/description/

// Max Consecutive Ones III -->BRUTE FORCE
class Solution
{
public:
    int longestOnes(vector<int> &nums, int k)
    {
        int maxlength = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            int count = 0;
            for (int j = i; j < nums.size(); j++)
            {
                if (nums[j] == 0)
                    count++;
                if (count > k)
                    break;
                if (count <= k)
                {
                    maxlength = max(maxlength, j - i + 1);
                }
            }
        }
        return maxlength;
    }
};
// Max Consecutive Ones III -->BETTER
class Solution
{
public:
    int longestOnes(vector<int> &nums, int k)
    {
        int maxlength = 0;
        int l = 0, r = 0;
        int count = 0;
        while (r < nums.size())
        {
            if (nums[r] == 0)
                count++;
            while (count > k)
            {
                if (nums[l] == 0)
                    count--;
                l++;
            }
            if (count <= k)
            {
                maxlength = max(maxlength, r - l + 1);
            }
            r++;
        }
        return maxlength;
    }
};

/// Max Consecutive Ones III -->OPTIMAL
class Solution
{
public:
    int longestOnes(vector<int> &nums, int k)
    {
        int maxlength = 0;
        int l = 0, r = 0;
        int count = 0;
        while (r < nums.size())
        {
            if (nums[r] == 0)
                count++;
            while (count > k)
            {
                if (nums[l] == 0)
                    count--;
                l++;
            }
            if (count <= k)
            {
                maxlength = max(maxlength, r - l + 1);
            }
            r++;
        }
        return maxlength;
    }
};