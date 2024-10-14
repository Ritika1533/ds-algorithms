// https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array/description/
class Solution
{
public:
    int maxProduct(vector<int> &nums)
    {
        int product = 1;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int lrgIndex = n - 1;
        int sndLrgIndex = n - 2;
        return ((nums[lrgIndex] - 1) * (nums[sndLrgIndex] - 1));
    }
};