// https://leetcode.com/problems/next-permutation/description/
// Next Permutation
class Solution
{
public:
    void nextPermutation(vector<int> &nums)
    {
        next_permutation(nums.begin(), nums.end());
    }
};