// https://leetcode.com/problems/split-the-array/description/
/*

#include <iostream>
#include <vector>
#include <unordered_map>
class Solution
{
public:
    bool isPossibleToSplit(vector<int> &nums)
    {
        unordered_map<int, int> mpp;
        for (auto num : nums)
        {
            mpp[num]++;
        }
        for (auto mp : mpp)
        {
            if (mp.second > 2)
                return false;
        }
        return true;
    }
};
*/