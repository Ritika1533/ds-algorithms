// https://leetcode.com/problems/largest-number/description/
class Solution
{
public:
    string largestNumber(vector<int> &nums)
    {
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                string ij = to_string(nums[i]) + to_string(nums[j]);
                string ji = to_string(nums[j]) + to_string(nums[i]);
                if (ji > ij)
                {
                    swap(nums[i], nums[j]);
                }
            }
        }
        string ans = "";
        for (int i = 0; i < n; i++)
        {
            ans += to_string(nums[i]);
        }
        if (ans[0] == '0')
            return "0";
        return ans;
    }
};