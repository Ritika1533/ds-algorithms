// https://leetcode.com/problems/subarrays-with-k-different-integers/
//  Subarrays with K Different Integers-->BRUTE FORCE
class Solution
{
public:
    int subarraysWithKDistinct(vector<int> &nums, int k)
    {
        int count = 0;
        map<int, int> mpp;
        for (int i = 0; i < nums.size(); i++)
        {
            mpp.clear();
            for (int j = i; j < nums.size(); j++)
            {
                mpp[nums[j]]++;
                if (mpp.size() > k)
                {
                    break;
                }
                if (mpp.size() == k)
                {
                    count++;
                }
            }
        }
        return count;
    }
};

////  Subarrays with K Different Integers-->OPTIMAL
class Solution
{
    int function(vector<int> &nums, int k)
    {
        int count = 0;
        map<int, int> mpp;
        int l = 0, r = 0;
        while (r < nums.size())
        {
            mpp[nums[r]]++;
            while (mpp.size() > k)
            {
                mpp[nums[l]]--;
                if (mpp[nums[l]] == 0)
                    mpp.erase(nums[l]);
                l++;
            }
            count = count + (r - l + 1);
            r++;
        }
        return count;
    }

public:
    int subarraysWithKDistinct(vector<int> &nums, int k)
    {
        return function(nums, k) - function(nums, k - 1);
    }
};