// https://leetcode.com/problems/find-the-smallest-divisor-given-a-threshold/
//  BRUTE FORCE
class Solution
{
public:
    int smallestDivisor(vector<int> &nums, int threshold)
    {
        int n = nums.size();
        int maxi = *max_element(nums.begin(), nums.end());
        for (int i = 1; i <= maxi; i++)
        {
            int sum = 0;
            for (int j = 0; j < nums.size(); j++)
            {
                sum = sum + ceil((double)(nums[j]) / (double)(i));
            }
            if (sum <= threshold)
                return i;
        }
        return -1;
    }
};

// PTTAMISED
class Solution
{
public:
    int smallestDivisor(vector<int> &nums, int threshold)
    {
        int n = nums.size();
        int maxi = *max_element(nums.begin(), nums.end());
        int l = 1, r = maxi;
        int ans = -1;
        while (l <= r)
        {
            int sum = 0;
            int mid = l + (r - l) / 2;
            for (int i = 0; i < nums.size(); i++)
            {
                sum = sum + ceil((double)(nums[i]) / (double)(mid));
            }
            if (sum > threshold)
                l = mid + 1;
            else
            {
                ans = mid;
                r = mid - 1;
            }
        }
        return ans;
    }
};