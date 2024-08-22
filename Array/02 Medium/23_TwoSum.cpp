// https://leetcode.com/problems/two-sum/description/
// TWO SUM --> Brute force
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (nums[i] + nums[j] == target)
                {
                    return {i, j};
                    break;
                }
            }
        }
        return {-1, -1};
    }
};

// TWO SUM --> Better
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        int n = nums.size();
        map<int, int> mpp;
        for (int i = 0; i < n; i++)
        {
            int more = target - nums[i];
            if (mpp.find(more) != mpp.end())
            {
                return {i, mpp[more]};
            }
            mpp[nums[i]] = i;
        }
        return {-1, -1};
    }
};
// TWO SUM --> OPTIMAL  when array is sorted
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        int n = nums.size();
        int right = n - 1;
        int left = 0;
        while (left < right)
        {
            int sum = (nums[left] + nums[right]);
            if (sum == target)
            {
                return "yes";
            }
            else if (sum < target)
            {
                left++;
            }
            else
            {
                right--;
            }
        }
        return "no";
    }
};