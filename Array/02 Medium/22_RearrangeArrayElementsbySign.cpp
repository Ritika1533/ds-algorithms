// https://leetcode.com/problems/rearrange-array-elements-by-sign/
// Rearrange Array Elements by Sign-->BETTER
class Solution
{
public:
    vector<int> rearrangeArray(vector<int> &nums)
    {
        vector<int> pos;
        vector<int> neg;
        int n = nums.size();
        vector<int> ans(n);
        for (int i = 0; i < n; i++)
        {
            if (nums[i] > 0)
            {
                pos.push_back(nums[i]);
            }
            else
            {
                neg.push_back(nums[i]);
            }
        }
        int j = 0, k = 0;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                ans[i] = pos[j];
                j++;
            }
            else
            {
                ans[i] = neg[k];
                k++;
            }
        }
        return ans;
    }
};

//// Rearrange Array Elements by Sign-->OPTIMAL
class Solution
{
public:
    vector<int> rearrangeArray(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> ans(n);
        int pos = 0;
        int neg = 1;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] > 0)
            {
                ans[pos] = nums[i];
                pos = pos + 2;
            }
            else
            {
                ans[neg] = nums[i];
                neg = neg + 2;
            }
        }
        return ans;
    }
};