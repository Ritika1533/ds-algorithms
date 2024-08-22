// https://leetcode.com/problems/majority-element/description/
//  Majority Element --> BRUTE FORCE
#include <vector>
class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            int x = nums[i];
            int count = 0;
            for (int j = 0; j < n; j++)
            {
                if (x == nums[j])
                    count++;
            }
            if (count > n / 2)
                return nums[i];
        }
        return -1;
    }
};

//  Majority Element --> BETTER
class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        map<int, int> mpp;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            mpp[nums[i]]++;
        }
        for (auto it : mpp)
        {
            if (it.second > n / 2)
                return it.first;
        }
        return -1;
    }
};